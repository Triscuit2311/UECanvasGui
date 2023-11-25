#pragma once

#include "pch.h"

namespace client_lib
{
    namespace globals
    {
        extern HMODULE h_module;
        extern std::atomic_bool interrupt;
        extern std::atomic_bool running;
        void exit();
    }

    struct p_thread
    {
        static DWORD WINAPI func(LPVOID lp_param);
        DWORD flags = 0;
        LPSECURITY_ATTRIBUTES lp_security_attributes = nullptr;
        SIZE_T dw_stack_size = 0;
        LPDWORD id = nullptr;
    };

    extern p_thread main_thread;
}