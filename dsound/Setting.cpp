#include "Setting.h"

bool Setting::fastrunv2 = false;

ImVec4	weapon::MG3{ 1.000f, 0.695f, 0.323f, 1.000f };
ImVec4	weapon::FAMAS{ 0.118f, 0.76f, 0.788f, 1.000f };
ImVec4	weapon::Mk14{ 0.844f, 0.066f, 1.000f, 1.000f };
ImVec4	weapon::G36{ 0.61f, 0.19f, 1.00f, 1.0f };
ImVec4	weapon::AN94{ 0.61f, 0.19f, 1.00f, 1.0f };

ImVec4 weapon::m16 = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::AKM = { 0.866f, 0.128f, 0.081f, 1.000f };
ImVec4  weapon::AWM = { 0.844f, 0.066f, 1.000f, 1.000f };
ImVec4  weapon::AWMimmo = { 0.844f, 0.066f, 1.000f, 1.000f };

ImVec4  weapon::scarl = { 1.000f, 0.695f, 0.323f, 1.000f };
ImVec4  weapon::m762 = { 0.118f, 0.76f, 0.788f, 1.000f };
ImVec4  weapon::M24 = { 0.844f, 0.066f, 1.000f, 1.000f };
ImVec4  weapon::GROZZA = { 0.279f, 0.990f, 0.812f, 1.000f };
ImVec4  weapon::scope8x = { 0.23f, 0.23f, 0.244f, 1.000f };
ImVec4  weapon::kar98 = { 0.844f, 0.066f, 1.000f, 1.000f };
ImVec4  weapon::Airdrop = { 0.279f, 0.990f, 0.812f, 1.000f };
ImVec4  weapon::Flare = { 0.252f, 1.40f, 0.40f, 1.0f };
ImVec4  weapon::Flaregun = { 0.252f, 1.40f, 0.40f, 1.0f };

/////////////////////////drop//////////////////////////

ImVec4   Colors::dp = { 1.000f, 0.760f, 0.150f, 1.000f };
ImVec4   Colors::mg3 = { 0.373f, 0.966f, 0.391f, 1.000f };
ImVec4   Colors::scope4x = { 0.23f, 0.23f, 0.244f, 1.000f };
ImVec4   Colors::scope3x = { 0.23f, 0.23f, 0.244f, 1.000f };
ImVec4  Colors::bag = { 0.529f, 0.127f, 0.903f, 1.000f };
ImVec4  Colors::armer = { 0.591f, 1.000f, 0.237f, 1.000f };
ImVec4  Colors::helmat = { 0.726f, 0.070f, 0.908f, 1.000f };
ImVec4  Colors::mosin = { 0.258f, 0.971f, 0.775f, 1.000f };
ImVec4   Colors::aug = { 0.442f, 0.971f, 0.122f, 1.000f };

ImVec4   Colors::g36 = { 0.671f, 0.217f, 1.000f, 1.000f };
ImVec4   Colors::assm = { 1.000f, 0.217f, 0.762f, 1.000f };
extern	ImVec4 Colors::Grandes = { 1.000f, 0.396f, 0.357f, 1.000f };
extern	ImVec4 Colors::ammo7 = { 0.957f, 0.353f, 0.226f, 1.000f };
extern	ImVec4 Colors::ammo5 = { 0.000f, 1.000f, 0.000f, 1.000f };
extern ImVec4 Colors::madkit = { 0.952f, 0.558f, 0.129f, 1.000f };

// color s



