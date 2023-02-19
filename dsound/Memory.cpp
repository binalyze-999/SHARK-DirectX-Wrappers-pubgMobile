#include "Memory.h"
#include "Aimbot.h"
#include<thread>

BYTE MagicBulletShell[60] =
{
 0xC7, 0x45, 0x78, 0x4B, 0x48, 0x41, 0x4E,
  0x83, 0x3D, 0x00, 0x0A, 0x52, 0x55, 0x45,
  0x74, 0x0E,
  0x60,
  0x8B, 0x5D, 0x50,
  0x8B, 0x53, 0x18,
  0x8A, 0x02,
  0x3C, 0x20,
  0x74, 0x02,
  0x61,
  0xC3,
  0x8A, 0x42, 0x01,
  0x3C, 0x4C,
  0x75, 0x14,
  0xC7, 0x83, 0x20, 0x02, 0x00, 0x00, 0x50, 0x45, 0x4F, 0x00,
  0xC7, 0x83, 0x24, 0x02, 0x00, 0x00, 0x50, 0x4C, 0x45, 0x00,
  0xEB, 0xE1
};


//BYTE MagicBulletSearch1[] = { 0x66, 0x0F, 0x7E, '?', 0x28, 0x02, 0x00, 0x00, 0xC7, 0x45, 0x78 };// Need update 
BYTE MagicBulletSearch1[] = { 0x66, 0x0F, 0x7E, '?', 0x28, 0x02, 0x00, 0x00, 0xC7, 0x45, '?', 0x70 }; // Need update 
BYTE MagicBulletSearch2[] = { 0x66, 0x0F, 0x7E, '?', 0x28, 0x02, 0x00, 0x00, 0xC7, 0x45, '?', 0xD8 }; // Need


DWORD MagicBulletAddress = 0;
vector<DWORD_PTR> MagicBulletList = {};
INT MagicBulletHook = 0;
BYTE RealByteCode[7];
DWORD FlyCarAddress = 0;
VOID GetMagicAddress()
{
	std::vector<DWORD_PTR> FoundedBase;

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x20000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::MemSearch(MagicBulletSearch2, sizeof(MagicBulletSearch2), 0x18000000, 0x20000000, 0, 0, FoundedBase);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::MemSearch(MagicBulletSearch1, sizeof(MagicBulletSearch1), 0x0D000000, 0x10000000, 0, 0, FoundedBase);
	}

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		if (Utility::ReadMemoryEx<BYTE>(FoundedBase[i] + 0xC) == 0xA4) // Need update 
		{
			MagicBulletList.push_back(FoundedBase[i]);
			MagicBulletAddress = FoundedBase[i];
		}
	}

	FoundedBase.clear();
}

VOID InitializeMagic()
{
	INT Addv = MagicBulletAddress;

	MagicBulletHook = (INT)VirtualAllocEx(Game::hProcess, 0, 500, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	WriteProcessMemory(Game::hProcess, (LPVOID)MagicBulletHook, &MagicBulletShell, sizeof(MagicBulletShell), 0);

	if (Emulator::IsGameLoop4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsGameLoop7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}
	if (Emulator::IsSmartGaGa4 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x40);
	}
	else if (Emulator::IsSmartGaGa7 == true)
	{
		Utility::WriteMemoryEx<BYTE>(MagicBulletHook + 0x13, 0x50);
	}

	Utility::WriteMemoryEx<INT>(MagicBulletHook + 9, MagicBulletHook + 0x5E);
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
	WriteProcessMemory(Game::hProcess, (LPVOID)(MagicBulletHook), &RealByteCode, sizeof(RealByteCode), 0);
}

VOID HookCall(INT Address, INT HookAdress)
{
	BYTE Shell[7] = { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x90, 0x90 };
	*(INT*)(Shell + 1) = (INT)(HookAdress - Address - 5);
	WriteProcessMemory(Game::hProcess, (LPVOID)Address, &Shell, sizeof(Shell), 0);
}

bool IsEqual(BYTE Array1[], BYTE Array2[])
{
	for (int i = 0; i < 6; i++)
	{
		if (Array1[i] != Array2[i])
		{
			return false;
		}
	}

	return true;
}

bool Hooked(int Address)
{
	unsigned char Tmp[7];
	ReadProcessMemory(Game::hProcess, (LPCVOID)(Address + 0x8), &Tmp, sizeof(Tmp), 0);

	if ((Tmp[0] == 0xE8 && Tmp[5] == 0x90 && Tmp[6] == 0x90))
	{
		return true;
	}

	return false;
}

VOID HookMagic()
{
	for (DWORD_PTR& Addv : MagicBulletList)
	{
		BYTE Tmp[7];
		ReadProcessMemory(Game::hProcess, (LPCVOID)((int)Addv + 0x8), &Tmp, sizeof(Tmp), 0);

		if (IsEqual(Tmp, RealByteCode))
		{
			HookCall((INT)(Addv + 0x8), (INT)MagicBulletHook);
		}
	}
}

