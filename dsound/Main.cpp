#include "Main.h"
#include "Includes.h"
#include "Utility.h"

#include "DX11Window.h"
#include "DX11.h"
#include "Data.h"
#include "Esp.h"
#include "Memory.h"
#include "Aimbot.h"
#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"
#include"byte.h"
#include "Discord.h"
#include"Driver.h"
#include <Psapi.h>
Discord* g_Discord;
DRIVER* m_drvv = nullptr;

int scrWidth = GetSystemMetrics(SM_CXSCREEN);
int scrHeight = GetSystemMetrics(SM_CYSCREEN);
BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam);
void CustomImGUIStyle()
{
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(4, 9);
	style.WindowRounding = 1.0f;
	style.FramePadding = ImVec2(0, 3);
	style.FrameRounding = 6.0f; // Make all elements (checkboxes, etc) circles
	style.ItemSpacing = ImVec2(8, 4);
	style.ItemInnerSpacing = ImVec2(1, 6);
	style.CellPadding = ImVec2(5, 5);
	style.IndentSpacing = 23.0f;
	style.ScrollbarSize = 5.0f;
	style.ScrollbarRounding = 3.0f;
	style.GrabMinSize = 15.0f; // Make grab a circle
	style.GrabRounding = 3.0f;
	style.PopupRounding = 2.f;
	style.Alpha = 0.80;
	style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
	style.TouchExtraPadding = ImVec2(0, 0);
	style.TabRounding = 3.0f;
	style.ButtonTextAlign = ImVec2(0.50f, 0.50f);
	style.ChildBorderSize = 1.00f;
	style.DisplayWindowPadding = ImVec2(22, 22);
	style.DisplaySafeAreaPadding = ImVec2(4, 4);
	style.AntiAliasedLines = true;
	style.CurveTessellationTol = 1.f;
	style.TabBorderSize = 1.000f;
	ImVec4* colors = style.Colors;
	style.Colors[ImGuiCol_Text] = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
	style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.17f, 0.21f, 0.24f, 1.00f);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);
	style.Colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);
	style.Colors[ImGuiCol_PopupBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);
	style.Colors[ImGuiCol_Border] = ImVec4(0.15f, 0.22f, 0.25f, 1.00f);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.20f, 0.20f, 0.20f, 0.00f);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.18f, 0.25f, 0.27f, 0.50f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.15f, 0.19f, 0.24f, 1.00f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.19f, 0.22f, 0.24f, 1.00f);
	style.Colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);
	style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.15f, 0.15f, 0.15f, 0.51f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);
	style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.11f, 0.11f, 0.11f, 0.50f);
	style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(1.00f, 1.00f, 1.00f, 0.60f);
	style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(1.00f, 1.00f, 1.00f, 0.20f);
	style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(1.00f, 1.00f, 1.00f, 0.30f);
	style.Colors[ImGuiCol_CheckMark] = ImVec4(1.241f, 1.13f, 1.13f, 1.00f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.35f, 0.47f, 0.68f, 1.00f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.68f, 0.80f, 1.00f, 1.00f);
	style.Colors[ImGuiCol_Button] = ImVec4(0.14f, 0.19f, 0.24f, 1.00f);
	style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.27f, 0.30f, 0.44f, 1.00f);
	style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.28f, 0.29f, 0.41f, 1.00f);
	style.Colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.12f, 0.16f, 0.20f, 0.80f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.00f, 0.44f, 0.92f, 1.00f);
	style.Colors[ImGuiCol_Separator] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.31f, 0.45f, 0.60f, 0.78f);
	style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.42f, 0.57f, 0.75f, 1.00f);
	style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.64f, 0.79f, 0.98f, 0.25f);
	style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.65f, 0.75f, 0.87f, 0.67f);
	style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.43f, 0.55f, 0.70f, 0.95f);
	style.Colors[ImGuiCol_Tab] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	style.Colors[ImGuiCol_TabHovered] = ImVec4(0.59f, 0.59f, 0.59f, 0.80f);
	style.Colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	style.Colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
	style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
	style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
	style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
	style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	//	[ImGuiCol_TabTextActive] = Active text color for tabs.
}
int first = 0;
int scrWidthh = GetSystemMetrics(SM_CXSCREEN);
int scrHeightt = GetSystemMetrics(SM_CYSCREEN);

RECT Rect;


int getEmuID() {
	int pid = 0;
	int threadCount = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 pe;
	pe.dwSize = sizeof(PROCESSENTRY32);
	Process32First(hSnap, &pe);
	while (Process32Next(hSnap, &pe)) {
		if (wcscmp(pe.szExeFile, L"AndroidEmulator.exe") == 0) {
			if ((int)pe.cntThreads > threadCount) {
				threadCount = pe.cntThreads;
				pid = pe.th32ProcessID;
			}
		}
	}

	return pid;
}

