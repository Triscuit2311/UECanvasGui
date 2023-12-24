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

// 0x21 (0x21 - 0x0)
// Function W_BriefingMain.W_BriefingMain_C.SetBriefingTaskButtonsActive
struct UW_BriefingMain_C_SetBriefingTaskButtonsActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsActive;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_BriefingTaskButton_C*               CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x218 (0x218 - 0x0)
// Function W_BriefingMain.W_BriefingMain_C.OnMouseButtonDoubleClick
struct UW_BriefingMain_C_OnMouseButtonDoubleClick_Params
{
public:
	struct FGeometry                             InMyGeometry;                                      // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         InMouseEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_BriefingMain.W_BriefingMain_C.PreConstruct
struct UW_BriefingMain_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4A8 (0x4A8 - 0x0)
// Function W_BriefingMain.W_BriefingMain_C.ExecuteUbergraph_W_BriefingMain
struct UW_BriefingMain_C_ExecuteUbergraph_W_BriefingMain_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreMissionPlanning*                   CallFunc_GetPremissionPlanning_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_BriefingBio_ProfileRight_C*         CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_BriefingTaskButton_C*               CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39D1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetWhiteboardObjectiveText_OutString;     // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x78(0x18)(None)
	class FString                                CallFunc_GetLevelNickname_OutNickname;             // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios;                          // 0xA0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xB0(0x18)(None)
	struct FCharacterBio                         CallFunc_Array_Get_Item_1;                         // 0xC8(0x140)(None)
	TArray<struct FCriminalRecord>               CallFunc_GetBioDetails_RapSheet;                   // 0x208(0x10)(ReferenceParm)
	class UTexture2D*                            CallFunc_GetBioDetails_ProfileImage;               // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutDescription;             // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutBioText;                 // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x248(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x260(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios_1;                        // 0x280(0x10)(ReferenceParm)
	struct FCharacterBio                         CallFunc_Array_Get_Item_2;                         // 0x290(0x140)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCriminalRecord>               CallFunc_GetBioDetails_RapSheet_1;                 // 0x3D8(0x10)(ReferenceParm)
	class UTexture2D*                            CallFunc_GetBioDetails_ProfileImage_1;             // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutDescription_1;           // 0x3F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutBioText_1;               // 0x400(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x418(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_6;          // 0x430(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x448(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x454(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x458(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetWhiteboardTimelineAsString_OutString;  // 0x460(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_7;          // 0x470(0x18)(None)
	TArray<class UW_BriefingTaskButton_C*>       CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x488(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_BriefingBio_ProfileLeft_C*          CallFunc_Create_ReturnValue_1;                     // 0x498(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x4A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


