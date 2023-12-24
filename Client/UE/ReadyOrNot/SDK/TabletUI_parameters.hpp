#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9 - 0x0)
// Function TabletUI.TabletUI_C.AudioPlayerVisible
struct ITabletUI_C_AudioPlayerVisible_Params
{
public:
	class UW_AudioPlayer_C*                      PlayerWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerVisible;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TabletUI.TabletUI_C.SetVisualTheme
struct ITabletUI_C_SetVisualTheme_Params
{
public:
	bool                                         UseDarkTheme;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TabletUI.TabletUI_C.SetTabletState
struct ITabletUI_C_SetTabletState_Params
{
public:
	bool                                         IsAwake;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


