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

// 0x8 (0x8 - 0x0)
// Function W_COOPDeathScreen.W_COOPDeathScreen_C.BP_GetDesiredFocusTarget
struct UW_COOPDeathScreen_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_COOPDeathScreen.W_COOPDeathScreen_C.Tick
struct UW_COOPDeathScreen_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_COOPDeathScreen.W_COOPDeathScreen_C.BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_COOPDeathScreen_C_BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function W_COOPDeathScreen.W_COOPDeathScreen_C.ExecuteUbergraph_W_COOPDeathScreen
struct UW_COOPDeathScreen_C_ExecuteUbergraph_W_COOPDeathScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRenderOpacity_ReturnValue;             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRenderOpacity_ReturnValue_1;           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4318[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue_1;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4319[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACommanderGM*                          K2Node_DynamicCast_AsCommander_GM;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