int getEmuID3() {
	int pid = 0;
	int threadCount = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 pe;
	pe.dwSize = sizeof(PROCESSENTRY32);
	Process32First(hSnap, &pe);
	while (Process32Next(hSnap, &pe)) {
		if (wcscmp(pe.szExeFile, L"AndroidEmulatorEx.exe") == 0) {
			if ((int)pe.cntThreads > threadCount) {
				threadCount = pe.cntThreads;
				pid = pe.th32ProcessID;
			}
		}
	}

	return pid;
}

int getEmuID2() {
	int pid = 0;
	int threadCount = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 pe;
	pe.dwSize = sizeof(PROCESSENTRY32);
	Process32First(hSnap, &pe);
	while (Process32Next(hSnap, &pe)) {
		if (wcscmp(pe.szExeFile, L"ProjectTitan.exe") == 0) {
			if ((int)pe.cntThreads > threadCount) {
				threadCount = pe.cntThreads;
				pid = pe.th32ProcessID;
			}
		}
	}

	return pid;
}

int getEmuProcID()
{
	int pid = 0;
	int gameloop = 0;
	int smartgaga = 0;
	int gameloopen = 0;
	gameloop = getEmuID();
	smartgaga = getEmuID2();
	gameloopen = getEmuID3();
	if (smartgaga == 0 || smartgaga == 1)
	{
		if (gameloop == 0 || gameloop == 1)
		{
			return gameloopen;
		}
		else
		{
			return gameloop;
		}
	}
	else
	{
		return smartgaga;
	}
}

int find(BYTE* buffer, int dwBufferSize, BYTE* bstr, DWORD dwStrLen) {
	if (dwBufferSize < 0) {
		return -1;
	}
	DWORD  i, j;
	for (i = 0; i < dwBufferSize; i++) {
		for (j = 0; j < dwStrLen; j++) {
			if (buffer[i + j] != bstr[j])
				if (bstr[j] != '?')
					break;
		}
		if (j == dwStrLen)
			return i;
	}
	return -1;
}
bool search(BYTE* bSearchData, int nSearchSize, std::vector<DWORD_PTR>& vRet, DWORD_PTR dwStartAddr, DWORD_PTR dwEndAddr) {
	DWORD pid = getEmuProcID();
	MEMORY_BASIC_INFORMATION	mbi;
	std::vector<MEMORY_REGION> m_vMemoryRegion;
	mbi.RegionSize = 0x400;
	DWORD dwAddress = dwStartAddr;
	HANDLE phandle = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
	MEMORY_REGION memSectorList[1000];

	int memSectorIndex = 0;
	while (VirtualQueryEx(phandle, (LPCVOID)dwAddress, &mbi, sizeof(mbi)) && (dwAddress < dwEndAddr) && ((dwAddress + mbi.RegionSize) > dwAddress)) {
		if (
			(mbi.State == MEM_COMMIT) &&
			((mbi.Protect & PAGE_GUARD) == 0) &&
			(mbi.Protect != PAGE_NOACCESS) &&
			((mbi.AllocationProtect & PAGE_NOCACHE) != PAGE_NOCACHE)
			) {
			MEMORY_REGION mData = { 0 };
			try {
				mData.dwBaseAddr = (DWORD_PTR)mbi.BaseAddress;
				mData.dwMemorySize = mbi.RegionSize;
				m_vMemoryRegion.push_back(mData);
				memSectorList[memSectorIndex] = mData;
			}
			catch (std::exception ex)
			{
			}
			memSectorIndex++;
		}
		dwAddress = (DWORD)mbi.BaseAddress + mbi.RegionSize;
	}

	std::vector<MEMORY_REGION>::iterator it;
	//for(it = m_vMemoryRegion.begin(); it != m_vMemoryRegion.end(); it++){
	int memSectorCount = memSectorIndex;
	memSectorIndex = 0;
	DWORD_PTR curAddr = dwStartAddr;
	while (curAddr < dwEndAddr) {
		VirtualQueryEx(phandle, (LPCVOID)curAddr, &mbi, sizeof(mbi));
		long regionSizeOrg = mbi.RegionSize;
		long regionSize = mbi.RegionSize;
		if (regionSize > 10) {
			BYTE* pCurrMemoryData = new BYTE[regionSize];
			ReadProcessMemory(phandle, (void*)curAddr, pCurrMemoryData, regionSize, NULL);
			DWORD_PTR dwOffset = 0;
			int iOffset = find(pCurrMemoryData, regionSize, bSearchData, nSearchSize);
			while (iOffset != -1) {
				dwOffset += iOffset;
				vRet.push_back(dwOffset + curAddr);
				dwOffset += nSearchSize;
				iOffset = find(pCurrMemoryData + dwOffset, regionSize - dwOffset - nSearchSize, bSearchData, nSearchSize);
			}
			delete[] pCurrMemoryData;
		}
		memSectorIndex++;
		curAddr = curAddr + (DWORD_PTR)regionSizeOrg;
		continue;
	}
	return TRUE;
}
void PatchGameloopAntiCheat()
{

	Sleep(8000);
	DWORD pid = getEmuProcID();
	HANDLE phandle2 = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
	BYTE pattern[] = { 0xfa, 0xff, 0x5f, 0x5e, 0x5b, 0xc3, 0xe9 };/////////////// //////////0xE9 BC 3F 2C 00 8D 64   E9 BC 3F 2C 00 8D 64

	std::vector<DWORD_PTR> foundbases;
	BYTE write[] = { 0xC2, 0x08, 0x00 };////C2 08 00
	search(pattern, sizeof(pattern), foundbases, 0x0, 0xfffffff);
	if (foundbases.size() != 0)
	{
		unsigned int addr = foundbases[0] + 6;
		unsigned long OldProtect;

		VirtualProtectEx(phandle2, (BYTE*)addr, 3, PAGE_EXECUTE_READWRITE, &OldProtect);
		WriteProcessMemory(phandle2, (BYTE*)addr, write, 3, NULL);
		VirtualProtectEx(phandle2, (BYTE*)addr, 3, OldProtect, NULL);
		MessageBoxA(0, "Click Ok In Logo ", "Shark", 0);
		DWORD pid = Game::Id;
		HANDLE phandle2 = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);

	}
	else
	{

	  MessageBoxA(0, "Click Ok In Logo", "Shark",0);
	}

}