ImVec4  Colors::itemcolors;// = { 1.000f, 0.100f, 0.401f, 1.000f };
ImVec4  Colors::playerline = { 0.85f, 0.85f, 0.85f, 1.000f };
ImVec4  Colors::playercorner = { 1.0f, 0.70f,0.30f, 1.0f };
ImVec4  Colors::playerbox = { 1.0f, 1.0f,0.0f, 1.0f };
ImVec4  Colors::lotbox = { 1.0f, 1.0f,0.0f, 1.0f };
// ARGB
ImVec4  Colors::helthbar = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::boxColor = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::cornerColor = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::crosshairColor = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4 Colors::bot = { 0.900f, 0.025f, 0.025f, 1.0f };
ImVec4  Colors::player = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::vehicle = { 0.737f, 1.000f, 0.000f, 1.000f };
//RGB
ImVec4   Colors::botcorner = { 0.050f, 0.125f, 0.925f, 1.0f };
ImVec4  Colors::botline = { 0.050f, 0.025f, 0.925f, 1.0f };
ImVec4 Colors::circle = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::enemy = { 0.737f, 1.000f, 0.000f, 1.000f };
ImVec4  Colors::botbox = { 0.950f, 0.125f, 0.925f, 1.0f };
ImVec4 Colors::bone = { 0.85f, 0.85f, 0.85f, 1.000f };
ImVec4   Colors::fillrect = { 0.950f, 0.125f, 0.125f, 1.0f };
ImVec4  Colors::nam = { 1.0f, 1.0f, 1.0f, 1.0f };
ImVec4  Colors::Cweapon = { 1.0f, 1.0f, 1.0f, 1.0f };
ImVec4   Colors::nambar = { 0.880f, 0.185f, 0.25f, 1.0f };
ImVec4 Colors::bothealth = { 0.95f, 0.125f, 0.825f, 1.0f };
ImVec4  Colors::botname = { 0.050f, 0.825f, 0.185f, 1.0f };
ImVec4  Colors::playerhealth = { 0.50f, 0.725f, 0.105f, 1.0f };
ImVec4  Colors::textcolor = { 0.500f, 0.150f, 0.125f, 1.0f };

ImVec4  Colors::Granades = { 0.990f, 0.995f, 0.995f, 1.0f };
ImVec4  Colors::health = { 0.108f, 1.000f, 1.000f, 1.000f };
ImVec4  Colors::deadbox = { 0.737f, 1.000f, 0.000f, 1.000f };
ImVec4  Colors::deadboxitem = { 1.000f, 0.100f, 0.401f, 1.000f };
ImVec4 Colors::airdrop = { 1.000f, 0.695f, 0.323f, 1.000f };
ImVec4 Colors::airdropitem = { 0.300f, 0.695f, 0.323f, 1.000f };
ImVec4   Colors::scopetextcolor = { 0.000f, 0.995f, 0.995f, 1.000f };
ImVec4   Colors::allitem = { 0.034f, 1.000f, 0.040f, 1.000f };
ImVec4  Colors::scope6x = { 0.120f, 0.955f, 0.125f, 1.0f };
ImVec4 Colors::botbone = { 0.050f, 0.025f, 0.925f, 1.0f };
ImVec4 Colors::playerbone = { 0.986f, 0.952f, 0.209f, 1.000f };
ImVec4 Colors::magicline = { 0.85f, 0.85f, 0.85f, 1.000f };
ImVec4 Colors::bgcorner = { 0.000f, 1.000f, 0.964f, 1.000f };
ImVec4 Colors::fovcirclecolor = { 0.85f, 0.85f, 0.85f, 1.000f };
bool Setting::isLoadDriver = false;
bool Setting::antiscreen = false;
bool Setting::FastParachute = false;
bool Setting::flash = false;
float  Setting::overlaycolor = 0.0f;
struct tm* Setting::date_string;
bool Setting::Moreinfo = false;
bool Setting::cursor = false;
bool  Setting::MemoryAimbot = false;
bool  Setting::NoGravity = false;
bool  Setting::FastSwitchWeapon = false;
bool  Setting::noSpread = false;
bool  Setting::SpeedFire = false;
bool	Setting::MG3 = true;
bool	 Setting::FAMAS = true;
bool	 Setting::Mk14 = true;
bool	 Setting::G36 = true;
bool	 Setting::AN94 = true;

bool Setting::RefreshESP = true;
bool Setting::LoginPage = true;
bool Setting::Vng;

float Setting::warning = 18.0f;
bool Setting::CameraCatch = false;
bool Setting::CameraView = false;
bool Setting::information = true;
bool Setting::godView = false;
int Setting::Fightmodekey = 0;
int Setting::AimbotKey = 0x01;
int Setting::FastParachutekey = 0;