VOID Memory::RestoreHook()
{
	for (DWORD_PTR& Addv : MagicBulletList)
	{
		if (Hooked(Addv))
		{
			WriteProcessMemory(Game::hProcess, (LPVOID)(Addv + 0x8), &RealByteCode, sizeof(RealByteCode), 0);
		}
	}
}

VECTOR3 Subtract(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result;
	Result.X = Src.X - Dst.X;
	Result.Y = Src.Y - Dst.Y;
	Result.Z = Src.Z - Dst.Z;

	return Result;
}


float Magnitude(VECTOR3 Vec)
{
	return sqrtf(Vec.X * Vec.X + Vec.Y * Vec.Y + Vec.Z * Vec.Z);
}

float GetDistance(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result = Subtract(Src, Dst);
	return Magnitude(Result);
}
VECTOR3 NormalizeVec(VECTOR3 Vector)
{
	float Length = Magnitude(Vector);

	Vector.X /= Length;
	Vector.Y /= Length;
	Vector.Z /= Length;

	return Vector;
}
float Distance(VECTOR3 myPos, VECTOR3 enPos)
{
	return sqrt((myPos.X - enPos.X) * (myPos.X - enPos.X) + (myPos.Y - enPos.Y) * (myPos.Y - enPos.Y) + (myPos.Z - enPos.Z) * (myPos.Z - enPos.Z));
}
float BulletDrop(float TravelTime)
{
	return (TravelTime * TravelTime * 980 / 2);
}
bool Fov(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR2 PlayerW2SBone, float FovRadius)
{
	VECTOR2 Cenpoint;
	Cenpoint.X = PlayerW2SBone.X - (OverlayScreenWidth / 2);
	Cenpoint.Y = PlayerW2SBone.Y - (OverlayScreenHeight / 2);

	if (Cenpoint.X * Cenpoint.X + Cenpoint.Y * Cenpoint.Y <= FovRadius * FovRadius)
	{
		return true;
	}


	return false;
}

bool IsFlyManInitialized = false;
DWORD FlyManAddress = 0;
BYTE FlyManSearch[] = { 0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99 };  //0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99

VOID SetFlyManAddress()
{
	std::vector<DWORD_PTR> FoundedBase;
	Utility::FindPattern(FlyManSearch, sizeof(FlyManSearch), 0x10000000, 0xA0000000, 0, 0, FoundedBase);
	FlyManAddress = FoundedBase[0];
} //0x00, 0x00, 0x75, 0xC4, 0x00, 0x00, 0x7A, 0x45, 0x9A, 0x99, 0x99, 0x3E, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x40, 0x00



