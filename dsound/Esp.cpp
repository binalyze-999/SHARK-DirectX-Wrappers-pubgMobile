#define STB_IMAGE_IMPLEMENTATION
#include"stb_image.h"
#pragma warning(disable : 4996)
#include "xorstr.hpp"
#include"SimpleIni.h"
#include<D3DX11tex.h>
#define LOADER_BRAND "Loader base"
#include "Esp.h"
#include <iostream>
#include <fstream>
#include"Mem.h"
#include "api/KeyAuth.hpp"
#include "Discord.h"
#include "Bicatcho.h"
#pragma region Flags
#include "flags/AF.h"
#include "flags/AL.h"
#include "flags/DZ.h"
#include "flags/AS.h"
#include "flags/AD.h"
#include "flags/AO.h"
#include "flags/AI.h"
#include "flags/G1.h"
#include "flags/AG.h"
#include "flags/AR.h"
#include "flags/AM.h"
#include "flags/AW.h"
#include "flags/AU.h"
#include "flags/AT.h"
#include "flags/AZ.h"
#include "flags/BS.h"
#include "flags/BH.h"
#include "flags/BD.h"
#include "flags/BB.h"
#include "flags/BY.h"
#include "flags/BE.h"
#include "flags/BZ.h"
#include "flags/BJ.h"
#include "flags/BM.h"
#include "flags/BT.h"
#include "flags/BO.h"
#include "flags/BA.h"
#include "flags/BW.h"
#include "flags/BV.h"
#include "flags/BR.h"
#include "flags/IO.h"
#include "flags/BN.h"
#include "flags/BG.h"
#include "flags/BF.h"
#include "flags/BI.h"
#include "flags/CV.h"
#include "flags/KH.h"
#include "flags/CM.h"
#include "flags/CA.h"
#include "flags/KY.h"
#include "flags/CF.h"
#include "flags/TD.h"
#include "flags/CL.h"
#include "flags/CN.h"
#include "flags/CX.h"
#include "flags/CC.h"
#include "flags/CO.h"
#include "flags/KM.h"
#include "flags/CD.h"
#include "flags/CG.h"
#include "flags/CK.h"
#include "flags/CR.h"
#include "flags/HR.h"
#include "flags/CU.h"
#include "flags/CW.h"
#include "flags/CY.h"
#include "flags/CZ.h"
#include "flags/CI.h"
#include "flags/DK.h"
#include "flags/DJ.h"
#include "flags/DM.h"
#include "flags/DO.h"
#include "flags/EC.h"
#include "flags/EG.h"
#include "flags/SV.h"
#include "flags/GQ.h"
#include "flags/ER.h"
#include "flags/EE.h"
#include "flags/SZ.h"
#include "flags/ET.h"
#include "flags/FK.h"
#include "flags/FO.h"
#include "flags/FJ.h"
#include "flags/FI.h"
#include "flags/FR.h"
#include "flags/GF.h"
#include "flags/PF.h"
#include "flags/TF.h"
#include "flags/GA.h"
#include "flags/GM.h"
#include "flags/GE.h"
#include "flags/DE.h"
#include "flags/GH.h"
#include "flags/GI.h"
#include "flags/GR.h"
#include "flags/GL.h"
#include "flags/GD.h"
#include "flags/GP.h"
#include "flags/GU.h"
#include "flags/GT.h"
#include "flags/GG.h"
#include "flags/GN.h"
#include "flags/GW.h"
#include "flags/GY.h"
#include "flags/HT.h"
#include "flags/HM.h"
#include "flags/VA.h"
#include "flags/HN.h"
#include "flags/HK.h"
#include "flags/HU.h"
#include "flags/JP.h"
#include "flags/JE.h"
#include "flags/JM.h"
#include "flags/JO.h"
#include "flags/KZ.h"
#include "flags/KE.h"
#include "flags/KI.h"
#include "flags/KP.h"
#include "flags/KR.h"
#include "flags/KW.h"
#include "flags/KG.h"
#include "flags/LA.h"
#include "flags/LV.h"
#include "flags/LB.h"
#include "flags/LS.h"
#include "flags/LR.h"
#include "flags/LY.h"
#include "flags/LI.h"
#include "flags/LT.h"
#include "flags/LU.h"
#include "flags/MO.h"
#include "flags/MG.h"
#include "flags/MW.h"
#include "flags/MY.h"
#include "flags/MV.h"
#include "flags/ML.h"
#include "flags/MT.h"
#include "flags/MH.h"
#include "flags/MQ.h"
#include "flags/MR.h"
#include "flags/MU.h"
#include "flags/YT.h"
#include "flags/MX.h"
#include "flags/FM.h"
#include "flags/MD.h"
#include "flags/MC.h"
#include "flags/MN.h"
#include "flags/ME.h"
#include "flags/MS.h"
#include "flags/MA.h"
#include "flags/MZ.h"
#include "flags/MM.h"
#include "flags/NA.h"
#include "flags/NR.h"
#include "flags/NP.h"
#include "flags/NL.h"
#include "flags/NC.h"
#include "flags/NZ.h"
#include "flags/NI.h"
#include "flags/NE.h"
#include "flags/NG.h"
#include "flags/NU.h"
#include "flags/NF.h"
#include "flags/MP.h"
#include "flags/NO.h"
#include "flags/PK.h"
#include "flags/PW.h"
#include "flags/PS.h"
#include "flags/PA.h"
#include "flags/PG.h"
#include "flags/PY.h"
#include "flags/PE.h"
#include "flags/PH.h"
#include "flags/PN.h"
#include "flags/PL.h"
#include "flags/PT.h"
#include "flags/PR.h"
#include "flags/QA.h"
#include "flags/MK.h"
#include "flags/RO.h"
#include "flags/RU.h"
#include "flags/RW.h"
#include "flags/RE.h"
#include "flags/BL.h"
#include "flags/SH.h"
#include "flags/KN.h"
#include "flags/LC.h"
#include "flags/MF.h"
#include "flags/PM.h"
#include "flags/VC.h"
#include "flags/WS.h"
#include "flags/SM.h"
#include "flags/ST.h"
#include "flags/SA.h"
#include "flags/SN.h"
#include "flags/RS.h"
#include "flags/SC.h"
#include "flags/SL.h"
#include "flags/SG.h"
#include "flags/SX.h"
#include "flags/SK.h"
#include "flags/SI.h"
#include "flags/SB.h"
#include "flags/SO.h"
#include "flags/ZA.h"
#include "flags/GS.h"
#include "flags/SS.h"
#include "flags/LK.h"
#include "flags/SD.h"
#include "flags/SR.h"
#include "flags/SJ.h"
#include "flags/SE.h"
#include "flags/CH.h"
#include "flags/SY.h"
#include "flags/TW.h"
#include "flags/TJ.h"
#include "flags/TZ.h"
#include "flags/TH.h"
#include "flags/TL.h"
#include "flags/TG.h"
#include "flags/TK.h"
#include "flags/TO.h"
#include "flags/TT.h"
#include "flags/TN.h"
#include "flags/TR.h"
#include "flags/TM.h"
#include "flags/TC.h"
#include "flags/TV.h"
#include "flags/UG.h"
#include "flags/UA.h"
#include "flags/AE.h"
#include "flags/GB.h"
#include "flags/US.h"
#include "flags/UY.h"
#include "flags/UZ.h"
#include "flags/VU.h"
#include "flags/VE.h"
#include "flags/VN.h"
#include "flags/VG.h"
#include "flags/VI.h"
#include "flags/WF.h"

#include "flags/YE.h"
#include "flags/ZM.h"
#include "flags/ZW.h"
#include "flags/AX.h"
#include "flags/IS.h"
#include "flags/IN.h"
#include "flags/ID.h"
#include "flags/IR.h"
#include "flags/IQ.h"
#include "flags/IE.h"
#include "flags/IM.h"
#include "flags/IL.h"
#include "flags/IT.h"
#pragma endregion

#pragma region Grenades

ID3D11ShaderResourceView* wepMolotof = nullptr;
ID3D11ShaderResourceView* wepGrenade = nullptr;
#pragma endregion
#pragma region Grenades


ID3D11ShaderResourceView* wep5Ammo = nullptr;
ID3D11ShaderResourceView* wep9Ammo = nullptr;
ID3D11ShaderResourceView* wep45Ammo = nullptr;
ID3D11ShaderResourceView* wep762Ammo = nullptr;
ID3D11ShaderResourceView* wepAkm = nullptr;
ID3D11ShaderResourceView* wepAug = nullptr;
ID3D11ShaderResourceView* wepAwm = nullptr;
ID3D11ShaderResourceView* wepAwmAmmo = nullptr;
ID3D11ShaderResourceView* wepBandage = nullptr;
ID3D11ShaderResourceView* wepCrossbow = nullptr;
ID3D11ShaderResourceView* wepDbs = nullptr;
ID3D11ShaderResourceView* wepFirstAidKit = nullptr;
ID3D11ShaderResourceView* wepFlare = nullptr;
ID3D11ShaderResourceView* wepFlareAmmo = nullptr;
ID3D11ShaderResourceView* wepG36c = nullptr;
ID3D11ShaderResourceView* wepGroza = nullptr;
ID3D11ShaderResourceView* wepHelmet1 = nullptr;
ID3D11ShaderResourceView* wepHelmet2 = nullptr;
ID3D11ShaderResourceView* wepHelmet3 = nullptr;

#pragma endregion


#pragma region FLAGS

ID3D11ShaderResourceView* AFFLAG = nullptr;

ID3D11ShaderResourceView* ALFLAG = nullptr;

ID3D11ShaderResourceView* DZFLAG = nullptr;

ID3D11ShaderResourceView* ASFLAG = nullptr;

ID3D11ShaderResourceView* ADFLAG = nullptr;

ID3D11ShaderResourceView* AOFLAG = nullptr;

ID3D11ShaderResourceView* AIFLAG = nullptr;

ID3D11ShaderResourceView* AQFLAG = nullptr;

ID3D11ShaderResourceView* AGFLAG = nullptr;

ID3D11ShaderResourceView* ARFLAG = nullptr;

ID3D11ShaderResourceView* AMFLAG = nullptr;

ID3D11ShaderResourceView* AWFLAG = nullptr;

ID3D11ShaderResourceView* AUFLAG = nullptr;

ID3D11ShaderResourceView* ATFLAG = nullptr;

ID3D11ShaderResourceView* AZFLAG = nullptr;

ID3D11ShaderResourceView* BSFLAG = nullptr;

ID3D11ShaderResourceView* BHFLAG = nullptr;

ID3D11ShaderResourceView* BDFLAG = nullptr;

ID3D11ShaderResourceView* BBFLAG = nullptr;

ID3D11ShaderResourceView* BYFLAG = nullptr;

ID3D11ShaderResourceView* BEFLAG = nullptr;

ID3D11ShaderResourceView* BZFLAG = nullptr;

ID3D11ShaderResourceView* BJFLAG = nullptr;

ID3D11ShaderResourceView* BMFLAG = nullptr;

ID3D11ShaderResourceView* BTFLAG = nullptr;

ID3D11ShaderResourceView* BOFLAG = nullptr;

ID3D11ShaderResourceView* BQFLAG = nullptr;

ID3D11ShaderResourceView* BAFLAG = nullptr;

ID3D11ShaderResourceView* BWFLAG = nullptr;

ID3D11ShaderResourceView* BVFLAG = nullptr;

ID3D11ShaderResourceView* BRFLAG = nullptr;

ID3D11ShaderResourceView* IOFLAG = nullptr;

ID3D11ShaderResourceView* BNFLAG = nullptr;

ID3D11ShaderResourceView* BGFLAG = nullptr;

ID3D11ShaderResourceView* BFFLAG = nullptr;

ID3D11ShaderResourceView* BIFLAG = nullptr;

ID3D11ShaderResourceView* CVFLAG = nullptr;

ID3D11ShaderResourceView* KHFLAG = nullptr;

ID3D11ShaderResourceView* CMFLAG = nullptr;

ID3D11ShaderResourceView* CAFLAG = nullptr;

ID3D11ShaderResourceView* KYFLAG = nullptr;

ID3D11ShaderResourceView* CFFLAG = nullptr;

ID3D11ShaderResourceView* TDFLAG = nullptr;

ID3D11ShaderResourceView* CLFLAG = nullptr;

ID3D11ShaderResourceView* CNFLAG = nullptr;

ID3D11ShaderResourceView* CXFLAG = nullptr;

ID3D11ShaderResourceView* CCFLAG = nullptr;

ID3D11ShaderResourceView* COFLAG = nullptr;

ID3D11ShaderResourceView* KMFLAG = nullptr;

ID3D11ShaderResourceView* CDFLAG = nullptr;
ID3D11ShaderResourceView* CGFLAG = nullptr;

ID3D11ShaderResourceView* CKFLAG = nullptr;

ID3D11ShaderResourceView* CRFLAG = nullptr;

ID3D11ShaderResourceView* HRFLAG = nullptr;

ID3D11ShaderResourceView* CUFLAG = nullptr;

ID3D11ShaderResourceView* CWFLAG = nullptr;

ID3D11ShaderResourceView* CYFLAG = nullptr;

ID3D11ShaderResourceView* CZFLAG = nullptr;

ID3D11ShaderResourceView* CIFLAG = nullptr;

ID3D11ShaderResourceView* DKFLAG = nullptr;

ID3D11ShaderResourceView* DJFLAG = nullptr;

ID3D11ShaderResourceView* DMFLAG = nullptr;

ID3D11ShaderResourceView* DOFLAG = nullptr;

ID3D11ShaderResourceView* ECFLAG = nullptr;

ID3D11ShaderResourceView* EGFLAG = nullptr;

ID3D11ShaderResourceView* SVFLAG = nullptr;

ID3D11ShaderResourceView* GQFLAG = nullptr;

ID3D11ShaderResourceView* ERFLAG = nullptr;

ID3D11ShaderResourceView* EEFLAG = nullptr;

ID3D11ShaderResourceView* SZFLAG = nullptr;
ID3D11ShaderResourceView* ETFLAG = nullptr;
ID3D11ShaderResourceView* FKFLAG = nullptr;

ID3D11ShaderResourceView* FOFLAG = nullptr;
ID3D11ShaderResourceView* FJFLAG = nullptr;

ID3D11ShaderResourceView* FIFLAG = nullptr;

ID3D11ShaderResourceView* FRFLAG = nullptr;

ID3D11ShaderResourceView* GFFLAG = nullptr;

ID3D11ShaderResourceView* PFFLAG = nullptr;
ID3D11ShaderResourceView* TFFLAG = nullptr;
ID3D11ShaderResourceView* GAFLAG = nullptr;
ID3D11ShaderResourceView* GMFLAG = nullptr;
ID3D11ShaderResourceView* GEFLAG = nullptr;
ID3D11ShaderResourceView* DEFLAG = nullptr;
ID3D11ShaderResourceView* GHFLAG = nullptr;
ID3D11ShaderResourceView* GIFLAG = nullptr;
ID3D11ShaderResourceView* GRFLAG = nullptr;
ID3D11ShaderResourceView* GLFLAG = nullptr;
ID3D11ShaderResourceView* GDFLAG = nullptr;
ID3D11ShaderResourceView* GPFLAG = nullptr;
ID3D11ShaderResourceView* GUFLAG = nullptr;
ID3D11ShaderResourceView* GTFLAG = nullptr;
ID3D11ShaderResourceView* GGFLAG = nullptr;
ID3D11ShaderResourceView* GNFLAG = nullptr;
ID3D11ShaderResourceView* GWFLAG = nullptr;
ID3D11ShaderResourceView* GYFLAG = nullptr;
ID3D11ShaderResourceView* HTFLAG = nullptr;
ID3D11ShaderResourceView* HMFLAG = nullptr;
ID3D11ShaderResourceView* VAFLAG = nullptr;
ID3D11ShaderResourceView* HNFLAG = nullptr;
ID3D11ShaderResourceView* HKFLAG = nullptr;
ID3D11ShaderResourceView* HUFLAG = nullptr;
ID3D11ShaderResourceView* JMFLAG = nullptr;
ID3D11ShaderResourceView* G1FLAG = nullptr;
ID3D11ShaderResourceView* JPFLAG = nullptr;
ID3D11ShaderResourceView* JEFLAG = nullptr;
ID3D11ShaderResourceView* JOFLAG = nullptr;
ID3D11ShaderResourceView* KZFLAG = nullptr;
ID3D11ShaderResourceView* KEFLAG = nullptr;
ID3D11ShaderResourceView* KIFLAG = nullptr;
ID3D11ShaderResourceView* KPFLAG = nullptr;
ID3D11ShaderResourceView* KRFLAG = nullptr;
ID3D11ShaderResourceView* KWFLAG = nullptr;
ID3D11ShaderResourceView* KGFLAG = nullptr;
ID3D11ShaderResourceView* LAFLAG = nullptr;

ID3D11ShaderResourceView* LVFLAG = nullptr;
ID3D11ShaderResourceView* LBFLAG = nullptr;
ID3D11ShaderResourceView* LSFLAG = nullptr;
ID3D11ShaderResourceView* LRFLAG = nullptr;

ID3D11ShaderResourceView* LYFLAG = nullptr;

ID3D11ShaderResourceView* LIFLAG = nullptr;

ID3D11ShaderResourceView* LTFLAG = nullptr;

ID3D11ShaderResourceView* LUFLAG = nullptr;

ID3D11ShaderResourceView* MOFLAG = nullptr;

ID3D11ShaderResourceView* MGFLAG = nullptr;

ID3D11ShaderResourceView* MWFLAG = nullptr;

ID3D11ShaderResourceView* MYFLAG = nullptr;

ID3D11ShaderResourceView* MVFLAG = nullptr;

ID3D11ShaderResourceView* MLFLAG = nullptr;

ID3D11ShaderResourceView* MTFLAG = nullptr;

ID3D11ShaderResourceView* MHFLAG = nullptr;

ID3D11ShaderResourceView* MQFLAG = nullptr;

ID3D11ShaderResourceView* MRFLAG = nullptr;

ID3D11ShaderResourceView* MUFLAG = nullptr;

ID3D11ShaderResourceView* YTFLAG = nullptr;

ID3D11ShaderResourceView* MXFLAG = nullptr;

ID3D11ShaderResourceView* FMFLAG = nullptr;

ID3D11ShaderResourceView* MDFLAG = nullptr;

ID3D11ShaderResourceView* MCFLAG = nullptr;

ID3D11ShaderResourceView* MNFLAG = nullptr;

ID3D11ShaderResourceView* MEFLAG = nullptr;

ID3D11ShaderResourceView* MSFLAG = nullptr;

ID3D11ShaderResourceView* MAFLAG = nullptr;
ID3D11ShaderResourceView* MZFLAG = nullptr;
ID3D11ShaderResourceView* MMFLAG = nullptr;
ID3D11ShaderResourceView* NAFLAG = nullptr;
ID3D11ShaderResourceView* NRFLAG = nullptr;

ID3D11ShaderResourceView* NPFLAG = nullptr;

ID3D11ShaderResourceView* NLFLAG = nullptr;

ID3D11ShaderResourceView* NCFLAG = nullptr;

ID3D11ShaderResourceView* NZFLAG = nullptr;

ID3D11ShaderResourceView* NIFLAG = nullptr;

ID3D11ShaderResourceView* NEFLAG = nullptr;

ID3D11ShaderResourceView* NGFLAG = nullptr;

ID3D11ShaderResourceView* NUFLAG = nullptr;

ID3D11ShaderResourceView* NFFLAG = nullptr;

ID3D11ShaderResourceView* MPFLAG = nullptr;

ID3D11ShaderResourceView* NOFLAG = nullptr;

ID3D11ShaderResourceView* OMFLAG = nullptr;

ID3D11ShaderResourceView* PKFLAG = nullptr;

ID3D11ShaderResourceView* PWFLAG = nullptr;

ID3D11ShaderResourceView* PSFLAG = nullptr;

ID3D11ShaderResourceView* PAFLAG = nullptr;

ID3D11ShaderResourceView* PGFLAG = nullptr;

ID3D11ShaderResourceView* PYFLAG = nullptr;

ID3D11ShaderResourceView* PEFLAG = nullptr;

ID3D11ShaderResourceView* PHFLAG = nullptr;

ID3D11ShaderResourceView* PNFLAG = nullptr;

ID3D11ShaderResourceView* PLFLAG = nullptr;

ID3D11ShaderResourceView* PTFLAG = nullptr;

ID3D11ShaderResourceView* PRFLAG = nullptr;
ID3D11ShaderResourceView* QAFLAG = nullptr;

ID3D11ShaderResourceView* MKFLAG = nullptr;

ID3D11ShaderResourceView* ROFLAG = nullptr;

ID3D11ShaderResourceView* RUFLAG = nullptr;

ID3D11ShaderResourceView* RWFLAG = nullptr;

ID3D11ShaderResourceView* REFLAG = nullptr;

ID3D11ShaderResourceView* BLFLAG = nullptr;

ID3D11ShaderResourceView* SHFLAG = nullptr;

ID3D11ShaderResourceView* KNFLAG = nullptr;