int Setting::Fastcarkey = 0;
int Setting::Backcarkey = 0;
int Setting::GodUp = 0;
int Setting::GodDown = 0;
int Setting::fastrunkey = 0;
int Setting::Flymankey = 0;
int Setting::PositionKey = 0;
int Setting::EnableKey = 0;
bool  Setting::plan = true;
ImVec4  Setting::plancolor = { 0.737f, 1.000f, 0.000f, 1.000f };
ImVec4  Setting::dotss = { 0.950f, 0.125f, 0.925f, 1.0f };

bool Setting::dots = true;
int Setting::redioption = 1;
bool Setting::manfly = false;
bool Setting::intv = false;
bool Setting::redioption2 = false;
float Setting::flym = 80000.0f;
int Setting::landspeed = 0;
int	Setting::magicv = 6;
int	Setting::flycarv = 30000.0f;
int	Setting::instantv = 700000.0f;
int	Setting::carsv = 300.0f;
int	Setting::fastrv = 3.0f;
int	Setting::view = 0.0f;
float	Setting::ipadview = 275.0f;

bool Setting::IsMagicInitialize = false;
bool Setting::Magntic = false;
float Setting::Aimspeed = 11;
int	Setting::curraim = 0;
char  Setting::filename[] = "C:\\Power.ini";
float Setting::fontsize = 13.0f;
float Setting::Normalfontsize = 12.0f;
int Setting::Lag = 40.0f;
int Setting::Lag2 = 35.0f;
extern float  Setting::plinesize = 0.7f;
extern float  Setting::pfullboxsize = 0.7f;
extern float  Setting::pcornersize = 0.7f;
extern float Setting::pbonesize = 0.7f;
extern float Setting::Namesize = 13.0f;
extern float Setting::Dissize = 12.0f;
extern float Setting::weaponsize = 12.0f;
extern float Setting::blinesize = 0.7f;
extern float Setting::bfullboxsize = 0.7f;
extern float Setting::bcornersize = 0.7f;
extern float Setting::bbonesize = 0.7f;

bool  Setting::Magic360deg = false;
bool  Setting::AimbotwithMagic = false;
bool  Setting::AimPrediction = true;
bool  Setting::MagicInsideFOV = false;

bool Setting::Luffy = false;
bool Setting::MagicX = false;
bool Setting::IpadVeiw = false;
bool Setting::crossHair = false;
bool Setting::knocked = false;
bool Setting::aimbotposition = true;

float Setting::fovcircleredus = 65.0f;
bool Setting::fovcircle = false;
ImVec4 Setting::colorcode;
bool Setting::botname = true;
bool Setting::plr_wpn = true;
bool Setting::bothealth = true;
bool Setting::botfullbox = false;
bool Setting::botblood = true;
bool Setting::botcorner = false;
//playr
bool Setting::BESP = true;
bool Setting::PESP = true;

bool Setting::pline = true;
bool Setting::botline = true;
bool Setting::phealth = true;
bool Setting::bg = true;

bool Setting::pfullbox = false;
bool Setting::pname = true;
bool Setting::pweapon = true;
bool Setting::pblood = true;
bool Setting::pcorner = false;
bool Setting::deadbox = true;
bool Setting::MAgicline = true;
bool Setting::fightmode = false;

bool Setting::feul = true;
bool Setting::hp = true;


bool Setting::differnt = true;
bool Setting::same = false;

bool Setting::style1 = false;
bool Setting::style2 = true;
bool Setting::botBone = true;

bool Setting::Bags = true;
bool Setting::Armer = false;
bool Setting::Helmat = true;

bool Setting::playerBone = true;
bool  Setting::airdrop = true;
bool  Setting::airdropitem = true;
bool  Setting::playerdeadbox = true;
bool  Setting::itemrect = false;
bool Setting::ShowMenu = true;
bool Setting::ShowMenuTwo = true;
bool Setting::ENDMENU = true;
bool Setting::Name = true;
bool Setting::Distance = true;
bool Setting::Distancee = true;
bool Setting::TotalEnemy = true;
bool Setting::Line = false;
bool Setting::Box = false;
bool Setting::Bone = true;
bool Setting::Health = false;
bool Setting::BombAlert = true;
bool Setting::Item = true;
bool Setting::Vehicle = true;