VECTOR2 GetMagicCoordinates()
{
	if (Data::AActorList.size() > 0)
	{
		VECTOR2 Coordinate;
		Coordinate.X = 0;
		Coordinate.Y = 0;
		VECTOR3 HeadPos;
		HeadPos.X = 0;
		HeadPos.Y = 0;
		HeadPos.Z = 0;
		VECTOR2 Screen;
		Screen.X = 0;
		Screen.Y = 0;
		VECTOR3 Velocity;
		Velocity.X = 0;
		Velocity.Y = 0;
		Velocity.Z = 0;
		FLOAT TargetDistance = 9999.0f;
		FLOAT CrossDist = 0;
		INT Distance4 = 0;
		VECTOR3 posi;


		for (AActor& AActor : Data::AActorList)
		{
			if (AActor.Health > 0 && !AActor.dead) //Alive
			{
				if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
				{
					if (Setting::fovcircle)
					{
						if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus/*FovRadius*/))
						{
							HookMagic();
							CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));


							if (CrossDist < TargetDistance)
							{
								if (Setting::curraim == 0)
								{
									HeadPos = AActor.HeadPos;
									HeadPos.Z += 6 && Setting::magicv;

								}
								if (Setting::curraim == 1)
								{
									HeadPos = AActor.ChestPos;
									HeadPos.Z += 4;

								}
								if (Setting::curraim == 2)
								{
									HeadPos = AActor.PelvisPos;
									HeadPos.Z += 3;

								}

								TargetDistance = CrossDist;
								Velocity = AActor.Velocity;
							}


						}
						//else
						//{
						//	Memory::RestoreHook();
						//	MagicBulletList.clear();
						//	VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
						//	MagicBulletAddress = 0;
						//	MagicBulletHook = 0;
						//	ZeroMemory(RealByteCode, sizeof(RealByteCode));

						//	//MagicRested = true;
						//	Memory::IsMagicInitialized = false;

						//}
					}
					else /// feen ? 
					{
						HookMagic();
						if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
						{

							CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
							if (CrossDist < TargetDistance)
							{
								if (Setting::curraim == 0)
								{
									HeadPos = AActor.HeadPos;
									HeadPos.Z += 6 && Setting::magicv;

								}
								if (Setting::curraim == 1)
								{
									HeadPos = AActor.ChestPos;
									HeadPos.Z += 4;

								}
								if (Setting::curraim == 2)
								{
									HeadPos = AActor.PelvisPos;
									HeadPos.Z += 3;

								}

								TargetDistance = CrossDist;
								Velocity = AActor.Velocity;
							}
						}
					}


				}
			}
			if (AActor.Health <= 0 && !AActor.dead)
			{
				if (Setting::knocked)/////
				{
					if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
					{

						if (Setting::fovcircle)
						{
							if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus/*FovRadius*/))
							{
								HookMagic();

								CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
								if (CrossDist < TargetDistance)
								{
									if (Setting::curraim == 0)
									{
										HeadPos = AActor.HeadPos;
										HeadPos.Z += 6 && Setting::magicv;

									}
									if (Setting::curraim == 1)
									{
										HeadPos = AActor.ChestPos;
										HeadPos.Z += 4;

									}
									if (Setting::curraim == 2)
									{
										HeadPos = AActor.PelvisPos;
										HeadPos.Z += 3;

									}

									TargetDistance = CrossDist;
									Velocity = AActor.Velocity;
								}

							}

						}
						else
						{
							HookMagic();
							if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, AActor.ChestPos, Screen, &Distance4))
							{

								CrossDist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));

								if (CrossDist < TargetDistance)
								{
									if (Setting::curraim == 0)
									{
										HeadPos = AActor.HeadPos;
										HeadPos.Z += 6 && Setting::magicv;

									}
									if (Setting::curraim == 1)
									{
										HeadPos = AActor.ChestPos;
										HeadPos.Z += 4;

									}
									if (Setting::curraim == 2)
									{
										HeadPos = AActor.PelvisPos;
										HeadPos.Z += 3;

									}

									TargetDistance = CrossDist;
									Velocity = AActor.Velocity;
								}
							}
						}

					}
				}
			}
			if (AActor.Health <= 0 && AActor.dead)
			{
				//Memory::RestoreHook();
				//MagicBulletList.clear();
				//VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
				//MagicBulletAddress = 0;
				//MagicBulletHook = 0;
				//ZeroMemory(RealByteCode, sizeof(RealByteCode));

				////MagicRested = true;
				//Memory::IsMagicInitialized = false;
			}
		}

		DWORD MeshAddv = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::Mesh);
		DWORD BodyAddv = MeshAddv + Offset::BodyAddv;
		DWORD BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
		VECTOR3 MyPosition = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);

		float AddTime = 30 / 10.0f + 1.0f;
		float Gravity = 5.72f;
		float distance = GetDistance(MyPosition, HeadPos) / 100.0f;
		float zAssist;
		if (distance < 5000.f)
			zAssist = 1.8f;
		else if (distance < 10000.f)
			zAssist = 1.72f;
		else if (distance < 15000.f)
			zAssist = 1.23f;
		else if (distance < 20000.f)
			zAssist = 1.24f;
		else if (distance < 25000.f)
			zAssist = 1.25f;
		else if (distance < 30000.f)
			zAssist = 1.26f;
		else if (distance < 35000.f)
			zAssist = 1.27f;
		else if (distance < 50000.f)
			zAssist = 1.28f;
		else if (distance < 45000.f)
			zAssist = 1.29f;
		else if (distance < 50000.f)
			zAssist = 1.30f;


		DWORD CurrentReloadWeapon = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
		DWORD ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrentReloadWeapon + Offset::ShootWeaponEntity);
		float BulletSpeed = Utility::ReadMemoryEx<FLOAT>(ShootWeaponEntity + Offset::BulletFireSpeed);
		float BulletTravelTime = distance / Offset::BulletFireSpeed;
		DWORD SceneComponent = Utility::ReadMemoryEx<INT>(Offset::RootComponent + 0x14C);
		DWORD VehicleCommon = Utility::ReadMemoryEx<INT>(Offset::VehicleCommon + 0x6dc);


		HeadPos.X += Velocity.X * BulletTravelTime;
		HeadPos.Y += Velocity.Y * BulletTravelTime;
		HeadPos.Z += Velocity.Z * BulletTravelTime * zAssist + 50.5f * 5.72f * BulletTravelTime * BulletTravelTime;


		FLOAT xDif = HeadPos.X - MyPosition.X;
		FLOAT yDif = HeadPos.Y - MyPosition.Y;
		FLOAT zDif = HeadPos.Z - MyPosition.Z;

		float Hyp = sqrt(xDif * xDif + yDif * yDif);
		Coordinate.X = atan2(zDif, Hyp) * 180.0f / 3.1415926535897f;
		Coordinate.Y = atan2(yDif, xDif) * 180.0f / 3.1415926535897f;

		return Coordinate;
	}
	else
	{
		Memory::RestoreHook();
		MagicBulletList.clear();
		VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
		MagicBulletAddress = 0;
		MagicBulletHook = 0;
		ZeroMemory(RealByteCode, sizeof(RealByteCode));

		//MagicRested = true;
		Memory::IsMagicInitialized = false;
	}

}