ID3D11ShaderResourceView* LCFLAG = nullptr;

ID3D11ShaderResourceView* MFFLAG = nullptr;

ID3D11ShaderResourceView* PMFLAG = nullptr;

ID3D11ShaderResourceView* VCFLAG = nullptr;

ID3D11ShaderResourceView* WSFLAG = nullptr;

ID3D11ShaderResourceView* SMFLAG = nullptr;

ID3D11ShaderResourceView* STFLAG = nullptr;

ID3D11ShaderResourceView* SAFLAG = nullptr;

ID3D11ShaderResourceView* SNFLAG = nullptr;

ID3D11ShaderResourceView* RSFLAG = nullptr;

ID3D11ShaderResourceView* SCFLAG = nullptr;

ID3D11ShaderResourceView* SLFLAG = nullptr;

ID3D11ShaderResourceView* SGFLAG = nullptr;

ID3D11ShaderResourceView* SXFLAG = nullptr;

ID3D11ShaderResourceView* SKFLAG = nullptr;

ID3D11ShaderResourceView* SIFLAG = nullptr;

ID3D11ShaderResourceView* SBFLAG = nullptr;

ID3D11ShaderResourceView* SOFLAG = nullptr;

ID3D11ShaderResourceView* ZAFLAG = nullptr;

ID3D11ShaderResourceView* GSFLAG = nullptr;

ID3D11ShaderResourceView* SSFLAG = nullptr;

ID3D11ShaderResourceView* ESFLAG = nullptr;

ID3D11ShaderResourceView* LKFLAG = nullptr;

ID3D11ShaderResourceView* SDFLAG = nullptr;

ID3D11ShaderResourceView* SRFLAG = nullptr;

ID3D11ShaderResourceView* SJFLAG = nullptr;

ID3D11ShaderResourceView* SEFLAG = nullptr;

ID3D11ShaderResourceView* CHFLAG = nullptr;

ID3D11ShaderResourceView* SYFLAG = nullptr;

ID3D11ShaderResourceView* TWFLAG = nullptr;

ID3D11ShaderResourceView* TJFLAG = nullptr;

ID3D11ShaderResourceView* TZFLAG = nullptr;

ID3D11ShaderResourceView* THFLAG = nullptr;

ID3D11ShaderResourceView* TLFLAG = nullptr;

ID3D11ShaderResourceView* TGFLAG = nullptr;

ID3D11ShaderResourceView* TKFLAG = nullptr;

ID3D11ShaderResourceView* TOFLAG = nullptr;

ID3D11ShaderResourceView* TTFLAG = nullptr;

ID3D11ShaderResourceView* TNFLAG = nullptr;

ID3D11ShaderResourceView* TRFLAG = nullptr;

ID3D11ShaderResourceView* TMFLAG = nullptr;

ID3D11ShaderResourceView* TCFLAG = nullptr;

ID3D11ShaderResourceView* TVFLAG = nullptr;

ID3D11ShaderResourceView* UGFLAG = nullptr;

ID3D11ShaderResourceView* UAFLAG = nullptr;

ID3D11ShaderResourceView* AEFLAG = nullptr;

ID3D11ShaderResourceView* GBFLAG = nullptr;

ID3D11ShaderResourceView* USFLAG = nullptr;

ID3D11ShaderResourceView* UYFLAG = nullptr;

ID3D11ShaderResourceView* UZFLAG = nullptr;

ID3D11ShaderResourceView* VUFLAG = nullptr;

ID3D11ShaderResourceView* VEFLAG = nullptr;

ID3D11ShaderResourceView* VNFLAG = nullptr;

ID3D11ShaderResourceView* VGFLAG = nullptr;

ID3D11ShaderResourceView* VIFLAG = nullptr;

ID3D11ShaderResourceView* WFFLAG = nullptr;

ID3D11ShaderResourceView* EHFLAG = nullptr;

ID3D11ShaderResourceView* YEFLAG = nullptr;

ID3D11ShaderResourceView* ZMFLAG = nullptr;

ID3D11ShaderResourceView* ZWFLAG = nullptr;

ID3D11ShaderResourceView* AXFLAG = nullptr;

ID3D11ShaderResourceView* ISFLAG = nullptr;

ID3D11ShaderResourceView* INFLAG = nullptr;

ID3D11ShaderResourceView* IDFLAG = nullptr;

ID3D11ShaderResourceView* IRFLAG = nullptr;

ID3D11ShaderResourceView* IQFLAG = nullptr;

ID3D11ShaderResourceView* IEFLAG = nullptr;

ID3D11ShaderResourceView* IMFLAG = nullptr;

ID3D11ShaderResourceView* ILFLAG = nullptr;

ID3D11ShaderResourceView* ITFLAG = nullptr;

/////////////////////img
ID3D11ShaderResourceView* TotalA = nullptr;


#pragma endregion
static int StartUpChecks = 0;
Discord* g_Discords;
using namespace xcheto;
Memoryy memory;
bool fight = true;
//char key[60] = "";
std::string str = "Shark";
bool login = false;
bool loginn = true;
bool SaveUsers = true;
bool savekey = true;
bool loader_active = true;
D3DMATRIX Esp::ViewMatrix;
static bool Bot = true;
static bool Player = true;
std::string tim;
char str1[60] = "";
float overlaycolor = 0.0f;
int teamids;
ImVec4 linescolors;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 bonescolors;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 fullboxcolor;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 cornerboxcolor;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 LLinescolors;// = { 1.0f,1.0f,1.0f,1.0f };
ImVec4 blinescolors;
ImVec4 bbonescolors;
ImVec4 bfullboxcolor;
ImVec4 bcornerboxcolor;
bool driving = true;
ImColor col;
static int tabs = 1;
namespace Settings
{
	static int Tab = 1;

	static int Tabb = 11;
}
bool watermark = true;
bool Aiming = true;
bool fps = true;
int currIndex;
float popcorn = 0.5f;
float popcorn2 = 0.450f;
ImVec4 colorr;
int Emu_Int = 0;
int item_current_Emu = 0;
int currentengine = 1;
int item_current_Aim = 1;
ImVec4 to_vec4(float r, float g, float b, float a)
{
	return ImVec4(r / 255.0, g / 255.0, b / 255.0, a / 255.0);
}

ID3D11ShaderResourceView* Image = nullptr;
ID3D11ShaderResourceView* photo = nullptr;
void DrawImage(ID3D11ShaderResourceView* img, int x, int y, int sizex, int sizey)
{
	ImGui::GetOverlayDrawList()->AddImage(img, ImVec2(x, y), ImVec2(x + sizex, y + sizey));
}

void InitImGuis()
{
	D3DX11_IMAGE_LOAD_INFO info;
	ID3DX11ThreadPump* pump{ nullptr };
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AirDrop, sizeof(AirDrop), &info, pump, &Image, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Bicatcho, sizeof(Bicatcho), &info, pump, &photo, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, m416, sizeof(m416), &info, pump, &M416, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, am55, sizeof(am55), &info, pump, &AMM5, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, am7, sizeof(am7), &info, pump, &AMM7, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, m249, sizeof(m249), &info, pump, &M249, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, aird, sizeof(aird), &info, pump, &AIRDROP, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, akm, sizeof(akm), &info, pump, &AKM, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, awm, sizeof(awm), &info, pump, &AWM, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, buggy, sizeof(buggy), &info, pump, &BUGGY, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, dasia, sizeof(dasia), &info, pump, &DASIA, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, m24, sizeof(m24), &info, pump, &M24, 0);
	////D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SCL, sizeof(SCL), &info, pump, &SCARL, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, uaz, sizeof(uaz), &info, pump, &UAZ, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, x2, sizeof(x2), &info, pump, &S2X, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, x3, sizeof(x3), &info, pump, &S3X, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, x4, sizeof(x4), &info, pump, &S4X, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, x6, sizeof(x6), &info, pump, &S6X, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, x8, sizeof(x8), &info, pump, &S8X, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, am9, sizeof(am9), &info, pump, &AM9, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, am12g, sizeof(am12g), &info, pump, &AM12, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, am45, sizeof(am45), &info, pump, &AM45, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, am300m, sizeof(am300m), &info, pump, &AM300, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, armor, sizeof(armor), &info, pump, &ARMOR3, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, aug, sizeof(aug), &info, pump, &AUG, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, bag3, sizeof(bag3), &info, pump, &BAG3, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, bandage, sizeof(bandage), &info, pump, &BANDAGE, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, burn, sizeof(burn), &info, pump, &BURN, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, dp, sizeof(dp), &info, pump, &DP, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, dp12, sizeof(dp12), &info, pump, &DP12, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, drink, sizeof(drink), &info, pump, &DRINK, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, flargun, sizeof(flargun), &info, pump, &FLARGUN, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, fual, sizeof(fual), &info, pump, &FUAL, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, fullkit, sizeof(fullkit), &info, pump, &Laptop, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, g36, sizeof(g36), &info, pump, &G36, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ghilli, sizeof(ghilli), &info, pump, &GHILLI, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, grenade, sizeof(grenade), &info, pump, &GRENADE, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, groza, sizeof(groza), &info, pump, &GROZA, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, health, sizeof(health), &info, pump, &MEDKIT, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, helmet, sizeof(helmet), &info, pump, &HELMET, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, injection, sizeof(injection), &info, pump, &INJECTION, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, largclip, sizeof(largclip), &info, pump, &LARGCLIP, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, m16a4, sizeof(m16a4), &info, pump, &M16A4, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, m762, sizeof(m762), &info, pump, &M762, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, mini, sizeof(mini), &info, pump, &MINI, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, mk14, sizeof(mk14), &info, pump, &MK14, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, pills, sizeof(pills), &info, pump, &PILLS, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ppbizon, sizeof(ppbizon), &info, pump, &PPBIZON, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, s18, sizeof(s18), &info, pump, &S18, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, sk12, sizeof(sk12), &info, pump, &SK12, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, sks, sizeof(sks), &info, pump, &SKS, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, smook, sizeof(smook), &info, pump, &SMOOK, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, tommy, sizeof(tommy), &info, pump, &TOMMY, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ump, sizeof(ump), &info, pump, &UMP, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, uzi, sizeof(uzi), &info, pump, &UZI, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, vector1, sizeof(vector1), &info, pump, &VECTOR1, 0);
	//D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, Total, sizeof(Total), &info, pump, &TotalA, 0);

	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AF, sizeof(AF), &info, pump, &AFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AL, sizeof(AL), &info, pump, &ALFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DZ, sizeof(DZ), &info, pump, &DZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AS, sizeof(AS), &info, pump, &ASFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AD, sizeof(AD), &info, pump, &ADFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AO, sizeof(AO), &info, pump, &AOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AI, sizeof(AI), &info, pump, &AIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AG, sizeof(AG), &info, pump, &AGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AR, sizeof(AR), &info, pump, &ARFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AM, sizeof(AM), &info, pump, &AMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AW, sizeof(AW), &info, pump, &AWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AU, sizeof(AU), &info, pump, &AUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AT, sizeof(AT), &info, pump, &ATFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AZ, sizeof(AZ), &info, pump, &AZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BS, sizeof(BS), &info, pump, &BSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BH, sizeof(BH), &info, pump, &BHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BD, sizeof(BD), &info, pump, &BDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BB, sizeof(BB), &info, pump, &BBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BY, sizeof(BY), &info, pump, &BYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BE, sizeof(BE), &info, pump, &BEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BZ, sizeof(BZ), &info, pump, &BZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BJ, sizeof(BJ), &info, pump, &BJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BM, sizeof(BM), &info, pump, &BMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BT, sizeof(BT), &info, pump, &BTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BO, sizeof(BO), &info, pump, &BOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BA, sizeof(BA), &info, pump, &BAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BW, sizeof(BW), &info, pump, &BWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BV, sizeof(BV), &info, pump, &BVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IO, sizeof(IO), &info, pump, &BRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IO, sizeof(IO), &info, pump, &IOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BN, sizeof(BN), &info, pump, &BNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BG, sizeof(BG), &info, pump, &BGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BF, sizeof(BF), &info, pump, &BFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BI, sizeof(BI), &info, pump, &BIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CV, sizeof(CV), &info, pump, &CVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KH, sizeof(KH), &info, pump, &KHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CM, sizeof(CM), &info, pump, &CMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CA, sizeof(CA), &info, pump, &CAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KY, sizeof(KY), &info, pump, &KYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CF, sizeof(CF), &info, pump, &CFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TD, sizeof(TD), &info, pump, &TDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CL, sizeof(CL), &info, pump, &CLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CN, sizeof(CN), &info, pump, &CNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CX, sizeof(CX), &info, pump, &CXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CC, sizeof(CC), &info, pump, &CCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CO, sizeof(CO), &info, pump, &COFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KM, sizeof(KM), &info, pump, &KMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CD, sizeof(CD), &info, pump, &CDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CG, sizeof(CG), &info, pump, &CGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CK, sizeof(CK), &info, pump, &CKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CR, sizeof(CR), &info, pump, &CRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HR, sizeof(HR), &info, pump, &HRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CU, sizeof(CU), &info, pump, &CUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CW, sizeof(CW), &info, pump, &CWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CY1, sizeof(CY1), &info, pump, &CYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CZ, sizeof(CZ), &info, pump, &CZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CI, sizeof(CI), &info, pump, &CIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DK, sizeof(DK), &info, pump, &DKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DJ, sizeof(DJ), &info, pump, &DJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DM, sizeof(DM), &info, pump, &DMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DO, sizeof(DO), &info, pump, &DOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EC, sizeof(EC), &info, pump, &ECFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EG, sizeof(EG), &info, pump, &EGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SV, sizeof(SV), &info, pump, &SVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GQ, sizeof(GQ), &info, pump, &GQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ER, sizeof(ER), &info, pump, &ERFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, EE, sizeof(EE), &info, pump, &EEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SZ, sizeof(SZ), &info, pump, &SZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ET, sizeof(ET), &info, pump, &ETFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FK, sizeof(FK), &info, pump, &FKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FO, sizeof(FO), &info, pump, &FOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FJ, sizeof(FJ), &info, pump, &FJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FI, sizeof(FI), &info, pump, &FIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FR, sizeof(FR), &info, pump, &FRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GF, sizeof(GF), &info, pump, &GFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PF, sizeof(PF), &info, pump, &PFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TF, sizeof(TF), &info, pump, &TFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GA, sizeof(GA), &info, pump, &GAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GM, sizeof(GM), &info, pump, &GMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GE, sizeof(GE), &info, pump, &GEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, DE, sizeof(DE), &info, pump, &DEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GH, sizeof(GH), &info, pump, &GHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LY, sizeof(LY), &info, pump, &LYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LI, sizeof(LI), &info, pump, &LIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LT, sizeof(LT), &info, pump, &LTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LU, sizeof(LU), &info, pump, &LUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MO, sizeof(MO), &info, pump, &MOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MG, sizeof(MG), &info, pump, &MGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MW, sizeof(MW), &info, pump, &MWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MY, sizeof(MY), &info, pump, &MYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MV, sizeof(MV), &info, pump, &MVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ML, sizeof(ML), &info, pump, &MLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MT, sizeof(MT), &info, pump, &MTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MH, sizeof(MH), &info, pump, &MHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MQ, sizeof(MQ), &info, pump, &MQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MR, sizeof(MR), &info, pump, &MRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MU, sizeof(MU), &info, pump, &MUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, YT, sizeof(YT), &info, pump, &YTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MX, sizeof(MX), &info, pump, &MXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, FM, sizeof(FM), &info, pump, &FMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MD, sizeof(MD), &info, pump, &MDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MC, sizeof(MC), &info, pump, &MCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MN, sizeof(MN), &info, pump, &MNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ME, sizeof(ME), &info, pump, &MEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MS, sizeof(MS), &info, pump, &MSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MA, sizeof(MA), &info, pump, &MAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MZ, sizeof(MZ), &info, pump, &MZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MM, sizeof(MM), &info, pump, &MMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NA, sizeof(NA), &info, pump, &NAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NR, sizeof(NR), &info, pump, &NRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GI, sizeof(GI), &info, pump, &GIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GR, sizeof(GR), &info, pump, &GRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GL, sizeof(GL), &info, pump, &GLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GD, sizeof(GD), &info, pump, &GDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GP, sizeof(GP), &info, pump, &GPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GU, sizeof(GU), &info, pump, &GUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GT, sizeof(GT), &info, pump, &GTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GG, sizeof(GG), &info, pump, &GGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GN, sizeof(GN), &info, pump, &GNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GW, sizeof(GW), &info, pump, &GWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GY, sizeof(GY), &info, pump, &GYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HT, sizeof(HT), &info, pump, &HTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HM, sizeof(HM), &info, pump, &HMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VA, sizeof(VA), &info, pump, &VAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HN, sizeof(HN), &info, pump, &HNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HK, sizeof(HK), &info, pump, &HKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, HU, sizeof(HU), &info, pump, &HUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JM, sizeof(JM), &info, pump, &JMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, G1, sizeof(G1), &info, pump, &G1FLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JP, sizeof(JP), &info, pump, &JPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JE, sizeof(JE), &info, pump, &JEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, JO, sizeof(JO), &info, pump, &JOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KZ, sizeof(KZ), &info, pump, &KZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KE, sizeof(KE), &info, pump, &KEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KI, sizeof(KI), &info, pump, &KIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KP, sizeof(KP), &info, pump, &KPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KR, sizeof(KR), &info, pump, &KRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KW, sizeof(KW), &info, pump, &KWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KG, sizeof(KG), &info, pump, &KGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LA, sizeof(LA), &info, pump, &LAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LV, sizeof(LV), &info, pump, &LVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LB, sizeof(LB), &info, pump, &LBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LS, sizeof(LS), &info, pump, &LSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LR, sizeof(LR), &info, pump, &LRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TR, sizeof(TR), &info, pump, &TRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TM, sizeof(TM), &info, pump, &TMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TC, sizeof(TC), &info, pump, &TCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TV, sizeof(TV), &info, pump, &TVFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UG, sizeof(UG), &info, pump, &UGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UA, sizeof(UA), &info, pump, &UAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AE, sizeof(AE), &info, pump, &AEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, US, sizeof(US), &info, pump, &GBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, US, sizeof(US), &info, pump, &USFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UY, sizeof(UY), &info, pump, &UYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, UZ, sizeof(UZ), &info, pump, &UZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VU, sizeof(VU), &info, pump, &VUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VE, sizeof(VE), &info, pump, &VEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VN, sizeof(VN), &info, pump, &VNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VG, sizeof(VG), &info, pump, &VGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VI, sizeof(VI), &info, pump, &VIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, WF, sizeof(WF), &info, pump, &WFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, YE, sizeof(YE), &info, pump, &YEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZM, sizeof(ZM), &info, pump, &ZMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZW, sizeof(ZW), &info, pump, &ZWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, AX, sizeof(AX), &info, pump, &AXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IS, sizeof(IS), &info, pump, &ISFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IN1, sizeof(IN1), &info, pump, &INFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ID, sizeof(ID), &info, pump, &IDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IR, sizeof(IR), &info, pump, &IRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IQ, sizeof(IQ), &info, pump, &IQFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IE, sizeof(IE), &info, pump, &IEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IM, sizeof(IM), &info, pump, &IMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IL, sizeof(IL), &info, pump, &ILFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, IT, sizeof(IT), &info, pump, &ITFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NP, sizeof(NP), &info, pump, &NPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NL, sizeof(NL), &info, pump, &NLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NC, sizeof(NC), &info, pump, &NCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NZ, sizeof(NZ), &info, pump, &NZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NI, sizeof(NI), &info, pump, &NIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NE, sizeof(NE), &info, pump, &NEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NG, sizeof(NG), &info, pump, &NGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NU, sizeof(NU), &info, pump, &NUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NF, sizeof(NF), &info, pump, &NFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MP, sizeof(MP), &info, pump, &MPFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, NO, sizeof(NO), &info, pump, &NOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PK, sizeof(PK), &info, pump, &PKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PW, sizeof(PW), &info, pump, &PWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PS, sizeof(PS), &info, pump, &PSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PA, sizeof(PA), &info, pump, &PAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PG, sizeof(PG), &info, pump, &PGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PY, sizeof(PY), &info, pump, &PYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PE, sizeof(PE), &info, pump, &PEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PH, sizeof(PH), &info, pump, &PHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PN, sizeof(PN), &info, pump, &PNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PL, sizeof(PL), &info, pump, &PLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PT, sizeof(PT), &info, pump, &PTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PR, sizeof(PR), &info, pump, &PRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, QA, sizeof(QA), &info, pump, &QAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MK, sizeof(MK), &info, pump, &MKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RO, sizeof(RO), &info, pump, &ROFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RU, sizeof(RU), &info, pump, &RUFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RW, sizeof(RW), &info, pump, &RWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RE, sizeof(RE), &info, pump, &REFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, BL, sizeof(BL), &info, pump, &BLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SH, sizeof(SH), &info, pump, &SHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, KN, sizeof(KN), &info, pump, &KNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LC, sizeof(LC), &info, pump, &LCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, MF, sizeof(MF), &info, pump, &MFFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, PM, sizeof(PM), &info, pump, &PMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, VC, sizeof(VC), &info, pump, &VCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, WS, sizeof(WS), &info, pump, &WSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SM, sizeof(SM), &info, pump, &SMFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ST, sizeof(ST), &info, pump, &STFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SA, sizeof(SA), &info, pump, &SAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SN, sizeof(SN), &info, pump, &SNFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, RS, sizeof(RS), &info, pump, &RSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SC, sizeof(SC), &info, pump, &SCFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SL, sizeof(SL), &info, pump, &SLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SG, sizeof(SG), &info, pump, &SGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SX, sizeof(SX), &info, pump, &SXFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SK, sizeof(SK), &info, pump, &SKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SI, sizeof(SI), &info, pump, &SIFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SB, sizeof(SB), &info, pump, &SBFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SO, sizeof(SO), &info, pump, &SOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, ZA, sizeof(ZA), &info, pump, &ZAFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, GS, sizeof(GS), &info, pump, &GSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SS, sizeof(SS), &info, pump, &SSFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, LK, sizeof(LK), &info, pump, &LKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SD, sizeof(SD), &info, pump, &SDFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SR, sizeof(SR), &info, pump, &SRFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SJ, sizeof(SJ), &info, pump, &SJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SE, sizeof(SE), &info, pump, &SEFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, CH, sizeof(CH), &info, pump, &CHFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, SY, sizeof(SY), &info, pump, &SYFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TW, sizeof(TW), &info, pump, &TWFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TJ, sizeof(TJ), &info, pump, &TJFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TZ, sizeof(TZ), &info, pump, &TZFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TH, sizeof(TH), &info, pump, &THFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TL, sizeof(TL), &info, pump, &TLFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TG, sizeof(TG), &info, pump, &TGFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TK, sizeof(TK), &info, pump, &TKFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TO, sizeof(TO), &info, pump, &TOFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TT, sizeof(TT), &info, pump, &TTFLAG, 0);
	D3DX11CreateShaderResourceViewFromMemory(DX11::pDevice, TN, sizeof(TN), &info, pump, &TNFLAG, 0);

}
std::wstring s2ws(const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}
std::string GetCurrentDirectory()
{
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	std::string::size_type pos = std::string(buffer).find_last_of("\\/");
	return std::string(buffer).substr(0, pos);
}
inline bool FileExist(const std::string& name) {
	if (FILE* file = fopen(name.c_str(), "r")) {
		fclose(file);
		return true;
	}
	else {
		return false;
	}
}
void Esp::LoadConfig(std::string Path) {
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	//	if (rc < 0) { std::cout << "File not found"; };
	if (FileExist(Path))
	{
		bool State = ini.GetBoolValue("Key", "UserKeyState");
		if (State == true)
		{
			std::string Key = ini.GetValue("Key", "UserKey");
			if (Key != "")
			{
				strcpy(str1, Key.c_str());
				SaveUsers = true;
			}

		}

	}
	/* if (ini.GetValue("Key", "UserKey")=="123")
	 {

	 }*/
}
void WriteConfig(std::string Path, std::string Key, bool State) {
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	if (rc < 0) {
		//	std::cout << "File not found";
	};
	if (State == true)
	{
		ini.SetBoolValue("Key", "UserKeyState", true);
	}
	else
	{
		ini.SetBoolValue("Key", "UserKeyState", false);
	}
	ini.SetValue("Key", "UserKey", Key.c_str());

	ini.SaveFile(Path.c_str());
}