int Setting::engine = 0;
bool Setting::impitems = false;
bool Setting::scope = true;
bool Setting::graned = true;
bool Setting::healthitem = true;
bool Setting::Forcetpp = false;
bool  Setting::End = false;
bool Setting::allitemss = true;
bool Setting::instanthit = false;
bool Setting::fastrun = false;
bool Setting::fly = false;
bool Setting::carfly = false;
bool Setting::speedcar = false;
bool Setting::recoil = false;
bool Setting::vahicle_item = true;
bool Setting::Esp_Item_AKM = true;
float Setting::Esp_Item_AKM_Color[4] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Setting::Esp_Item_AKM_TextSize = 20.0f;


bool Setting::Esp_Item_M249 = true;
ImVec4 Colors::M249 = { 0.252f, 1.40f, 0.40f, 1.0f };

bool Setting::Esp_Item_Mk12 = true;
ImVec4 Colors::MK12 = { 1.00f, 0.796f, 0.715f, 1.0f };

bool Setting::Esp_Item_M762 = true;
float Setting::Esp_Item_M762_Color[4] = { 0.252f, 1.40f, 0.40f, 1.0f };
float Setting::Esp_Item_M762_TextSize = 25.0f;

bool Setting::Esp_Item_Mk47Mutant = true;
float Setting::Esp_Item_Mk47Mutant_Color[4] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Setting::Esp_Item_Mk47Mutant_TextSize = 20.0f;

bool Setting::Esp_Item_DP28 = true;
float Setting::Esp_Item_DP28_Color[4] = { 1.00f, 0.76f, 0.15f, 1.0f };
float Setting::Esp_Item_DP28_TextSize = 20.0f;

bool Setting::Esp_Item_SCARL = true;
float Setting::Esp_Item_SCARL_Color[4] = { 0.252f, 1.40f, 0.40f, 1.0f };
float Setting::Esp_Item_SCARL_TextSize = 25.0f;

bool Setting::Esp_Item_M416 = true;
float Setting::Esp_Item_M416_Color[4] = { 0.252f, 1.40f, 0.40f, 1.0f };
float Setting::Esp_Item_M416_TextSize = 25.0f;

bool Setting::Esp_Item_M16A4 = true;
float Setting::Esp_Item_M16A4_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_M16A4_TextSize = 20.0f;

bool Setting::Esp_Item_G36C = true;
float Setting::Esp_Item_G36C_Color[4] = { 0.00f, 1.0f, 0.0f, 1.0f };
float Setting::Esp_Item_G36C_TextSize = 20.0f;

bool Setting::Esp_Item_QBZ = true;
float Setting::Esp_Item_QBZ_Color[4] = { 0.252f, 1.40f, 0.40f, 1.0f };
float Setting::Esp_Item_QBZ_TextSize = 20.0f;

bool Setting::Esp_Item_QBU = true;
float Setting::Esp_Item_QBU_Color[4] = { 0.252f, 1.40f, 0.40f, 1.0f };
float Setting::Esp_Item_QBU_TextSize = 20.0f;

bool Setting::Esp_Item_SLR = true;
float Setting::Esp_Item_SLR_Color[4] = { 0.75f, 1.00f, 0.24f, 1.0f };
float Setting::Esp_Item_SLR_TextSize = 20.0f;

bool Setting::Esp_Item_SKS = true;
float Setting::Esp_Item_SKS_Color[4] = { 0.75f, 1.00f, 0.24f, 1.0f };
float Setting::Esp_Item_SKS_TextSize = 20.0f;

bool Setting::Esp_Item_Mini14 = true;
float Setting::Esp_Item_Mini14_Color[4] = { 0.75f, 1.00f, 0.24f, 1.0f };
float Setting::Esp_Item_Mini14_TextSize = 20.0f;

bool Setting::Esp_Item_M24 = true;
float Setting::Esp_Item_M24_Color[4] = { 0.75f, 1.00f, 0.24f, 1.0f };
float Setting::Esp_Item_M24_TextSize = 20.0f;
bool Setting::Esp_Item_Awm = true;
bool Setting::Esp_Item_Awmimo = true;
bool Setting::Esp_Item_Kar98k = true;
float Setting::Esp_Item_Kar98k_Color[4] = { 0.75f, 1.00f, 0.24f, 1.0f };
float Setting::Esp_Item_Kar98k_TextSize = 20.0f;

