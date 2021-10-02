#include <Windows.h>
#include "vars.hpp"

/*
Credits: Join my discord noobs: https://discord.link/CProject
*/


Vars* vars = new Vars();

extern DWORD D3DThread();
BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hMod);
		CloseHandle(CreateThread(0, 0, (PTHREAD_START_ROUTINE)D3DThread, 0, 0, 0));
	}
	return TRUE;
}
