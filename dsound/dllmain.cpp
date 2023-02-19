
#include"Main.h"
#include "dsound.h"
#include"Utility.h"
#include"Setting.h"
#include"Global.h"
#include"Data.h"
#include"DX11.h"
#include"Esp.h"
#include"loadDrv.h"
#include"Driver.h"
#include "termcolor.h"
#include "xorstr.hpp"
#include "api/xCheto.hpp"

#pragma comment (lib, "dxguid.lib")

#define XTREME_DRIVER_FILE  "Bicatcho.sys"
#define XTREME_SERVICE_NAME "Bicatcho"
#define XTREME_DEVICE_NAME  "\\Device\\Bicatcho"
DRIVER* m_drv = nullptr;
////////////////////////////////////////////////////////////////////
std::ofstream Log::LOG("dsound.log");
AddressLookupTable<void> ProxyAddressLookupTable = AddressLookupTable<void>();

DirectSoundCreateProc m_pDirectSoundCreate;
DirectSoundEnumerateAProc m_pDirectSoundEnumerateA;
DirectSoundEnumerateWProc m_pDirectSoundEnumerateW;
DllCanUnloadNowProc m_pDllCanUnloadNow;
DllGetClassObjectProc m_pDllGetClassObject;
DirectSoundCaptureCreateProc m_pDirectSoundCaptureCreate;
DirectSoundCaptureEnumerateAProc m_pDirectSoundCaptureEnumerateA;
DirectSoundCaptureEnumerateWProc m_pDirectSoundCaptureEnumerateW;
GetDeviceIDProc m_pGetDeviceID;
DirectSoundFullDuplexCreateProc m_pDirectSoundFullDuplexCreate;
DirectSoundCreate8Proc m_pDirectSoundCreate8;
DirectSoundCaptureCreate8Proc m_pDirectSoundCaptureCreate8;
int oneTime = 0;
bool isLoop = false;
bool isGaGa = false;
int	Id = 0;

using namespace KeyAuth;
std::string name = XorStr("BicatchoSafe"); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = XorStr("l9gCUbcKo8"); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = XorStr("6605ff7cda4150f4687e6bfb1cc7357755b61c5c582f3918b5436c7783554ddb"); // app secret, the blurred text on licenses tab and other tabs
std::string version = XorStr("2.0"); // leave alone unless you've changed version on website
api KeyAuthApp(name, ownerid, secret, version);

inline bool KeyExist(const std::string& name) {
	if (FILE* file = fopen(name.c_str(), "r")) {
		fclose(file);
		return true;
	}
	else {
		return false;
	}
}
string KeyFile(string location)
{
	string myText;
	ifstream MyReadFile(location);
	while (getline(MyReadFile, myText)) {
		cout << myText;
	}
	MyReadFile.close();
	return myText;
}
void KeyToFile(string filepath, string credentials)
{
	ofstream MyFile(filepath);
	MyFile << credentials;
	MyFile.close();
}