bool Setting::Esp_Item_PP19 = true;
float Setting::Esp_Item_PP19_Color[4] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Setting::Esp_Item_PP19_TextSize = 20.0f;

bool Setting::Esp_Item_TommyGun = true;
float Setting::Esp_Item_TommyGun_Color[4] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Setting::Esp_Item_TommyGun_TextSize = 20.0f;

bool Setting::Esp_Item_MP5K = true;
float Setting::Esp_Item_MP5K_Color[4] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Setting::Esp_Item_MP5K_TextSize = 20.0f;

bool Setting::Esp_Item_UMP9 = true;
float Setting::Esp_Item_UMP9_Color[4] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Setting::Esp_Item_UMP9_TextSize = 20.0f;

bool Setting::Esp_Item_Vector = true;
float Setting::Esp_Item_Vector_Color[4] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Setting::Esp_Item_Vector_TextSize = 20.0f;

bool Setting::Esp_Item_Uzi = true;
float Setting::Esp_Item_Uzi_Color[4] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Setting::Esp_Item_Uzi_TextSize = 20.0f;

bool Setting::Esp_Item_762mm = true;
float Setting::Esp_Item_762mm_Color[4] = { 0.232f, 1.232f, 0.11f, 1.0f };
float Setting::Esp_Item_762mm_TextSize = 20.0f;

bool Setting::Esp_Item_556mm = true;
float Setting::Esp_Item_556mm_Color[4] = { 0.20f, 1.126f, 0.20f, 1.0f };
float Setting::Esp_Item_556mm_TextSize = 20.0f;

bool Setting::Esp_Item_9mm = true;
float Setting::Esp_Item_9mm_Color[4] = { 0.75f, 1.00f, 0.24f, 1.0f };
float Setting::Esp_Item_9mm_TextSize = 20.0f;

bool Setting::Esp_Item_45ACP = false;
float Setting::Esp_Item_45ACP_Color[4] = { 1.00f, 0.96f, 0.56f, 1.0f };
float Setting::Esp_Item_45ACP_TextSize = 20.0f;

bool Setting::Esp_Item_Holo = true;
float Setting::Esp_Item_Holo_Color[4] = { 0.23f, 0.23f, 0.244f, 1.000f };
float Setting::Esp_Item_Holo_TextSize = 20.0f;

bool Setting::Esp_Item_x2 = true;
float Setting::Esp_Item_x2_Color[4] = { 1.00f, 0.0f, 1.0f, 1.0f };
float Setting::Esp_Item_x2_TextSize = 20.0f;

bool Setting::Esp_Item_x3 = true;
float Setting::Esp_Item_x3_Color[4] = { 1.00f, 0.0f, 1.0f, 1.0f };
float Setting::Esp_Item_x3_TextSize = 20.0f;

bool Setting::Esp_Item_x4 = true;
float Setting::Esp_Item_x4_Color[4] = { 1.00f, 0.0f, 1.0f, 1.0f };
float Setting::Esp_Item_x4_TextSize = 20.0f;

bool Setting::Esp_Item_x6 = true;
float Setting::Esp_Item_x6_Color[4] = { 1.00f, 0.0f, 1.0f, 1.0f };
float Setting::Esp_Item_x6_TextSize = 20.0f;

bool Setting::Esp_Item_x8 = true;
float Setting::Esp_Item_x8_Color[4] = { 1.00f, 0.0f, 1.0f, 1.0f };
float Setting::Esp_Item_x8_TextSize = 20.0f;

bool Setting::Esp_Item_Bag1 = true;
float Setting::Esp_Item_Bag1_Color[4] = { 0.61f, 0.19f, 1.00f, 1.0f };
float Setting::Esp_Item_Bag1_TextSize = 20.0f;

bool Setting::Esp_Item_Bag2 = true;
float Setting::Esp_Item_Bag2_Color[4] = { 0.61f, 0.19f, 1.00f, 1.0f };
float Setting::Esp_Item_Bag2_TextSize = 20.0f;

bool Setting::Esp_Item_Bag3 = true;
float Setting::Esp_Item_Bag3_Color[4] = { 0.118f, 0.76f, 0.788f, 1.000f };
float Setting::Esp_Item_Bag3_TextSize = 20.0f;

