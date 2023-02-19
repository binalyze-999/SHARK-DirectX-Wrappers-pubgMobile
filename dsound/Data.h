#pragma once
#include<array>
#include "Includes.h"
#include "Utility.h"
#include "Setting.h"
#include "Algorithm.h"
#include "Offset.h"
#include "Global.h"

struct AActor
{
	bool dead;
	int status;
	DWORD Pose;
	bool IsBot;
	string Nation;
	string weapon;
	VECTOR3 Position;
	FLOAT Health;
	FLOAT HealthMax;
	FLOAT DeathBreath;
	string Name;
	wstring nam;
	INT TeamId;
	DWORD Address;
	VECTOR3 Velocity;
	INT MyTeamId;
	VECTOR3 HeadPos;
	VECTOR3 ChestPos;
	VECTOR3 PelvisPos;
	VECTOR3 lSholderPos;
	VECTOR3 rSholderPos;
	VECTOR3 lElbowPos;
	VECTOR3 rElbowPos;
	VECTOR3 lWristPos;
	VECTOR3 rWristPos;
	VECTOR3 lThighPos;
	VECTOR3 rThighPos;
	VECTOR3 lKneePos;
	VECTOR3 rKneePos;
	VECTOR3 lAnklePos;
	VECTOR3 rAnklePos;
};

struct BombAlert
{
	int timeLeft;
	string Name;
	VECTOR3 Position;
};

struct Item
{
	string Name;
	VECTOR3 Position;
};
struct impItem
{
	string Name;
	VECTOR3 Position;
};
struct Vehicle
{
	float oil;
	float hp;
	string Name;
	VECTOR3 Position;
	string Address;
	bool driving;
};

struct Itemb {
	std::string Displayname;
	ImVec4 colorcod;

};
struct Airdrop
{
	std::string Displayname;
	string Name;
	VECTOR3 Position;
	std::vector<Item> boxitemm;
};
struct Deadbox
{
	int picid;
	std::vector<Itemb> boxitem;
	string Name;
	VECTOR3 Position;
};


class Espp {
public:
	
	std::vector<Airdrop> LootData, LootDatadatar;

	Airdrop lboxx, temploot;
	std::string airdropstring;
	std::vector<Deadbox> lootbox, lootboxr;
	VECTOR3 mypos;
	DWORD myadd;
	//D3DMATRIX ViewMatrix;
	Deadbox lbox;
};
extern Espp* g_pEsp;

namespace Data
{
	
	extern DWORD ViewMatrixBase;
	extern DWORD UWorld;
	extern DWORD NetDriver;
	extern DWORD GameState;
	extern int ElapsedTime;
	extern DWORD LocalPlayer;
	extern DWORD uMyobject;
	extern DWORD PlayerController;
	extern DWORD EntityAddress;
	extern DWORD PlayerCameraManager;
	extern CameraCacheEntry CameraCache;
	extern DWORD LocalController;
	extern DWORD uLevel;
	extern DWORD gameInstance;
	extern DWORD Ue4Base;
	extern DWORD playerControllerrr;
	extern DWORD playerCarry;


	extern vector<AActor>  AActorList;
	extern vector<BombAlert> BombAlertList;
	extern vector<Item> ItemList;
	extern vector<impItem>impItemList;
	extern vector<Vehicle>VehicleList;


	DWORD GetViewMatrixBase(DWORD StartAddress, DWORD EndAddress);

	VOID QueryThread();
	VOID ItemThread();
	void  Cache();
};

