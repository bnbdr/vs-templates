#include <Windows.h>
#include "$projectname$.h"

BOOL WINAPI DllMain(HMODULE hModule,
	DWORD  dwReason,
	LPVOID lpReserved
)
{
	UNREFERENCED_PARAMETER(hModule);
	UNREFERENCED_PARAMETER(lpReserved);

	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}


int exported(PVOID p)
{
	UNREFERENCED_PARAMETER(p);
	return 0;
}