bool Setting::Esp_Item_Armor1 = true;
float Setting::Esp_Item_Armor1_Color[4] = { 0.61f, 0.19f, 1.00f, 1.0f };
float Setting::Esp_Item_Armor1_TextSize = 20.0f;

bool Setting::Esp_Item_Armor2 = true;
float Setting::Esp_Item_Armor2_Color[4] = { 0.61f, 0.19f, 1.00f, 1.0f };
float Setting::Esp_Item_Armor2_TextSize = 20.0f;

bool Setting::Esp_Item_Armor3 = true;
float Setting::Esp_Item_Armor3_Color[4] = { 0.118f, 0.76f, 0.788f, 1.000f };
float Setting::Esp_Item_Armor3_TextSize = 20.0f;

bool Setting::Esp_Item_Helmet1 = true;
float Setting::Esp_Item_Helmet1_Color[4] = { 0.61f, 0.19f, 1.00f, 1.0f };
float Setting::Esp_Item_Helmet1_TextSize = 20.0f;

bool Setting::Esp_Item_Helmet2 = true;
float Setting::Esp_Item_Helmet2_Color[4] = { 0.61f, 0.19f, 1.00f, 1.0f };
float Setting::Esp_Item_Helmet2_TextSize = 20.0f;

bool Setting::Esp_Item_Helmet3 = true;
float Setting::Esp_Item_Helmet3_Color[4] = { 0.118f, 0.76f, 0.788f, 1.000f };
float Setting::Esp_Item_Helmet3_TextSize = 20.0f;

bool Setting::Esp_Item_Frag = true;
float Setting::Esp_Item_Frag_Color[4] = { 1.00f, 0.20f, 0.70f, 1.0f };
float Setting::Esp_Item_Frag_TextSize = 20.0f;

bool Setting::Esp_Item_Smoke = true;
float Setting::Esp_Item_Smoke_Color[4] = { 1.00f, 0.20f, 0.70f, 1.0f };
float Setting::Esp_Item_Smoke_TextSize = 20.0f;

bool Setting::Esp_Item_Molotof = true;
float Setting::Esp_Item_Molotof_Color[4] = { 1.00f, 0.20f, 0.70f, 1.0f };
float Setting::Esp_Item_Molotof_TextSize = 20.0f;

bool Setting::Esp_Item_MedKit = true;
float Setting::Esp_Item_MedKit_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_MedKit_TextSize = 20.0f;

bool Setting::Esp_Item_FirstAidKit = true;
float Setting::Esp_Item_FirstAidKit_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_FirstAidKit_TextSize = 20.0f;

bool Setting::Esp_Item_Painkiller = true;
float Setting::Esp_Item_Painkiller_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_Painkiller_TextSize = 20.0f;

bool Setting::Esp_Item_EnergyDrink = true;
float Setting::Esp_Item_EnergyDrink_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_EnergyDrink_TextSize = 20.0f;

bool Setting::Esp_Item_AdrenalineSyringe = true;
float Setting::Esp_Item_AdrenalineSyringe_Color[4] = { 1.00f, 0.27f, 0.00f, 1.0f };
float Setting::Esp_Item_AdrenalineSyringe_TextSize = 20.0f;

bool Setting::Esp_Item_FlareGun = true;
float Setting::Esp_Item_FlareGun_Color[4] = { 0.118f, 0.76f, 0.788f, 1.000f };
float Setting::Esp_Item_FlareGun_TextSize = 20.0f;

bool Setting::Esp_Item_Flare = true;
float Setting::Esp_Item_Flare_Color[4] = { 0.118f, 0.76f, 0.788f, 1.000f };
float Setting::Esp_Item_Flare_TextSize = 20.0f;

bool Setting::Esp_Item_AirDrop = true;
float Setting::Esp_Item_AirDrop_Color[4] = { 0.118f, 0.76f, 0.788f, 1.000f };
float Setting::Esp_Item_AirDrop_TextSize = 20.0f;

bool Setting::Aimbot = false;

bool Setting::FlagText = false;
bool Setting::Flagimge = true;
bool Setting::Flags = true;

bool Setting::MagicBullet = false;
bool Setting::silent = false;