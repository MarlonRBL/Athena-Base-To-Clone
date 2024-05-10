#include "includes.h"

int main()
{
	LPCTSTR gameName = L"cs2.exe";
	const wchar_t* clientModuleName = L"client.dll";
	const wchar_t* engineModuleName = L"engine.dll";

	if (!mem::find_driver())
	{
		std::cout << "Failed to find driver" << std::endl;
		std::cin.get();
		return 1;
	}

	DWORD pid = mem::find_process(gameName);
	if (!pid)
	{
		std::cout << "Failed to find the game" << std::endl;
		std::cin.get();
		return 1;
	}

	clientModule = mem::get_module_base(pid, clientModuleName);
	if (!clientModule)
	{
		std::cout << "Failed to find client Module" << std::endl;
		std::cin.get();
		return 1;
	}

	engineModule = mem::get_module_base(pid, engineModuleName);
	if (!engineModule)
	{
		std::cout << "Failed to find engine Module" << std::endl;
		std::cin.get();
		return 1;
	}




	while (1)
	{
		// MAIN CODE -- WITH DRIVER INTIALIZED AND MORE!
	}
}