int Memory::AimFindBestTarget() {
	float targetDistance = 9999.0;
	VECTOR2 retval;
	int dist, headdist;
	int ret;
	for (int i = 0; i < Data::AActorList.size(); i++)
	{
		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;
		VECTOR2 chest;
		VECTOR2 head;
		VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);


		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, chestPos, chest, &dist))
		{
			if (Setting::fovcircle)
			{
				if (Aimbot::InsideFov(DX11Window::Width, DX11Window::Height, chest, Setting::fovcircleredus/*FovRadius*/))
				{
					float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));
					if (cross_dist < targetDistance)
					{
						ret = i;
						targetDistance = cross_dist;

					}
				}
			}
			else
			{

				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));

				if (cross_dist < targetDistance)
				{
					ret = i;
					targetDistance = cross_dist;

				}

			}
		}
	}
	return ret;

}

static bool BulletKeyState = false;
bool GodView = false;
bool  Memory::IsMagicInitialized = false;
VECTOR2 MagicCoordinate;
VECTOR3 AimRotation;
VOID Memory::MemoryThread()
{
	while (true)
	{

		Sleep(20);
		if (Data::NetDriver > 0)
		{
			if (Setting::MagicBullet || Setting::engine == 1)
			{
				if (IsMagicInitialized == false)
				{
					GetMagicAddress();
					InitializeMagic();
					IsMagicInitialized = true;
				}
				//GetMagicCoordinates();
				if (GetAsyncKeyState(Setting::AimbotKey) & 0x8000)
				{
					if (IsMagicInitialized == false)
					{
						GetMagicAddress();
						InitializeMagic();
						IsMagicInitialized = true;
					}
					BulletKeyState = true;

					MagicCoordinate = GetMagicCoordinates();
					Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 44, MagicCoordinate.X);
					Utility::WriteMemoryEx<FLOAT>(MagicBulletHook + 54, MagicCoordinate.Y);
					if (IsMagicInitialized == false)
					{
						GetMagicAddress();
						InitializeMagic();
						IsMagicInitialized = true;
					}
				}

				if (GetAsyncKeyState(Setting::AimbotKey) == 0 && BulletKeyState == true && IsMagicInitialized == true)
				{
					BulletKeyState = false;

					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					IsMagicInitialized = false;
				}
				else if (IsMagicInitialized == false)
				{
					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					GetMagicAddress();
					InitializeMagic();
					IsMagicInitialized = true;
				}

				if (GetAsyncKeyState(0x50))
				{

					RestoreHook();
					MagicBulletList.clear();
					VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
					MagicBulletAddress = 0;
					MagicBulletHook = 0;
					ZeroMemory(RealByteCode, sizeof(RealByteCode));
					IsMagicInitialized = false;
				}
			}
			else if (Setting::MagicBullet == false /*&& IsMagicInitialized == true*/)
			{
				RestoreHook();
				MagicBulletList.clear();
				VirtualFreeEx(Game::hProcess, (LPVOID)MagicBulletHook, 0, MEM_RELEASE);
				MagicBulletAddress = 0;
				MagicBulletHook = 0;
				ZeroMemory(RealByteCode, sizeof(RealByteCode));
				//    MagicRested = false;
				IsMagicInitialized = false;
			}


		}

	}
	if (Setting::godView)
	{
		float GodViewtop = 270.0f;
		float GodViewdown = -270.0f;
		float GodViewdefult = -88.0f;
		DWORD View = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1344);
		DWORD self = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11f0);
		DWORD root = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x164) + 0x158;
		if (GetAsyncKeyState(Setting::GodUp)) {//y    
			FLOAT ground;
			ReadProcessMemory(Game::hProcess, (LPCVOID)root, &ground, sizeof(ground), nullptr);

			while (true)
			{
				Utility::WriteMemoryEx<FLOAT>(root, ground + 270);
				if (!GetAsyncKeyState(Setting::GodUp))
				{
					break;
				}
			}
			GodView = true;
		}


		if (GetAsyncKeyState(Setting::GodDown)) { //h key
			Utility::WriteMemoryEx<FLOAT >(View + 0x120, GodViewdown);
			Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdown);
			GodView = true;
		}
		if (!GetAsyncKeyState(Setting::GodUp) && !GetAsyncKeyState(Setting::GodDown) && GodView == true)
		{
			Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewdefult);
			Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdefult);
			GodView = false;
		}

	}
	std::this_thread::sleep_for(std::chrono::milliseconds(30));
}