void  LoadThread()
{
	//m_drv = new DRIVER(XTREME_DRIVER_FILE, XTREME_DEVICE_NAME, XTREME_SERVICE_NAME, Driver, DriverSize);
	//m_drv->Load();
	DWORD ViewMatrixBasee = 0;
	Setting::LoginPage = true;

	while (true)
	{
		Sleep(4000);

		TCHAR pro[256] = L"aow_exe.exe";
		TCHAR procidss[256] = L"AndroidProcess.exe";

		Id = Utility::GetTrueProcessId(pro);
		if (Id > 0)
		{
			isLoop = true;
		}
		else
		{
			Id = Utility::GetTrueProcessId(procidss);
			if (Id > 0)
			{
				isGaGa = true;
			}
		}
		Game::hProcessF = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Id);
		if (isLoop == true)
		{
			ViewMatrixBasee = Data::GetViewMatrixBase(0x3D000000, 0x65000000);

		}
		else if (isGaGa == true)
		{
			ViewMatrixBasee = Data::GetViewMatrixBase(0x60000000, 0x9B000000);

		}

		if (ViewMatrixBasee != 0)
		{
			TCHAR procid[256] = L"aow_exe.exe";
			TCHAR procidss[256] = L"AndroidProcess.exe";
			Game::Id = Utility::GetTrueProcessId(procid);
			if (Game::Id > 0)
			{
				Emulator::IsGameLoop = TRUE;
				Emulator::IsGameLoop7 = TRUE;
			}
			else
			{
				Game::Id = Utility::GetTrueProcessId(procidss);

				if (Game::Id > 0)
				{
					Emulator::IsSmartGaGa = TRUE;
					Emulator::IsSmartGaGa7 = TRUE;
				}
			}
			Game::hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Game::Id);

			if (oneTime == 0)
			{
				////	m_drv->Unload();

				main();

				oneTime = 1;

			}
		}
	}

}
void CreateConsole()
{
	if (!AllocConsole()) {
		// Add some error handling here.
		// You can call GetLastError() to get more info about the error.
		return;
	}


	FILE* fDummy;
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	freopen_s(&fDummy, "CONIN$", "r", stdin);
}
static HMODULE dsounddll;

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		//	CreateConsole();
			// Load dll
		char path[MAX_PATH];
		GetSystemDirectoryA(path, MAX_PATH);
		strcat_s(path, "\\dsound.dll");
		//	Log() << "Loading " << path;
		// GetModuleHandleA("dsound.dll");// 
		 dsounddll = LoadLibraryA(path);
		//// Get function addresses
		m_pDirectSoundCreate = (DirectSoundCreateProc)GetProcAddress(dsounddll, "DirectSoundCreate");
		m_pDirectSoundEnumerateA = (DirectSoundEnumerateAProc)GetProcAddress(dsounddll, "DirectSoundEnumerateA");
		m_pDirectSoundEnumerateW = (DirectSoundEnumerateWProc)GetProcAddress(dsounddll, "DirectSoundEnumerateW");
		m_pDllCanUnloadNow = (DllCanUnloadNowProc)GetProcAddress(dsounddll, "DllCanUnloadNow");
		m_pDllGetClassObject = (DllGetClassObjectProc)GetProcAddress(dsounddll, "DllGetClassObject");
		m_pDirectSoundCaptureCreate = (DirectSoundCaptureCreateProc)GetProcAddress(dsounddll, "DirectSoundCaptureCreate");
		m_pDirectSoundCaptureEnumerateA = (DirectSoundCaptureEnumerateAProc)GetProcAddress(dsounddll, "DirectSoundCaptureEnumerateA");
		m_pDirectSoundCaptureEnumerateW = (DirectSoundCaptureEnumerateWProc)GetProcAddress(dsounddll, "DirectSoundCaptureEnumerateW");
		m_pGetDeviceID = (GetDeviceIDProc)GetProcAddress(dsounddll, "GetDeviceID");
		m_pDirectSoundFullDuplexCreate = (DirectSoundFullDuplexCreateProc)GetProcAddress(dsounddll, "DirectSoundFullDuplexCreate");
		m_pDirectSoundCreate8 = (DirectSoundCreate8Proc)GetProcAddress(dsounddll, "DirectSoundCreate8");
		m_pDirectSoundCaptureCreate8 = (DirectSoundCaptureCreate8Proc)GetProcAddress(dsounddll, "DirectSoundCaptureCreate8");
		CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)LoadThread, 0, 0, 0));
		DisableThreadLibraryCalls(hModule);
		break;

	case DLL_PROCESS_DETACH:
		//FreeLibrary(dsounddll);
		break;
	}

	return TRUE;
}

HRESULT WINAPI DirectSoundCreate(LPCGUID pcGuidDevice, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter)
{
	if (!m_pDirectSoundCreate)
	{
		return E_FAIL;
	}

	HRESULT hr = m_pDirectSoundCreate(pcGuidDevice, ppDS, pUnkOuter);

	if (SUCCEEDED(hr) && ppDS)
	{
		*ppDS = new m_IDirectSound8((IDirectSound8*)*ppDS);
	}

	return hr;
}

HRESULT WINAPI DirectSoundEnumerateA(LPDSENUMCALLBACKA pDSEnumCallback, LPVOID pContext)
{
	if (!m_pDirectSoundEnumerateA)
	{
		return E_FAIL;
	}

	return m_pDirectSoundEnumerateA(pDSEnumCallback, pContext);
}

HRESULT WINAPI DirectSoundEnumerateW(LPDSENUMCALLBACKW pDSEnumCallback, LPVOID pContext)
{
	if (!m_pDirectSoundEnumerateW)
	{
		return E_FAIL;
	}

	return m_pDirectSoundEnumerateW(pDSEnumCallback, pContext);
}

HRESULT WINAPI DllCanUnloadNow()
{
	if (!m_pDllCanUnloadNow)
	{
		return E_FAIL;
	}

	return m_pDllCanUnloadNow();
}

