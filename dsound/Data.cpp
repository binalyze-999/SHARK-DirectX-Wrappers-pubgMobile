#include "Data.h"
#include<thread>
#include<algorithm>
Espp* g_pEsp = new Espp();
DWORD Data::ViewMatrixBase;
DWORD Data::UWorld = 0;

INT Offset::MyTeamID = 0;
BYTE ViewMatrixSearch[] =
{
	0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01
};

DWORD Data::GetViewMatrixBase(DWORD StartAddress, DWORD EndAddress)
{

	DWORD ViewMatrixBase = 0;
	std::vector<DWORD_PTR> FoundedBase;
	Utility::MemSearchh(ViewMatrixSearch, sizeof(ViewMatrixSearch), StartAddress, EndAddress, 0, 0, FoundedBase);

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		DWORD Cand = FoundedBase[i] - 0x20;
		DWORD Eng = Utility::ReadMemory<DWORD>(Cand) + 0x20;
		DWORD Tmp = Utility::ReadMemory<DWORD>(Eng) + 0x200;

		float v1, v2, v3, v4;
		v1 = Utility::ReadMemory<float>(Tmp + 0x8);
		v2 = Utility::ReadMemory<float>(Tmp + 0x18);
		v3 = Utility::ReadMemory<float>(Tmp + 0x28);
		v4 = Utility::ReadMemory<float>(Tmp + 0x38);

		if (v1 == 0 && v2 == 0 && v3 == 0 && v4 >= 3)
		{
			ViewMatrixBase = Cand;

			FoundedBase.clear();

		}


	}


	return ViewMatrixBase;

}

std::string GetEntity(DWORD gNames, int id)
{
	auto gname = Utility::ReadMemoryEx<DWORD>(gNames);
	auto fNamePtr = Utility::ReadMemoryEx<DWORD>(gname + int(id / 16384) * 0x4);
	auto fName = Utility::ReadMemoryEx<DWORD>(fNamePtr + int(id % 16384) * 0x4);
	auto entryOffset = fName + 0x8;
	auto nameEntry = Utility::ReadMemoryEx<INT16>(entryOffset);

	auto nameLength = nameEntry >> 6;
	char buff[1028];

	if ((uint32_t)nameLength && nameLength > 0)
	{
		Utility::RPM(LPCVOID(entryOffset), buff, nameLength, 0);

		buff[nameLength] = '\0';

		std::string name_str(buff, nameLength);

		return name_str.c_str();
	}
	else
		return "";

	return "";
}
string GetString(DWORD BaseAddress)
{
	char* String = new char[34];
	for (int i = 0; i < 34; i++)
	{
		String[i] = Utility::ReadMemoryEx<char>(BaseAddress + i);
	}

	string Result = String;

	delete[] String;
	return Result;
}
std::string ReadString(DWORD adds, int size)
{
	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = Utility::ReadMemoryEx< char>(adds + i);
	}
	std::string ret = temp;
	delete temp;
	return ret;
}

std::wstring read_unicode(const std::uintptr_t address, std::size_t size)
{
	const auto buffer = std::make_unique<wchar_t[]>(size);
	Utility::RPM((LPVOID)address, buffer.get(), size * 2, 0);
	return std::wstring(buffer.get());
}

std::string GetPlayerName(DWORD adds)
{
	char* temp = new char[34];
	for (int i = 0; i < 34; i++)
	{
		temp[i] = Utility::ReadMemoryEx<char>(adds + i * 2);
	}
	std::string ret = temp;
	delete temp;
	return ret;
}
string GetPlayerFlag(DWORD BaseAddress)
{
	char* String = new char[34];
	for (int i = 0; i < 34; i++)
	{
		String[i] = Utility::ReadMemoryEx<char>(BaseAddress + i * 2);
	}

	string Name = String;

	delete[] String;
	return Name;
}
string GetEntityType(long GNames, LONG Id)
{
	string Result = "";

	DWORD GName = Utility::ReadMemoryEx<DWORD>(GNames);

	if (Id > 0 && Id < 2000000)
	{
		DWORD  Page = Id / 16384;
		DWORD  Index = Id % 16384;
		DWORD  SecPartAddv = Utility::ReadMemoryEx<DWORD>(GName + Page * 4);

		if (SecPartAddv > 0)
		{
			long NameAddv = Utility::ReadMemoryEx<DWORD>(SecPartAddv + Index * 4);

			if (NameAddv > 0)
			{
				Result = ReadString(NameAddv + 8, 34);
			}
		}
	}

	return Result;
}
struct ObjectName
{
	char Data[64];
};

string GetEntityType2(LONG GNames, LONG Id)
{
	DWORD GNamee = Utility::ReadMemoryEx<DWORD>(GNames);
	LONG NamePtr = Utility::ReadMemoryEx<DWORD>(GNamee + int(Id / 16384) * 0x4);
	LONG Name = Utility::ReadMemoryEx<LONG>(NamePtr + int(Id % 16384) * 0x4);
	ObjectName pBuffer = Utility::ReadMemoryEx<ObjectName>(Name + 0x8);

	return string(pBuffer.Data);
}

