#ifndef PCH_H
#define PCH_H

#define _CRT_SECURE_NO_WARNINGS 1
#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING 1

#pragma warning(disable : 26495)

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <Psapi.h>
#include <TlHelp32.h>

#include <atomic>
#include <cstdio>
#include <set>
#include <string>
#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <cstdint>
#include <locale>
#include <codecvt>
#include <thread>
#include <chrono>
#include <functional>
#include <queue>
#include <algorithm>


// Remove these fucking dumbass macros
#undef min
#undef max

#include "../UE/SDK/SDK.hpp"
#include "../../Shared/logging.h"

#endif //PCH_H
