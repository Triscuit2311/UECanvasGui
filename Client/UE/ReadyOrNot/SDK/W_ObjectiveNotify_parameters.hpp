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

// 0x1 (0x1 - 0x0)
// Function W_ObjectiveNotify.W_ObjectiveNotify_C.PreConstruct
struct UW_ObjectiveNotify_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_ObjectiveNotify.W_ObjectiveNotify_C.Tick
struct UW_ObjectiveNotify_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC6 (0xC6 - 0x0)
// Function W_ObjectiveNotify.W_ObjectiveNotify_C.ExecuteUbergraph_W_ObjectiveNotify
struct UW_ObjectiveNotify_C_ExecuteUbergraph_W_ObjectiveNotify_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x68(0x10)(ReferenceParm)
	bool                                         CallFunc_SimulateAnimatedText_bCompleted;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SimulateAnimatedText_ReturnValue;         // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue;         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue_1;       // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D64[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue_2;       // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue_3;       // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


