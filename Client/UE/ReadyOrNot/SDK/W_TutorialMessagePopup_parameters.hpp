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

// 0x30 (0x30 - 0x0)
// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ShowMessagePrompt
struct UW_TutorialMessagePopup_C_ShowMessagePrompt_Params
{
public:
	bool                                         IsFirstShowing;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                          Content;                                           // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.UpdateMessageContent
struct UW_TutorialMessagePopup_C_UpdateMessageContent_Params
{
public:
	TArray<class FText>                          Content;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA9 (0xA9 - 0x0)
// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ExecuteUbergraph_W_TutorialMessagePopup
struct UW_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsFirstShowing;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Title;                          // 0x10(0x18)(None)
	TArray<class FText>                          K2Node_CustomEvent_Content_1;                      // 0x28(0x10)(ConstParm, ReferenceParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_TutorialMessageEntry_C*             CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_CustomEvent_Content;                        // 0x60(0x10)(ConstParm, ReferenceParm)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x70(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x88(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


