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

// 0x63 (0x63 - 0x0)
// Function W_BugReporterMenu.W_BugReporterMenu_C.GetOkButtonEnabled
struct UW_BugReporterMenu_C_GetOkButtonEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x20(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_BugReporterMenu_C_BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_BugReporterMenu.W_BugReporterMenu_C.BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
struct UW_BugReporterMenu_C_BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA1 (0xA1 - 0x0)
// Function W_BugReporterMenu.W_BugReporterMenu_C.ExecuteUbergraph_W_BugReporterMenu
struct UW_BugReporterMenu_C_ExecuteUbergraph_W_BugReporterMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentOptionAsString_OptionAsString;  // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x48(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PostBugReport_ReturnValue;                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D8A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