FRotator ToRotator(VECTOR3 local, VECTOR3 target) {
	VECTOR3 rotation;
	rotation.X = local.X - target.X;
	rotation.Y = local.Y - target.Y;
	rotation.Z = local.Z - target.Z;

	FRotator newViewAngle = { 0 };

	float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

	newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Roll = (float)0.f;

	if (rotation.X >= 0.f)
		newViewAngle.Yaw += 180.0f;

	return newViewAngle;
}
VECTOR3 ClosestToCrosshair()
{
	float targetDistance = 500.0f;
	VECTOR2 retval;
	int dist, headdist;
	VECTOR3 ret;
	for (int i = 0; i < Data::AActorList.size(); i++) {
		DWORD tmpAddv = Utility::ReadMemoryEx<INT>(Data::AActorList[i].Address + Offset::Mesh);
		DWORD bodyAddv = tmpAddv + Offset::BodyAddv;
		DWORD boneAddv = Utility::ReadMemoryEx<INT>(tmpAddv + Offset::MinLOD) + 48;
		VECTOR2 chest;
		VECTOR2 head;
		//VECTOR3 chestPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 3 * 48); 
		VECTOR3 CurrPos = { 0 };
		if (Setting::curraim == 0) {
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 5 * 48);
			//CurrPos.z += 15; 
		}
		if (Setting::curraim == 1)
		{
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 4 * 48);
		}
		if (Setting::curraim == 2)
		{
			CurrPos = Algorithm::GetBoneWorldPosition(bodyAddv, boneAddv + 1 * 48);
		}
		if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
		{
			if (Algorithm::WorldToScreenBone(Esp::ViewMatrix, CurrPos, chest, &dist))
			{
				float cross_dist = sqrt(pow(chest.X - DX11Window::Width / 2, 2) + pow(chest.Y - DX11Window::Height / 2, 2));

				if (cross_dist < targetDistance)
				{
					ret = CurrPos;
					targetDistance = cross_dist;

				}
			}

		}
	}
	return ret;
}
int SINGLEAOBSCAN(BYTE BypaRep[], SIZE_T size)
{
	DWORD pid = Game::Id;
	HANDLE phandle = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
	std::vector<DWORD_PTR> Bypassdo;
	Utility::MemSearch(BypaRep, size, 0x26000000, 0xB0000000, false, 0, Bypassdo);

	if (Bypassdo.size() != 0) {
		return Bypassdo[0];
	}
}






bool fastruncheck = false;
bool MagicX = false;
bool luffy = false;
bool PowerMagic = false;
bool IsChanged = false;
bool Ipadview = false;
bool Cameraview = false;
bool FasParachuteChangedx = false;

