#pragma once

#include "Includes.h"

namespace Offset
{
	/// <summary>
	const DWORD bDead = 0x9d0; /// </summary> bool bDead;//(ByteOffset: 0, ByteMask: 1, FieldMask: 1)[Offset: 0x978, Size: 1]
	const DWORD PersistentLevel = 0x20;
	const DWORD NetDriver = 0x24;
	const DWORD ServerConnection = 0x60;
	const DWORD PlayerController = 0x20;
	const DWORD AcknowledgedPawn = 0x350; // PlayerController.Controller.Actor.Object Pawn* AcknowledgedPawn;//[Offset:
	const DWORD EntityList = 0x70;
	const DWORD EntityCount = 0x74;
	/*const DWORD EntityList = 0x7C;
	const DWORD EntityCount = EntityList + 4;*/
	const DWORD gameInstance = 0x24;
	//const DWORD playerController = 96;
	const DWORD playerCarry = 0x20;

	namespace PlayerCameraManager1 {
		constexpr auto CameraCache = 0x370;
	}
	namespace STExtraPlayerCharacter {
		constexpr auto STPlayerController = 0x2b24;
	}
	namespace PlayerController1 {
		constexpr auto PlayerCameraManager = 0x360;
		constexpr auto MyHUD = 0x35c;
	}

	////////////GOD VIEW/////////////
	const DWORD SceneComponent = 0x11d0; // SceneComponent* MeshContainer;//[Offset:
	const DWORD CustomSpringArmComponent = 0x1324; // CustomSpringArmComponent* SpringArmComp

	////////////////////////////////
	extern struct Vector2 {
		float x = 0;
		float y = 0;
	};
	extern struct Vector3 {
		float x = 0;
		float y = 0;
		float z = 0;
	};
	extern struct Vector4 {
		float x = 0;
		float y = 0;
		float z = 0;
		float w = 0;
	};
	extern struct D3DMatrix {
		float _11, _12, _13, _14;
		float _21, _22, _23, _24;
		float _31, _32, _33, _34;
		float _41, _42, _43, _44;
	};
	struct playerData
	{
		DWORD Address, Pose, World;
		Vector3 Position;
		int Status, TeamID, Health, Distance;
		int AlivePlayers = 0;
		int TimeRemind = 0;
		int AliveTeams = 0;
		int RealPls = 0;
		int ZoneID = 0;
		int MyTeamID = 0;
		int GameID = 0;
		bool IsRobot;
		bool IsDead;
		std::string Name, Type, weapon, Nation;
	};

	struct Item {
		DWORD Address;
		std::string displayName;
		Vector3 Position;
		int color;
		int picid;
	};

	struct Specl {
		DWORD Address;
		std::string displayName;
	};

	struct ItmInfo {
		std::string name;
		int color;
	};

	struct AimInfo {
		Vector3 Head, Chest;
		Vector2 Screen;
	};
	struct Lootbox {
		Vector3 Position;

		std::vector<Item> boxitem;
		int picid;
	};

	struct Vehicle {
		DWORD Address, VehicleComm;
		std::string displayName;
		Vector3 Position;
		int picid;
		int MaxHP, MaxFuel;
		int HP, Fuel;
	};
	struct Vehicle2 {
		DWORD Address, VehicleComm2;
		std::string displayName;
		Vector3 Position;
		int picid;

	};

	struct Vehicle3 {
		DWORD Address, VehicleComm3;
		std::string displayName;
		Vector3 Position;
		int picid;

	};
	//struct Lootbox {
	//    Vector3 Position;
	//    std::string itemname;
	//};
	struct Vehicle4 {
		DWORD Address, VehicleComm4;
		std::string displayName;
		Vector3 Position;
		int picid;

	};

