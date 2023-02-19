#pragma once

#include "Includes.h"
#include "Global.h"

typedef struct _MEMORY_REGION
{
	DWORD_PTR dwBaseAddr;
	DWORD_PTR dwMemorySize;

} MEMORY_REGION, * PMEMORY_REGION;

namespace Utility
{
	INT GetTrueProcessId(TCHAR* ProcessName);
	BOOL MemSearchh(BYTE* bSearchData, int nSearchSize, DWORD_PTR dwStartAddr, DWORD_PTR dwEndAddr, BOOL bIsCurrProcess, int iSearchMode, std::vector<DWORD_PTR>& vRet);

	BOOL MemSearch(BYTE* bSearchData, int nSearchSize, DWORD_PTR dwStartAddr, DWORD_PTR dwEndAddr, BOOL bIsCurrProcess, int iSearchMode, std::vector<DWORD_PTR>& vRet);
	VOID ChangeClickability(BOOL CanClick, HWND hWindow);
	bool FindPattern(BYTE* bSearchData, int nSearchSize, DWORD_PTR dwStartAddr, DWORD_PTR dwEndAddr, BOOL bIsCurrProcess, int iSearchMode, std::vector<DWORD_PTR>& vRet);
	VOID AOBREP(BYTE BypaRep[], BYTE write[], SIZE_T size, SIZE_T sizee, int numbers);
	template <typename T>
	T ReadMemory(DWORD BaseAddress)
	{
		T Buffer;
		ReadProcessMemory(Game::hProcessF, (LPCVOID)BaseAddress, &Buffer, sizeof(Buffer), nullptr);

		return Buffer;
	}

	template <typename T>
	T ReadMemoryEx(DWORD BaseAddress)
	{
		T Buffer;
		ReadProcessMemory(Game::hProcess, (LPCVOID)BaseAddress, &Buffer, sizeof(Buffer), nullptr);

		return Buffer;
	}
	template <typename T>
	T RMP(HANDLE hProc, DWORD BaseAddress)
	{
		T Buffer;
		ReadProcessMemory(hProc, (LPCVOID)BaseAddress, &Buffer, sizeof(Buffer), nullptr);

		return Buffer;
	}
	template <typename T>
	void WriteMemoryEx(DWORD BaseAddress, T WriteValue)
	{
		WriteProcessMemory(Game::hProcess, (LPVOID)BaseAddress, &WriteValue, sizeof(WriteValue), nullptr);

	}
	template <typename T>
	T ReadVirtual(DWORD ProcessId, DWORD ReadAddress)
	{
		T Buffer = { NULL };
		HANDLE hand = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessId);
		ReadProcessMemory(hand, (LPCVOID)ReadAddress, &Buffer, sizeof(Buffer), nullptr);

		return Buffer;
	}
	void RPM(LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T* lpNumberOfBytesRead);
	template <typename T>
	void WriteProtectedMemoryEx(DWORD BaseAddress, T WriteValue)
	{
		DWORD OldProtect;

		VirtualProtectEx(Game::hProcess, (LPVOID)BaseAddress, sizeof(WriteValue), PAGE_EXECUTE_READWRITE, &OldProtect);
		WriteProcessMemory(Game::hProcess, (LPVOID)BaseAddress, &WriteValue, sizeof(WriteValue), nullptr);
		VirtualProtectEx(Game::hProcess, (LPVOID)BaseAddress, sizeof(WriteValue), OldProtect, nullptr);
	}
}