bool dirExists(const std::string& dirName_in)
{
	DWORD ftyp = GetFileAttributesA(dirName_in.c_str());
	if (ftyp == INVALID_FILE_ATTRIBUTES)
		return false;  //something is wrong with your path!

	if (ftyp & FILE_ATTRIBUTE_DIRECTORY)
		return true;   // this is a directory!

	return false;    // this is not a directory!
}
void WriteResToDisk(std::string PathFile, LPWSTR File_WITHARG)
{
	HRSRC myResource = ::FindResource(NULL, File_WITHARG, RT_RCDATA);
	unsigned int myResourceSize = ::SizeofResource(NULL, myResource);
	HGLOBAL myResourceData = ::LoadResource(NULL, myResource);
	void* pMyExecutable = ::LockResource(myResourceData);
	std::ofstream f(PathFile, std::ios::out | std::ios::binary);
	f.write((char*)pMyExecutable, myResourceSize);
	f.close();
}


bool WriteConfigurate(std::string Path)
{
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	if (rc < 0) { std::cout << "File not found"; };


	////////////PLAYER ////////////////
	ini.SetBoolValue("pname", "Player", Setting::pname ? true : false);
	ini.SetBoolValue("pweapon", "Player", Setting::pweapon ? true : false);
	ini.SetBoolValue("pline", "Player", Setting::pline ? true : false);
	ini.SetBoolValue("pcorner", "Player", Setting::pcorner ? true : false);
	ini.SetBoolValue("pfullbox", "Player", Setting::pfullbox ? true : false);
	ini.SetBoolValue("playerBone", "Player", Setting::playerBone ? true : false);
	ini.SetBoolValue("phealth", "Player", Setting::phealth ? true : false);
	ini.SetBoolValue("Distancee", "Player", Setting::Distancee ? true : false);

	ini.SetLongValue(" Namesize", "Player", Setting::Namesize);
	ini.SetLongValue(" Dissize", "Player", Setting::Dissize);
	ini.SetLongValue(" weaponsize", "Player", Setting::weaponsize);


	ini.SetLongValue("pbonesize", "Player", Setting::pbonesize);
	ini.SetLongValue("plinesize", "Player", Setting::plinesize);
	ini.SetLongValue("pfullboxsize", "Player", Setting::pfullboxsize);
	ini.SetLongValue("pcornersize", "Player", Setting::pcornersize);

	// ini.SetLongValue("Name","Player",(long)Colors::nam)

	///////////////////BOT///////////////////////

	ini.SetBoolValue("botname", "BOT", Setting::botname ? true : false);
	ini.SetBoolValue("botline", "BOT", Setting::botline ? true : false);
	ini.SetBoolValue("botcorner", "BOT", Setting::botcorner ? true : false);
	ini.SetBoolValue("botfullbox", "BOT", Setting::botfullbox ? true : false);
	ini.SetBoolValue("botBone", "BOT", Setting::botBone ? true : false);
	ini.SetBoolValue("bothealth", "BOT", Setting::bothealth ? true : false);

	ini.SetLongValue("bbonesize", "Player", Setting::bbonesize);
	ini.SetLongValue("blinesize", "Player", Setting::blinesize);
	ini.SetLongValue("bfullboxsize", "Player", Setting::bfullboxsize);
	ini.SetLongValue("bcornersize", "Player", Setting::bcornersize);

	//////////////////

	ini.SetBoolValue("hp", "ESP", Setting::hp ? true : false);
	ini.SetBoolValue("feul", "ESP", Setting::feul ? true : false);
	ini.SetBoolValue("fightmode", "ESP", Setting::fightmode ? true : false);

	ini.SetBoolValue("FOV", "ESP", Setting::fovcircle ? true : false);

	ini.SetBoolValue("style1", "ESP", Setting::style1 ? true : false);
	ini.SetBoolValue("style2", "ESP", Setting::style2 ? true : false);
	ini.SetBoolValue("Different", "ESP", Setting::differnt ? true : false);
	ini.SetBoolValue("Same", "ESP", Setting::same ? true : false);

	ini.SetBoolValue("style1", "ESP", Setting::style1 ? true : false);
	ini.SetBoolValue("style2", "ESP", Setting::style2 ? true : false);
	ini.SetBoolValue("Different", "ESP", Setting::differnt ? true : false);
	ini.SetBoolValue("Same", "ESP", Setting::same ? true : false);
	ini.SetBoolValue("style1", "ESP", Setting::style1 ? true : false);
	ini.SetBoolValue("style2", "ESP", Setting::style2 ? true : false);
	ini.SetBoolValue("Different", "ESP", Setting::differnt ? true : false);
	ini.SetBoolValue("Same", "ESP", Setting::same ? true : false);
	ini.SetBoolValue("WaterMark", "magic", watermark);

	ini.SetBoolValue("MagicLine", "magic", Setting::MAgicline);
	ini.SetBoolValue("Dots", "magic", Setting::dots);

	ini.SetLongValue("FOV", "ESP", Setting::fovcircleredus);
	ini.SetLongValue("Special", "ESP", Setting::fontsize);
	ini.SetLongValue("Normal", "ESP", Setting::Normalfontsize);
	ini.SetLongValue("Aimbot", "aimbot", Setting::Aimspeed);
	ini.SetDoubleValue("Aim", "aimbot", Setting::curraim);
	ini.SetDoubleValue("Engine", "Aimbot", Setting::engine);

	ini.SetLongValue("AimbotKey", "Aimbot", Setting::AimbotKey);
	ini.SetLongValue("EnableKey", "Aimbot", Setting::EnableKey);
	ini.SetLongValue("PositionKey", "Aimbot", Setting::PositionKey);

	ini.SetLongValue("FightKey", "Fight", Setting::Fightmodekey);

	if (ini.SaveFile(Path.c_str()) < 0)
	{
		return false;
	}
	return true;
}

void LoadConfigg(std::string Path) {
	CSimpleIniA ini;
	ini.SetUnicode();
	SI_Error rc = ini.LoadFile(Path.c_str());
	if (rc < 0) { std::cout << "File not found"; };


	////////////PLAYER ////////////////
	Setting::pname = ini.GetBoolValue("pname", "Player", Setting::pname ? true : false);
	Setting::pweapon = ini.GetBoolValue("pweapon", "Player", Setting::pweapon ? true : false);
	Setting::pline = ini.GetBoolValue("pline", "Player", Setting::pline ? true : false);
	Setting::pcorner = ini.GetBoolValue("pcorner", "Player", Setting::pcorner ? true : false);
	Setting::pfullbox = ini.GetBoolValue("pfullbox", "Player", Setting::pfullbox ? true : false);
	Setting::playerBone = ini.GetBoolValue("playerBone", "Player", Setting::playerBone ? true : false);
	Setting::phealth = ini.GetBoolValue("phealth", "Player", Setting::phealth ? true : false);
	Setting::Distancee = ini.GetBoolValue("Distancee", "Player", Setting::Distancee ? true : false);

	Setting::Namesize = ini.GetBoolValue(" Namesize", "Player", Setting::Namesize);
	Setting::Dissize = ini.GetBoolValue(" Dissize", "Player", Setting::Dissize);
	Setting::weaponsize = ini.GetBoolValue(" weaponsize", "Player", Setting::weaponsize);

	Setting::pbonesize = ini.GetBoolValue("pbonesize", "Player", Setting::pbonesize);
	Setting::plinesize = ini.GetBoolValue("plinesize", "Player", Setting::plinesize);
	Setting::pfullboxsize = ini.GetBoolValue("pfullboxsize", "Player", Setting::pfullboxsize);
	Setting::pcornersize = ini.GetBoolValue("pcornersize", "Player", Setting::pcornersize);

	///////////////////BOT///////////////////////

	Setting::botname = ini.GetBoolValue("botname", "BOT", Setting::botname ? true : false);
	Setting::botline = ini.GetBoolValue("botline", "BOT", Setting::botline ? true : false);
	Setting::botcorner = ini.GetBoolValue("botcorner", "BOT", Setting::botcorner ? true : false);
	Setting::botfullbox = ini.GetBoolValue("botfullbox", "BOT", Setting::botfullbox ? true : false);
	Setting::botBone = ini.GetBoolValue("botBone", "BOT", Setting::botBone ? true : false);
	Setting::bothealth = ini.GetBoolValue("bothealth", "BOT", Setting::bothealth ? true : false);
	Setting::bbonesize = ini.GetBoolValue("bbonesize", "Player", Setting::bbonesize);
	Setting::blinesize = ini.GetBoolValue("blinesize", "Player", Setting::blinesize);
	Setting::bfullboxsize = ini.GetBoolValue("bfullboxsize", "Player", Setting::bfullboxsize);
	Setting::bcornersize = ini.GetBoolValue("bcornersize", "Player", Setting::bcornersize);

	//////////////////

	Setting::hp = ini.GetBoolValue("hp", "ESP", Setting::hp ? true : false);
	Setting::feul = ini.GetBoolValue("feul", "ESP", Setting::feul ? true : false);
	Setting::fightmode = ini.GetBoolValue("fightmode", "ESP", Setting::fightmode ? true : false);

	Setting::fovcircle = ini.GetBoolValue("FOV", "ESP", Setting::fovcircle ? true : false);

	Setting::style1 = ini.GetBoolValue("style1", "ESP", Setting::style1 ? true : false);
	Setting::style2 = ini.GetBoolValue("style2", "ESP", Setting::style2 ? true : false);
	Setting::differnt = ini.GetBoolValue("Different", "ESP", Setting::differnt ? true : false);
	Setting::style2 = ini.GetBoolValue("Same", "ESP", Setting::same ? true : false);

	ini.GetBoolValue("MagicLine", "magic", Setting::MAgicline);
	ini.GetBoolValue("Dots", "magic", Setting::dots);

	Setting::fovcircleredus = ini.GetLongValue("FOV", "ESP", Setting::fovcircleredus);
	Setting::fontsize = ini.GetLongValue("Special", "ESP", Setting::fontsize);
	Setting::Normalfontsize = ini.GetLongValue("Normal", "ESP", Setting::Normalfontsize);
	Setting::Aimspeed = ini.GetLongValue("Aimbot", "aimbot", Setting::Aimspeed);
	Setting::curraim = ini.GetDoubleValue("Aim", "aimbot", Setting::curraim);
	Setting::engine = ini.GetDoubleValue("Engine", "Aimbot", Setting::engine);
	Setting::AimbotKey = ini.GetLongValue("AimbotKey", "Aimbot", Setting::AimbotKey);
	Setting::EnableKey = ini.GetLongValue("EnableKey", "Aimbot", Setting::EnableKey);
	Setting::PositionKey = ini.GetLongValue("PositionKey", "Aimbot", Setting::PositionKey);
	watermark = ini.SetBoolValue("WaterMark", "magic", watermark);
	Setting::Fightmodekey = ini.GetLongValue("FightKey", "Fight", Setting::Fightmodekey);

}
static void HelpMarker(const char* desc)
{
	ImGui::TextDisabled("(?)");
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted(desc);
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}
}
float dpi_scale = 1.f;
static int barsize = 60;
ImVec2 pos;