	const DWORD RootComponent = 0x164; // SceneComponent* RootComponent;//[Offset:
	const DWORD CurrentStates = 0xb18; //uint64 CurrentStates;//[Offset:
	const DWORD NearDeathBreath = 0x1214;
	// AActor
	const DWORD TeamId = 0x6a4; //Class: UAECharacter.Character.Pawn.Actor.Object int TeamID;//[Offset:
	const DWORD PoseState = 0xfb8; //Class: UAECharacter.Character.Pawn.Actor.Object byte PoseState;//[Offset:
	const DWORD IsBot = 0x71c; // bool bIsAI;//(ByteOffset:
	const DWORD Name = 0x640; // FString PlayerName;//[Offset:
	const DWORD Status = 0x670; // Class: UAECharacter.Character.Pawn.Actor.Object FString PlayerName;//[Offset:
	const DWORD Nation = 0x674;
	const DWORD Health = 0x9b8; // float Health;//[Offset:
	const DWORD HealthMax = 0x9bc; // float HealthMax;//[Offset:
	const DWORD weaponOffset = 0x1a4c;
	const int ShootWeapon = 3532;
	/// <summary>
	/// NEW MASODS FOR AMO TOTAL AND TYPE OF WOPEN
	const DWORD CurrWeapon = 0x1AB8;
	const DWORD CurBulletNumInClip = 0xb1c; /// Class: STExtraShootWeapon.STExtraWeapon.Actor.Object int CurBulletNumInClip;//[Offset:
	const DWORD CurMaxBulletNumInOneClip = 0xabc;
	const DWORD ScopeFov = 0x127c;
	const DWORD gNames = 0;
	/// </summary>
	// Lot BOX
	const DWORD itemBase = 0x690; // PickUpItemData[] PickUpDataList;//[Offset:
	const DWORD boxItemsCount = 0x688;
	/// <summary>
	/// New Drow Air Drop
	const DWORD PickUpDataList = 0x690;
	/// </summary>
	const DWORD CharacterMovement = 0x344; // CharacterMovementComponent* CharacterMovement;//[Offset:
	const DWORD LastUpdateVelocity = 0x250; // Vector LastUpdateVelocity;//[Offset:
	const DWORD Velocity = 0xc8; // Vector Velocity;//[Offset:

	const DWORD RelativeLocation = 0x118; // Vector RelativeLocation;//[Offset: 0x120,
	const DWORD RelativeRotation = 0x124; // Rotator RelativeRotation;//[Offset: 0x12c,
	const DWORD Position = 0x150;
	const DWORD IsVisible = 0x1bc;///SceneComponent.ActorComponent.Object , bool bVisible;//(ByteOffset: 0, ByteMask: 1, FieldMask: 1)[Offset:
	// Bone
	const DWORD Mesh = 0x340; // SkeletalMeshComponent* Mesh;//[Offset: 0x320, / tmpOffset
	const DWORD BodyAddv = 0x140; //           WeaponMeshCfg         **enum meshType;//[Offset
	const DWORD MinLOD = 0x5e8; // int MinLOD;//[Offset: 0x5b0, / boneOffset
	const DWORD ForceTPP = 0x1481;
	// Camera
	const DWORD LocalController = 0x2bb4; //STExtraPlayerController* STPlayerController;//[Offset:
	const DWORD PlayerCameraManager = 0x360;// Class: PlayerController.Controller.Actor.Object -> PlayerCameraManager* PlayerCameraManager;//[Offset: 0x340,
	const DWORD CameraCache = 0x370; // Class: PlayerCameraManager.Actor.Object -> CameraCacheEntry CameraCache;//[Offset: 0x350,
	const DWORD POV = 0x10; // Class: CameraCacheEntry -> MinimalViewInfo POV;//[Offset: 0x10,
	const DWORD Location = 0x0; // Class: MinimalViewInfo -> Vector Location;//[Offset: 0x0,
	const DWORD Rotation = 0x18; // Class: MinimalViewInfo -> Rotator Rotation;//[Offset: 0x18,
	const DWORD FOV = 0x24; // Class: MinimalViewInfo -> float FOV;//[Offset: 0x24,
	// Instant hit
	const DWORD CurrentReloadWeapon = 0x1e9c;
	//////SPEED OFFSETS/////
	const DWORD CharacterOverrideAttrs = 0xd68; //CharacterOverrideAttrs CharacterOverrideAttrs;
	//////FastLanding OFFSETS/////
	const DWORD ParachuteComponent = 0xfb8; // CharacterParachuteComponent* ParachuteComponent;//[Offset: 0xe88,
	//////////
	// NoRecoil offsets
	const DWORD AccessoriesVRecoilFactor = 0x870; //Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object float AccessoriesVRecoilFactor;//[Offset: 848
	const DWORD AccessoriesHRecoilFactor = 0x864; ///
	const DWORD AccessoriesRecoveryFactor = 0x868; // all + 10
	///////
	const DWORD bEnablePlayerPickUpAnim = 0x15f8;//float voiceCheckShowCD;//[Offset:

	///////
	const DWORD GameStateBase = 0x128;
	const DWORD ExtraBoostFactor = 0x11bc;//float ExtraBoostFactor;//[Offset:
	const DWORD bIsEngineStarted = 0x71d;; //bool bIsEngineStarted;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
	const DWORD AlivePlayerNum = 0x79c;
	const DWORD ElapsedTime = 0x340; //int ElapsedTime;//[Offset:
	const DWORD AliveTeamNum = 0x7a0;
	const DWORD PlayerNum = 0x53c; // int PlayerNum;//[Offset:
	const DWORD CurCircleWave = 0x720;
	const DWORD GameModeID = 0xb28;
	const DWORD IsFPPGameMode = 0x690;//IsFPPGameMode;//(ByteOffset: 0, ByteMask: 1, FieldMask: 255)[Offset:
	////////
	const DWORD ExtraShootInterval = 0x434; ///Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object float ExtraShootInterval;//[Offset:
	//
	extern INT MyTeamID;
	////////////////////////////////
	const DWORD CharacterParachuteComponent = 0xfb8; //CharacterParachuteComponent* ParachuteComponent
	const DWORD CurrentFallSpeed = 0x294; //CurrentFallSpeed;//[Offset:
	//////////////////////////////
	const DWORD BulletFireSpeed = 0x404; /// Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object float BulletFireSpeed
	const DWORD ShootInterval = 0x428; /// Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object float ShootInterval;//[Offset:
	const DWORD ShootWeaponEntity = 0xbc0; // ShootWeaponEntity* ShootWeaponEntityComp;//[Offset: ShootWeaponEntity* ShootWeaponEntityComp;//[Offset:
	const DWORD ShotGunVerticalSpread = 0x8b4; //Class: ShootWeaponEntity.WeaponEntity.WeaponLogicBaseComponent.ActorComponent.Object float ShotGunVerticalSpread
	const DWORD ShotGunHorizontalSpread = 0x8b8; ///********* float ShotGunHorizontalSpread
	const DWORD GameDeviationFactor = 0x8bc; ////********* float GameDeviationFactor
	const DWORD RecoilKickADS = 0x968; //****** float RecoilKickADS
	const DWORD AnimationKick = 0x980; //// ******** float AnimationKick;//[Offset:
	const DWORD LaunchGravityScale = 0x2f0;
	const DWORD SwitchWeaponSpeedScale = 0x1ba8; ///Class: STExtraBaseCharacter.STExtraCharacter.UAECharacter.Character.Pawn.Actor.Object float SwitchWeaponSpeedScale;//[Offset:
	const DWORD Controller = 0x320; //////// Class: Pawn.Actor.Object Controller* Controller;//[Offset:
	const DWORD ControlRotation = 0x31c; ///Class: Controller.Actor.Object Rotator ControlRotation;//[Offset
	//
	//
	////vehicle
	const DWORD VehicleCommon = 0x73c; // VehicleCommonComponent* VehicleCommon;//[Offset: 0x698,
	const DWORD HP = 0x1e4; // Class: VehicleCommonComponent.VehicleComponent.ActorComponent.Object -> float HP;//[Offset: 0x11c, Size: 4]
	const DWORD HPMax = 0x1e0; // Class: VehicleCommonComponent.VehicleComponent.ActorComponent.Object -> float HPMax;//[Offset: 0x118,
	const DWORD FuelMax = 0x1f8; // Class: VehicleCommonComponent.VehicleComponent.ActorComponent.Object -> float FuelMax;//[Offset: 0x130,
	const DWORD Fuel = 0x1fc; // Class: VehicleCommonComponent.VehicleComponent.ActorComponent.Object -> float Fuel;//[Offset: 0x134,

}