bool IsPlayer(std::string str)
{

	if (str.find("BP_PlayerPawn") != std::string::npos)
	{
		return true;
	}

	if (str.find("PlayerCharacter") != std::string::npos)
	{
		return true;
	}

	if (str.find("BP_PlayerPawn_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerPawn_Rune_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("PlayerPawn_Infec_InvisibleZombie_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("PlayerPawn_Infec_Human_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerPawn_ZombieBase_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerPawn_TDM_TPP_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerPawn_FM_Bot_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerCharacter_SlayTheBot_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("PlanET_FakePlayer_AIPawn_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerCharacter_SlayTheBot_C") != std::string::npos)
	{
		return true;

	}
	if (str.find("PlanET_FakePlayer_AIPawn_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerPawn_SI_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerPawn_Heavy_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("PlayerPawn_Infec_Revenger_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("PlayerPawn_Infec_NormalZombie_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("PlayerPawn_Infec_KingZombie_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerCharacter_PlanA_C") != std::string::npos)
	{
		return true;
	}
	if (str.find("BP_PlayerCharacter") != std::string::npos)
	{
		return true;
	}
	if (str.find("PlanET_FakePlayer") != std::string::npos)
	{
		return true;
	}

	return false;

}



bool isPlayerr(std::string type)
{
	if (type.find("BP_PlayerPawn_FM_C") != string::npos || type.find("BP_PlayerCharacter_FourMaps_ZNQ4th_C") != string::npos
		|| type.find("BP_PlayerCharacter_Plan") != string::npos
		/* type.find("BP_PlayerState_FourMaps_ZNQ4th_C") != string::npos*/
		)
	{
		return true;
	}
	if (type.find("BP_PlayerPawn_TDM_TPP_C") != string::npos || type.find("BP_PlayerCharacter_FourMaps_Curse_Revial_C") != string::npos)
	{
		return true;
	}
	if (type.find("BP_PlayerCharacter_SlayTheBot_C") != string::npos || type.find("PlanET_FakePlayer_AIPawn_C") != string::npos)
	{
		return true;
	}
	if (type.find("BP_PlayerPawn_SI_C") != string::npos || type.find("BP_PlayerController_FourMaps_ZNQ4th_C") != string::npos)
	{
		return true;
	}
	if (type.find("PlayerPawnInfec") != string::npos || type.find("PlayerPawn_Infec_NormalZombie_C") != string::npos)
	{
		return true;
	}

	if (type.find("BP_PlayerPawn") != string::npos || type.find("BP_PlayerCharacter") != string::npos)
	{
		return true;
	}
	if (type.find("BP_PlayerPawn_FM_AI_C") != string::npos)
	{
		return true;
	}

	if (type.find("BP_PlayerState_PlanS_C") != string::npos || type.find("BP_PlayerCharacter_FourMaps_ZNQ4th_C") != string::npos)
	{
		return true;
	}

	return false;
}

std::string GetGrenadeType(std::string classname)
{
	if (classname.find("BP_Grenade_Smoke_C") != std::string::npos)
		return "Smoke";
	if (classname.find("BP_Grenade_Burn_C") != std::string::npos)
		return "Burn";
	/* if (classname.find("BP_Grenade_tun_C") != std::string::npos)
		 return "[ALERT] !Flash Granade";*/
	if (classname.find("BP_Grenade_Shoulei_C") != std::string::npos)
		return "Frag";
	return "tatti";
}

string GetItemType(string Name)
{///name.find("BP_Rifle_AKM_Wrapper_C") != std::string::npos
	if (Setting::Esp_Item_AKM) if (Name.find("BP_Rifle_AKM_Wrapper_C") != std::string::npos) return "AKM";
	if (Setting::Esp_Item_M249) if (Name.find("BP_Other_M249_Wrapper_C") != std::string::npos)return "M249";

	if (Setting::Esp_Item_Mk12) if (Name.find("BP_Other_MK12_Wrapper_C") != std::string::npos || Name.find("BP_Sniper_MK12_Wrapper_C") != std::string::npos)return "MK12";
	if (Setting::plan)  if (Name.find("BP_AirDropPlane_C") != std::string::npos) return "AirDrop-Plan";
	if (Setting::Esp_Item_SCARL) if (Name.find("BP_Rifle_SCAR_Wrapper_C") != string::npos) return "SCAR-L";
	if (Setting::Esp_Item_M416) if (Name.find("BP_Rifle_M416_Wrapper_C") != std::string::npos) return "M416";
	if (Setting::Esp_Item_M24) if (Name.find("BP_Sniper_M24_Wrapper_C") != string::npos) return "M24";
	if (Setting::Esp_Item_Kar98k) if (Name.find("BP_Sniper_Kar98k_Wrapper_C") != string::npos) return "Kar98k";
	if (Setting::Esp_Item_Awm) if (Name.find("BP_Sniper_AWM_Wrapper_C") != string::npos) return "AWM";
	if (Setting::Esp_Item_FlareGun) if (Name.find("BP_Pistol_Flaregun_Wrapper_C") != string::npos) return "Flare Gun";
	if (Setting::Esp_Item_Flare) if (Name.find("BP_Ammo_Flare_Pickup_C") != string::npos) return "Flare";
	//if (Setting::Esp_Item_AirDrop) if (Name.find("AirDropListWrapperActor") != string::npos) return "Air Drop";

	if (Setting::Esp_Item_M762) if (Name.find("BP_Rifle_M762_Wrapper_C") != string::npos) return "M762";
	if (Setting::Esp_Item_Mk47Mutant) if (Name.find("BP_Rifle_Mk47_Wrapper_C") != string::npos) return "Mk47 Mutant";
	if (Setting::Esp_Item_DP28) if (Name.find("BP_Other_DP28_Wrapper_C") != string::npos) return "DP28";
	if (Setting::Esp_Item_SCARL) if (Name.find("BP_Rifle_SCAR_Wrapper_C") != string::npos) return "SCAR-L";
	if (Setting::Esp_Item_M416) if (Name.find("BP_Rifle_M416_Wrapper_C") != string::npos) return "M416";

	if (Setting::Esp_Item_M16A4) if (Name.find("BP_Rifle_M16A4_Wrapper_C") != string::npos) return "M16A4";
	if (Setting::Esp_Item_G36C) if (Name.find("BP_Rifle_G36_Wrapper_C") != string::npos) return "G36C";
	if (Setting::Esp_Item_QBZ) if (Name.find("BP_Rifle_QBZ_Wrapper_C") != string::npos) return "QBZ";

	if (Setting::Esp_Item_QBU) if (Name.find("BP_Sniper_QBU_Wrapper_C") != string::npos) return "QBU";
	if (Setting::Esp_Item_SLR) if (Name.find("BP_Sniper_SLR_Wrapper_C") != string::npos) return "SLR";
	if (Setting::Esp_Item_SKS) if (Name.find("BP_Sniper_SKS_Wrapper_C") != string::npos) return "SKS";
	if (Setting::Esp_Item_Mini14) if (Name.find("BP_Sniper_Mini14_Wrapper_C") != string::npos) return "Mini-14";


	if (Setting::Esp_Item_PP19) if (Name.find("BP_MachineGun_PP19_Wrapper_C") != string::npos) return "PP19";
	if (Setting::Esp_Item_TommyGun) if (Name.find("BP_MachineGun_TommyGun_Wrapper_C") != string::npos) return "Tommy Gun";
	if (Setting::Esp_Item_MP5K) if (Name.find("BP_MachineGun_MP5K_Wrapper_C") != string::npos) return "MP5K";
	if (Setting::Esp_Item_UMP9) if (Name.find("BP_MachineGun_UMP9_Wrapper_C") != string::npos) return "UMP9";
	if (Setting::Esp_Item_Vector) if (Name.find("BP_MachineGun_Vector_Wrapper_C") != string::npos) return "Vector";
	if (Setting::Esp_Item_Uzi) if (Name.find("BP_MachineGun_Uzi_Wrapper_C") != string::npos) return "Uzi";
	if (Setting::Esp_Item_Awmimo) if (Name.find("BP_Ammo_300Magnum_Pickup_C") != std::string::npos) return "300Magnum";
	if (Setting::Esp_Item_762mm) if (Name.find("BP_Ammo_762mm_Pickup_C") != string::npos) return "7.62mm";
	if (Setting::Esp_Item_556mm) if (Name.find("BP_Ammo_556mm_Pickup_C") != string::npos) return "5.56mm";
	if (Setting::Esp_Item_9mm) if (Name.find("BP_Ammo_9mm_Pickup_C") != string::npos) return "9mm";
	if (Setting::Esp_Item_45ACP) if (Name.find("BP_Ammo_45ACP_Pickup_C") != string::npos) return "45ACP";

	if (Setting::Esp_Item_Holo) if (Name.find("BP_MZJ_QX_Pickup_C") != string::npos) return "Holo";


	//if (Setting::Esp_Item_AirDrop) if (Name.find("BP_AirDropBox_C") != string::npos) return "Air Drop";
	if (Setting::Esp_Item_MedKit) if (Name.find("FirstAidbox_Pickup_C") != string::npos) return "Med Kit";
	if (Setting::Esp_Item_FirstAidKit) if (Name.find("Firstaid_Pickup_C") != string::npos) return "First Aid Kit";
	if (Setting::Esp_Item_Painkiller) if (Name.find("Pills_Pickup_C") != string::npos) return "Painkiller";
	if (Setting::Esp_Item_EnergyDrink) if (Name.find("Drink_Pickup_C") != string::npos) return "Energy Drink";
	if (Setting::Esp_Item_AdrenalineSyringe) if (Name.find("Injection_Pickup_C") != string::npos) return "Adrenaline";

	if (Setting::Esp_Item_Frag) if (Name.find("BP_Grenade_Shoulei_Weapon_Wrapper_C") != string::npos) return "frag";
	if (Setting::Esp_Item_Frag) if (Name.find("BP_Grenade_Shoulei_C") != string::npos) return "Frag";
	if (Setting::Esp_Item_Smoke) if (Name.find("BP_Grenade_Smoke_Weapon_Wrapper_C") != string::npos) return "Smoke";
	if (Setting::Esp_Item_Molotof) 	if (Name.find("BP_Grenade_Burn_C") != std::string::npos)return "Burn";

	if (Setting::Esp_Item_Molotof) if (Name.find("BP_Grenade_Burn_Weapon_Wrapper_C") != string::npos) return "Molotof";

	if (Setting::Esp_Item_Helmet1) if (Name.find("PickUp_BP_Helmet_Lv1") != string::npos) return "Helmet L.1";
	if (Setting::Esp_Item_Helmet2) if (Name.find("PickUp_BP_Helmet_Lv2") != string::npos) return "Helmet L.2";
	if (Setting::Esp_Item_Helmet3) if (Name.find("PickUp_BP_Helmet_Lv3") != string::npos) return "Helmet L.3";

	if (Setting::Esp_Item_Armor1) if (Name.find("PickUp_BP_Armor_Lv1") != string::npos) return "Armor L.1";
	if (Setting::Esp_Item_Armor2) if (Name.find("PickUp_BP_Armor_Lv2") != string::npos) return "Armor L.2";
	if (Setting::Esp_Item_Armor3) if (Name.find("PickUp_BP_Armor_Lv3") != string::npos) return "Armor L.3";
	if (Setting::Esp_Item_x2) if (Name.find("BP_MZJ_2X_Pickup_C") != string::npos) return "2x";
	if (Setting::Esp_Item_x3) if (Name.find("BP_MZJ_3X_Pickup_C") != string::npos) return "3x";
	if (Setting::Esp_Item_x4) if (Name.find("BP_MZJ_4X_Pickup_C") != string::npos) return "4x";
	if (Setting::Esp_Item_x6) if (Name.find("BP_MZJ_6X_Pickup_C") != string::npos) return "6x";
	if (Setting::Esp_Item_x8) if (Name.find("BP_MZJ_8X_Pickup_C") != string::npos) return "8x";
	if (Setting::Esp_Item_Bag1) if (Name.find("PickUp_BP_Bag_Lv1") != string::npos) return "Bag L.1";
	if (Setting::Esp_Item_Bag2) if (Name.find("PickUp_BP_Bag_Lv2") != string::npos) return "Bag L.2";
	if (Setting::Esp_Item_Bag3) if (Name.find("PickUp_BP_Bag_Lv3") != string::npos) return "Bag L.3";
	//	if (Setting::deadbox) if (Name.find("PlayerDeadInventoryBox") != std::string::npos || Name.find("PickUpListWrapperActor") != std::string::npos) return "Dead-Box";
	if (Setting::MG3) if (Name.find("BP_Other_MG3_Wrapper_C") != string::npos) return "MG3";
	if (Setting::FAMAS) if (Name.find("BP_Rifle_FAMAS_Wrapper_C") != string::npos)return "FAMAS";
	if (Setting::Mk14) if (Name.find("BP_WEP_Mk14_Pickup_C") != string::npos) return "Mk14";
	if (Setting::G36) if (Name.find("BP_Rifle_G36_Wrapper_C") != string::npos)return "G36";
	if (Setting::AN94) if (Name.find("BP_Rifle_AN94_Wrapper_") != string::npos)return "ASM";
	if (Setting::AN94) if (Name.find("BP_Sniper_Mosin_Wrapper_C") != string::npos)return "Mosin";
	if (Setting::Esp_Item_Bag3) if (Name.find("BP_PlayerLobbyPawn_C") != string::npos) return "In Lobby";
	if (Setting::Esp_Item_Bag3) if (Name.find("PUBG_Forest_x7_y7_Collision") != string::npos) return "In Erengel";
	if (Setting::Esp_Item_Bag3) if (Name.find("BRPlayerStateTeam_DeathMatch") != string::npos) return "In TDM";
	if (Setting::Esp_Item_Bag3) if (Name.find("BuildingKanerjing_Trigger") != string::npos) return "In Livik";
	if (Setting::Esp_Item_Bag3) if (Name.find("BP_PlayerState_SocialIsland_C") != string::npos) return "In Cheer Park";
	if (Setting::Esp_Item_Bag3) if (Name.find("PUBG_Desert_C") != string::npos) return "In Miramar";
	if (Setting::Esp_Item_Bag3) if (Name.find("PUBG_Savage_Main_C") != string::npos) return "In Sanhok";
	if (Setting::Esp_Item_Bag3) if (Name.find("SummerLand_ObjectPoolMgr") != string::npos) return "In Karakin";
	if (Setting::Esp_Item_Bag3) if (Name.find("BP_BRGameState_TeamHardPoint_C") != string::npos) return "In Domination";
	if (Setting::Esp_Item_Bag3) if (Name.find("Play_Music_Login") != string::npos) return "In Login";
	if (Setting::Esp_Item_Bag3) if (Name.find("Editor_login_C") != string::npos) return "In Login";
	if (Setting::Mk14)if (Name.find("GoldenTokenWrapper_C") != string::npos) return "Token";
	if (Setting::G36) if (Name.find("BP_WEP_Pan_Pickup_C") != string::npos)return "Pan";
	if (Setting::playerdeadbox) if (Name.find("BP_AirDropBox_C") != string::npos)return "AirDrop";
	if (Setting::playerdeadbox) if (Name.find("PlayerDeadBox_C") != string::npos)return "Dead-Box";

	//PlayerDeadInventoryBox_C

	return "Unknown";
}
bool IsBox(std::string classname)
{

	if (classname.find("PickUpListWrapperActor") != std::string::npos || classname.find("AirDropListWrapperActor") != std::string::npos)
	{
		return true;
	}
	return false;
}
string GetVehicleType(string Name)
{
	if (Name.find("BRDM") != std::string::npos) return "BRDM";
	if (Name.find("Scooter") != std::string::npos) return "Scooter";
	if (Name.find("Motorcycle") != std::string::npos) return "Motorcycle";
	if (Name.find("Snowmobile") != std::string::npos) return "Snowmobile";
	if (Name.find("Tuk") != std::string::npos) return "Tuk";
	if (Name.find("Buggy") != std::string::npos) return "Buggy";
	if (Name.find("open") != std::string::npos) return "Sports";
	if (Name.find("close") != std::string::npos) return "Sportsa";
	if (Name.find("Dacia") != std::string::npos) return "Dacia";
	if (Name.find("Rony") != std::string::npos) return "Rony";
	if (Name.find("UAZ") != std::string::npos) return "UAZ";
	if (Name.find("MiniBus") != std::string::npos) return "Minibus";
	if (Name.find("PG117") != std::string::npos) return "PG117";
	if (Name.find("AquaRail") != std::string::npos) return "Aquarail";
	if (Name.find("CoupeRB") != std::string::npos) return "Coupe";
	if (Name.find("ModelY") != std::string::npos) return "Tesla";
	if (Name.find("G-38Anti-GravityMotorcycle") != std::string::npos) return "Gravity";
	if (Name.find("Glider") != std::string::npos) return "Glider";
	//if (Name.find("BP_AirDropPlane_C") != std::string::npos) return "Plane";
	return "Unknown";
}
std::string PlayerWeapon(std::string str)
{
	if (str == "BP_Sniper_AWM_C")
		return "AWM";
	else if (str == "BP_Sniper_QBU_C")
		return "QBU";
	else if (str == "BP_Sniper_SLR_C")
		return "SLR";
	else if (str == "BP_Sniper_SKS_C")
		return "SKS";
	else if (str == "BP_Sniper_Mini14_C")
		return "Mini14";
	else if (str == "BP_Sniper_M24_C")
		return "M24";
	else if (str == "BP_Sniper_Kar98k_C")
		return "Kar98k";
	else if (str == "BP_Sniper_VSS_C")
		return "VSS";
	else if (str == "BP_Sniper_Win94_C")
		return "Win94";
	else if (str == "BP_Sniper_Mosin_C")
		return "Mosin";
	else if (str == "BP_Sniper_MK12_C")
		return "MK12";
	else if (str == "BP_Rifle_AUG_C")
		return "AUG";
	else if (str == "BP_Rifle_M762_C")
		return "M762";
	else if (str == "BP_Rifle_SCAR_C")
		return "SCAR";
	else if (str == "BP_Rifle_M416_C")
		return "M416";
	else if (str == "BP_Rifle_M16A4_C")
		return "M16A4";
	else if (str == "BP_Rifle_Mk47_C")
		return "Mk47";
	else if (str == "BP_Rifle_G36_C")
		return "G36";
	else if (str == "BP_Rifle_QBZ_C")
		return "QBZ";
	else if (str == "BP_Rifle_AKM_C")
		return "AKM";
	else if (str == "BP_Rifle_Groza_C")
		return "Groza";
	else if (str == "BP_Other_DP28_C")
		return "DP28";
	else if (str == "BP_Other_M249_C")
		return "M249";
	else if (str == "BP_MachineGun_P90_C")
		return "P90";
	else if (str == "BP_ShotGun_S12K_C")
		return "S12K";
	else if (str == "BP_ShotGun_DP12_C")
		return "DP12";
	else if (str == "BP_ShotGun_S686_C")
		return "S686";
	else if (str == "BP_ShotGun_S1897_C")
		return "S1897";
	else if (str == "BP_ShotGun_SawedOff_C")
		return "SawedOff";
	else if (str == "BP_MachineGun_PP19_C")
		return "PP19";
	else if (str == "BP_MachineGun_TommyGun_C")
		return "TommyGu";
	else if (str == "BP_MachineGun_MP5K_C")
		return "MP5K";
	else if (str == "BP_MachineGun_UMP9_C")
		return "UMP9";
	else if (str == "BP_MachineGun_Vector_C")
		return "Vector";
	else if (str == "BP_MachineGun_Uzi_C")
		return "Uzi";
	else if (str == "BP_Pistol_Flaregun_C")
		return "Flaregun";
	else if (str == "BP_Pistol_R1895_C")
		return "R1895";
	else if (str == "BP_Pistol_Vz61_C")
		return "Vz61";
	else if (str == "BP_Pistol_P92_C")
		return "P92";
	else if (str == "BP_Pistol_P18C_C")
		return "P18C";
	else if (str == "BP_Pistol_R45_C")
		return "R45";
	else if (str == "BP_Pistol_P1911_C")
		return "P1911";
	else if (str == "BP_Pistol_DesertEagle_C")
		return "DesertEagle";
	else if (str == "BP_WEP_Mk14_C")
		return "Mk14";
	else if (str == "BP_Other_CrossBow_C")
		return "CrossBow";
	else if (str == "BP_Grenade_Shoulei_C")
		return "Shoulei Grenade";
	else if (str == "BP_Grenade_Smoke_C")
		return "Smoke Grenade";
	else if (str == "BP_Grenade_Burn_C")
		return "Burn Grenade";
	else
		return "";
	return "";
}
std::string GetBoxItems(int code)
{
	if (code == 101008)
	{
		Setting::colorcode = weapon::m762;
		return "M762";

	}
	else if (code == 306001)
	{
		Setting::colorcode = weapon::AWMimmo;
		return "AWM Ammo";
	}

	else if (code == 101003)
	{
		Setting::colorcode = weapon::scarl;
		return "SCAR-L";
	}
	else if (code == 302001)
	{

		Setting::colorcode = Colors::ammo7;
		return "7.62";
	}
	else if (code == 303001)
	{

		Setting::colorcode = Colors::ammo5;
		return "5.56";
	}
	else if (code == 602004)
	{
		Setting::colorcode = Colors::Grandes;

		return "Grenade";
	}
	else if (code == 601006)
	{
		Setting::colorcode = Colors::madkit;

		return "Medkit";
	}
	else if (code == 101004)
	{
		Setting::colorcode = weapon::m16;
		return "M416";
	}

	else if (code == 101010)
	{
		Setting::colorcode = Colors::g36;
		return "G36";
	}

	else if (code == 101006)
	{
		Setting::colorcode = Colors::aug;
		return "AUG";
	}

	else if (code == 101101)
	{
		Setting::colorcode = Colors::assm;
		return "ASM"; //time
	}

	else if (code == 101001)
	{
		Setting::colorcode = weapon::AKM;
		return "AKM";
	}

	else if (code == 101005)
	{
		Setting::colorcode = weapon::GROZZA;
		return "Groza";
	}

	else if (code == 103003)
	{
		Setting::colorcode = weapon::AWM;
		return "AWM";
	}

	else if (code == 103002)
	{
		Setting::colorcode = weapon::M24;
		return "M24";
	}

	else if (code == 103001)
	{
		Setting::colorcode = weapon::kar98;
		return "Kar98k";
	}

	else if (code == 103011)
	{
		Setting::colorcode = Colors::mosin;
		return "Mosin";
	}

	else if (code == 502002)
	{
		Setting::colorcode = Colors::helmat;
		return "Helmet Lv.2";
	}

	else if (code == 502003)
	{
		Setting::colorcode = Colors::helmat;
		return "Helmet Lv.3";
	}

	else if (code == 503002)
	{
		Setting::colorcode = Colors::armer;
		return "Armour Lv.2";
	}

	else if (code == 503003)
	{
		Setting::colorcode = Colors::armer;
		return "Armour Lv.3";
	}

	else if (code == 501006)
	{
		Setting::colorcode = Colors::bag;
		return "Bag Lv.3";
	}

	else if (code == 501005)
	{
		Setting::colorcode = Colors::bag;
		return "Bag Lv.2";
	}

	else if (code == 203014)
	{
		Setting::colorcode = Colors::scope3x;
		return "3X";

	}

	else if (code == 203004)
	{
		Setting::colorcode = Colors::scope4x;
		return "4x";
	}

	else if (code == 203015)
	{
		Setting::colorcode = Colors::scope6x;
		return "6x";
	}

	else if (code == 203005)
	{
		Setting::colorcode = weapon::scope8x;
		return "8x";
	}

	else if (code == 106007)
	{
		Setting::colorcode = weapon::Flare;
		return "Flaregun";
	}

	else if (code == 105001)
	{
		Setting::colorcode = Colors::M249;
		return "M249";
	}

	else if (code == 105002)
	{
		Setting::colorcode = Colors::dp;
		return "DP28";
	}

	else if (code == 105010)
	{
		Setting::colorcode = Colors::ammo5;
		return "MG3";
	}
	else if (code == 403989)
	{
		return "Ghillie";
		Setting::colorcode = Colors::ammo5;
	}
	else if (code == 403045)
	{
		Setting::colorcode = Colors::ammo5;
		return "Ghillie";
	}
	else if (code == 403187)
	{
		Setting::colorcode = Colors::ammo5;
		return  "Ghillie";
	}
	else if (code == 403188)
	{
		Setting::colorcode = Colors::ammo5;
		return  "Ghillie";
	}
	return "tatti";

}

DWORD dGett(DWORD addr) {
	DWORD buff;
	ReadProcessMemory(Game::hProcess, (LPCVOID)addr, &buff, sizeof(DWORD), NULL);
	return buff;
}
INT iGet(INT addr) {

	INT buff;
	ReadProcessMemory(Game::hProcess, (LPCVOID)addr, &buff, sizeof(INT), NULL);
	return buff;

}

DWORD Data::NetDriver;
DWORD Data::LocalPlayer;
DWORD Data::PlayerController;
DWORD Data::EntityAddress = 0;
DWORD Data::Ue4Base;
vector<AActor> Data::AActorList = {};
vector<BombAlert> Data::BombAlertList = {};
vector<Item> Data::ItemList = {};
vector<impItem> Data::impItemList = {};
vector<Vehicle> Data::VehicleList = {};

VOID Data::QueryThread()
{
	DWORD ue4Headerr = Utility::ReadMemoryEx<DWORD>(0xE0C36E8);
	Data::ViewMatrixBase = ue4Headerr + 0x7F13D90;
	DWORD GWorld = Utility::ReadMemoryEx<DWORD>(Data::ViewMatrixBase + 114572) + 0x3C;
	DWORD GName = Utility::ReadMemoryEx<DWORD>(Data::ViewMatrixBase - 3117016) + 0x88;
	//DWORD UWorld = 0;
	DWORD PersistentLevel = 0;
	DWORD ServerConnection = 0;
	DWORD EntityList = 0;
	INT EntityCount = 0;
	DWORD EntityStruct = 0;
	string EntityType = "";
	DWORD RootComponent = 0;
	INT MyTeamId = 9999;
	DWORD MeshAddv;
	DWORD BodyAddv;
	DWORD BoneAddv;
	string GrenadeType = "";
	string ItemType = "";
	string VehicleType = "";
	string airdroptype = "";
	string deadboxtype = "";
	string wep = "";
	string	EntityTypeplayer = "";
	vector<AActor> AActorList = {};
	vector<BombAlert> BombAlertList = {};
	vector<Item> ItemList = {};
	vector<impItem> impItemList = {};
	vector<Vehicle> VehicleList = {};

	while (true)
	{
		DWORD ue4Headerr = Utility::ReadMemoryEx<UINT>(0xE0C36E8);
		Data::ViewMatrixBase = ue4Headerr + 0x7F13D90;
		DWORD GWorld = Utility::ReadMemoryEx<DWORD>(Data::ViewMatrixBase + 114572) + 0x3C;
		DWORD GName = Utility::ReadMemoryEx<DWORD>(Data::ViewMatrixBase - 3117016) + 0x88;
		g_pEsp->lootbox.clear();
		UWorld = Utility::ReadMemoryEx<DWORD>(GWorld);
		PersistentLevel = Utility::ReadMemoryEx<DWORD>(UWorld + Offset::PersistentLevel);
		NetDriver = Utility::ReadMemoryEx<DWORD>(UWorld + Offset::NetDriver);
		ServerConnection = Utility::ReadMemoryEx<DWORD>(NetDriver + Offset::ServerConnection);
		PlayerController = Utility::ReadMemoryEx<DWORD>(ServerConnection + Offset::PlayerController);
		LocalPlayer = Utility::ReadMemoryEx<DWORD>(PlayerController + Offset::AcknowledgedPawn);

		EntityList = Utility::ReadMemoryEx<DWORD>(PersistentLevel + Offset::EntityList);
		EntityCount = Utility::ReadMemoryEx<INT>(PersistentLevel + Offset::EntityCount);
		if (EntityCount > 1024)
			EntityCount = 1024;
		for (int i = 0; i < EntityCount; ++i)
		{
			EntityAddress = Utility::ReadMemoryEx<DWORD>(EntityList + i * 4);
			EntityStruct = Utility::ReadMemoryEx<DWORD>(EntityAddress + 0x10);
			EntityType = GetEntityType2(GName, EntityStruct);
			EntityTypeplayer = GetEntityType(GName, EntityStruct);

			RootComponent = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::RootComponent);
			if (isPlayerr(EntityTypeplayer) || IsPlayer(EntityType))
			{
				AActor AActor;
				AActor.TeamId = Utility::ReadMemoryEx<INT>(EntityAddress + Offset::TeamId);
				AActor.Address = EntityAddress;

				if (AActor.Address == LocalPlayer)
				{
					MyTeamId = AActor.TeamId;
					continue;
				}

				if (AActor.TeamId == MyTeamId) continue;

				AActor.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
				AActor.dead = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::bDead);
				if (AActor.dead) continue;
				AActor.DeathBreath = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::NearDeathBreath);
				AActor.IsBot = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::IsBot);
				AActor.status = Utility::ReadMemoryEx<int>(EntityAddress + Offset::CurrentStates);


				if (!AActor.IsBot)
				{
					AActor.Name = GetPlayerName(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Name));
					AActor.Nation = GetPlayerFlag(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Nation));
				}
				else
				{
					AActor.Name = " BOT ";
					AActor.Nation = " ";
				}

				if (Setting::plr_wpn)
				{

					if (Offset::CurrentReloadWeapon != 0)
					{
						wep = PlayerWeapon(GetEntityType2(GName, Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::CurrWeapon) + 16)));
						if (wep == "")
							wep = "Fist";
						AActor.weapon = wep;

					}

				}
				AActor.Health = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::Health);
				AActor.HealthMax = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::HealthMax);
				AActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(AActor.Address + Offset::CharacterMovement) + Offset::LastUpdateVelocity);
				if (Setting::Bone || Setting::MagicBullet)
				{
					MeshAddv = Utility::ReadMemoryEx<DWORD>(AActor.Address + Offset::Mesh);
					BodyAddv = MeshAddv + Offset::BodyAddv;
					BoneAddv = Utility::ReadMemoryEx<DWORD>(MeshAddv + Offset::MinLOD) + 48;
					AActor.HeadPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 5 * 48);
				}

				if (Setting::Bone)
				{
					AActor.ChestPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 4 * 48);
					AActor.PelvisPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 1 * 48);
					AActor.lSholderPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 11 * 48);
					AActor.rSholderPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 32 * 48);
					AActor.lElbowPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 12 * 48);
					AActor.rElbowPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 33 * 48);
					AActor.lWristPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 63 * 48);
					AActor.rWristPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 62 * 48);
					AActor.lThighPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 52 * 48);
					AActor.rThighPos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 56 * 48);
					AActor.lKneePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 53 * 48);
					AActor.rKneePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 57 * 48);
					AActor.lAnklePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 54 * 48);
					AActor.rAnklePos = Algorithm::GetBoneWorldPosition(BodyAddv, BoneAddv + 58 * 48);
				}

				AActorList.push_back(AActor);
			}


			if (Setting::Item)
			{
				ItemType = GetItemType(EntityType);
				if (ItemType.find("Unknown") == std::string::npos)
				{
					Item Item;
					Item.Name = ItemType;
					Item.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);

					ItemList.push_back(Item);
				}
			}


			if (Setting::Vehicle)
			{
				string	EntityTypeVehicle = GetEntity(GName, EntityStruct);

				VehicleType = GetVehicleType(EntityTypeVehicle);
				if (VehicleType.find("Unknown") == std::string::npos)
				{
					DWORD veh = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::VehicleCommon);
					float HP = Utility::ReadMemoryEx<float>(veh + Offset::HP);
					float HPMax = Utility::ReadMemoryEx<float>(veh + Offset::HPMax);

					Vehicle Vehicle;
					Vehicle.hp = (int)(HP * 100 / HPMax);
					if (Vehicle.hp < 0 || Vehicle.hp>100) continue;
					float Fuel = Utility::ReadMemoryEx<float>(veh + Offset::Fuel);
					float FuelMax = Utility::ReadMemoryEx<float>(veh + Offset::FuelMax);

					Vehicle.oil = (int)(Fuel * 100 / FuelMax);
					if (Vehicle.oil < 0 && Vehicle.oil>100)continue;
					if (Vehicle.oil > 0 && Vehicle.oil <= 100)
					{
						if (Vehicle.hp > 0 && Vehicle.hp <= 100)
						{
							Vehicle.Name = VehicleType;
							Vehicle.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
							Vehicle.driving = Utility::ReadMemoryEx<DWORD>(EntityAddress + 0x6bd);
							VehicleList.push_back(Vehicle);
							continue;
						}
						else {
							continue;
						}
					}
					else
					{
						continue;
					}

				}
			}

			if (Setting::deadbox)
			{
				if (IsBox(EntityType))
				{

					g_pEsp->lootbox.push_back(g_pEsp->lbox);
					DWORD  count = Utility::ReadMemoryEx<DWORD>(EntityAddress + 1700);
					if (count > 30)
						count = 30;
					g_pEsp->lbox.boxitem.clear();
					if (count > 0)

					{
						long itemBase = Utility::ReadMemoryEx<DWORD>(EntityAddress + 1680);
						// DWORD tem1 = Utility::ReadMemoryEx<DWORD>(EntityAddress + 0x630);
						long itemAddv;

						for (int t = 0; t < count; t++)
						{
							itemAddv = itemBase + t * 48;
							// std::string bitm = Dead(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x4), "");
							std::string bitm = GetBoxItems(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x4));
							if (bitm.find("tatti") == std::string::npos)
							{
								Itemb temo;
								bitm.append("  :  ").append(std::to_string(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x18)));
								g_pEsp->lbox.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
								temo.colorcod = Setting::colorcode;
								temo.Displayname = bitm;
								g_pEsp->lbox.boxitem.push_back(temo);
								// bitm.clear();
							}
						}
					}


				}

			}
		}

		Data::AActorList.clear();
		Data::BombAlertList.clear();
		Data::ItemList.clear();
		Data::VehicleList.clear();
		Data::AActorList = AActorList;
		Data::BombAlertList = BombAlertList;
		Data::ItemList = ItemList;
		Data::VehicleList = VehicleList;
		g_pEsp->lootboxr = g_pEsp->lootbox;
		AActorList.clear();
		BombAlertList.clear();
		ItemList.clear();
		VehicleList.clear();
		std::this_thread::sleep_for(std::chrono::milliseconds(Setting::Lag2));
	}

}