int main()
{
	Sleep(1);

	
	g_Discord->Initialize();
	g_Discord->Update();
	std::ofstream file1;

	if (Emulator::IsGameLoop == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"AEngineRenderWindowClass", L"AEngineRenderWindow");
	}
	else if (Emulator::IsSmartGaGa == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"TitanOpenglWindowClass", L"TitanOpenglWindow");
	}


	GetWindowRect(Game::hWindow, &Rect);
	if (Rect.left < 0 || Rect.top < 0 || Rect.right < 0 || Rect.bottom < 0)
	{


		RECT tSize;
		GetWindowRect(Game::hWindow, &tSize);
		scrWidthh = Rect.right - Rect.left;
		scrHeightt = Rect.bottom - Rect.top;
		SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, Rect.left, Rect.top, scrWidthh, scrHeightt, SWP_NOMOVE | SWP_NOSIZE);
		MoveWindow(DX11Window::hWindow, Rect.left, Rect.top, scrWidthh, scrHeightt, true);
			DwmExtendFrameIntoClientArea(DX11Window::hWindow, &DX11Window::Margins);
	}
	DX11Window::Instantiate(Rect.left, Rect.top, scrWidthh, scrHeightt);
	DX11::Instantiate(DX11Window::hWindow, scrWidthh, scrHeightt);
	ImGui::CreateContext();
	ImGuiIO& Io = ImGui::GetIO();
	CustomImGUIStyle();
	Io.WantSaveIniSettings = true;
	static const ImWchar icons_ranges[] =
	{
		0x0020, 0x00FF, // Basic Latin + Latin Supplement
		0x0400, 0x044F, // Cyrillic
		0,
	};
	ImFontConfig icons_config;
	icons_config.FontDataOwnedByAtlas = true;
	ImFontConfig CustomFont;
	CustomFont.FontDataOwnedByAtlas = false;
	icons_config.MergeMode = true;
	icons_config.PixelSnapH = true;
	icons_config.OversampleH = 2.5;
	icons_config.OversampleV = 2.5;
	//io.Fonts->AddFontDefault();
	ImFontConfig font_config;
	font_config.OversampleH = 1; //or 2 is the same
	font_config.OversampleV = 1;
	font_config.PixelSnapH = 1;
	ImFont* fo = Io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(font1), sizeof(font1), 15.0f, &CustomFont);
	fon::iconfont = Io.Fonts->AddFontFromMemoryTTF((void*)icon, sizeof(icon), 25, &font_config, icons_ranges);
	
	Io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 16.0f, &icons_config, icons_ranges);
	DX11::ImGui_DX11::special = Io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 15.0f, &CustomFont);
	DX11::ImGui_DX11::pRegularFont = fo;// io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 13.f, &CustomFont);
	//TCHAR DriverPath1[256] = L"C:\\Windows\\Fonts\\dsound.exe";
	//file1.open(DriverPath1, std::ios_base::binary);
	//assert(file1.is_open());


	ImGui_ImplWin32_Init(DX11Window::hWindow);
	ImGui_ImplDX11_Init(DX11::pDevice, DX11::pImmediateContext);
	DX11::ImGui_DX11::special = Io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 15.0f, &CustomFont);

	DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 13.0f, &CustomFont);
	Io.Fonts->AddFontDefault();



	CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Data::QueryThread, 0, 0, 0));
	Sleep(5);
	//CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Data::ItemThread, 0, 0, 0));

	CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Esp::EspThread, 0, 0, 0));
	Sleep(5);
	CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Memory::MemoryThread, 0, 0, 0));
	Sleep(5);
	/*CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Memory::Instant, 0, 0, 0));
	Sleep(5);*/


	MSG Message;
	for (;;)
	{

		Sleep(25);
		if (Rect.left < 0 || Rect.top < 0 || Rect.right < 0 || Rect.bottom < 0)
		{

			RECT tSize;
			GetWindowRect(Game::hWindow, &tSize);
			scrWidthh = Rect.right - Rect.left;
			scrHeightt = Rect.bottom - Rect.top;
			SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, Rect.left, Rect.top, scrWidthh, scrHeightt, SWP_NOMOVE | SWP_NOSIZE);
			MoveWindow(DX11Window::hWindow, Rect.left, Rect.top, scrWidthh, scrHeightt, true);
		}


		if (PeekMessage(&Message, DX11Window::hWindow, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}
		if (Emulator::IsSmartGaGa == true)
		{
			Game::hWindow = FindWindowW(L"TitanRenderWindowClass", nullptr);
			Game::hWindow = FindWindowExW(Game::hWindow, 0, L"TitanOpenglWindowClass", L"TitanOpenglWindow");
		}

		RECT Rect;
		RECT res;

		if (Game::hWindow)
		{
			/*GetClientRect(Game::hWindow, &Rect);*/
			GetWindowRect(Game::hWindow, &Rect);
			DX11Window::Left = Rect.left;
			DX11Window::Top = Rect.top;
			if (DX11Window::Width != (Rect.right - Rect.left) || DX11Window::Height != (Rect.bottom - Rect.top))
			{
				DX11Window::Width = Rect.right - Rect.left;
				DX11Window::Height = Rect.bottom - Rect.top;

			}
			SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, Rect.left, Rect.top, scrWidth, scrHeight, SWP_NOMOVE | SWP_NOSIZE);
			MoveWindow(DX11Window::hWindow, Rect.left, Rect.top, scrWidth, scrHeight, TRUE);
			DwmExtendFrameIntoClientArea(DX11Window::hWindow, &DX11Window::Margins);

		}

		if (Setting::antiscreen)
		{
			SetWindowDisplayAffinity(DX11Window::hWindow, WDA_EXCLUDEFROMCAPTURE);
		}
		else
		{
			SetWindowDisplayAffinity(DX11Window::hWindow, WDA_NONE);

		}

		if (Setting::ShowMenu)
		{
			SetForegroundWindow(DX11Window::hWindow);
		}

		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			if (DX11Window::IsClickable == true)
			{
				Utility::ChangeClickability(FALSE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
			else
			{
				Utility::ChangeClickability(TRUE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
		}

		if (GetAsyncKeyState(0x4E) & 1) {

			if (Setting::curraim == 2)
				Setting::curraim = 0;


			else if (Setting::curraim == 0)
				Setting::curraim = 1;

			else if (Setting::curraim == 1)
				Setting::curraim = 2;

		}
		if (GetAsyncKeyState(VK_F3) & 1) {
			Setting::MagicBullet = !Setting::MagicBullet;
			Setting::fovcircle = !Setting::fovcircle;
			Setting::knocked = !Setting::knocked;
			if (Setting::MagicBullet == true)
			{
				Setting::fovcircle == true;
				Memory::RestoreHook();
			}

		}
		if (GetAsyncKeyState(VK_F4) & 1) {
			Setting::fightmode = !Setting::fightmode;

		}
		if (GetAsyncKeyState(VK_F5) & 1) {
			Setting::IpadVeiw = !Setting::IpadVeiw;

		}
		if (GetAsyncKeyState(VK_HOME) & 1) {
			Setting::ShowMenuTwo = !Setting::ShowMenuTwo;
		}
		}
		if (GetAsyncKeyState(VK_END) & 1) {
			Setting::ENDMENU = !Setting::ENDMENU;
		}

	return S_OK;
}
BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam)
{
	char Buffer[1000];
	GetClassNameA(hWnd, Buffer, 1000);

	string WindowClassName = Buffer;
	if (Emulator::IsGameLoop == TRUE)
	{
		if (WindowClassName.find("TXGuiFoundation") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TXGuiFoundation", Name);
		}
	}
	else if (Emulator::IsSmartGaGa == TRUE)
	{
		if (WindowClassName.find("TitanRenderWindowClass") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TitanRenderWindowClass", Name);
		}
	}

	return TRUE;
}