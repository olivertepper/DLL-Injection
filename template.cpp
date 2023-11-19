#include <Windows.h>

#pragma comment(lib, "user32.lib")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH: // When the DLL is loaded
	case DLL_THREAD_ATTACH: // When a thread is created
	case DLL_THREAD_DETACH: // When a thread is destroyed
	case DLL_PROCESS_DETACH: // When the DLL is unloaded
		break;
	}
	return TRUE;
}

extern "C" {
__declspec(dllexport) BOOL WINAPI HelloWorld(void){
		MessageBox(NULL, L"Hello!", L"DLL Injection", MB_OK);
		return TRUE;
	}
}