void WriteUE4Float(DWORD offset, float replace)
{
	DWORD pidd = Game::Id;
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pidd);
	DWORD libUE4Base = Utility::ReadMemoryEx<UINT>(0xE0C36E8);
	DWORD oldprotect;
	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_EXECUTE_READWRITE, &oldprotect);
	WriteProcessMemory(hProcess, (LPVOID)(libUE4Base + offset), &replace, sizeof(float), NULL);
	VirtualProtectEx(hProcess, (LPVOID)(libUE4Base + offset), sizeof(float), PAGE_READONLY, &oldprotect);
}
//
//void Memory::Instant()
//{
//	while (true)
//	{
//		Sleep(20);
//		if (Setting::instanthit)
//		{
//			/*	DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//				DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//				DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//				DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);*/
//			DWORD weaponOffSet = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
//			if (weaponOffSet != 0)
//			{
//				DWORD shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + Offset::ShootWeaponEntity);
//				if (shootOffset != 0)
//				{
//					//float x = 770000.0f;
//
//					float InstantHit = Utility::ReadMemoryEx<FLOAT>(shootOffset + Offset::BulletFireSpeed);
//
//					if (InstantHit != Setting::instantv)
//					{
//						//WriteProcessMemory(Offsets::pHandle, (void*)(Memory::iGet(weaponOffSet + 3244) + 964), &x, sizeof(float), NULL);
//						Utility::WriteMemoryEx<float>(shootOffset + Offset::BulletFireSpeed, Setting::instantv);
//					}
//				}
//			}
//		}
//		if (Setting::manfly)
//		{
//			if (IsFlyManInitialized == false)
//			{
//				SetFlyManAddress();
//
//				IsFlyManInitialized = true;
//			}
//
//			if (GetAsyncKeyState(Setting::Flymankey) & 1) //0x8000  //VK_SPACE  //0x56
//			{
//				Utility::WriteMemoryEx<FLOAT>(FlyManAddress, Setting::flym);
//			}
//			else if (GetAsyncKeyState(Setting::Flymankey) == 0)
//			{
//				if (Utility::ReadMemoryEx<float>(FlyManAddress) != -980.0f)
//				{
//					Utility::WriteMemoryEx<FLOAT>(FlyManAddress, -980.0f);
//				}
//			}
//		}
//		if (Setting::CameraView)
//		{
//			DWORD Camera = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x1324) + 0x260;
//			if (Setting::view != 0)
//			{
//				Utility::WriteMemoryEx<float>(Camera, Setting::view);
//			}
//			Cameraview = true;
//		}
//		if (!Setting::CameraView && Cameraview == true)
//		{
//			DWORD Camera = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x1324) + 0x260;
//			Utility::WriteMemoryEx<float>(Camera, 220);
//			Cameraview = false;
//		}
//
//		if (Setting::CameraCatch)
//		{
//			DWORD LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer  /*LocalPawn*/ + 0x2b24); // STExtraPlayerController* STPlayerController;//[Offset: 0x2834, Size: 4] 
//			if (LocalController)
//			{
//				DWORD Controller1 = 0x31c;
//				DWORD ControlRotation = 0x318;
//				DWORD PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + 0x360);
//				if (PlayerCameraManager)
//				{
//					CameraCacheEntry CameraCache = Utility::ReadMemoryEx<CameraCacheEntry>(PlayerCameraManager + 0x370);
//
//					VECTOR3 HeadPosition = ClosestToCrosshair();
//					VECTOR3 currentViewAngle = CameraCache.POV.Location;
//
//					if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
//					{
//						FRotator AimAngles = ToRotator(currentViewAngle, HeadPosition);
//						DWORD Control = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + Controller1);
//						Utility::WriteMemoryEx<FRotator>(Control + ControlRotation, AimAngles);
//
//					}
//				}
//			};
//		}
//
//
//		//if (Setting::FastParachute)
//		//{
//		//	if (GetAsyncKeyState(Setting::FastParachutekey)) {
//		//		/*	DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//		//			DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//		//			DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//		//			DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);*/
//		//		DWORD characterparchute = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CharacterOverrideAttrs);//CharacterParachuteComponent* ParachuteComponent
//		//		if (characterparchute != 0)
//		//		{
//		//			Utility::WriteMemoryEx<float>(characterparchute + Offset::CurrentFallSpeed, Setting::landspeed); //CurrentFallSpeed
//
//		//		}
//		//	}
//		//}
//		if (Setting::FastParachute && FasParachuteChangedx == false)
//		{
//			BYTE srch48[] = { 0x6F, 0x12, 0x03, 0x3A, 0xCD, 0xCC, 0xCC, 0x3E };
//			BYTE  rplc48[] = { 0xCD, 0xCC, 0xCC, 0x3D, 0xCD, 0xCC, 0xCC, 0x3E };
//
//
//			Utility::AOBREP(srch48, rplc48, sizeof(srch48), sizeof(rplc48), 500);
//			FasParachuteChangedx = true;
//		}
//		if (!Setting::FastParachute && FasParachuteChangedx == true)
//		{
//			BYTE rplc48[] = { 0x6F, 0x12, 0x03, 0x3A, 0xCD, 0xCC, 0xCC, 0x3E };
//			BYTE  srch48[] = { 0xCD, 0xCC, 0xCC, 0x3D, 0xCD, 0xCC, 0xCC, 0x3E };
//			Utility::AOBREP(srch48, rplc48, sizeof(srch48), sizeof(rplc48), 500);
//			FasParachuteChangedx = false;
//		}
//
//		if (Setting::speedcar)
//		{
//			if (GetAsyncKeyState(Setting::Fastcarkey))
//			{
//				/*	DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//					DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//					DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//					DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);*/
//				DWORD num12 = Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x144) + 0x700) + 1776) + 0x194) + 88);
//				Utility::WriteMemoryEx<float>(num12, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 4, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 8, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 12, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 16, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 20, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 24, Setting::carsv);
//				Utility::WriteMemoryEx<float>(num12 + 28, Setting::carsv);
//			}
//		}
//		if (Setting::speedcar) {
//			if (GetAsyncKeyState(Setting::Backcarkey)) {
//				/*DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//				DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//				DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//				DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330);*/
//				DWORD num12 = Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x144) + 0x700) + 1776) + 0x194) + 88);
//				Utility::WriteMemoryEx<float>(num12, -630.0f);
//				Utility::WriteMemoryEx<float>(num12 + 4, -630.0f);
//				Utility::WriteMemoryEx<float>(num12 + 8, -630.0f);
//				Utility::WriteMemoryEx<float>(num12 + 12, -630.0f);
//				Utility::WriteMemoryEx<float>(num12 + 16, -630.0f);
//				Utility::WriteMemoryEx<float>(num12 + 20, -630.0f);
//				Utility::WriteMemoryEx<float>(num12 + 24, -630.0f);
//				Utility::WriteMemoryEx<float>(num12 + 28, -630.0f);
//			}
//		}
//		if (Setting::Forcetpp)
//		{
//			Utility::WriteMemoryEx<bool>((Data::LocalPlayer + Offset::bIsFPPOnVehicle/*bool IsNetFPPt*/), false);
//			Utility::WriteMemoryEx<bool>((Data::LocalPlayer + Offset::IsNetFPP/*bool IsFPP*/), false);
//			Utility::WriteMemoryEx<bool>((Data::LocalPlayer + Offset::IsFPP/*bool IsFPP*/), false);
//			Utility::WriteMemoryEx<bool>((Data::GameState + Offset::IsFPPGameMode), false);
//			Utility::WriteMemoryEx<bool>((Data::GameState + Offset::IsCanSwitchFPP), true);
//			//DWORD CAEMRACOMONENT = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x1330);//CameraComponent* FPPCameraComp;//[Offset: 0x1330, Size: 4]
//			//DWORD THridPers = Utility::ReadMemoryEx<float>(Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer + 0x1328) + 0x260);
//			//Utility::WriteMemoryEx<float>(CAEMRACOMONENT + 0x260, Setting::ttpview);
//
//
//		}
//		if (Setting::godView)
//		{
//			float GodViewtop = 270.0f;
//			float GodViewdown = -270.0f;
//			float GodViewdefult = -88.0f;
//			DWORD View = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x1344);
//			DWORD self = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x11f0);
//			DWORD root = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + 0x164) + 0x158;
//			if (GetAsyncKeyState(Setting::GodUp)) {//y    
//				FLOAT ground;
//				ReadProcessMemory(Game::hProcess, (LPCVOID)root, &ground, sizeof(ground), nullptr);
//
//				while (true)
//				{
//					Utility::WriteMemoryEx<FLOAT>(root, ground + 270);
//					if (!GetAsyncKeyState(Setting::GodUp))
//					{
//						break;
//					}
//				}
//				GodView = true;
//			}
//
//
//			if (GetAsyncKeyState(Setting::GodDown)) { //h key
//				Utility::WriteMemoryEx<FLOAT >(View + 0x120, GodViewdown);
//				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdown);
//				GodView = true;
//			}
//			if (!GetAsyncKeyState(Setting::GodUp) && !GetAsyncKeyState(Setting::GodDown) && GodView == true)
//			{
//				Utility::WriteMemoryEx<FLOAT>(View + 0x120, GodViewdefult);
//				Utility::WriteMemoryEx<FLOAT>(self + 0x120, GodViewdefult);
//				GodView = false;
//			}
//
//		}
//
//		if (Setting::fastrun)
//		{
//			if (GetAsyncKeyState(Setting::fastrunkey))
//			{
//
//				/*	DWORD gameInstance = Memory::iGet(Offsets::uWorlds + 0x24);
//					DWORD playerController = Memory::iGet(gameInstance + 0x60);
//					DWORD playerCarry = Memory::iGet(playerController + 0x20);
//					DWORD uMyObject = Memory::iGet(playerCarry + 0x330);*/
//				Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x2220, Setting::fastrv);//CharacterOverrideAttrs CharacterOverrideAttrs
//
//				fastruncheck = false;
//			}
//		}
//		if (!Setting::fastrun && fastruncheck == false)
//		{
//			float write = 1.0f;
//			/*DWORD gameInstance = Memory::iGet(Offsets::uWorlds + 0x24);
//			DWORD playerController = Memory::iGet(gameInstance + 0x60);
//			DWORD playerCarry = Memory::iGet(playerController + 0x20);
//			DWORD uMyObject = Memory::iGet(playerCarry + 0x330);*/
//
//			Utility::WriteMemoryEx<float>(Data::LocalPlayer + 0x2220, write);
//			fastruncheck = true;
//
//		}
//
//		if (Setting::recoil)
//		{
//			/*		/ DWORD gameInstance = Utility::ReadMemoryEx<INT>(Data::UWorld + 0x24);
//					DWORD playerController = Utility::ReadMemoryEx<INT>(gameInstance + 0x60);
//					DWORD playerCarry = Utility::ReadMemoryEx<INT>(playerController + 0x20);
//					DWORD uMyObject = Utility::ReadMemoryEx<INT>(playerCarry + 0x330); /*/
//			DWORD weaponOffSet = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
//			if (weaponOffSet != 0)
//			{
//				DWORD shootOffset = Utility::ReadMemoryEx<INT>(weaponOffSet + Offset::ShootWeaponEntity);
//				float writee = 0.0f;
//				if (shootOffset != 0)
//				{
//					Utility::WriteMemoryEx<float>(shootOffset + Offset::AccessoriesVRecoilFactor, writee);
//					Utility::WriteMemoryEx<float>(shootOffset + Offset::AccessoriesHRecoilFactor, writee);
//					Utility::WriteMemoryEx<float>(shootOffset + Offset::AccessoriesRecoveryFactor, writee);
//					Utility::WriteMemoryEx<float>(shootOffset + Offset::RecoilKickADS, writee);
//					Utility::WriteMemoryEx<float>(shootOffset + Offset::AnimationKick, writee);
//				}
//			}
//			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
//		}
//		if (Setting::Magic360deg == true && PowerMagic == false)
//		{
//			DWORD LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayer  /*LocalPawn*/ + 0x2b24); // STExtraPlayerController* STPlayerController;//[Offset: 0x2834, Size: 4]
//			if (LocalController)
//			{
//				DWORD Controller1 = 0x31c;
//				DWORD ControlRotation = 0x318;
//
//				DWORD PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + 0x360);
//				if (PlayerCameraManager)
//				{
//					CameraCacheEntry CameraCache = Utility::ReadMemoryEx<CameraCacheEntry>(PlayerCameraManager + 0x370);
//
//					VECTOR3 HeadPosition = ClosestToCrosshair();
//					VECTOR3 currentViewAngle = CameraCache.POV.Location;
//
//					if (GetAsyncKeyState(VK_LBUTTON) & 0x8000)
//					{
//						FRotator aimRotation = ToRotator(currentViewAngle, HeadPosition);
//						CameraCache.POV.Rotation = aimRotation;
//						Utility::WriteMemoryEx<CameraCacheEntry>(PlayerCameraManager + 0x340, CameraCache);
//
//					}
//				}
//			}
//		}
//		if (Setting::MagicX && MagicX == false)
//		{
//			BYTE pattern[] = { 0x41 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
//			BYTE patter2[] = { 0x45 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases2;
//			DWORD oldprotect, temps;
//			foundedBases2.clear();
//			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//
//			for (int i = 0; i < foundedBases2.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);
//
//			}
//
//			MagicX = true;
//			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
//		}
//		else if (!Setting::MagicX && MagicX == true)
//		{
//			BYTE pattern[] = { 0x41 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
//			BYTE patter2[] = { 0x45 ,0x00 ,0x00 ,0x38 ,0x42 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x00 ,0x80 ,0x3F ,0x00 ,0x00 ,0x80 ,0x3F };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases;
//			DWORD oldprotect, temps;
//			foundedBases.clear();
//
//			//	Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
//			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
//
//			for (int i = 0; i < foundedBases.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
//
//			}
//			MagicX = false;
//			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
//		}
//		if (Setting::Luffy && luffy == false)
//		{
//			BYTE pattern[] = { 0x95, 0x2D, 0xBC, 0x41, 0x00, 0x80, 0x6F, 0x39, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			BYTE patter2[] = { 0x00, 0x00, 0xC8, 0x42, 0x00, 0x00, 0x48, 0x43, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases2;
//			DWORD oldprotect, temps;
//			foundedBases2.clear();
//			Utility::MemSearch(pattern, sizeof(pattern), 0x10000000, 0x90000000, false, 0, foundedBases2);
//
//			for (int i = 0; i < foundedBases2.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases2[i], patter2, sizeof(patter2), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases2[i]), 4, oldprotect, &temps);
//
//			}
//			luffy = true;
//			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
//		}
//		else if (!Setting::Luffy && luffy == true)
//		{
//			BYTE pattern[] = { 0x95, 0x2D, 0xBC, 0x41, 0x00, 0x80, 0x6F, 0x39, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			BYTE patter2[] = { 0x00, 0x00, 0xC8, 0x42, 0x00, 0x00, 0x48, 0x43, 0x00, 0x90, 0xC7, 0x3B, 0x01, 0x00, 0x00, 0x27 };
//			DWORD bytes;
//			std::vector<DWORD_PTR> foundedBases;
//			DWORD oldprotect, temps;
//			foundedBases.clear();
//
//			//	Memory::FindPattern(pattern, 28, 0x10000000, 0x90000000, false, 0, foundedBases);
//			Utility::MemSearch(patter2, sizeof(patter2), 0x10000000, 0x90000000, false, 0, foundedBases);
//
//			for (int i = 0; i < foundedBases.size(); i++)
//			{
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, PAGE_EXECUTE_READWRITE, &oldprotect);
//				WriteProcessMemory(Game::hProcess, (PVOID)foundedBases[i], pattern, sizeof(pattern), nullptr);
//				VirtualProtectEx(Game::hProcess, LPVOID(foundedBases[i]), 4, oldprotect, &temps);
//
//			}
//			luffy = false;
//		}
//
//		if (Setting::IpadVeiw && Ipadview == false)
//		{
//			WriteUE4Float(0x3EF90E4, Setting::ipadview);//0x3c24c14
//			Ipadview = true;
//			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
//		}
//		else if (!Setting::IpadVeiw && Ipadview == true)
//		{
//			WriteUE4Float(0x3EF90E4, 360);//0x3c24c14
//
//			Ipadview = false;
//			//std::this_thread::sleep_for(std::chrono::milliseconds(500));
//		}
//
//		if (Setting::noSpread)
//		{
//			int ShootWeaponEntity = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
//			float GameDeviationFactor = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::GameDeviationFactor);
//			float ShotGunHorizontalSpread = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunHorizontalSpread);
//			float ShotGunVerticalSpread = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunVerticalSpread);
//			if (GameDeviationFactor != 0 && ShotGunHorizontalSpread != 0 && ShotGunVerticalSpread != 0)
//			{
//				Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::GameDeviationFactor, 0);
//				Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunHorizontalSpread, 0);
//				Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::ShotGunVerticalSpread, 0);
//			}
//		}
//		if (Setting::NoGravity)
//		{
//			int ShootWeaponEntity = Utility::ReadMemoryEx<INT>(Data::LocalPlayer + Offset::CurrentReloadWeapon);
//			float LaunchGravityScale = Utility::ReadMemoryEx<float>(ShootWeaponEntity + Offset::LaunchGravityScale);
//			if (LaunchGravityScale != 0)
//			{
//				Utility::WriteMemoryEx<float>(ShootWeaponEntity + Offset::LaunchGravityScale, 0);
//
//			}
//		}
//
//		if (Setting::FastSwitchWeapon)
//		{
//			float SwitchWeaponSpeedScale = Utility::ReadMemoryEx<float>(Data::LocalPlayer + Offset::SwitchWeaponSpeedScale);
//			if (SwitchWeaponSpeedScale != 100)
//			{
//				Utility::WriteMemoryEx<float>(Data::LocalPlayer + Offset::SwitchWeaponSpeedScale, 100);
//
//			}
//		}
//
//
//		std::this_thread::sleep_for(std::chrono::milliseconds(30));
//	}
//}