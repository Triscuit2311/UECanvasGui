#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#define OBJECTS_OFFSET 0x583C820
#define NAMES_OFFSET 0x58000C0
#define WORLD_OFFSET 0x59801E0
#define PROCESS_EVENT_INDEX 0x44
#define CREATE_DEFAULT_OBJECT_INDEX 0x00
#define POST_RENDER_INDEX 0x63 // 0x3B || 0x63 || 0x87 || 0x88
#define GET_BONE_MATRIX_OFFSET 0x00
#define GET_VIEW_POINT_INDEX 0x00
#define GET_PLAYER_VIEW_POINT_OFFSET 0x00

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#include "Global_Structs.h"
#include "Global_Classes.h"

