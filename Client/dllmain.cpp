#include "pch.h"
#include "client_lib.hpp"

BOOL APIENTRY DllMain(const HMODULE h_module, const DWORD dw_call_reason, const LPVOID lp_reserved)
{
	client_lib::globals::h_module = h_module;
	
	switch (dw_call_reason)
	{
	case (DLL_PROCESS_ATTACH):
		{
			DisableThreadLibraryCalls(h_module);
			CreateThread(client_lib::main_thread.lp_security_attributes,
				client_lib::main_thread.dw_stack_size,
				client_lib::p_thread::func,	// NOLINT(performance-no-int-to-ptr)
				client_lib::globals::h_module,
				client_lib::main_thread.flags,
				client_lib::main_thread.id);
			break;
		}
	case (DLL_PROCESS_DETACH):
		{
			client_lib::globals::interrupt = true;
			break;
		}
	default: ;
	}

	return TRUE;
}
