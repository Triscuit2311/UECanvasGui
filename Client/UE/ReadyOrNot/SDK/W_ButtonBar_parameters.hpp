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
// Function W_ButtonBar.W_ButtonBar_C.BackPage
struct UW_ButtonBar_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.GetFocusTarget
struct UW_ButtonBar_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_354A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.Disable
struct UW_ButtonBar_C_Disable_Params
{
public:
	bool                                         Disable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.SetOptionsMap
struct UW_ButtonBar_C_SetOptionsMap_Params
{
public:
	TMap<class FString, class FText>             ButtonOptions;                                     // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x105 (0x105 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.InsertOptionAtIndex
struct UW_ButtonBar_C_InsertOptionAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ButtonID;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<class FString, class FText>             RebuiltMap;                                        // 0x30(0x50)(Edit, BlueprintVisible)
	TArray<class FText>                          ButtonValues;                                      // 0x80(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        ButtonIDs;                                         // 0x90(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_354C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FText>                          CallFunc_Map_Values_Values;                        // 0xC0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Map_Find_Value;                           // 0xD0(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_354D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0xF0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.CreateButtonWidget
struct UW_ButtonBar_C_CreateButtonWidget_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UW_Button_C*                           NewButton;                                         // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.AddOption
struct UW_ButtonBar_C_AddOption_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_Button_C*                           NewButton;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x30(0x8)(NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_354F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           CallFunc_CreateButtonWidget_NewButton;             // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.SetOptions
struct UW_ButtonBar_C_SetOptions_Params
{
public:
	TMap<class FString, class FText>             ButtonOptions;                                     // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x19 (0x19 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.GetHasOptions
struct UW_ButtonBar_C_GetHasOptions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3550[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x8(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.GetButtonID
struct UW_ButtonBar_C_GetButtonID_Params
{
public:
	class UW_Button_C*                           ButtonToFind;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ID;                                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class UW_Button_C*>                   CallFunc_Map_Values_Values;                        // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3554[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.SetEquippedButtonByID
struct UW_ButtonBar_C_SetEquippedButtonByID_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           FoundButton;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>        Temp_class_Variable;                               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3555[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3556[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3557[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           CallFunc_Map_Find_Value;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.RemoveButtonByID
struct UW_ButtonBar_C_RemoveButtonByID_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_Button_C*                           CallFunc_Map_Find_Value;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3558[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.PopulateButtons
struct UW_ButtonBar_C_PopulateButtons_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastIndex;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           NewButton;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                NewID;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3559[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_355A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x4C(0x8)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_355B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_355C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Map_Find_Value;                           // 0x78(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_355D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           CallFunc_CreateButtonWidget_NewButton;             // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0xA0(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_355E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.Reveal
struct UW_ButtonBar_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.Hide
struct UW_ButtonBar_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.SetInputMode
struct UW_ButtonBar_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.ChangePage
struct UW_ButtonBar_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.PreConstruct
struct UW_ButtonBar_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.OptionClicked
struct UW_ButtonBar_C_OptionClicked_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.OptionHovered
struct UW_ButtonBar_C_OptionHovered_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.InputMethodChanged
struct UW_ButtonBar_C_InputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.OnMouseEnter
struct UW_ButtonBar_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.OnMouseLeave
struct UW_ButtonBar_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1C8 (0x1C8 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.ExecuteUbergraph_W_ButtonBar
struct UW_ButtonBar_C_ExecuteUbergraph_W_ButtonBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3566[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3568[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3569[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay_1;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_CustomEvent_Button_1;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetButtonID_ID;                           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_Button;                         // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetButtonID_ID_1;                         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHasOptions_ReturnValue;                // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x7C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x9C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xAF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xB0(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0xE8(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x158(0x70)(ConstParm)
};

// 0x18 (0x18 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.OnOptionHovered__DelegateSignature
struct UW_ButtonBar_C_OnOptionHovered__DelegateSignature_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           TriggeringButton;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ButtonBar.W_ButtonBar_C.OnOptionClicked__DelegateSignature
struct UW_ButtonBar_C_OnOptionClicked__DelegateSignature_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           TriggeringButton;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


