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

// 0xB (0xB - 0x0)
// Function W_WorldMap.W_WorldMap_C.GoBack
struct UW_WorldMap_C_GoBack_Params
{
public:
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B8 (0x2B8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.OnKeyDown
struct UW_WorldMap_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x128(0xB8)(None)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x1E0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x200(0xB8)(None)
};

// 0x67 (0x67 - 0x0)
// Function W_WorldMap.W_WorldMap_C.SetSelectedMode
struct UW_WorldMap_C_SetSelectedMode_Params
{
public:
	class FName                                  SelectedMode;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_WorldMapPin_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_WorldMapPin_C*                      CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_WorldMapPin_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_WorldMapPin_C*                      CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x218 (0x218 - 0x0)
// Function W_WorldMap.W_WorldMap_C.On_MapBlurClickable_MouseButtonDown_0
struct UW_WorldMap_C_On_MapBlurClickable_MouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
};

// 0x791 (0x791 - 0x0)
// Function W_WorldMap.W_WorldMap_C.ShowToolTip
struct UW_WorldMap_C_ShowToolTip_Params
{
public:
	struct FLevelDataLookupTable                 MissionDetails;                                    // 0x0(0x788)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                            CallFunc_GetLazyLoadedImage_ReturnValue;           // 0x788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x807 (0x807 - 0x0)
// Function W_WorldMap.W_WorldMap_C.SetSelectedMission
struct UW_WorldMap_C_SetSelectedMission_Params
{
public:
	class FName                                  SelectedMission;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 CallFunc_GetMapDetailsFromName_ReturnValue;        // 0x28(0x788)(None)
	class UTexture2D*                            CallFunc_GetLazyLoadedImage_ReturnValue;           // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_WorldMapPin_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x7C0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_WorldMapPin_C*                      CallFunc_Array_Get_Item;                           // 0x7D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x7E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_WorldMapPin_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x7E8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_WorldMapPin_C*                      CallFunc_Array_Get_Item_1;                         // 0x7F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x800(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x804(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x805(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x806(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function W_WorldMap.W_WorldMap_C.OnDragDetected
struct UW_WorldMap_C_OnDragDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                    Operation;                                         // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x221 (0x221 - 0x0)
// Function W_WorldMap.W_WorldMap_C.OnMouseMove
struct UW_WorldMap_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
	struct FVector2D                             CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;  // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_WorldMap.W_WorldMap_C.Tick
struct UW_WorldMap_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.BndEvt__W_WorldMap_btn_Close_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_WorldMap_C_BndEvt__W_WorldMap_btn_Close_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.BndEvt__W_WorldMap_btn_AcceptMission_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_WorldMap_C_BndEvt__W_WorldMap_btn_AcceptMission_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.OnSetMissionButtonClicked_Event_0
struct UW_WorldMap_C_OnSetMissionButtonClicked_Event_0_Params
{
public:
	class UW_WorldMap_MissionSelect_C*           BtnClicked;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.PinClicked
struct UW_WorldMap_C_PinClicked_Params
{
public:
	class FName                                  MissionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.PinHovered
struct UW_WorldMap_C_PinHovered_Params
{
public:
	class FName                                  MissionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.PinUnhovered
struct UW_WorldMap_C_PinUnhovered_Params
{
public:
	class FName                                  MissionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11C0 (0x11C0 - 0x0)
// Function W_WorldMap.W_WorldMap_C.ExecuteUbergraph_W_WorldMap
struct UW_WorldMap_C_ExecuteUbergraph_W_WorldMap_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_609[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WorldMapPin_C*                      CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x48(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLevelUnlocked_OutIsUnlocked;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_IsLevelUnlocked_OutScoreRequired;         // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_IsLevelUnlocked_OutLockedUrl;             // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLevelUnlocked_ReturnValue;              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLevelDataLookupTable                 CallFunc_GetMapDetailsFromName_ReturnValue;        // 0xE0(0x788)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x868(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x8A8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x8B8(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8D0(0x10)(ZeroConstructor, NoDestructor)
	TArray<class UW_WorldMap_MissionSelect_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8E0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_WorldMap_MissionSelect_C*           K2Node_CustomEvent_BtnClicked;                     // 0x8F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WorldMap_MissionSelect_C*           CallFunc_Array_Get_Item;                           // 0x8F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue_1; // 0x908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_610[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue;    // 0x918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetBuiltModdedMapList_ReturnValue;        // 0x920(0x10)(ReferenceParm)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x930(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x938(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x948(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x94C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_611[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSelectedMode_OutMode;                  // 0x958(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelectedMode_ReturnValue;              // 0x968(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_612[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x970(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_613[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x988(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WorldMap_MissionSelect_C*           K2Node_DynamicCast_AsW_World_Map_Mission_Select;   // 0x990(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x998(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_614[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x99C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsGameModeSelectable_ReturnValue;         // 0x9A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_616[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AMissionPortal*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x9A8(0x10)(ReferenceParm)
	class AMissionPortal*                        CallFunc_Array_Get_Item_3;                         // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x9C0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x9D0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x9E0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_MissionName_2;                  // 0x9F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_WorldMapPin_C*>              CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x9F8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_WorldMapPin_C*                      CallFunc_Array_Get_Item_4;                         // 0xA08(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xA10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0xA14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_617[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_MissionName_1;                  // 0xA18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_MissionName;                    // 0xA20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0xA28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 CallFunc_GetMapDetailsFromName_ReturnValue_1;      // 0xA38(0x788)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap.W_WorldMap_C.UpdateMapMaterial__DelegateSignature
struct UW_WorldMap_C_UpdateMapMaterial__DelegateSignature_Params
{
public:
	class UTexture2D*                            LayoutTexture;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function W_WorldMap.W_WorldMap_C.PanMap__DelegateSignature
struct UW_WorldMap_C_PanMap__DelegateSignature_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CursorPos;                                         // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