bool isnull(VECTOR2 dat)
{
	if (dat.X != NULL)
		if (dat.Y != NULL)
			return true;
	return false;
}
VOID Esp::EspThread() {
	InitImGuis();
	VECTOR3 Screen;
	INT Distance;
	INT EnemyCount;
	VECTOR3 HeadPos;
	VECTOR2 Head;
	VECTOR2 Chest;
	VECTOR2 Pelvis;
	VECTOR2 lSholder;
	VECTOR2 rSholder;
	VECTOR2 lElbow;
	VECTOR2 rElbow;
	VECTOR2 lWrist;
	VECTOR2 rWrist;
	VECTOR2 lThigh;
	VECTOR2 rThigh;
	VECTOR2 lKnee;
	VECTOR2 rKnee;
	VECTOR2 lAnkle;
	VECTOR2 rAnkle;
	std::string Name = "";
	std::string dist = "";
	string Text = "";
	string Text1 = "";
	vector<BombAlert> TempBombAlertList = {};
	string ShowMenuTwo = "";
	string Titel = "";
	string weapon = "";
	DWORD window_flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;


	//api KeyAuthApp(name, ownerid, secret, version);

	//KeyAuthApp.init();

	std::string name = XorStr("DLL");
	std::string ownerid = XorStr("aZPUZQJdMe");
	std::string secret = XorStr("0c1b886ff7c47029140c1fb7cbd9bea6d736271e0295b1e1aae78ac427c6948b");
	std::string version = XorStr("1.0");
	api xchetoApp(name, ownerid, secret, version);
	xchetoApp.init();

	RECT screen_rect;
	GetWindowRect(GetDesktopWindow(), &screen_rect);

	while(true)
	{
		//	Sleep(35);
		DX11::BeginDraw();
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		if (GetAsyncKeyState(Setting::Fightmodekey) & 1)
		{
			Setting::fightmode = !Setting::fightmode;
		}
		if (GetAsyncKeyState(VK_F12) & 1)
		{
			Setting::RefreshESP = !Setting::RefreshESP;
			//Setting::isLoadDriver = !Setting::isLoadDriver;

		}
		if (GetAsyncKeyState(Setting::EnableKey) & 1)
		{
			Setting::Aimbot = !Setting::Aimbot;
		}
		if (GetAsyncKeyState(Setting::PositionKey) & 1)
		{

			if (Setting::curraim == 2)
				Setting::curraim = 0;


			else if (Setting::curraim == 0)
				Setting::curraim = 1;

			else if (Setting::curraim == 1)
				Setting::curraim = 2;

		}
		if (GetAsyncKeyState(VK_F12) & 1)
		{
			Setting::RefreshESP = !Setting::RefreshESP;
		}


		int my_image_width = 0;
		int my_image_height = 0;

		/*bool Result = LoadTextureFromFile("../new.png", &my_texture, &my_image_width, &my_image_height);
		IM_ASSERT(Result);*/

		/*time_t rawtime = mktime(&KeyAuthApp.user_data.expiry);
		struct tm* timeinfo;
		timeinfo = localtime(&rawtime);*/

		ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 0.300f);
		const float clear_color_with_alpha[4] = { clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w };

		if (Setting::ShowMenu)
		{
			//DX11::pImmediateContext->ClearRenderTargetView(DX11::pRenderTargetView, clear_color_with_alpha);
			
			LoadConfig("C:\\Shark.lic");

			if (!login)
			{
				ImGuiIO& Io = ImGui::GetIO();

				ImGui::SetNextWindowSize(ImVec2(370.0f, 190.0f));
				//	ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_Once);
				ImGui::SetNextWindowPos(ImVec2(Io.DisplaySize.x * 0.5f, Io.DisplaySize.y * 0.5f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
				ImGui::Begin("Shark.Loop", &loader_active, window_flags);
				{
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::SetCursorPosX({ 160.f });
					ImGui::Text("Shark.Loop");
					ImGui::Spacing();
					ImGui::SetNextItemWidth(340.0f);
					ImGui::SetCursorPosX({ 10.0f });
					ImGui::InputText("###Key", str1, IM_ARRAYSIZE(str1));
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::SetCursorPosX({ 50.f });
					if (ImGui::Button( "   Login ", { 120.0f,25.0f }))
					{
						if (xchetoApp.license(str1))
						{

							login = true;

						}
						else
						{
							exit(1);
							login = false;
						}

					}
					ImGui::SameLine();
					ImGui::SetCursorPosX({ 180.f });
					if (ImGui::Button("   DISCORD", { 120.0f,25.0f }))
					{
						//ShellExecute(NULL, L"open", (LPWSTR)url, NULL, NULL, SW_HIDE);
						ShellExecute(NULL, L"open", L"https://discord.gg/45ZPkyVMxx", NULL, NULL, SW_SHOWNORMAL);
						
						//ShellExecute(NULL, L"open",(LPWSTR)url , NULL, NULL, SW_SHOWNORMAL);
					}
					/*ImGui::SameLine();*/
					ImGui::SetCursorPosX({ 180.f });
					if (ImGui::Button("   TELEGRA  ", { 120.0f,25.0f }))
						ShellExecute(NULL, L"open", L"https://t.me/PABLOHAX", NULL, NULL, SW_SHOWNORMAL);
					{
						//ShellExecute(NULL, L"open", (LPWSTR)url, NULL, NULL, SW_HIDE);
						ShellExecute(NULL, L"open", L"DONT KNOW", NULL, NULL, SW_SHOWNORMAL);

						//ShellExecute(NULL, L"open",(LPWSTR)url , NULL, NULL, SW_SHOWNORMAL);
					}
					/*ImGui::SameLine();*/
					ImGui::SetCursorPosX({ 180.f });
					if (ImGui::Button("   YOUTYOBE", { 120.0f,25.0f }))
						ShellExecute(NULL, L"open", L"https://www.youtube.com/channel/UCrPJ3E5Ls-EvreVgU2G3zZQ", NULL, NULL, SW_SHOWNORMAL);
					{
						//ShellExecute(NULL, L"open", (LPWSTR)url, NULL, NULL, SW_HIDE);
						ShellExecute(NULL, L"open", L"RX LOOP HAX", NULL, NULL, SW_SHOWNORMAL);

						//ShellExecute(NULL, L"open",(LPWSTR)url , NULL, NULL, SW_SHOWNORMAL);
					}
					ImGui::SetCursorPosX({ 200.f });
					ImGui::Checkbox("Save Key", &SaveUsers);
					if (SaveUsers)
					{
						WriteConfig("C:\\Shark.lic", str1, true);

					}
					else
					{
						WriteConfig("C:\\Shark LOOP.lic", str1, false);

					}

					ImGui::End();
				}

			}
			if (login) {
				
				ImGuiStyle& style = ImGui::GetStyle();
				auto FramePadding = style.FramePadding;
				style.FramePadding = ImVec2(6, 4);
				ImGui::SetNextWindowSize({ 620, 520 });
				static auto Flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
             //  static ImVec4  hov = { 1.000f, 0.0f, 0.000f, 1.000f };
			   static ImVec4 hov = { 0.158f, 0.992f, 0.000f, 1.000f };
			   //1.000f, 1.0f, 1.000f, 1.000f yallow
				static ImVec4 inactive = { 1.000f, 0.0f, 0.000f, 1.000f };
			
				if (ImGui::Begin("RX", 0, Flags)) {
				
					ImGui::Image((PVOID)photo, ImVec2(140, 170));
					if (ImGui::BeginChild("###2", ImVec2(150.0f, 300.0f), true))
					{
						ImGui::SetCursorPos({ 25.0f,10.0f });
						ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 1 ? hov : inactive);
						 ImGui::SetNextItemWidth(100.0f);
						if (ImGui::tab("News", "F", 1 == Settings::Tab))
						{
							Settings::Tab = 1;
						}
						ImGui::PopStyleColor(1);
						ImGui::SetCursorPos({ 25.0f,59.0f });
						ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 2 ? hov : inactive);
						ImGui::SetNextItemWidth(80.0f);
						if (ImGui::tab("Visual", "C", 2 == Settings::Tab))
						{
							Settings::Tab = 2;

						}

						ImGui::PopStyleColor(1);
						ImGui::SetCursorPos({ 25.0f,118.0f });
						ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 3 ? hov : inactive);
						ImGui::SetNextItemWidth(130.0f);
						if (ImGui::tab("AIM", "B", 3 == Settings::Tab))
						{
							Settings::Tab = 3;

						}

						ImGui::PopStyleColor(1);
						ImGui::SetCursorPos({ 25.0f,177.0f });
						ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 4 ? hov : inactive);
						ImGui::SetNextItemWidth(210.0f);
						if (ImGui::tab("Memory", "A", 4 == Settings::Tab))
						{
							Settings::Tab = 4;

						}
						ImGui::PopStyleColor(1);
						ImGui::SetCursorPos({25.0f,236.0f });
						ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 5 ? hov : inactive);

						ImGui::SetNextItemWidth(295.0f);
						if (ImGui::tab("Settings", "D", 5 == Settings::Tab))
						{
							Settings::Tab = 5;

						}

						ImGui::PopStyleColor(1);

						ImGui::EndChild();
					}
					if (Settings::Tab == 1)
					{
						ImGui::SetCursorPos(ImVec2(330, 10));
						ImGui::Text("Information Of Hack ");
						ImGui::SetCursorPos({ 170, 30 });
						ImGui::BeginChild("##1", ImVec2(410, 450), true, 0);
						{
							ImGui::SameLine();
							ImGui::SetCursorPosX({ 180.f });
							if (ImGui::Button("   DISCORD", { 120.0f,25.0f }))
							{
								//ShellExecute(NULL, L"open", (LPWSTR)url, NULL, NULL, SW_HIDE);
								ShellExecute(NULL, L"open", L"https://discord.gg/F2jmQ7w8kW", NULL, NULL, SW_SHOWNORMAL);

								//ShellExecute(NULL, L"open",(LPWSTR)url , NULL, NULL, SW_SHOWNORMAL);
							}
								ImGui::Spacing();
								ImGui::SetCursorPos({ 30.f,50.f });
								ImGui::Text("\n    RX LOOP Version has been updated to latest Versoin 1.0.0");

								ImGui::SetCursorPos({ 30.f,80.f });
								ImGui::Text("\n    Changelogy:");
								ImGui::SetCursorPos({ 40.f,110.f });
								ImGui::Text("\n    -Added Mouse Cursor, Press BackSpace For Enable and Disable");
								ImGui::SetCursorPos({ 40.f,140.f });
								ImGui::Text("\n    -(R) Key For Refresh Magic Bullet");
								ImGui::SetCursorPos({ 40.f,170.f });
								ImGui::Text("\n    -Small Corss-Hair Added ");
								ImGui::SetCursorPos({ 30.f,200.f });
								ImGui::Text("\n    -Added F12 Key For Refresh ESP if Not Showing");
								ImGui::SetCursorPos({ 30.f,230.f });
								ImGui::Text("\n    -Support Globel PUBG MOBILE 2.1.0 ");
								ImGui::SetCursorPos({ 30.f,330.f });
								ImGui::EndChild();
						}
					}

					if (Settings::Tab == 2)
					{
						ImGui::SetCursorPos(ImVec2(330, 5));
						ImGui::Text("ESP ");
						ImGui::SetCursorPos({ 170, 25 });
						ImGui::BeginChild("##1", ImVec2(500, 550), true, 0);
						{
							ImGui::SetCursorPos(ImVec2(5, 10));
							ImGui::Text("Player");
							ImGui::SetCursorPos({ 5,30.0f });
							if (ImGui::BeginChild("###esp", ImVec2(200.0f, 220.0f), true))
							{
								
								ImGui::SetCursorPos({ 5.f,5.0f });
								ImGui::Text("Control In Lag");
								ImGui::SetCursorPos({ 5.f,10.0f });
								ImGui::PushItemWidth(100);
								ImGui::SliderInt("Control In Lag", &Setting::Lag, 25.0f, 80.00f);
								ImGui::SetCursorPos({ 5.f,40.0f });
								ImGui::PushItemWidth(100);
								ImGui::SliderInt("Control In Lag2", &Setting::Lag2, 25.0f, 80.00f);
								ImGui::SetCursorPos({ 5.0f,70.0f });
								ImGui::Checkbox("Player Name", &Setting::pname);
								ImGui::SetCursorPos({ 150.0f,70.0f });
								ImGui::ColorEdit4("pName", (float*)&Colors::nam, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,90.0f });
								ImGui::SetNextItemWidth(30.0f);
								ImGui::SliderFloat("Name size", &Setting::Namesize, 13.0f, 25.00f);
								ImGui::SetCursorPos({ 5.0f,110.0f });
								ImGui::Checkbox("Player Weapon", &Setting::pweapon);
								ImGui::SetCursorPos({ 150.0f,110.0f });
								ImGui::ColorEdit4("pWeapon", (float*)&Colors::Cweapon, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,140.0f });
								ImGui::SliderFloat("weapon size", &Setting::weaponsize, 10.0f, 25.00f);
								ImGui::SetCursorPos({ 5.0f,170.0f });
								ImGui::Checkbox("Player box", &Setting::pfullbox);
								ImGui::SetCursorPos({ 150.0f,170.0f });
								ImGui::ColorEdit4("pFull box", (float*)&Colors::playerbox, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,200.0f });
								ImGui::SliderFloat("box size", &Setting::pfullboxsize, 1.0f, 3.00f);
								ImGui::SetCursorPos({ 5.0f,230.0f });
								ImGui::Checkbox("Corner Box", &Setting::pcorner);
								ImGui::SetCursorPos({ 150.0f,230.0f });
								ImGui::ColorEdit4("pCorner Box", (float*)&Colors::playercorner, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,260.0f });
								ImGui::SliderFloat("Corner size", &Setting::pcornersize, 1.0f, 3.00f);
								ImGui::SetCursorPos({ 5.0f,290.0f });
								ImGui::Checkbox("Player Lines", &Setting::pline);
								ImGui::SetCursorPos({ 150.0f,290.0f });
								ImGui::ColorEdit4("Pline", (float*)&Colors::playerline, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,310.0f });
								ImGui::SliderFloat("Lines size", &Setting::plinesize, 1.0f, 3.00f);
								ImGui::SetCursorPos({ 5.0f,340.0f });
								ImGui::Checkbox("Player Bone", &Setting::playerBone);
								ImGui::SetCursorPos({ 150.0f,340.0f });
								ImGui::ColorEdit4("Player Bone", (float*)&Colors::playerline, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,370.0f });
								ImGui::SliderFloat("Bone size", &Setting::pbonesize, 1.20f, 10.00f);
								ImGui::SetCursorPos({ 5.0f,400.0f });
								ImGui::Checkbox(" Health Bar", &Setting::phealth);
								ImGui::SetCursorPos({ 150.0f,400.0f });
								ImGui::ColorEdit4("health", (float*)&Colors::health, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,430.0f });
								ImGui::Checkbox("Player Distance", &Setting::Distancee);
								ImGui::SetCursorPos({ 150.0f,430.0f });
								ImGui::ColorEdit4("Player Dis", (float*)&Colors::enemy, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,460.0f });
								ImGui::SliderFloat("Distance size", &Setting::Dissize, 12.0f, 25.00f);
								ImGui::SetCursorPos({ 5.0f,490.0f });
								ImGui::Text("warning Enmy");
								ImGui::SetCursorPos({ 5.0f,510.0f });
								ImGui::SliderFloat("warning Enmy", &Setting::warning, 12.0f, 25.00f);
								ImGui::SetCursorPos({ 5.0f,530.0f });
								ImGui::Checkbox(" Flags Image", &Setting::Flagimge);
								ImGui::SetCursorPos({ 5.0f,550.0f });
								ImGui::Checkbox(" Flags Text", &Setting::FlagText);
								ImGui::EndChild();
							}

							ImGui::SetCursorPos(ImVec2(220, 10));
							ImGui::Text("Vehicle");
							ImGui::SetCursorPos({220, 30 });
							if (ImGui::BeginChild("###e33", ImVec2(220.0f, 90.0f), true))
							{
								ImGui::SetCursorPos({ 10.0f,10.0f });
								ImGui::Text("Vehicle Text Color");
								ImGui::SetCursorPos({ 150.0f,10.0f });
								ImGui::ColorEdit4("Health", (float*)&Colors::vehicle, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.0f,40.0f });
								ImGui::Checkbox("Vehicle Health Bar", &Setting::hp);
								ImGui::SetCursorPos({ 5.0f,70.0f });
								ImGui::Checkbox("Vehicle Oil", &Setting::feul);
								ImGui::EndChild();
							}

							ImGui::SetCursorPos(ImVec2(5, 250));
							ImGui::Text("items");
							ImGui::SetCursorPos({ 5, 270 });
							if (ImGui::BeginChild("###e43", ImVec2(200.0f, 200.0f), true))
							{
								ImGui::SetCursorPos({ 10.0f,10.0f });
								ImGui::Checkbox("Show All ESP ", &Setting::impitems);
								ImGui::SetCursorPos({ 10.0f,40.0f });
								ImGui::Checkbox("M416", &Setting::Esp_Item_M416);
								ImGui::SetCursorPos({ 150.0f,40.0f });
								ImGui::ColorEdit4("M16", (float*)&weapon::m16, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,70.0f });
								ImGui::Checkbox("AKM", &Setting::Esp_Item_AKM);
								ImGui::SetCursorPos({ 150.0f,70.0f });
								ImGui::ColorEdit4("AKM", (float*)&weapon::AKM, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,100.0f });
								ImGui::Checkbox("SCAR-L", &Setting::Esp_Item_SCARL);
								ImGui::SetCursorPos({ 150.0f,100.0f });
								ImGui::ColorEdit4("SCAR", (float*)&weapon::scarl, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,130.0f });
								ImGui::Checkbox("M762", &Setting::Esp_Item_M762);
								ImGui::SetCursorPos({ 150.0f,130.0f });
								ImGui::ColorEdit4("M762", Setting::Esp_Item_M762_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,160.0f });
								ImGui::Checkbox("DP28", &Setting::Esp_Item_DP28);
								ImGui::SetCursorPos({ 150.0f,160.0f });
								ImGui::ColorEdit4("DP28", Setting::Esp_Item_DP28_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,190.0f });
								ImGui::Checkbox("FAMAS", &Setting::FAMAS);
								ImGui::SetCursorPos({ 150.0f,190.0f });
								ImGui::ColorEdit4("FAMAS", (float*)&weapon::FAMAS, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,220.0f });
								ImGui::Checkbox("MG3", &Setting::MG3);
								ImGui::SetCursorPos({ 150.0f,220.0f });
								ImGui::ColorEdit4("MG3", (float*)&weapon::MG3, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,250.0f });
								ImGui::Checkbox("G36", &Setting::G36);
								ImGui::SetCursorPos({ 150.0f,250.0f });
								ImGui::ColorEdit4("FAMAS", (float*)&weapon::G36, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,280.0f });
								ImGui::Checkbox("AN94", &Setting::AN94);
								ImGui::SetCursorPos({ 150.0f,280.0f });
								ImGui::ColorEdit4("AN94", (float*)&weapon::AN94, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,310.0f });
								ImGui::Checkbox("AWM", &Setting::Esp_Item_Awm);
								ImGui::SetCursorPos({ 150.0f,310.0f });
								ImGui::ColorEdit4("AMW", (float*)&weapon::AWM, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,340.0f });
								ImGui::Checkbox("M24", &Setting::Esp_Item_M24);
								ImGui::SetCursorPos({ 150.0f,340.0f });
								ImGui::ColorEdit4("M24", (float*)&weapon::M24, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,370.0f });
								ImGui::Checkbox("KAR98", &Setting::Esp_Item_Kar98k);
								ImGui::SetCursorPos({ 150.0f,370.0f });
								ImGui::ColorEdit4("kar98", (float*)&weapon::kar98, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,400.0f });
								ImGui::Checkbox("Mk14", &Setting::Mk14);
								ImGui::SetCursorPos({ 150.0f,400.0f });
								ImGui::ColorEdit4("Mk14", (float*)&weapon::Mk14, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,430.0f });
								ImGui::Checkbox("SLR", &Setting::Esp_Item_SLR);
								ImGui::SetCursorPos({ 150.0f,430.0f });
								ImGui::ColorEdit4("SLR", (float*)&Setting::Esp_Item_SLR_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,460.0f });
								ImGui::Checkbox("SKS", &Setting::Esp_Item_SKS);
								ImGui::SetCursorPos({ 150.0f,460.0f });
								ImGui::ColorEdit4("SKS", (float*)&Setting::Esp_Item_SKS_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 10.0f,490.0f });
								ImGui::Checkbox("Mini14", &Setting::Esp_Item_Mini14);
								ImGui::SetCursorPos({ 150.0f,490.0f });
								ImGui::ColorEdit4("Mini14", (float*)&Setting::Esp_Item_Mini14_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::EndChild();
							}

							ImGui::SetCursorPos(ImVec2(220, 120));
							ImGui::Text("Inventory");
							ImGui::SetCursorPos({ 220, 140 });
							if (ImGui::BeginChild("###e83", ImVec2(220.0f, 180.0f), true))
							{
								ImGui::SetCursorPos({ 5.f,10.0f });
								ImGui::Checkbox("Med Kit", &Setting::Esp_Item_MedKit);
								ImGui::SetCursorPos({ 150.f,10.0f });
								ImGui::ColorEdit4("Med Kit", Setting::Esp_Item_MedKit_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,40.0f });
								ImGui::Checkbox("First Aid Kit", &Setting::Esp_Item_FirstAidKit);
								ImGui::SetCursorPos({ 150.f,40.0f });
								ImGui::ColorEdit4("First Aid Kit", Setting::Esp_Item_FirstAidKit_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,70.0f });
								ImGui::Checkbox("Painkiller", &Setting::Esp_Item_Painkiller);
								ImGui::SetCursorPos({ 150.f,70.0f });
								ImGui::ColorEdit4("Painkiller", Setting::Esp_Item_Painkiller_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,100.0f });
								ImGui::Checkbox("Energy Drink", &Setting::Esp_Item_EnergyDrink);
								ImGui::SetCursorPos({ 150.f,100.0f });
								ImGui::ColorEdit4("Energy Drink", Setting::Esp_Item_EnergyDrink_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,130.0f });
								ImGui::Checkbox("Adrenaline", &Setting::Esp_Item_AdrenalineSyringe);
								ImGui::SetCursorPos({ 150.f,130.0f });
								ImGui::ColorEdit4("Adrenaline Syringe", Setting::Esp_Item_AdrenalineSyringe_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,160.0f });
								ImGui::Checkbox("2X", &Setting::Esp_Item_x2);
								ImGui::SetCursorPos({ 150.f,160.0f });
								ImGui::ColorEdit4("2X", Setting::Esp_Item_x2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,190.0f });
								ImGui::Checkbox("3X", &Setting::Esp_Item_x3);
								ImGui::SetCursorPos({ 150.f,190.0f });
								ImGui::ColorEdit4("3X", Setting::Esp_Item_x3_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,220.0f });
								ImGui::Checkbox("4X", &Setting::Esp_Item_x4);
								ImGui::SetCursorPos({ 150.f,220.0f });
								ImGui::ColorEdit4("4X", Setting::Esp_Item_x4_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,250.0f });
								ImGui::Checkbox("6X", &Setting::Esp_Item_x6);
								ImGui::SetCursorPos({ 150.f,250.0f });
								ImGui::ColorEdit4("6X", Setting::Esp_Item_x6_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,280.0f });
								ImGui::Checkbox("8X", &Setting::Esp_Item_x8);
								ImGui::SetCursorPos({ 150.f,280.0f });
								ImGui::ColorEdit4("8X", Setting::Esp_Item_x8_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,310.0f });
								ImGui::Checkbox("LootBox-Box-BG", &Setting::bg);
								ImGui::SetCursorPos({ 5.f,340.0f });
								ImGui::Checkbox("AirdDrop-Plan", &Setting::playerdeadbox);
								ImGui::SetCursorPos({ 150.f,340.0f });
								ImGui::ColorEdit4("AirdDrop ", (float*)&Setting::plancolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,370.0f });
								ImGui::Checkbox("AirDrop", &Setting::Esp_Item_AirDrop);
								ImGui::SetCursorPos({ 150.f,370.0f });
								ImGui::ColorEdit4("AirDrop ", (float*)&weapon::Airdrop, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,400.0f });
								ImGui::Checkbox("Flare Gun", &Setting::Esp_Item_FlareGun);
								ImGui::SetCursorPos({ 150.f,400.0f });
								ImGui::ColorEdit4("Flare", (float*)&weapon::Flaregun, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,430.0f });
								ImGui::Checkbox("Box-list", &Setting::playerdeadbox);
								ImGui::SetCursorPos({ 150.f,430.0f });
								ImGui::ColorEdit4("Dead-Boxi ", (float*)&Colors::deadboxitem, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::SetCursorPos({ 5.f,460.0f });
								ImGui::Checkbox("Box-listrec", &Setting::itemrect);
								ImGui::SetCursorPos({ 150.f,460.0f });
								ImGui::ColorEdit4("Dead-Boxirect ", (float*)&Colors::bgcorner, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
								ImGui::EndChild();
							}
							ImGui::SetCursorPos(ImVec2(240, 330));
							ImGui::Text("Attachments");
							ImGui::SetCursorPos({ 220, 350 });
							if (ImGui::BeginChild("###e63", ImVec2(220.0f, 130.0f), true))
							{


								ImGui::SetCursorPos({ 5.0f,10.0f });
								ImGui::Checkbox("Helmet 1", &Setting::Esp_Item_Helmet1);

								ImGui::SetCursorPos({ 150.0f,10.0f });
								ImGui::ColorEdit4("Helmet 1", Setting::Esp_Item_Helmet1_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);


								ImGui::SetCursorPos({ 5.0f,40.0f });
								ImGui::Checkbox("Helmet 2", &Setting::Esp_Item_Helmet2);

								ImGui::SetCursorPos({ 150.0f,40.0f });
								ImGui::ColorEdit4("Helmet 2", Setting::Esp_Item_Helmet2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,70.0f });
								ImGui::Checkbox("Bag 1", &Setting::Esp_Item_Bag1);

								ImGui::SetCursorPos({ 150.0f,70.0f });
								ImGui::ColorEdit4("Bag 1", Setting::Esp_Item_Bag1_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);


								ImGui::SetCursorPos({ 5.0f,100.0f });
								ImGui::Checkbox("Bag 2", &Setting::Esp_Item_Bag2);

								ImGui::SetCursorPos({ 150.0f,100.0f });
								ImGui::ColorEdit4("Bag 2", Setting::Esp_Item_Bag2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);



								ImGui::SetCursorPos({ 5.0f,130.0f });
								ImGui::Checkbox("Armor 1", &Setting::Esp_Item_Armor1);

								ImGui::SetCursorPos({ 150.0f,130.0f });
								ImGui::ColorEdit4("Armor 1", Setting::Esp_Item_Armor1_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);


								ImGui::SetCursorPos({ 5.0f,160.0f });
								ImGui::Checkbox("Armor 2", &Setting::Esp_Item_Armor2);

								ImGui::SetCursorPos({ 150.0f,160.0f });
								ImGui::ColorEdit4("Armor 2", Setting::Esp_Item_Armor2_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);


								ImGui::SetCursorPos({ 5.0f,190.0f });
								ImGui::Checkbox("Mk47-Mutant", &Setting::Esp_Item_Mk47Mutant);

								ImGui::SetCursorPos({ 150.0f,190.0f });
								ImGui::ColorEdit4("Mk47-Mutant", (float*)&Setting::Esp_Item_Mk47Mutant_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);


								ImGui::SetCursorPos({ 5.0f,210.0f });
								ImGui::Checkbox("G36C", &Setting::Esp_Item_G36C);

								ImGui::SetCursorPos({ 150.0f,210.0f });
								ImGui::ColorEdit4("G36C", (float*)&Setting::Esp_Item_G36C_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,250.0f });
								ImGui::Checkbox("QBZ", &Setting::Esp_Item_QBZ);

								ImGui::SetCursorPos({ 150.0f,250.0f });
								ImGui::ColorEdit4("QBZ", (float*)&Setting::Esp_Item_QBZ_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,280.0f });
								ImGui::Checkbox("QBU", &Setting::Esp_Item_QBU);

								ImGui::SetCursorPos({ 150.0f,280.0f });
								ImGui::ColorEdit4("QBU", (float*)&Setting::Esp_Item_QBU_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,310.0f });
								ImGui::Checkbox("9mm", &Setting::Esp_Item_9mm);

								ImGui::SetCursorPos({ 150.0f,310.0f });
								ImGui::ColorEdit4("9mm", (float*)&Setting::Esp_Item_9mm_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,340.0f });
								ImGui::Checkbox("45ACP", &Setting::Esp_Item_45ACP);

								ImGui::SetCursorPos({ 150.0f,340.0f });
								ImGui::ColorEdit4("45ACP", (float*)&Setting::Esp_Item_45ACP_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,370.0f });
								ImGui::Checkbox("Holo", &Setting::Esp_Item_Holo);
								ImGui::SetCursorPos({ 150.0f,370.0f });
								ImGui::ColorEdit4("Holo", (float*)&Setting::Esp_Item_Holo_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);



								ImGui::SetCursorPos({ 5.0f,400.0f });
								ImGui::Checkbox("PP19", &Setting::Esp_Item_PP19);

								ImGui::SetCursorPos({ 150.0f,400.0f });
								ImGui::ColorEdit4("PP19", (float*)&Setting::Esp_Item_PP19_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,430.0f });
								ImGui::Checkbox("Tommy Gun", &Setting::Esp_Item_TommyGun);

								ImGui::SetCursorPos({ 150.0f,430.0f });
								ImGui::ColorEdit4("Tommy", (float*)&Setting::Esp_Item_TommyGun_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,460.0f });
								ImGui::Checkbox("MP5K", &Setting::Esp_Item_MP5K);

								ImGui::SetCursorPos({ 150.0f,460.0f });
								ImGui::ColorEdit4("MP5K", (float*)&Setting::Esp_Item_MP5K_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,490.0f });
								ImGui::Checkbox("UMP9", &Setting::Esp_Item_UMP9);

								ImGui::SetCursorPos({ 150.0f,490.0f });
								ImGui::ColorEdit4("UMP9", (float*)&Setting::Esp_Item_UMP9_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,510.0f });
								ImGui::Checkbox("Vector", &Setting::Esp_Item_Vector);

								ImGui::SetCursorPos({ 150.0f,510.0f });
								ImGui::ColorEdit4("Vector", (float*)&Setting::Esp_Item_Vector_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,540.0f });
								ImGui::Checkbox("Uzi", &Setting::Esp_Item_Uzi);

								ImGui::SetCursorPos({ 150.0f,540.0f });
								ImGui::ColorEdit4("Uzi", (float*)&Setting::Esp_Item_Uzi_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,570.0f });
								ImGui::Checkbox("7.62mm", &Setting::Esp_Item_762mm);

								ImGui::SetCursorPos({ 150.0f,570.0f });
								ImGui::ColorEdit4("762mm", (float*)&Setting::Esp_Item_762mm_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);

								ImGui::SetCursorPos({ 5.0f,600.0f });
								ImGui::Checkbox("556mm", &Setting::Esp_Item_556mm);
								ImGui::SetCursorPos({ 150.0f,600.0f });
								ImGui::ColorEdit4("556mm", (float*)&Setting::Esp_Item_556mm_Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);





								ImGui::EndChild();
							}

							ImGui::EndChild();
						}
					}

					if (Settings::Tab == 3)
					{

						ImGui::SetCursorPos(ImVec2(330, 10));
						ImGui::Text("Safe Features");
						ImGui::SetCursorPos({ 170, 30 });
						ImGui::BeginChild("##1", ImVec2(450, 450), true, 0);
						{
							/*ImGui::Checkbox("Anti ScreenShot", &Setting::antiscreen);*/
							/*ImGui::SliderFloat("Transsp", &Setting::overlaycolor, 0.0f, 1.0f);*/
							//ImGui::Checkbox("WaterMark", &watermark);
							ImGui::Checkbox(" Magic", &Setting::MagicBullet);
							if (Setting::MagicBullet)
							{
								if (ImGui::TreeNodeEx("Magic bullet"))
								{
									ImGui::Indent();
									const char* aimb[] = { "Head", "Body", "Pelvis" };

									const char* combo_label = aimb[Setting::curraim];

									if (ImGui::BeginCombo(" AimcPositon", combo_label, ImGuiComboFlags_HeightSmall))
									{
										for (int n = 0; n < IM_ARRAYSIZE(aimb); n++)
										{
											const bool is_selected = (Setting::curraim == n);
											if (ImGui::Selectable(aimb[n], is_selected))
												Setting::curraim = n;
											if (is_selected)
												ImGui::SetItemDefaultFocus();
										}


										ImGui::EndCombo();
									}
									ImGui::Text(" Slider Power  Magic");
									
									ImGui::SliderInt("####1", &Setting::magicv, 0, 50);
									ImGui::Text("Magic Positon Switch Key:      ");
									ImGui::SameLine();
									ImGui::Hotkey("##Magic Bullet ", &Setting::AimbotKey, ImVec2(180.0f, 24));
									ImGui::Checkbox(" Skip Knocked Enemies ", &Setting::knocked);
									ImGui::Checkbox("Show FOV circle", &Setting::fovcircle);
									ImGui::SliderFloat("###fovFOVsize", &Setting::fovcircleredus, 1.0f, 2000.0f);
									ImGui::Checkbox("Draw current aiming enemy's line", &Setting::MAgicline);
									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
							ImGui::Checkbox(" AimBot", &Setting::Aimbot);
							if (Setting::Aimbot)
							{
								if (ImGui::TreeNodeEx(" AimBot"))
								{
								
									const char* Emu[] = { "Head", "Body", "Pelvis" };

									const char* combo_label = Emu[Setting::curraim];

									const char* enginetype[] = { "Mouse Event","Silent Aimbot" };

									const char* enginelabel = enginetype[Setting::engine];
									ImGui::Checkbox("Show Current Aim Position", &Setting::aimbotposition);
									ImGui::Text("Aimbot Positon:");
									ImGui::SameLine();
									if (ImGui::BeginCombo(" AimcPositon", combo_label, ImGuiComboFlags_HeightSmall))
									{
										for (int n = 0; n < IM_ARRAYSIZE(Emu); n++)
										{
											const bool is_selected = (Setting::curraim == n);
											if (ImGui::Selectable(Emu[n], is_selected))
												Setting::curraim = n;
											if (is_selected)
												ImGui::SetItemDefaultFocus();
										}


										ImGui::EndCombo();
									}
									ImGui::Checkbox("Aimbot", &Setting::Aimbot);
									ImGui::Checkbox("Skip Knocked Enemies", &Setting::knocked);
									ImGui::Checkbox("Show FOV circle", &Setting::fovcircle);
									ImGui::SameLine();
									ImGui::ColorEdit4(" fovcolor", (float*)&Colors::fovcirclecolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
                                    ImGui::SliderFloat("###fovFOVsize", &Setting::fovcircleredus, 1.0f, 2000.0f);
									ImGui::Text("Aimbot Speed: ");
									ImGui::SameLine();
									ImGui::SliderFloat("Aimbot Speede", &Setting::Aimspeed, 6.0f, 30.0f);
									ImGui::Text("Aimbot Hootkey:                     ");
									ImGui::SameLine();
									ImGui::Hotkey("##AimbotKey ", &Setting::AimbotKey, ImVec2(180.0f, 24));
									ImGui::Text("Aimbot Enable/Disable Hootkey:  ");
									ImGui::SetNextItemWidth(180.0f);
									ImGui::SameLine();
									ImGui::Hotkey("###Enable ", &Setting::EnableKey, ImVec2(180.0f, 24));
									ImGui::Text("Aimbot Positon Switch Key:        ");
									ImGui::SetNextItemWidth(180.0f);
									ImGui::SameLine();
									ImGui::Hotkey("##PositionKey ", &Setting::PositionKey, ImVec2(180.0f, 24));
									ImGui::Unindent();
									ImGui::TreePop();
								}
							}


								ImGui::EndChild();
						}
					}


					if (Settings::Tab == 4)
					{
						ImGui::SetCursorPos(ImVec2(330, 10));
						ImGui::Text("Memory");
						ImGui::SetCursorPos({ 170, 30 });
						ImGui::BeginChild("##1", ImVec2(450, 450), true, 0);
						{

							//ImGui::Checkbox(" PowerMagic", &Setting::Magic360deg);
							//ImGui::Checkbox(" MemoryAimbot", &Setting::CameraCatch);
							if (Setting::CameraCatch)
							{
								//if (ImGui::TreeNodeEx("Memory Aimbot"))
								{
									ImGui::Indent();
									ImGui::Checkbox(" knocked ", &Setting::knocked);
									ImGui::SliderFloat("###fovFOVsize", &Setting::fovcircleredus, 1.0f, 2000.0f);
									ImGui::Checkbox("Show FOV circle", &Setting::fovcircle);
									ImGui::Checkbox("Draw current aiming enemy's line", &Setting::MAgicline);
									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
							//ImGui::Checkbox(" Instant hit", &Setting::instanthit);
							if (Setting::instanthit)
							{
								//if (ImGui::TreeNodeEx("Instant hit"))
								{
									//ImGui::Indent();
									//ImGui::Text("SpeedInstant");
									//ImGui::SliderInt("####SpeedInstant", &Setting::instantv, 1.0f, 1000000.0f);


									//ImGui::Unindent();
									//ImGui::TreePop();
								}
							}
							//ImGui::Checkbox(" No Recoil", &Setting::recoil);
							//ImGui::Checkbox(" Camera view", &Setting::CameraView);
							//if (Setting::CameraView)
							{
								//if (ImGui::TreeNodeEx("Camera view"))
								{
									//ImGui::Indent();
									//ImGui::Text("Camera view");
									//ImGui::SliderInt("####Camera view", &Setting::view, 1.0f, 980.0f);


									//ImGui::Unindent();
									//ImGui::TreePop();
								}
							}
							ImGui::Checkbox(" God view", &Setting::godView);
							if (Setting::godView)
							{
								if (ImGui::TreeNodeEx("GodView"))
								{
									ImGui::Indent();

									//::SameLine();
									ImGui::Text(" GodView UP");
									//ImGui::SameLine();

									ImGui::Hotkey("##GodView UP ", &Setting::GodUp, ImVec2(180.0f, 24));

									//ImGui::SameLine();
									ImGui::Text(" GodView Down");
									

									ImGui::Hotkey("##GodView Down ", &Setting::GodDown, ImVec2(180.0f, 24));

									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
							//ImGui::SameLine();

								ImGui::Checkbox(" FPP", &Setting::Forcetpp);
								//::SameLine();

							//ImGui::Checkbox(" Fast Run", &Setting::fastrun);
							//if (Setting::fastrun)
							{
								//if (ImGui::TreeNodeEx("Fast run"))
								{
									//ImGui::Indent();
									//ImGui::Text("Fast run key");
									//ImGui::SliderInt("####Fast run key", &Setting::fastrv, 1.0f, 20.0f);

									//ImGui::SameLine();
									//ImGui::Hotkey("##fastrunKey ", &Setting::fastrunkey, ImVec2(180.0f, 24));


									//ImGui::Unindent();
									//ImGui::TreePop();
								}
							}
							//ImGui::Checkbox(" Fast car", &Setting::speedcar);
							if (Setting::speedcar)
							{
								if (ImGui::TreeNodeEx("Fast car"))
								{
									ImGui::Indent();
									ImGui::SliderInt("####Speed Car key", &Setting::carsv, 1.0f, 600.0f);

									ImGui::SameLine();
									ImGui::Hotkey("##Speed Forward ", &Setting::Fastcarkey, ImVec2(180.0f, 24));
									ImGui::Text("Speed Car key");
									ImGui::SameLine();
									ImGui::Hotkey("##Speed Back ", &Setting::Backcarkey, ImVec2(180.0f, 24));

									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
							//ImGui::Checkbox(" Fly car", &Setting::carfly);
							if (Setting::carfly)
							{
								if (ImGui::TreeNodeEx("Fly car"))
								{
									ImGui::Indent();

									ImGui::SliderInt("####Speed Fly Car", &Setting::flycarv, 1.0f, 50000.0f);
									ImGui::SameLine();
									ImGui::Hotkey("##Flycarkey ", &Setting::Flymankey, ImVec2(180.0f, 24));
									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
							//ImGui::Checkbox(" High jump", &Setting::manfly);
							if (Setting::carfly)
							{
								if (ImGui::TreeNodeEx("Fly man"))
								{
									ImGui::Indent();

									ImGui::SliderInt("####High jump", &Setting::flycarv, 1.0f, 50000.0f);
									ImGui::SameLine();
									ImGui::Hotkey("##Flycarkey ", &Setting::Flymankey, ImVec2(180.0f, 24));
									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
					//		ImGui::Checkbox(" Fast parachute", &Setting::FastParachute);
							if (Setting::FastParachute)
							{
								if (ImGui::TreeNodeEx("FastParachute"))
								{
									ImGui::Checkbox("Anti ScreenShot", &Setting::antiscreen);
								}
							}
						//	ImGui::SameLine();

							ImGui::Checkbox(" IPadView", &Setting::IpadVeiw);
							if (Setting::IpadVeiw)
							{
								if (ImGui::TreeNodeEx("iPad View"))
								{
									ImGui::Indent();
									ImGui::SliderFloat("####iPad View", &Setting::ipadview, 200.0f, 380.0f);


									ImGui::Unindent();
									ImGui::TreePop();
								}
							}
							int Ue4Base = Utility::ReadMemoryEx<int>(0xE0C36E8);

							if (Setting::IpadVeiw)
							{

								Utility::WriteProtectedMemoryEx<float>(Ue4Base + 0x3EF90E4, Setting::ipadview);
							}
							else
							{
								Utility::WriteProtectedMemoryEx<float>(Ue4Base + 0x3EF90E4, 360.0f);

							}
						//	ImGui::Checkbox(" Flash", &Setting::flash);
						//	ImGui::Checkbox(" luffy", &Setting::Luffy);
						//	ImGui::Checkbox(" X Effect", &Setting::MagicX);
						//	ImGui::Checkbox(" FastSwitch", &Setting::FastSwitchWeapon);
						//	ImGui::Checkbox(" NoGravity", &Setting::NoGravity);

							ImGui::EndChild();
						}
					}

					if (Settings::Tab == 5)
					{
						ImGui::SetCursorPos(ImVec2(330, 10));
						ImGui::Text("Settings");
						ImGui::SetCursorPos({ 170, 30 });
						ImGui::BeginChild("##1", ImVec2(450, 450), true, 0);
						{
							ImVec4 hov = ImVec4(0.437f, 0.436f, 0.434f, 1.000f);
							ImGui::PushStyleColor(ImGuiCol_ButtonHovered, hov);
							ImGui::Checkbox(" Esp Style 1", &Setting::style1);
							ImGui::Checkbox(" Esp Style 2", &Setting::style2);
							ImGui::Checkbox("Anti ScreenShot", &Setting::antiscreen);
							ImGui::Checkbox("WaterMark", &watermark);
							ImGui::SliderFloat("Transsp", &Setting::overlaycolor, 0.0f, 1.0f);
							//ImGui::SetCursorPos({ 40.f,260.f });
							//if (ImGui::Button("Save Setting", { 250.f,30.f }))
							//{
							//	LoadConfigg("C:\\RX_setting.ini");

							//}
							//ImGui::PopStyleColor();
							//ImGui::EndChild(); 
							//ImGui::SetCursorPos({ 40.f,300.f });
							//if (ImGui::Button("Load Setting", { 250.f,30.f }))
							//{
							//	LoadConfigg("C:\\RX_setting.ini");

							//}
							ImGui::PopStyleColor();

							ImGui::EndChild();

						}
					}
				}
				ImGui::End();
			}

		}
		if (login)
		{
			g_Discords->Update();
		ImVec4 clear_colo = ImVec4(0.0f, 0.0f, 0.0f, Setting::overlaycolor);
		const float clear_color_with_alphaa[4] = { clear_colo.x * clear_colo.w, clear_colo.y * clear_colo.w, clear_colo.z * clear_colo.w, clear_colo.w };

		DX11::pImmediateContext->ClearRenderTargetView(DX11::pRenderTargetView, clear_color_with_alphaa);
		time_t t; // t passed as argument in function time()
		struct tm* tt; // decalring variable for localtime()
		time(&t); //passing argument to time()
		tt = localtime(&t);
		cout << "Current Day, Date and Time is = " << asctime(tt);
		tim = asctime(tt);

		ViewMatrix = Utility::ReadMemoryEx<D3DMATRIX>(Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(Data::ViewMatrixBase) + 0x20) + 0x200);
		currIndex = Memory::AimFindBestTarget();
		ImVec4 warning;
		int botcount;
		int playercount;

		if (Setting::ShowMenuTwo)
		{
			ShowMenuTwo = "Shark LOOP";
			DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 20, ShowMenuTwo, 80, DX11Window::Height / 2 - 108, DX11::ImGui_DX11::Color::Yellow, true);

			if (Setting::MagicBullet)
			{
				ShowMenuTwo = "F3 : Magic Bullet ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 18, ShowMenuTwo, 80, DX11Window::Height / 2 - 90, DX11::ImGui_DX11::Color::Green, true);
			}
			else
			{
				ShowMenuTwo = "F3 : Magic Bullet ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 18, ShowMenuTwo, 80, DX11Window::Height / 2 - 90, DX11::ImGui_DX11::Color::Red, true);

			}

			if (Setting::fightmode)
			{
				ShowMenuTwo = "F4 : Fight Mode ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 18, ShowMenuTwo, 80, DX11Window::Height / 2 - 72, DX11::ImGui_DX11::Color::Green, true);
			}
			else
			{
				ShowMenuTwo = "F4 : Fight Mode  ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 18, ShowMenuTwo, 80, DX11Window::Height / 2 - 72, DX11::ImGui_DX11::Color::Red, true);

			}

			if (Setting::IpadVeiw)
			{
				ShowMenuTwo = "F5 : Ipad Veiw ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 18, ShowMenuTwo, 80, DX11Window::Height / 2 - 54, DX11::ImGui_DX11::Color::Green, true);
			}
			else
			{
				ShowMenuTwo = "F5 : Ipad Veiw ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 18, ShowMenuTwo, 80, DX11Window::Height / 2 - 54, DX11::ImGui_DX11::Color::Red, true);

			}

		}
		if (Setting::TotalEnemy)
		{

			if (Data::AActorList.size() != 0)
			{
				botcount = 0;
				playercount = 0;

				for (int i = 0; i < Data::AActorList.size(); i++)
				{
					if (Data::AActorList[i].Name == " BOT ")
					{
						botcount = botcount + 1;
					}
					else
					{
						playercount = playercount + 1;
					}
				}
				Text = "Total : " + to_string(Data::AActorList.size()) + "  ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::warning, Text, DX11Window::Width / 2 - 30, 100, DX11::ImGui_DX11::Color::White, true);

				Text = "Player : " + (std::to_string(playercount)) + "  ";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::warning, Text, DX11Window::Width / 2 + 70, 100, DX11::ImGui_DX11::Color::Red, true);

				Text = "Bot : " + (std::to_string(botcount));
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::warning, Text, DX11Window::Width / 2 + 170, 100, DX11::ImGui_DX11::Color::Blue, true);
			}
			else
			{
				Text = "Area Clear";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::warning, Text, DX11Window::Width / 2 + 70, 100, DX11::ImGui_DX11::Color::White, true);

			}
		}

		for (int i = 0; i < Data::AActorList.size(); i++)
			{
			if (!Data::AActorList[i].dead)
			{


				if (!Algorithm::WorldToScreenPlayer(Data::AActorList[i].Position, Screen, &Distance, Esp::ViewMatrix))continue;
				/*	if (Screen.Z < 0.001f)
						continue;*/
				Name = "[" + Data::AActorList[i].Nation + "]   " + Data::AActorList[i].Name.c_str();
				teamids = Data::AActorList[i].TeamId;
				switch (teamids)
				{

				case 1:
					linescolors = { 1.000f, 0.033f, 0.129f, 1.000f };
					break;
				case 2:
					linescolors = { 1.000f, 1.000f, 0.000f, 1.000f };
					break;
				case 3:
					linescolors = { 0.866f, 0.128f, 0.081f, 1.000f };
					break;
				case 4:
					linescolors = { 0.844f, 0.066f, 1.000f, 1.000f };
					break;
				case 5:
					linescolors = { 0.737f, 1.000f, 0.000f, 1.000f };
					break;
				case 6:
					linescolors = { 0.000f, 1.000f, 0.964f, 1.000f };
					break;
				case 7:
					linescolors = { 0.610f, 0.190f, 1.000f, 1.000f };
					break;
				case 8:
					linescolors = { 1.000f, 0.100f, 0.401f, 1.000f };
					break;
				case 9:
					linescolors = { 0.610f, 0.190f, 1.000f, 1.000f };
					break;
				case  10:
					linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
					break;
				case 11:
					linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
					break;
				case 12:
					linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
					break;
				case 13:
					linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
					break;
				case 14:
					linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
					break;
				case 15:
					linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };
					break;
				case 16:
					linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };
					break;
				case 17:
					linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };
					break;
				case 18:
					linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };
					break;
				case 19:
					linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
					break;
				case  20:
					linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };
					break;
				case 21:
					linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
					break;
				case 22:
					linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
					break;
				case 23:
					linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
					break;
				case 24:
					linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
					break;
				case 25:
					linescolors = { 0.053f, 0.355f, 1.000f, 1.000f };
					break;
				case 26:
					linescolors = { 1.000f, 0.70f, 0.000f, 1.000f };
					break;
				case 27:
					linescolors = { 1.000f, 1.000f, 0.000f, 1.000f };
					break;
				case 28:
					linescolors = { 0.866f, 0.128f, 0.081f, 1.000f };
					break;
				case 29:
					linescolors = { 0.844f, 0.066f, 1.000f, 1.000f };
					break;
				case 30:
					linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
					break;
				case 31:
					linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
					break;
				case 32:
					linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
					break;
				case 33:
					linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
					break;
				case 34:
					linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
					break;
				case 35:
					linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };
					break;
				case 36:
					linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };
					break;
				case 37:
					linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };
					break;
				case 38:
					linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };
					break;
				case 39:
					linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
					break;
				case  40:
					linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };
					break;
				case 41:
					linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
					break;
				case 42:
					linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
					break;
				case 43:
					linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
					break;
				case 44:
					linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
					break;
				case 45:
					linescolors = { 0.053f, 0.355f, 1.000f, 1.000f };
					break;
				case 46:
					linescolors = { 0.126f, 0.430f, 1.000f, 1.000f };
					break;
				case 47:
					linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
					break;
				case 48:
					linescolors = { 0.639f, 0.879f, 0.008f, 1.000f };
					break;
				case 49:
					linescolors = { 1.000f, 0.859f, 0.251f, 1.000f };
					break;
				case 50:
					linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };
					break;
				case 51:
					linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };
					break;
				case 52:
					linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };
					break;
				case 53:
					linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };
					break;
				case 54:
					linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };
					break;
				case 55:
					linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

					break;
				case 56:
					linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

					break;
				case 57:
					linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

					break;
				case 58:
					linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

					break;
				case 59:
					linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };
					break;
				case  60:
					linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

					break;
				case 61:
					linescolors = { 0.399f, 0.720f, 0.122f, 1.000f };

					break;
				case 62:
					linescolors = { 1.000f, 0.960f, 0.560f, 1.000f };

					break;
				case 63:
					linescolors = { 0.874f, 0.301f, 0.068f, 1.000f };

					break;
				case 64:
					linescolors = { 0.110f, 0.845f, 0.174f, 1.000f };

					break;
				case 65:
					linescolors = { 0.802f, 0.267f, 0.077f, 1.000f };

					break;

				case 66:
					linescolors = { 0.129f, 0.774f, 0.986f, 1.000f };

					break;
				case 67:
					linescolors = { 0.168f, 0.792f, 0.792f, 1.000f };

					break;
				case 68:
					linescolors = { 1.000f, 0.237f, 0.945f, 1.000f };

					break;
				case 69:
					linescolors = { 1.000f, 0.126f, 0.430f, 1.000f };

					break;
				case  70:
					linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };

					break;
				case 71:
					linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };

					break;
				case 72:
					linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };

					break;
				case 73:
					linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };

					break;
				case 74:
					linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };

					break;
				case 75:
					linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

					break;
				case 76:
					linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

					break;
				case 77:
					linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

					break;
				case 78:
					linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

					break;
				case 79:
					linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };

					break;
				case 80:
					linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

					break;
				case 81:
					linescolors = { 1.000f, 0.033f, 0.129f, 1.000f };

					break;
				case 82:
					linescolors = { 1.000f, 0.033f, 0.290f, 1.000f };

					break;
				case 83:
					linescolors = { 1.000f, 0.033f, 0.450f, 1.000f };

					break;
				case 84:
					linescolors = { 1.000f, 0.033f, 0.578f, 1.000f };

					break;
				case 85:
					linescolors = { 1.000f, 0.033f, 0.802f, 1.000f };

					break;

				case 86:
					linescolors = { 0.973f, 0.033f, 1.000f, 1.000f };

					break;
				case 87:
					linescolors = { 0.781f, 0.033f, 1.000f, 1.000f };

					break;
				case 88:
					linescolors = { 0.557f, 0.033f, 1.000f, 1.000f };

					break;
				case 89:
					linescolors = { 0.033f, 0.375f, 1.000f, 1.000f };

					break;
				case  90:
					linescolors = { 0.033f, 0.696f, 1.000f, 1.000f };

					break;
				case 91:
					linescolors = { 0.033f, 1.000f, 0.952f, 1.000f };

					break;
				case 92:
					linescolors = { 0.033f, 1.000f, 0.535f, 1.000f };

					break;
				case 93:
					linescolors = { 0.044f, 1.000f, 0.033f, 1.000f };

					break;
				case 94:
					linescolors = { 0.428f, 1.000f, 0.033f, 1.000f };

					break;
				case 95:
					linescolors = { 0.749f, 1.000f, 0.033f, 1.000f };

					break;

				case 96:
					linescolors = { 0.941f, 1.000f, 0.033f, 1.000f };

					break;
				case 97:
					linescolors = { 1.000f, 0.866f, 0.033f, 1.000f };

					break;
				case 98:
					linescolors = { 1.000f, 0.642f, 0.033f, 1.000f };

					break;
				case 99:
					linescolors = { 1.000f, 0.386f, 0.033f, 1.000f };

					break;
				case  100:
					linescolors = { 1.000f, 0.033f, 0.033f, 1.000f };

					break;
				default:

					linescolors = Colors::playerline;
					bonescolors = Colors::playerbone;
					fullboxcolor = Colors::playerbox;
					cornerboxcolor = Colors::playercorner;
					break;
				}
				dist = std::to_string(Distance) + "M";
				weapon = Data::AActorList[i].weapon.c_str();

				if (Distance <= -1) continue;

				if (Data::AActorList[i].IsBot)
				{
					if (Setting::BESP)
					{

							blinescolors = Colors::botline;
							bfullboxcolor = Colors::botbox;
							bbonescolors = Colors::botbone;
							bcornerboxcolor = Colors::botcorner;

						if (Setting::botname)
						{
							if (Setting::style1)
							{


								DX11::ImGui_DX11::DrawFilledRectangle(Screen.X + 55, Screen.Y - 15, 120, 13, ImColor(0.0f, 0.f, 0.f, 0.200f));
								if (Data::AActorList[i].Health <= 0)
								{
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 12, Name, Screen.X - 60, Screen.Y - 28, DX11::ImGui_DX11::Color::Red, false);
								}
								else
								{
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 12, Name, Screen.X - 60, Screen.Y - 28, Colors::nam, false);

								}
							}
							if (Setting::style2)
							{

								Text = Data::AActorList[i].Name + " " + to_string(Distance) + "M";


								if (Data::AActorList[i].Health <= 0)
								{
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 12, Name, Screen.X - 60, Screen.Y - 28, DX11::ImGui_DX11::Color::Red, false);
								}
								else
								{
									DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 12, Name, Screen.X - 60, Screen.Y - 28, Colors::nam, false);

								}
								



							}

						}
						if (Setting::Distancee)
						{
							if (Setting::style1)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 11, dist, Screen.X + 30, Screen.Y - 28, Colors::enemy, false);

							}

						}
						if (Setting::bothealth)
						{
							if (Setting::style1)
							{
								DX11::ImGui_DX11::DrawBlood(Screen.X - 65, Screen.Y - 15, 120, 4.0, Data::AActorList[i].Health);

							}


							if (Setting::style2)
							{
								DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);

								if (Data::AActorList[i].Health > 70.0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * Data::AActorList[i].Health / Data::AActorList[i].HealthMax, DX11::ImGui_DX11::Color::Green);
								}
								if (Data::AActorList[i].Health > 30.0 && Data::AActorList[i].Health <= 70.0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * Data::AActorList[i].Health / Data::AActorList[i].HealthMax, DX11::ImGui_DX11::Color::Yellow);
								}
								if (Data::AActorList[i].Health > 0.0 && Data::AActorList[i].Health <= 30.0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * Data::AActorList[i].Health / Data::AActorList[i].HealthMax, DX11::ImGui_DX11::Color::Red);
								}
							}
						}
						if (Setting::botline)
						{

							if (Setting::style1)
							{
								DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 30, blinescolors, Setting::blinesize);
							}
							if (Setting::style2)
							{
								DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 28, blinescolors, Setting::blinesize);

							}
						}
						if (Setting::botfullbox)
						{

							DX11::ImGui_DX11::DrawRectangle(Screen.X - (Screen.Z / 4) - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, bfullboxcolor, Setting::bfullboxsize);


						}
						if (Setting::botcorner)
						{

							DX11::ImGui_DX11::CornerBox(Screen.X - Screen.Z / 4 - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, Setting::bcornersize, popcorn / 2, bcornerboxcolor);



						}
						if (Setting::Bone)
						{


							if (Setting::botBone)
							{
								HeadPos = Data::AActorList[i].HeadPos;
								HeadPos.Z += 7;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, HeadPos, Head, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].ChestPos, Chest, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].PelvisPos, Pelvis, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lSholderPos, lSholder, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rSholderPos, rSholder, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lElbowPos, lElbow, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rElbowPos, rElbow, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lWristPos, lWrist, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rWristPos, rWrist, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lThighPos, lThigh, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rThighPos, rThigh, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lKneePos, lKnee, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rKneePos, rKnee, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lAnklePos, lAnkle, &Distance)) continue;
								if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rAnklePos, rAnkle, &Distance)) continue;

								DX11::ImGui_DX11::DrawCircle(Head.X, Head.Y, Screen.Z / 12, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, Pelvis.X, Pelvis.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, lSholder.X, lSholder.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, rSholder.X, rSholder.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(lSholder.X, lSholder.Y, lElbow.X, lElbow.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(rSholder.X, rSholder.Y, rElbow.X, rElbow.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(lElbow.X, lElbow.Y, lWrist.X, lWrist.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(rElbow.X, rElbow.Y, rWrist.X, rWrist.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, lThigh.X, lThigh.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, rThigh.X, rThigh.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(lThigh.X, lThigh.Y, lKnee.X, lKnee.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(rThigh.X, rThigh.Y, rKnee.X, rKnee.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(lKnee.X, lKnee.Y, lAnkle.X, lAnkle.Y, bbonescolors, Setting::bbonesize);
								DX11::ImGui_DX11::DrawLine(rKnee.X, rKnee.Y, rAnkle.X, rAnkle.Y, bbonescolors, Setting::bbonesize);


							}

						}
					}
				}
				else {

					if (Setting::differnt)
					{
						LLinescolors = linescolors;
						fullboxcolor = linescolors;
						bonescolors = linescolors;
						cornerboxcolor = linescolors;
						warning = linescolors;
					}
					if (Setting::same)
					{
						LLinescolors = Colors::playerline;
						fullboxcolor = Colors::playerbox;
						bonescolors = Colors::playerbone;
						cornerboxcolor = Colors::playercorner;

					}
					if (Setting::pweapon) {

						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::weaponsize, weapon, Screen.X - 50, Screen.Y - 10, Colors::Cweapon, true);
						}

						if (Setting::style2)
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::weaponsize, weapon, Screen.X, Screen.Y - 19, Colors::Cweapon, true);
						}

					}
					if (Setting::pname)
					{
						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawFilledRectangle(Screen.X + 55, Screen.Y - 15, 120, 13, ImColor(0.0f, 0.f, 0.f, 0.200f));
							if (Data::AActorList[i].Health <= 0)
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Namesize, Name, Screen.X - 60, Screen.Y - 28, DX11::ImGui_DX11::Color::Red, false);
								//	DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 12, dist, Screen.X + 30, Screen.Y - 28, Colors::enemy, false);
							}
							else
							{
								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Namesize, Name, Screen.X - 60, Screen.Y - 28, Colors::nam, false);
								//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 12, dist, Screen.X + 30, Screen.Y - 28, Colors::enemy, false);

							}

						}

						if (Setting::style2)
						{

							if (Data::AActorList[i].Health <= 0)
							{

								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Namesize, Name, Screen.X, (Screen.Y + Screen.Z), DX11::ImGui_DX11::Color::Red, true);

							}
							else
							{

								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Namesize, Name, Screen.X, (Screen.Y + Screen.Z), Colors::nam, true);

							}

						}
					}
					if (Setting::Distancee)
					{
						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Dissize, dist, Screen.X + 30, Screen.Y - 28, Colors::enemy, false);

						}
						if (Setting::style2)
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Dissize, dist, Screen.X, (Screen.Y + Screen.Z + 13), Colors::enemy, false);

						}
					}
					if (Setting::phealth)
					{

						if (Setting::style1)
						{
							if (Data::AActorList[i].Health > 0)
							{
								DX11::ImGui_DX11::DrawBlood(Screen.X - 65, Screen.Y - 15, 120, 4.0, Data::AActorList[i].HealthMax);
							}
							else
							{
								DX11::ImGui_DX11::DrawBlood(Screen.X - 65, Screen.Y - 15, 120, 4.0, Data::AActorList[i].DeathBreath / 100);

							}


						}

						if (Setting::style2)
						{
							if (Data::AActorList[i].Health > 0)
							{
								DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);

								if (Data::AActorList[i].Health > 70.0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * Data::AActorList[i].Health / Data::AActorList[i].HealthMax, DX11::ImGui_DX11::Color::Green);
								}
								if (Data::AActorList[i].Health > 30.0 && Data::AActorList[i].Health <= 70.0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * Data::AActorList[i].Health / Data::AActorList[i].HealthMax, DX11::ImGui_DX11::Color::Yellow);
								}
								if (Data::AActorList[i].Health > 0.0 && Data::AActorList[i].Health <= 30.0)
								{
									DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * Data::AActorList[i].Health / Data::AActorList[i].HealthMax, DX11::ImGui_DX11::Color::Red);

								}
							}
							else
							{

								DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5), DX11::ImGui_DX11::Color::Black);
								DX11::ImGui_DX11::DrawFilledRectangle(Screen.X - (Screen.Z / 4) - 4, (Screen.Y - 5) + (Screen.Z + 5), 3, (Screen.Z + 5) * Data::AActorList[i].DeathBreath / 100, DX11::ImGui_DX11::Color::Red);
								//DX11::ImGui_DX11::DrawFilledRectangle((Screen.X - Screen.Z / 4) - 4, Screen.Y - 5, Screen.Z + 5, 3, Data::AActorList[i].DeathBreath, DX11::ImGui_DX11::Color::Red);

							}
						}


					}
					if (Setting::pline)
					{

						if (Setting::style2)
						{


							DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 18, LLinescolors, Setting::plinesize);


						}
						if (Setting::style1)
						{
							DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, 0, Screen.X, Screen.Y - 18, LLinescolors, Setting::plinesize);

						}
					}
					if (Setting::pfullbox)
					{

						DX11::ImGui_DX11::DrawRectangle(Screen.X - (Screen.Z / 4) - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, fullboxcolor, Setting::pfullboxsize);


					}
					if (Setting::pcorner)
					{

						DX11::ImGui_DX11::CornerBox(Screen.X - Screen.Z / 4 - 3, Screen.Y - 5, (Screen.Z / 2) + 3, Screen.Z + 5, Setting::pcornersize, popcorn / 2, cornerboxcolor);
					}
					if (Setting::Bone)
					{

						if (Setting::playerBone)
						{
							HeadPos = Data::AActorList[i].HeadPos;
							HeadPos.Z += 7.0f;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, HeadPos, Head, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].ChestPos, Chest, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].PelvisPos, Pelvis, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lSholderPos, lSholder, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rSholderPos, rSholder, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lElbowPos, lElbow, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rElbowPos, rElbow, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lWristPos, lWrist, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rWristPos, rWrist, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lThighPos, lThigh, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rThighPos, rThigh, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lKneePos, lKnee, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rKneePos, rKnee, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].lAnklePos, lAnkle, &Distance)) continue;
							if (!Algorithm::WorldToScreenBone(Esp::ViewMatrix, Data::AActorList[i].rAnklePos, rAnkle, &Distance)) continue;
							if (isnull(Head) && isnull(Chest) && isnull(lSholder) && isnull(rSholder) && isnull(lElbow) && isnull(rElbow) && isnull(Pelvis) && isnull(lThigh) && isnull(rThigh) && isnull(lKnee)
								&& isnull(rKnee))
							{
								DX11::ImGui_DX11::DrawCircle(Head.X, Head.Y, Screen.Z / 12, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, Pelvis.X, Pelvis.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, lSholder.X, lSholder.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Chest.X, Chest.Y, rSholder.X, rSholder.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lSholder.X, lSholder.Y, lElbow.X, lElbow.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rSholder.X, rSholder.Y, rElbow.X, rElbow.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lElbow.X, lElbow.Y, lWrist.X, lWrist.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rElbow.X, rElbow.Y, rWrist.X, rWrist.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, lThigh.X, lThigh.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(Pelvis.X, Pelvis.Y, rThigh.X, rThigh.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lThigh.X, lThigh.Y, lKnee.X, lKnee.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rThigh.X, rThigh.Y, rKnee.X, rKnee.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(lKnee.X, lKnee.Y, lAnkle.X, lAnkle.Y, bonescolors, Setting::pbonesize);
								DX11::ImGui_DX11::DrawLine(rKnee.X, rKnee.Y, rAnkle.X, rAnkle.Y, bonescolors, Setting::pbonesize);
							}
						}

					}
					if (Setting::dots)
					{
						if (Screen.X > DX11Window::Width && Screen.Y > 0 && Screen.Y < DX11Window::Height)//Right
						{
							DX11::ImGui_DX11::DrawCircle(DX11Window::Width - 20, Screen.Y + Screen.Z, 7, bonescolors, 4.0f);

						}
						if (Screen.X < 0 && Screen.Y  >0 && Screen.Y < DX11Window::Height)//Left
						{

							DX11::ImGui_DX11::DrawCircle(20, Screen.Y + Screen.Z, 7, bonescolors, 4.0f);

						}
						if (Screen.Y < 0 && Screen.X>0 && Screen.X < DX11Window::Width)//Top
						{
							DX11::ImGui_DX11::DrawCircle(Screen.X, 20, 7, bonescolors, 4.0f);

						}
						if (Screen.Y > DX11Window::Height && Screen.X > 0 && Screen.X < DX11Window::Width)//Bottom
						{
							DX11::ImGui_DX11::DrawCircle(Screen.X, DX11Window::Height - 20, 7, bonescolors, 4.0f);

						}
						if (Screen.X < 0 && Screen.Y < 0)//top left
						{
							DX11::ImGui_DX11::DrawCircle(20, 20, 7, bonescolors, 4.0f);

						}
						if (Screen.X > DX11Window::Width && Screen.Y > DX11Window::Height)//bottom right
						{
							DX11::ImGui_DX11::DrawCircle(DX11Window::Width - 20, DX11Window::Height - 20, 7, bonescolors, 4.0f);

						}
						if (Screen.X > DX11Window::Width && Screen.Y < 0)//top right
						{
							DX11::ImGui_DX11::DrawCircle(DX11Window::Width - 20, 20, 7, bonescolors, 4.0f);

						}
						if (Screen.X<0 && Screen.Y >DX11Window::Width)//bottom left
						{
							DX11::ImGui_DX11::DrawCircle(20, DX11Window::Height - 20, 7, bonescolors, 4.0f);

						}

					}
					if (Setting::Flags && Setting::Flagimge)
					{
#pragma region DrowFlags

						if (Data::AActorList[i].Nation == "JM")
						{
							DrawImage(JMFLAG, Screen.X + 10, Screen.Y - 30, 20, 14);
						}
						if (Data::AActorList[i].Nation == "G1")
						{
							DrawImage(G1FLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AF")
						{
							DrawImage(AFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AL")
						{
							DrawImage(ALFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "DZ")
						{
							DrawImage(DZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AS")
						{
							DrawImage(ASFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AD")
						{
							DrawImage(ADFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AO")
						{
							DrawImage(AOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AI")
						{
							DrawImage(AIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AQ")
						{
							DrawImage(AQFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AG")
						{
							DrawImage(AGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AR")
						{
							DrawImage(ARFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AM")
						{
							DrawImage(AMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AW")
						{
							DrawImage(AWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AU")
						{
							DrawImage(AUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AT")
						{
							DrawImage(ATFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AZ")
						{
							DrawImage(AZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BS")
						{
							DrawImage(BSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BH")
						{
							DrawImage(BHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BD")
						{
							DrawImage(BDFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BB")
						{
							DrawImage(BBFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BY")
						{
							DrawImage(BYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BE")
						{
							DrawImage(BEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BZ")
						{
							DrawImage(BZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BJ")
						{
							DrawImage(BJFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BM")
						{
							DrawImage(BMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BT")
						{
							DrawImage(BTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BO")
						{
							DrawImage(BOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BQ")
						{
							DrawImage(BQFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BA")
						{
							DrawImage(BAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BW")
						{
							DrawImage(BWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BV")
						{
							DrawImage(BVFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BR")
						{
							DrawImage(BRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IO")
						{
							DrawImage(IOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BN")
						{
							DrawImage(BNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BG")
						{
							DrawImage(BGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BF")
						{
							DrawImage(BFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BI")
						{
							DrawImage(BIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CV")
						{
							DrawImage(CVFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KH")
						{
							DrawImage(KHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CM")
						{
							DrawImage(CMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CA")
						{
							DrawImage(CAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KY")
						{
							DrawImage(KYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CF")
						{
							DrawImage(CFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TD")
						{
							DrawImage(TDFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CL")
						{
							DrawImage(CLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CN")
						{
							DrawImage(CNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CX")
						{
							DrawImage(CXFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CC")
						{
							DrawImage(CCFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CO")
						{
							DrawImage(COFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KM")
						{
							DrawImage(KMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CD")
						{
							DrawImage(CDFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CG")
						{
							DrawImage(CGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CK")
						{
							DrawImage(CKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CR")
						{
							DrawImage(CRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "HR")
						{
							DrawImage(HRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CU")
						{
							DrawImage(CUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CW")
						{
							DrawImage(CWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CY")
						{
							DrawImage(CYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CZ")
						{
							DrawImage(CZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CI")
						{
							DrawImage(CIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "DK")
						{
							DrawImage(DKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "DJ")
						{
							DrawImage(DJFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "DM")
						{
							DrawImage(DMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "DO")
						{
							DrawImage(DOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "EC")
						{
							DrawImage(ECFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "EG")
						{
							DrawImage(EGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SV")
						{
							DrawImage(SVFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GQ")
						{
							DrawImage(GQFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ER")
						{
							DrawImage(ERFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "EE")
						{
							DrawImage(EEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SZ")
						{
							DrawImage(SZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ET")
						{
							DrawImage(ETFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "FK")
						{
							DrawImage(FKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "FO")
						{
							DrawImage(FOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "FJ")
						{
							DrawImage(FJFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "FI")
						{
							DrawImage(FIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "FR")
						{
							DrawImage(FRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GF")
						{
							DrawImage(GFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PF")
						{
							DrawImage(PFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TF")
						{
							DrawImage(TFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GA")
						{
							DrawImage(GAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GM")
						{
							DrawImage(GMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GE")
						{
							DrawImage(GEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "DE")
						{
							DrawImage(DEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GH")
						{
							DrawImage(GHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GI")
						{
							DrawImage(GIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GR")
						{
							DrawImage(GRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GL")
						{
							DrawImage(GLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GD")
						{
							DrawImage(GDFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GP")
						{
							DrawImage(GPFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GU")
						{
							DrawImage(GUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GT")
						{
							DrawImage(GTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GG")
						{
							DrawImage(GGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GN")
						{
							DrawImage(GNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GW")
						{
							DrawImage(GWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GY")
						{
							DrawImage(GYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "HT")
						{
							DrawImage(HTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "HM")
						{
							DrawImage(HMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "VA")
						{
							DrawImage(VAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "HN")
						{
							DrawImage(HNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "HK")
						{
							DrawImage(HKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "HU")
						{
							DrawImage(HUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "JP")
						{
							DrawImage(JPFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "JE")
						{
							DrawImage(JEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "JO")
						{
							DrawImage(JOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KZ")
						{
							DrawImage(KZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KE")
						{
							DrawImage(KEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KI")
						{
							DrawImage(KIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KP")
						{
							DrawImage(KPFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KR")
						{
							DrawImage(KRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KW")
						{
							DrawImage(KWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KG")
						{
							DrawImage(KGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LA")
						{
							DrawImage(LAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LV")
						{
							DrawImage(LVFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LB")
						{
							DrawImage(LBFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LS")
						{
							DrawImage(LSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LR")
						{
							DrawImage(LRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LY")
						{
							DrawImage(LYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LI")
						{
							DrawImage(LIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LT")
						{
							DrawImage(LTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LU")
						{
							DrawImage(LUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MO")
						{
							DrawImage(MOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MG")
						{
							DrawImage(MGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MW")
						{
							DrawImage(MWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MY")
						{
							DrawImage(MYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MV")
						{
							DrawImage(MVFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ML")
						{
							DrawImage(MLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MT")
						{
							DrawImage(MTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MH")
						{
							DrawImage(MHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MQ")
						{
							DrawImage(MQFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MR")
						{
							DrawImage(MRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MU")
						{
							DrawImage(MUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "YT")
						{
							DrawImage(YTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MX")
						{
							DrawImage(MXFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "FM")
						{
							DrawImage(FMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MD")
						{
							DrawImage(MDFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MC")
						{
							DrawImage(MCFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MN")
						{
							DrawImage(MNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ME")
						{
							DrawImage(MEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MS")
						{
							DrawImage(MSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MA")
						{
							DrawImage(MAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MZ")
						{
							DrawImage(MZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MM")
						{
							DrawImage(MMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NA")
						{
							DrawImage(NAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NR")
						{
							DrawImage(NRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NP")
						{
							DrawImage(NPFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NL")
						{
							DrawImage(NLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NC")
						{
							DrawImage(NCFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NZ")
						{
							DrawImage(NZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NI")
						{
							DrawImage(NIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NE")
						{
							DrawImage(NEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NG")
						{
							DrawImage(NGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NU")
						{
							DrawImage(MUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NF")
						{
							DrawImage(NFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MP")
						{
							DrawImage(NPFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "NO")
						{
							DrawImage(NOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "OM")
						{
							DrawImage(OMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PK")
						{
							DrawImage(PKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PW")
						{
							DrawImage(PWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PS")
						{
							DrawImage(PSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PA")
						{
							DrawImage(PAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PG")
						{
							DrawImage(PGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PY")
						{
							DrawImage(PYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PE")
						{
							DrawImage(PEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PH")
						{
							DrawImage(PHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PN")
						{
							DrawImage(PNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PL")
						{
							DrawImage(PLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PT")
						{
							DrawImage(PTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PR")
						{
							DrawImage(PRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "QA")
						{
							DrawImage(QAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MK")
						{
							DrawImage(MKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "RO")
						{
							DrawImage(ROFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "RU")
						{
							DrawImage(RUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "RW")
						{
							DrawImage(RWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "RE")
						{
							DrawImage(REFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "BL")
						{
							DrawImage(BLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SH")
						{
							DrawImage(SHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "KN")
						{
							DrawImage(KNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LC")
						{
							DrawImage(LCFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "MF")
						{
							DrawImage(MFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "PM")
						{
							DrawImage(PMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "VC")
						{
							DrawImage(VCFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "WS")
						{
							DrawImage(WSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SM")
						{
							DrawImage(SMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ST")
						{
							DrawImage(STFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SA")
						{
							DrawImage(SAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SN")
						{
							DrawImage(SNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "RS")
						{
							DrawImage(RSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SC")
						{
							DrawImage(SCFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SL")
						{
							DrawImage(SLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SG")
						{
							DrawImage(SGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SX")
						{
							DrawImage(SXFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SK")
						{
							DrawImage(SKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SI")
						{
							DrawImage(SIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SB")
						{
							DrawImage(SBFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SO")
						{
							DrawImage(SOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ZA")
						{
							DrawImage(ZAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GS")
						{
							DrawImage(GSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SS")
						{
							DrawImage(SSFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ES")
						{
							DrawImage(ESFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "LK")
						{
							DrawImage(LKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SD")
						{
							DrawImage(SDFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SR")
						{
							DrawImage(SRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SJ")
						{
							DrawImage(SJFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SE")
						{
							DrawImage(SEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "CH")
						{
							DrawImage(CHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "SY")
						{
							DrawImage(SYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TW")
						{
							DrawImage(TWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TJ")
						{
							DrawImage(TJFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TZ")
						{
							DrawImage(TZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TH")
						{
							DrawImage(THFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TL")
						{
							DrawImage(TLFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TG")
						{
							DrawImage(TGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TK")
						{
							DrawImage(TKFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TO")
						{
							DrawImage(TOFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TT")
						{
							DrawImage(TTFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TN")
						{
							DrawImage(TNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TR")
						{
							DrawImage(TRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TM")
						{
							DrawImage(TMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TC")
						{
							DrawImage(TCFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "TV")
						{
							DrawImage(TVFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "UG")
						{
							DrawImage(UGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "UA")
						{
							DrawImage(UAFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AE")
						{
							DrawImage(AEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "GB")
						{
							DrawImage(GBFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "US")
						{
							DrawImage(USFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "UY")
						{
							DrawImage(UYFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "UZ")
						{
							DrawImage(UZFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "VU")
						{
							DrawImage(VUFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "VE")
						{
							DrawImage(VEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "VN")
						{
							DrawImage(VNFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "VG")
						{
							DrawImage(VGFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "VI")
						{
							DrawImage(VIFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "WF")
						{
							DrawImage(WFFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "EH")
						{
							DrawImage(EHFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "YE")
						{
							DrawImage(YEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ZM")
						{
							DrawImage(ZMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ZW")
						{
							DrawImage(ZWFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "AX")
						{
							DrawImage(AXFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IS")
						{
							DrawImage(ISFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IN")
						{
							DrawImage(INFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "ID")
						{
							DrawImage(IDFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IR")
						{
							DrawImage(IRFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IQ")
						{
							DrawImage(IQFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IE")
						{
							DrawImage(IEFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IM")
						{
							DrawImage(IMFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IL")
						{
							DrawImage(ILFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}
						if (Data::AActorList[i].Nation == "IT")
						{
							DrawImage(ITFLAG, Screen.X + 15, Screen.Y - 15, 20, 14);
						}

#pragma endregion
					}
					if (Setting::MAgicline && GetAsyncKeyState(VK_LBUTTON))
					{
						for (int i = 0; i < Data::AActorList.size(); i++)
						{


							if (!Algorithm::WorldToScreen(Data::AActorList[i].Position, Screen, &Distance, ViewMatrix)) continue;
							if (currIndex == i)
							{
								DX11::ImGui_DX11::DrawLine(DX11Window::Width / 2, DX11Window::Height / 2, Screen.X, Screen.Y - 10, Colors::magicline, 1.8f);
							}
						}


					}
				}
				if (Aiming) {

					int enemystate = Data::AActorList[i].status;
					std::string stateB = "";
					stateB = std::to_string(enemystate);
					if (stateB == "0") { stateB == "AFK"; }
					else if (stateB == "1") { stateB = "InWater"; }
					else if (stateB == "268435464") { stateB = "PlayEmotion"; }
					else if (stateB == "8") { stateB = "Stand"; }
					else if (stateB == "520" || stateB == "544" || stateB == "656" || stateB == "521" || stateB == "528") { stateB = "Aiming"; }
					else if (stateB == "1680" || stateB == "1672" || stateB == "1673" || stateB == "1032" || stateB == "1544" || stateB == "1545" || stateB == "1033") { stateB = "Peek"; }
					else if (stateB == "9") { stateB = "Walking"; }
					else if (stateB == "11") { stateB = "Running"; }
					else if (stateB == "4194304") { stateB = "Swimming"; }
					else if (stateB == "32784") { stateB = "Reviving"; }
					else if (stateB == "16777224") { stateB = "Climbing"; }
					else if (stateB == "8200" || stateB == "8208") { stateB = "Punching"; }
					else if (stateB == "16" || stateB == "17" || stateB == "19") { stateB = "Crouch"; }
					else if (stateB == "32" || stateB == "33" || stateB == "35") { stateB = "Snake"; }
					else if (stateB == "5445" || stateB == "762" || stateB == "35") { stateB = "Snake"; }
					else if (stateB == "72" || stateB == "73" || stateB == "75") { stateB = "Jumping"; }
					else if (stateB == "264" || stateB == "272" || stateB == "273" || stateB == "288" || stateB == "265" || stateB == "329") { stateB = "Reloading"; }
					else if (stateB == "137" || stateB == "144" || stateB == "201" || stateB == "145" || stateB == "160" || stateB == "649" || stateB == "648" || stateB == "1160" || stateB == "1161" || stateB == "1169") { stateB = "Firing"; }
					else if (stateB == "131070" || stateB == "131071" || stateB == "131072" || stateB == "131073" || stateB == "131074" || stateB == "131075") { stateB = "Knocked"; }
					else if (stateB == "33554440" || stateB == "524296" || stateB == "1048584" || stateB == "524288") { stateB = "Driving"; }
					else if (stateB == "16392" || stateB == "16393" || stateB == "16401" || stateB == "16416" || stateB == "16417" || stateB == "16457") { stateB = "Throwing Bomb"; }
					else if (stateB == "16400" || stateB == "17401" || stateB == "17417" || stateB == "17424" || stateB == "17425") { stateB = "Throwing Bomb"; }
					else
					{
						stateB = std::to_string(enemystate);
					}

					if (Aiming)
					{

						if (stateB == "Aiming")
						{
							Text = "Enemy Aiming At You";
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 30, Text, DX11Window::Width / 2, DX11Window::Height / 100 * 14.5f, DX11::ImGui_DX11::Color::Red, true);
						}
					}
				}
						/*std::string Data::playerstatus(int GetEnemyState)

							switch (GetEnemyState)
							{
							case 0:
								return "AFK";
								break;
							case 1:
								return "In Water";
								break;
							case 268435464:
								return "Play Emotion";
								break;
							case 8:
								return "Stand";
								break;
							case 520:
							case 544:
							case 656:
							case 521:
							case 528:
								return "Aiming";
								break;
							case 1680:
							case 1672:
							case 1673:
							case 1032:
							case 1544:
							case 1545:
							case 1033:
								return "Peek";
								break;
							case 9:
								return "Walking";
								break;
							case 11:
								return "Running";
								break;
							case 4194304:
								return "Swimming";
								break;
							case 32784:
								return "Reviving";
								break;
							case 16777224:
								return "Climbing";
								break;
							case 8200:
							case 8208:
								return "Punching";
								break;
							case 16:
							case 17:
							case 19:
								return "Crouch";
								break;
							case 32:
							case 33:
							case 35:
							case 5445:
							case 762:
								return "Snake";
								break;
							case 72:
							case 73:
							case 75:
								return "Jumping";
								break;
							case 264:
							case 272:
							case 273:
							case 288:
							case 265:
							case 329:
								return "Reloading";
								break;
							case 137:
							case 144:
							case 201:
							case 145:
							case 160:
							case 649:
							case 648:
							case 1160:
							case 1161:
							case 1169:
								return "Firing";
								break;
							case 131070:
							case 131071:
							case 131072:
							case 131073:
							case 131075:
							case 131074:
								return "Knocked";
								break;
							case 33554440:
							case 524296:
							case 1048584:
							case 524288:
								return "Driving";
								break;
							case 16392:
							case 16393:
							case 16401:
							case 16416:
							case 16417:
							case 16457:
							case 16400:
							case 17401:
							case 17417:
							case 17425:
							case 17424:
								return "Throwing Bomb";
								break;
							default:

							}*/
							//}
					//}
				//}
}
}
		if (watermark) {
			
			Text = "Shark LOOP V 2.6.0";
			DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, Text, 90, DX11Window::Height / 2 + 365, DX11::ImGui_DX11::Color::Yellow, true);
			DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, 15, tim, 90, DX11Window::Height / 2 + 380, DX11::ImGui_DX11::Color::Yellow, true);
		}
		/*if (Setting::MagicBullet || Setting::engine == 1 && Setting::Aimbot)
		{
			if (Memory::IsMagicInitialized == false)
			{
				Text = "initializing Magic";
				DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, DX11Window::Width / 2, DX11Window::Height / 2, DX11::ImGui_DX11::Color::enem, true);

			}

		}*/
		if (Setting::aimbotposition)
		{
			if (Setting::MagicBullet || Setting::engine == 1 && Setting::Aimbot) {


				if (Setting::curraim == 0)
				{
					Text = "Current Aim Position : Head";
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 19, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);

				}
				if (Setting::curraim == 1)
				{
					Text = "Current Aim Position : Cheast";
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 19, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);

				}
				if (Setting::curraim == 2)
				{
					Text = "Current Aim Position : PelvisPos ";
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 19, Text, DX11Window::Width / 2, DX11Window::Height / 2 + 200, DX11::ImGui_DX11::Color::Green, true);

				}
			}
		}
		if (Setting::fovcircle)
		{
			if (Data::AActorList.size() != 0)
			{
				//DrawCircle(OverlayWindowWidth / 2, OverlayScreenHeight / 2, 100.0f/*FovRadius*/
				DX11::ImGui_DX11::DrawCircle(DX11Window::Width / 2, DX11Window::Height / 2, Setting::fovcircleredus, Colors::fovcirclecolor);
			}
		}
		if (Setting::graned)
		{
			for (Item& Item : Data::ItemList)
			{
				if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

				std::string	Textt = Item.Name;// +" " + "(" + to_string(Distance) + "m)";
				//DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);

				if (Setting::Esp_Item_Frag && Item.Name == "Frag")
				{
					DX11::ImGui_DX11::DrawFilledRect(Screen.X - 15, Screen.Y, 30, 15, ImColor(0.000f, 0.00f, 0.00f, 0.250f));
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					DX11::ImGui_DX11::CornerBox(Screen.X - 15, Screen.Y, 30, 15, 0.9f, popcorn2, DX11::ImGui_DX11::Color::Red);

				}

				if (Setting::Esp_Item_Smoke && Item.Name == "Smoke")
				{
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Smoke_Color[0], Setting::Esp_Item_Smoke_Color[1], Setting::Esp_Item_Smoke_Color[2], Setting::Esp_Item_Smoke_Color[3]), true);
				}

				if (Setting::Esp_Item_Molotof && Item.Name == "Molotof")
				{
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Molotof_Color[0], Setting::Esp_Item_Molotof_Color[1], Setting::Esp_Item_Molotof_Color[2], Setting::Esp_Item_Molotof_Color[3]), true);
				}
				if (Setting::Esp_Item_Molotof && Item.Name == "Burn")
				{
					DX11::ImGui_DX11::DrawFilledRect(Screen.X - 15, Screen.Y, 30, 15, ImColor(0.000f, 0.00f, 0.00f, 0.250f));
					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					DX11::ImGui_DX11::CornerBox(Screen.X - 15, Screen.Y, 30, 15, 0.9f, popcorn2, DX11::ImGui_DX11::Color::Red);
				}
				if (Setting::Esp_Item_Molotof && Item.Name == "frag")
				{

					DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Textt, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::White, true);
				}

			}
		}
		//if (Setting::BombAlert)
		//{
		//	if (Data::BombAlertList.size() > 0) {
		//		TempBombAlertList.clear();
		//		TempBombAlertList = Data::BombAlertList;
		//		for (BombAlert& bomb : TempBombAlertList) {
		//			if (!Algorithm::WorldToScreen(bomb.Position, Screen, &Distance, ViewMatrix)) continue;

		//			string  Name = bomb.Name + " [" + to_string(Distance) + "m]";
		//			//string time = to_string(bomb.timeLeft);
		//			Name = Name + "  [" + to_string(bomb.timeLeft) + "s]";
		//			DX11::ImGui_DX11::DrawCircle(Screen.X, Screen.Y, 12.0f, DX11::ImGui_DX11::Color::Red);
		//			string Thr = bomb.Name + "    !!Throwable Near You!!";
		//			DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, 20, Thr, (DX11Window::Width / 2) - 180, (DX11Window::Height / 9) + 12, DX11::ImGui_DX11::Color::Red, 0);
		//			DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize + 2, Name, Screen.X, Screen.Y - 6, DX11::ImGui_DX11::Color::Red, true);

		//		}
		//	}

		//}
		if (!Setting::fightmode)
		{
			if (Setting::impitems)
			{
				for (Item& Item : Data::ItemList)
				{

					if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

					Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";
					std::string air = Item.Name + " " + to_string(Distance) + "M";
					if (Setting::Mk14 && Item.Name == "Token")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Black, true);
					}
					if (Setting::G36 && Item.Name == "Pan")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Black, true);
					}

					if (Setting::playerdeadbox && Item.Name == "AirDrop")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y + 13, DX11::ImGui_DX11::Color::Red, false);

					}

					if (Setting::deadbox && Item.Name == "Dead-Box")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y + 13, DX11::ImGui_DX11::Color::White, false);
					}

					if (Setting::MG3 && Item.Name == "MG3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);
					}
					if (Setting::FAMAS && Item.Name == "FAMAS")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Green, true);
					}

					if (Setting::Mk14 && Item.Name == "Mk14")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);
					}
					if (Setting::G36 && Item.Name == "G36")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);
					}

					if (Setting::AN94 && Item.Name == "ASM")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Green, true);
					}

					if (Setting::Esp_Item_AKM && Item.Name == "AKM")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);
					}
					if (Setting::Esp_Item_SCARL && Item.Name == "SCAR-L")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Green, true);
					}

					if (Setting::Esp_Item_M416 && Item.Name == "M416")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Green, true);
					}
					if (Setting::Esp_Item_M24 && Item.Name == "M24")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Blue, true);
					}

					if (Setting::Esp_Item_Kar98k && Item.Name == "Kar98k")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Blue, true);
					}
					if (Setting::plan && Item.Name == "AirDrop-Plan")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}

					if (Setting::Esp_Item_DP28 && Item.Name == "DP28")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);
					}
					if (Setting::Esp_Item_M762 && Item.Name == "M762")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Yellow, true);
					}
					if (Setting::Esp_Item_Awm && Item.Name == "AWM")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}

					if (Setting::Esp_Item_FlareGun && Item.Name == "Flare Gun")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}

					if (Setting::Esp_Item_Flare && Item.Name == "Flare")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}

					if (Setting::Esp_Item_AirDrop && Item.Name == "Air Drop")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
						DrawImage(Image, Screen.X, Screen.Y, 18, 12);
					}
					if (Setting::Esp_Item_Armor3 && Item.Name == "Armor L.3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}
					if (Setting::Esp_Item_Bag3 && Item.Name == "Bag L.3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}
					if (Setting::Esp_Item_Helmet3 && Item.Name == "Helmet L.3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}
					if (Setting::Esp_Item_Helmet3 && Item.Name == "300Magnum")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, air, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}
					if (Setting::AN94 && Item.Name == "Mosin")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Blue, true);
					}
					if (Setting::Esp_Item_Mk47Mutant && Item.Name == "Mosin")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Blue, true);
					}

					if (Setting::Esp_Item_x4 && Item.Name == "4x")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}

					if (Setting::Esp_Item_x6 && Item.Name == "6x")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}

					if (Setting::Esp_Item_x8 && Item.Name == "8x")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);
					}
					if (Setting::Esp_Item_MedKit && Item.Name == "Med Kit")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red2, true);
					}

					if (Setting::Esp_Item_FirstAidKit && Item.Name == "First Aid Kit")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red2, true);
					}

					if (Setting::Esp_Item_Painkiller && Item.Name == "Painkiller")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red2, true);
					}

					if (Setting::Esp_Item_EnergyDrink && Item.Name == "Energy Drink")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red2, true);
					}
					if (Setting::Esp_Item_AdrenalineSyringe && Item.Name == "Adrenaline")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red2, true);
					}

				}
				if (Setting::deadbox)
				{
					ImColor color;
					for (int i = 0; i < g_pEsp->lootboxr.size(); i++)
					{

						if (!Algorithm::WorldToScreen(g_pEsp->lootboxr[i].Position, Screen, &Distance, Esp::ViewMatrix)) continue;
						//	std::string dead = "Loot-Box  " + to_string(Distance) + "M";
						if (Distance >= 200 || Distance <= 5) continue;

						//	DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, dead, Screen.X, Screen.Y + 13, Colors::deadbox, false);
						if (Setting::playerdeadbox)
						{


							for (int k = 0; k < g_pEsp->lootboxr[i].boxitem.size(); k++)
							{
								color = g_pEsp->lootboxr[i].boxitem[k].colorcod;
								std::string text = g_pEsp->lootboxr[i].boxitem[k].Displayname;

								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, text, Screen.X, Screen.Y - 15 * (k), g_pEsp->lootboxr[i].boxitem[k].colorcod, false);

								if (Setting::bg)
								{
									DX11::ImGui_DX11::DrawFilledRect(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, ImColor(0.000f, 0.00f, 0.00f, 0.200f));


								}
								if (Setting::itemrect)
								{
									if (Setting::redioption == 1)
									{
										DX11::ImGui_DX11::CornerBox(Screen.X - 10, Screen.Y - 15 * (k), 110, 15, 0.6f, popcorn2, Colors::bgcorner);

									}

									if (Setting::redioption == 2)
									{
										DX11::ImGui_DX11::DrawRectangle(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, Colors::bgcorner, 0.6f);

									}


								}

							}

						}

					}


				}
			}
			if (!Setting::impitems)
			{
				for (Item& Item : Data::ItemList)
				{


					if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

					Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";

					if (Setting::Mk14 && Item.Name == "Token")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::MG3, true);
					}
					if (Setting::G36 && Item.Name == "Pan")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::FAMAS, true);
					}

					if (Setting::playerdeadbox && Item.Name == "AirDrop")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y + 13, Colors::deadbox, false);

					}

					if (Setting::deadbox && Item.Name == "Dead-Box")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y + 13, Colors::deadbox, false);
					}

					if (Setting::MG3 && Item.Name == "MG3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::MG3, true);
					}
					if (Setting::FAMAS && Item.Name == "FAMAS")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::FAMAS, true);
					}

					if (Setting::Mk14 && Item.Name == "Mk14")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::Mk14, true);
					}
					if (Setting::G36 && Item.Name == "G36")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::G36, true);
					}

					if (Setting::AN94 && Item.Name == "ASM")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::AN94, true);
					}

					if (Setting::Esp_Item_AKM && Item.Name == "AKM")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::AKM, true);
					}
					if (Setting::Esp_Item_SCARL && Item.Name == "SCAR-L")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::scarl, true);
					}

					if (Setting::Esp_Item_M416 && Item.Name == "M416")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::m16, true);
					}
					if (Setting::Esp_Item_M24 && Item.Name == "M24")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::M24, true);
					}

					if (Setting::Esp_Item_Kar98k && Item.Name == "Kar98k")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::kar98, true);
					}
					if (Setting::plan && Item.Name == "AirDrop-Plan")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, Setting::plancolor, true);
					}

					if (Setting::Esp_Item_DP28 && Item.Name == "DP28")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_DP28_Color[0], Setting::Esp_Item_DP28_Color[1], Setting::Esp_Item_DP28_Color[2], Setting::Esp_Item_DP28_Color[3]), true);
					}
					if (Setting::Esp_Item_M762 && Item.Name == "M762")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_M762_Color[0], Setting::Esp_Item_M762_Color[1], Setting::Esp_Item_M762_Color[2], Setting::Esp_Item_M762_Color[3]), true);
					}
					if (Setting::Esp_Item_Awm && Item.Name == "AWM")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::AWM, true);
					}

					if (Setting::Esp_Item_FlareGun && Item.Name == "Flare Gun")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::Flaregun, true);
					}

					if (Setting::Esp_Item_Flare && Item.Name == "Flare")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::Flare, true);
					}

					if (Setting::Esp_Item_AirDrop && Item.Name == "Air Drop")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::Airdrop, true);
					}
					if (Setting::Esp_Item_Armor3 && Item.Name == "Armor L.3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Armor3_Color[0], Setting::Esp_Item_Armor3_Color[1], Setting::Esp_Item_Armor3_Color[2], Setting::Esp_Item_Armor3_Color[3]), true);
					}
					if (Setting::Esp_Item_Bag3 && Item.Name == "Bag L.3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Bag3_Color[0], Setting::Esp_Item_Bag3_Color[1], Setting::Esp_Item_Bag3_Color[2], Setting::Esp_Item_Bag3_Color[3]), true);
					}
					if (Setting::Esp_Item_Helmet3 && Item.Name == "Helmet L.3")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Helmet3_Color[0], Setting::Esp_Item_Helmet3_Color[1], Setting::Esp_Item_Helmet3_Color[2], Setting::Esp_Item_Helmet3_Color[3]), true);
					}
					if (Setting::Esp_Item_Helmet3 && Item.Name == "300Magnum")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, weapon::AWM, true);
					}
					if (Setting::AN94 && Item.Name == "Mosin")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Orange, true);
					}
					if (Setting::Esp_Item_Mk47Mutant && Item.Name == "Mosin")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Orange, true);
					}

					if (Setting::Esp_Item_Bag1 && Item.Name == "Bag L.1")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Bag1_Color[0], Setting::Esp_Item_Bag1_Color[1], Setting::Esp_Item_Bag1_Color[2], Setting::Esp_Item_Bag1_Color[3]), true);
					}

					if (Setting::Esp_Item_Bag2 && Item.Name == "Bag L.2")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Bag2_Color[0], Setting::Esp_Item_Bag2_Color[1], Setting::Esp_Item_Bag2_Color[2], Setting::Esp_Item_Bag2_Color[3]), true);
					}

					if (Setting::Esp_Item_Helmet1 && Item.Name == "Helmet L.1")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Helmet1_Color[0], Setting::Esp_Item_Helmet1_Color[1], Setting::Esp_Item_Helmet1_Color[2], Setting::Esp_Item_Helmet1_Color[3]), true);
					}

					if (Setting::Esp_Item_Helmet2 && Item.Name == "Helmet L.2")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Helmet2_Color[0], Setting::Esp_Item_Helmet2_Color[1], Setting::Esp_Item_Helmet2_Color[2], Setting::Esp_Item_Helmet2_Color[3]), true);
					}

					if (Setting::Esp_Item_Armor1 && Item.Name == "Armor L.1")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Armor1_Color[0], Setting::Esp_Item_Armor1_Color[1], Setting::Esp_Item_Armor1_Color[2], Setting::Esp_Item_Armor1_Color[3]), true);
					}

					if (Setting::Esp_Item_Armor2 && Item.Name == "Armor L.2")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Armor2_Color[0], Setting::Esp_Item_Armor2_Color[1], Setting::Esp_Item_Armor2_Color[2], Setting::Esp_Item_Armor2_Color[3]), true);
					}
					if (Setting::Esp_Item_Mk47Mutant && Item.Name == "Mk47 Mutant")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Mk47Mutant_Color[0], Setting::Esp_Item_Mk47Mutant_Color[1], Setting::Esp_Item_Mk47Mutant_Color[2], Setting::Esp_Item_Mk47Mutant_Color[3]), true);
					}
					if (Setting::Esp_Item_M16A4 && Item.Name == "M16A4")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_M16A4_Color[0], Setting::Esp_Item_M16A4_Color[1], Setting::Esp_Item_M16A4_Color[2], Setting::Esp_Item_M16A4_Color[3]), true);
					}
					if (Setting::Esp_Item_G36C && Item.Name == "G36C")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_G36C_Color[0], Setting::Esp_Item_G36C_Color[1], Setting::Esp_Item_G36C_Color[2], Setting::Esp_Item_G36C_Color[3]), true);
					}

					if (Setting::Esp_Item_QBZ && Item.Name == "QBZ")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_QBZ_Color[0], Setting::Esp_Item_QBZ_Color[1], Setting::Esp_Item_QBZ_Color[2], Setting::Esp_Item_QBZ_Color[3]), true);
					}

					if (Setting::Esp_Item_QBU && Item.Name == "QBU")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_QBU_Color[0], Setting::Esp_Item_QBU_Color[1], Setting::Esp_Item_QBU_Color[2], Setting::Esp_Item_QBU_Color[3]), true);
					}

					if (Setting::Esp_Item_SLR && Item.Name == "SLR")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_SLR_Color[0], Setting::Esp_Item_SLR_Color[1], Setting::Esp_Item_SLR_Color[2], Setting::Esp_Item_SLR_Color[3]), true);
					}
					if (Setting::Esp_Item_Mini14 && Item.Name == "Mini-14")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Mini14_Color[0], Setting::Esp_Item_Mini14_Color[1], Setting::Esp_Item_Mini14_Color[2], Setting::Esp_Item_Mini14_Color[3]), true);
					}
					if (Setting::Esp_Item_PP19 && Item.Name == "PP19")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_PP19_Color[0], Setting::Esp_Item_PP19_Color[1], Setting::Esp_Item_PP19_Color[2], Setting::Esp_Item_PP19_Color[3]), true);
					}

					if (Setting::Esp_Item_TommyGun && Item.Name == "Tommy Gun")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_TommyGun_Color[0], Setting::Esp_Item_TommyGun_Color[1], Setting::Esp_Item_TommyGun_Color[2], Setting::Esp_Item_TommyGun_Color[3]), true);
					}

					if (Setting::Esp_Item_MP5K && Item.Name == "MP5K")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_MP5K_Color[0], Setting::Esp_Item_MP5K_Color[1], Setting::Esp_Item_MP5K_Color[2], Setting::Esp_Item_MP5K_Color[3]), true);
					}

					if (Setting::Esp_Item_UMP9 && Item.Name == "UMP9")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_UMP9_Color[0], Setting::Esp_Item_UMP9_Color[1], Setting::Esp_Item_UMP9_Color[2], Setting::Esp_Item_UMP9_Color[3]), true);
					}
					if (Setting::Esp_Item_Vector && Item.Name == "Vector")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Vector_Color[0], Setting::Esp_Item_Vector_Color[1], Setting::Esp_Item_Vector_Color[2], Setting::Esp_Item_Vector_Color[3]), true);
					}

					if (Setting::Esp_Item_Uzi && Item.Name == "Uzi")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Uzi_Color[0], Setting::Esp_Item_Uzi_Color[1], Setting::Esp_Item_Uzi_Color[2], Setting::Esp_Item_Uzi_Color[3]), true);
					}

					if (Setting::Esp_Item_762mm && Item.Name == "7.62mm")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_762mm_Color[0], Setting::Esp_Item_762mm_Color[1], Setting::Esp_Item_762mm_Color[2], Setting::Esp_Item_762mm_Color[3]), true);
					}

					if (Setting::Esp_Item_556mm && Item.Name == "5.56mm")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_556mm_Color[0], Setting::Esp_Item_556mm_Color[1], Setting::Esp_Item_556mm_Color[2], Setting::Esp_Item_556mm_Color[3]), true);
					}

					if (Setting::Esp_Item_9mm && Item.Name == "9mm")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_9mm_Color[0], Setting::Esp_Item_9mm_Color[1], Setting::Esp_Item_9mm_Color[2], Setting::Esp_Item_9mm_Color[3]), true);
					}

					if (Setting::Esp_Item_45ACP && Item.Name == "45ACP")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_45ACP_Color[0], Setting::Esp_Item_45ACP_Color[1], Setting::Esp_Item_45ACP_Color[2], Setting::Esp_Item_45ACP_Color[3]), true);
					}

					if (Setting::Esp_Item_Holo && Item.Name == "Holo")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Holo_Color[0], Setting::Esp_Item_Holo_Color[1], Setting::Esp_Item_Holo_Color[2], Setting::Esp_Item_Holo_Color[3]), true);
					}
					if (Setting::Esp_Item_M249 && Item.Name == "M249")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::M249, true);
					}

					if (Setting::Esp_Item_Mk12 && Item.Name == "MK12")
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, Colors::MK12, true);
					}

				}
				if (Setting::deadbox)
				{
					ImColor color;
					for (int i = 0; i < g_pEsp->lootboxr.size(); i++)
					{

						if (!Algorithm::WorldToScreen(g_pEsp->lootboxr[i].Position, Screen, &Distance, Esp::ViewMatrix)) continue;
						//	std::string dead = "Loot-Box  " + to_string(Distance) + "M";
						if (Distance >= 200 || Distance <= 5) continue;

						//	DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, dead, Screen.X, Screen.Y + 13, Colors::deadbox, false);
						if (Setting::playerdeadbox)
						{


							for (int k = 0; k < g_pEsp->lootboxr[i].boxitem.size(); k++)
							{
								color = g_pEsp->lootboxr[i].boxitem[k].colorcod;
								std::string text = g_pEsp->lootboxr[i].boxitem[k].Displayname;

								DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, text, Screen.X, Screen.Y - 15 * (k), g_pEsp->lootboxr[i].boxitem[k].colorcod, false);

								if (Setting::bg)
								{
									DX11::ImGui_DX11::DrawFilledRect(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, ImColor(0.000f, 0.00f, 0.00f, 0.200f));


								}
								if (Setting::itemrect)
								{
									if (Setting::redioption == 1)
									{
										DX11::ImGui_DX11::CornerBox(Screen.X - 10, Screen.Y - 15 * (k), 110, 15, 0.6f, popcorn2, Colors::bgcorner);

									}

									if (Setting::redioption == 2)
									{
										DX11::ImGui_DX11::DrawRectangle(Screen.X - 10, Screen.Y - 15 * (k), 100, 15, Colors::bgcorner, 0.6f);

									}


								}

							}

						}

					}


				}
				if (Setting::healthitem)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

						Text = Item.Name;// +" " + "(" + to_string(Distance) + "m)";

						if (Setting::Esp_Item_MedKit && Item.Name == "Med Kit")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_MedKit_Color[0], Setting::Esp_Item_MedKit_Color[1], Setting::Esp_Item_MedKit_Color[2], Setting::Esp_Item_MedKit_Color[3]), true);
						}

						if (Setting::Esp_Item_FirstAidKit && Item.Name == "First Aid Kit")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_FirstAidKit_Color[0], Setting::Esp_Item_FirstAidKit_Color[1], Setting::Esp_Item_FirstAidKit_Color[2], Setting::Esp_Item_FirstAidKit_Color[3]), true);
						}

						if (Setting::Esp_Item_Painkiller && Item.Name == "Painkiller")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_Painkiller_Color[0], Setting::Esp_Item_Painkiller_Color[1], Setting::Esp_Item_Painkiller_Color[2], Setting::Esp_Item_Painkiller_Color[3]), true);
						}

						if (Setting::Esp_Item_EnergyDrink && Item.Name == "Energy Drink")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_EnergyDrink_Color[0], Setting::Esp_Item_EnergyDrink_Color[1], Setting::Esp_Item_EnergyDrink_Color[2], Setting::Esp_Item_EnergyDrink_Color[3]), true);
						}
						if (Setting::Esp_Item_AdrenalineSyringe && Item.Name == "Adrenaline")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_EnergyDrink_Color[0], Setting::Esp_Item_EnergyDrink_Color[1], Setting::Esp_Item_EnergyDrink_Color[2], Setting::Esp_Item_EnergyDrink_Color[3]), true);
						}


					}
				}
				if (Setting::scope)
				{
					for (Item& Item : Data::ItemList)
					{
						if (!Algorithm::WorldToScreen(Item.Position, Screen, &Distance, Esp::ViewMatrix)) continue;

						Text = Item.Name;// +" " + to_string(Distance) + " M";
						if (Setting::Esp_Item_x2 && Item.Name == "2x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x2_Color[0], Setting::Esp_Item_x2_Color[1], Setting::Esp_Item_x2_Color[2], Setting::Esp_Item_x2_Color[3]), true);
						}

						if (Setting::Esp_Item_x3 && Item.Name == "3x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x3_Color[0], Setting::Esp_Item_x3_Color[1], Setting::Esp_Item_x3_Color[2], Setting::Esp_Item_x3_Color[3]), true);
						}

						if (Setting::Esp_Item_x4 && Item.Name == "4x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::Normalfontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x4_Color[0], Setting::Esp_Item_x4_Color[1], Setting::Esp_Item_x4_Color[2], Setting::Esp_Item_x4_Color[3]), true);
						}

						if (Setting::Esp_Item_x6 && Item.Name == "6x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x6_Color[0], Setting::Esp_Item_x6_Color[1], Setting::Esp_Item_x6_Color[2], Setting::Esp_Item_x6_Color[3]), true);
						}

						if (Setting::Esp_Item_x8 && Item.Name == "8x")
						{
							DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::special, Setting::fontsize, Text, Screen.X, Screen.Y, ImColor(Setting::Esp_Item_x8_Color[0], Setting::Esp_Item_x8_Color[1], Setting::Esp_Item_x8_Color[2], Setting::Esp_Item_x8_Color[3]), true);
						}
					}

				}

			}


			if (Setting::Vehicle)
			{
				for (Vehicle& Vehicle : Data::VehicleList)
				{

					if (!Algorithm::WorldToScreen(Vehicle.Position, Screen, &Distance, ViewMatrix)) continue;

					if (Distance > 500 || Screen.Z < 0.001f || Distance < 10) continue;
					Text1 = Vehicle.Name + " " + "| " + to_string(Distance) + " M";
					int hp = static_cast<int>(Vehicle.hp);
					int oil = static_cast<int>(Vehicle.oil);
					Text = "HP " + to_string(hp) + " - GAS " + to_string(oil);
					if (Vehicle.driving)
					{
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text1, Screen.X, Screen.Y, DX11::ImGui_DX11::Color::Red, true);

						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y + 10, DX11::ImGui_DX11::Color::Red, true);
					}
					else
					{																							 
						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text1, Screen.X, Screen.Y, IM_COL32(247, 255, 0, 255), true);

						DX11::ImGui_DX11::DrawBorderString(DX11::ImGui_DX11::pRegularFont, Setting::Normalfontsize, Text, Screen.X, Screen.Y + 10, IM_COL32(247, 255, 0, 255), true);
					}
						

				}
			}
		}
		}
		ImGui::Render();
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
		DX11::EndDraw();
		std::this_thread::sleep_for(std::chrono::milliseconds(Setting::Lag));

	}
}