HRESULT WINAPI DllGetClassObject(IN REFCLSID rclsid, IN REFIID riid, OUT LPVOID FAR* ppv)
{
	if (!m_pDllGetClassObject)
	{
		return E_FAIL;
	}

	HRESULT hr = m_pDllGetClassObject(rclsid, riid, ppv);

	if (SUCCEEDED(hr))
	{
		genericQueryInterface(riid, ppv);
	}

	return hr;
}

HRESULT WINAPI DirectSoundCaptureCreate(LPCGUID pcGuidDevice, LPDIRECTSOUNDCAPTURE* ppDSC, LPUNKNOWN pUnkOuter)
{
	if (!m_pDirectSoundCaptureCreate)
	{
		return E_FAIL;
	}

	HRESULT hr = m_pDirectSoundCaptureCreate(pcGuidDevice, ppDSC, pUnkOuter);

	if (SUCCEEDED(hr) && ppDSC)
	{
		*ppDSC = new m_IDirectSoundCapture8(*ppDSC);
	}

	return hr;
}

HRESULT WINAPI DirectSoundCaptureEnumerateA(LPDSENUMCALLBACKA pDSEnumCallback, LPVOID pContext)
{
	if (!m_pDirectSoundCaptureEnumerateA)
	{
		return E_FAIL;
	}

	return m_pDirectSoundCaptureEnumerateA(pDSEnumCallback, pContext);
}

HRESULT WINAPI DirectSoundCaptureEnumerateW(LPDSENUMCALLBACKW pDSEnumCallback, LPVOID pContext)
{
	if (!m_pDirectSoundCaptureEnumerateW)
	{
		return E_FAIL;
	}

	return m_pDirectSoundCaptureEnumerateW(pDSEnumCallback, pContext);
}

HRESULT WINAPI GetDeviceID(LPCGUID pGuidSrc, LPGUID pGuidDest)
{
	return m_pGetDeviceID(pGuidSrc, pGuidDest);
}

HRESULT WINAPI DirectSoundFullDuplexCreate(LPCGUID pcGuidCaptureDevice, LPCGUID pcGuidRenderDevice, LPCDSCBUFFERDESC pcDSCBufferDesc, LPCDSBUFFERDESC pcDSBufferDesc, HWND hWnd,
	DWORD dwLevel, LPDIRECTSOUNDFULLDUPLEX* ppDSFD, LPDIRECTSOUNDCAPTUREBUFFER8* ppDSCBuffer8, LPDIRECTSOUNDBUFFER8* ppDSBuffer8, LPUNKNOWN pUnkOuter)
{
	if (!m_pDirectSoundFullDuplexCreate)
	{
		return E_FAIL;
	}

	HRESULT hr = m_pDirectSoundFullDuplexCreate(pcGuidCaptureDevice, pcGuidRenderDevice, pcDSCBufferDesc, pcDSBufferDesc, hWnd, dwLevel, ppDSFD, ppDSCBuffer8, ppDSBuffer8, pUnkOuter);

	if (SUCCEEDED(hr))
	{
		if (ppDSFD)
		{
			*ppDSFD = new m_IDirectSoundFullDuplex8(*ppDSFD);
		}
		if (ppDSCBuffer8)
		{
			*ppDSCBuffer8 = new m_IDirectSoundCaptureBuffer8(*ppDSCBuffer8);
		}
		if (ppDSBuffer8)
		{
			*ppDSBuffer8 = new m_IDirectSoundBuffer8(*ppDSBuffer8);
		}
	}

	return hr;
}

HRESULT WINAPI DirectSoundCreate8(LPCGUID pcGuidDevice, LPDIRECTSOUND8* ppDS8, LPUNKNOWN pUnkOuter)
{
	if (!m_pDirectSoundCreate8)
	{
		return E_FAIL;
	}

	HRESULT hr = m_pDirectSoundCreate8(pcGuidDevice, ppDS8, pUnkOuter);

	if (SUCCEEDED(hr) && ppDS8)
	{
		*ppDS8 = new m_IDirectSound8(*ppDS8);
	}

	return hr;
}

HRESULT WINAPI DirectSoundCaptureCreate8(LPCGUID pcGuidDevice, LPDIRECTSOUNDCAPTURE8* ppDSC8, LPUNKNOWN pUnkOuter)
{
	if (!m_pDirectSoundCaptureCreate8)
	{
		return E_FAIL;
	}

	HRESULT hr = m_pDirectSoundCaptureCreate8(pcGuidDevice, ppDSC8, pUnkOuter);

	if (SUCCEEDED(hr) && ppDSC8)
	{
		*ppDSC8 = new m_IDirectSoundCapture8(*ppDSC8);
	}

	return hr;
}
