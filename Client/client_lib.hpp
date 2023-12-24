#pragma once

#include "pch.h"

#include "engine_data.hpp"
#include "engine_renderer.hpp"
#include "engine_ui.hpp"
#include "engine_features.hpp"

namespace client_lib
{
    namespace globals
    {

        extern std::atomic<bool> mouse_down;


        extern HMODULE h_module;
        extern std::atomic_bool interrupt;
        extern std::atomic_bool running;
        void exit();
    }
    namespace modules
    {
	    inline std::unique_ptr<engine_data> ue;
        inline std::unique_ptr<engine_renderer> renderer;
        inline std::unique_ptr<engine_ui> ui;
        inline std::unique_ptr<engine_features> features;
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
