#ifndef PCH_H
#define PCH_H

#define _CRT_SECURE_NO_WARNINGS 1
#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING 1

#pragma warning(disable : 26495)
#include "framework.h"

#undef min
#undef max


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

#pragma warning(push)
#pragma warning(disable: 4244)
#pragma warning(disable: 4369)
#pragma warning(disable: 4309)

#include "UE/SDK.hpp"

#pragma warning(pop)


#include "../Shared/logging.h"
//#include "client_lib.hpp"


#endif //PCH_H
