#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutCategory.W_LoadoutCategory_C
// (None)

class UClass* UW_LoadoutCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutCategory_C");

	return Clss;
}


// W_LoadoutCategory_C W_LoadoutCategory.Default__W_LoadoutCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutCategory_C* UW_LoadoutCategory_C::GetDefaultObj()
{
	static class UW_LoadoutCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutCategory_C*>(UW_LoadoutCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutCategory.W_LoadoutCategory_C.Can Interact Pre Mission Planning
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPreMissionPlanning*> CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UPreMissionPlanning*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::Can_Interact_Pre_Mission_Planning(bool* CanInteract, TArray<class UPreMissionPlanning*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UPreMissionPlanning* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "Can Interact Pre Mission Planning");

	Params::UW_LoadoutCategory_C_Can_Interact_Pre_Mission_Planning_Params Parms{};

	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.GetCurrentMenuDirectory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Return_Value                                                     (Parm, OutParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_LoadoutCategory_C::GetCurrentMenuDirectory(class FText* Return_Value, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "GetCurrentMenuDirectory");

	Params::UW_LoadoutCategory_C_GetCurrentMenuDirectory_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.GetAllUncollapsedLoadoutWidgets
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UBaseWidget*>         Return_Value                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class UBaseWidget*>         UncollapsedWidgets                                               (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::GetAllUncollapsedLoadoutWidgets(TArray<class UBaseWidget*>* Return_Value, const TArray<class UBaseWidget*>& UncollapsedWidgets, int32 Temp_int_Array_Index_Variable, class UBaseWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "GetAllUncollapsedLoadoutWidgets");

	Params::UW_LoadoutCategory_C_GetAllUncollapsedLoadoutWidgets_Params Parms{};

	Parms.UncollapsedWidgets = UncollapsedWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LoadoutItemName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemObjectClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsTactical                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TacticalSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMultipleTacticalSlots                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              MaxTacticalSlots                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartingTacticalSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::CreateLoadoutItemWidget(class FText LoadoutItemName, enum class EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32 TacticalSlot, bool bIsMultipleTacticalSlots, int32 MaxTacticalSlots, int32 StartingTacticalSlot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_LoadoutItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "CreateLoadoutItemWidget");

	Params::UW_LoadoutCategory_C_CreateLoadoutItemWidget_Params Parms{};

	Parms.LoadoutItemName = LoadoutItemName;
	Parms.ItemClass = ItemClass;
	Parms.ItemObjectClass = ItemObjectClass;
	Parms.bIsTactical = bIsTactical;
	Parms.TacticalSlot = TacticalSlot;
	Parms.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
	Parms.MaxTacticalSlots = MaxTacticalSlots;
	Parms.StartingTacticalSlot = StartingTacticalSlot;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.ExitPresetsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::ExitPresetsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "ExitPresetsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.EnterPresetsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::EnterPresetsMenu(class UW_LoadoutItem_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "EnterPresetsMenu");

	Params::UW_LoadoutCategory_C_EnterPresetsMenu_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.Escape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::Escape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "Escape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::UnselectLoadoutPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "UnselectLoadoutPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::SelectLoadoutPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "SelectLoadoutPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::UnhoverLoadoutPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "UnhoverLoadoutPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::HoverLoadoutPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "HoverLoadoutPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_HandleMenuWideMultiInput__Up__Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_LoadoutCategory_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnKeyUp");

	Params::UW_LoadoutCategory_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Up__Return_Value = CallFunc_HandleMenuWideMultiInput__Up__Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.CanExit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnteringQuartermasterMenu_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::CanExit(bool* Return_Value, bool CallFunc_EnteringQuartermasterMenu_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "CanExit");

	Params::UW_LoadoutCategory_C_CanExit_Params Parms{};

	Parms.CallFunc_EnteringQuartermasterMenu_ReturnValue = CallFunc_EnteringQuartermasterMenu_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZero2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UW_LoadoutCategory_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_IsZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnMouseMove");

	Params::UW_LoadoutCategory_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_IsZero2D_ReturnValue = CallFunc_IsZero2D_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.Get_SelectedItemInfo_Container_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_LoadoutCategory_C::Get_SelectedItemInfo_Container_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "Get_SelectedItemInfo_Container_Visibility");

	Params::UW_LoadoutCategory_C_Get_SelectedItemInfo_Container_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectLoadoutClass
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanExit_Return_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseWidget*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseWidget*                 CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            K2Node_DynamicCast_AsW_Loadout_Item                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseWidget*                 CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_C*            K2Node_DynamicCast_AsW_Loadout_Item_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::UnselectLoadoutClass(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_CanExit_Return_Value, class UBaseWidget* CallFunc_Array_Get_Item, class UBaseWidget* CallFunc_Array_Get_Item_1, class UBaseWidget* CallFunc_Array_Get_Item_2, bool K2Node_SwitchEnum_CmpSuccess, class UBaseWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutItem_C* K2Node_DynamicCast_AsW_Loadout_Item, bool K2Node_DynamicCast_bSuccess, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UBaseWidget* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_1, class UW_LoadoutItem_C* K2Node_DynamicCast_AsW_Loadout_Item_1, bool K2Node_DynamicCast_bSuccess_2, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "UnselectLoadoutClass");

	Params::UW_LoadoutCategory_C_UnselectLoadoutClass_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_CanExit_Return_Value = CallFunc_CanExit_Return_Value;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item = K2Node_DynamicCast_AsW_Loadout_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class = K2Node_DynamicCast_AsW_Loadout_Class;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_1 = K2Node_DynamicCast_AsW_Loadout_Item_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class_1 = K2Node_DynamicCast_AsW_Loadout_Class_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.SelectLoadoutClass
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_C*            K2Node_DynamicCast_AsW_Loadout_Item                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::SelectLoadoutClass(bool CallFunc_Greater_IntInt_ReturnValue, class UBaseWidget* CallFunc_Array_Get_Item, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class, bool K2Node_DynamicCast_bSuccess, class UW_LoadoutItem_C* K2Node_DynamicCast_AsW_Loadout_Item, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "SelectLoadoutClass");

	Params::UW_LoadoutCategory_C_SelectLoadoutClass_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class = K2Node_DynamicCast_AsW_Loadout_Class;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item = K2Node_DynamicCast_AsW_Loadout_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverLoadoutClass
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_C*            K2Node_DynamicCast_AsW_Loadout_Item                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::UnhoverLoadoutClass(class UBaseWidget* CallFunc_Array_Get_Item, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class, bool K2Node_DynamicCast_bSuccess, class UW_LoadoutItem_C* K2Node_DynamicCast_AsW_Loadout_Item, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "UnhoverLoadoutClass");

	Params::UW_LoadoutCategory_C_UnhoverLoadoutClass_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class = K2Node_DynamicCast_AsW_Loadout_Class;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item = K2Node_DynamicCast_AsW_Loadout_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.HoverLoadoutClass
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_C*            K2Node_DynamicCast_AsW_Loadout_Item                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::HoverLoadoutClass(class UBaseWidget* CallFunc_Array_Get_Item, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class, bool K2Node_DynamicCast_bSuccess, class UW_LoadoutItem_C* K2Node_DynamicCast_AsW_Loadout_Item, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "HoverLoadoutClass");

	Params::UW_LoadoutCategory_C_HoverLoadoutClass_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class = K2Node_DynamicCast_AsW_Loadout_Class;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item = K2Node_DynamicCast_AsW_Loadout_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.UnselectUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::UnselectUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "UnselectUIElement");

	Params::UW_LoadoutCategory_C_UnselectUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.SelectUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::SelectUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "SelectUIElement");

	Params::UW_LoadoutCategory_C_SelectUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.UnhoverUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::UnhoverUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "UnhoverUIElement");

	Params::UW_LoadoutCategory_C_UnhoverUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.HoverUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::HoverUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "HoverUIElement");

	Params::UW_LoadoutCategory_C_HoverUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::PreviousColumn(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "PreviousColumn");

	Params::UW_LoadoutCategory_C_PreviousColumn_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.NextColumn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::NextColumn(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UW_LoadoutItem_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "NextColumn");

	Params::UW_LoadoutCategory_C_NextColumn_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.PreviousRow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UBaseWidget*>         CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::PreviousRow(int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UBaseWidget*>& CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "PreviousRow");

	Params::UW_LoadoutCategory_C_PreviousRow_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value = CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.NextRow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBaseWidget*>         CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::NextRow(int32 Temp_int_Variable, int32 Temp_int_Variable_1, TArray<class UBaseWidget*>& CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "NextRow");

	Params::UW_LoadoutCategory_C_NextRow_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value = CallFunc_GetAllUncollapsedLoadoutWidgets_Return_Value;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMenuWideMultiInput__Down__Return_Value            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_3                                    (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue_4                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_5                                    (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue_6                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_7                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_24                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_25                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMenuWideInput_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_IsUIHidden_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_3                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_4                                   (None)

struct FEventReply UW_LoadoutCategory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, const struct FKey& CallFunc_GetKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, const struct FKey& CallFunc_GetKey_ReturnValue_3, const struct FKey& CallFunc_GetKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, const struct FKey& CallFunc_GetKey_ReturnValue_5, const struct FKey& CallFunc_GetKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, bool CallFunc_EqualEqual_KeyKey_ReturnValue_18, bool CallFunc_EqualEqual_KeyKey_ReturnValue_19, bool CallFunc_EqualEqual_KeyKey_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, const struct FKey& CallFunc_GetKey_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_23, bool CallFunc_EqualEqual_KeyKey_ReturnValue_24, bool CallFunc_EqualEqual_KeyKey_ReturnValue_25, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_HandleMenuWideInput_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUIHidden_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3, const struct FEventReply& CallFunc_Handled_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnKeyDown");

	Params::UW_LoadoutCategory_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Down__Return_Value = CallFunc_HandleMenuWideMultiInput__Down__Return_Value;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_GetKey_ReturnValue_1 = CallFunc_GetKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.CallFunc_GetKey_ReturnValue_2 = CallFunc_GetKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_8 = CallFunc_EqualEqual_KeyKey_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_9 = CallFunc_EqualEqual_KeyKey_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_GetKey_ReturnValue_3 = CallFunc_GetKey_ReturnValue_3;
	Parms.CallFunc_GetKey_ReturnValue_4 = CallFunc_GetKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_10 = CallFunc_EqualEqual_KeyKey_ReturnValue_10;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_11 = CallFunc_EqualEqual_KeyKey_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_12 = CallFunc_EqualEqual_KeyKey_ReturnValue_12;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_13 = CallFunc_EqualEqual_KeyKey_ReturnValue_13;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_14 = CallFunc_EqualEqual_KeyKey_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_GetKey_ReturnValue_5 = CallFunc_GetKey_ReturnValue_5;
	Parms.CallFunc_GetKey_ReturnValue_6 = CallFunc_GetKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_15 = CallFunc_EqualEqual_KeyKey_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_16 = CallFunc_EqualEqual_KeyKey_ReturnValue_16;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_17 = CallFunc_EqualEqual_KeyKey_ReturnValue_17;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_18 = CallFunc_EqualEqual_KeyKey_ReturnValue_18;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_19 = CallFunc_EqualEqual_KeyKey_ReturnValue_19;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_20 = CallFunc_EqualEqual_KeyKey_ReturnValue_20;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_21 = CallFunc_EqualEqual_KeyKey_ReturnValue_21;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_22 = CallFunc_EqualEqual_KeyKey_ReturnValue_22;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_GetKey_ReturnValue_7 = CallFunc_GetKey_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_23 = CallFunc_EqualEqual_KeyKey_ReturnValue_23;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_24 = CallFunc_EqualEqual_KeyKey_ReturnValue_24;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_25 = CallFunc_EqualEqual_KeyKey_ReturnValue_25;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_HandleMenuWideInput_Return_Value = CallFunc_HandleMenuWideInput_Return_Value;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsUIHidden_Return_Value = CallFunc_IsUIHidden_Return_Value;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue_3 = CallFunc_Handled_ReturnValue_3;
	Parms.CallFunc_Handled_ReturnValue_4 = CallFunc_Handled_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemClicked
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItemWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseWidget*                 K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnLoadoutItemClicked(class UW_LoadoutItem_C* LoadoutItemWidget, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class UBaseWidget* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnLoadoutItemClicked");

	Params::UW_LoadoutCategory_C_OnLoadoutItemClicked_Params Parms{};

	Parms.LoadoutItemWidget = LoadoutItemWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutClass_C*           LoadoutClassWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseWidget*                 K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnLoadoutClassClicked(class UW_LoadoutClass_C* LoadoutClassWidget, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBaseWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnLoadoutClassClicked");

	Params::UW_LoadoutCategory_C_OnLoadoutClassClicked_Params Parms{};

	Parms.LoadoutClassWidget = LoadoutClassWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.SimulateClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::SimulateClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "SimulateClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.UpdateSelectedItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InItemName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::UpdateSelectedItemName(class FText InItemName, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "UpdateSelectedItemName");

	Params::UW_LoadoutCategory_C_UpdateSelectedItemName_Params Parms{};

	Parms.InItemName = InItemName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.RemoveAllLoadoutClassWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::RemoveAllLoadoutClassWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "RemoveAllLoadoutClassWidgets");

	Params::UW_LoadoutCategory_C_RemoveAllLoadoutClassWidgets_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.DeselectAllChildrenExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            InLoadoutItemWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutClass_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::DeselectAllChildrenExcept(class UW_LoadoutItem_C* InLoadoutItemWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UW_LoadoutItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UW_LoadoutClass_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "DeselectAllChildrenExcept");

	Params::UW_LoadoutCategory_C_DeselectAllChildrenExcept_Params Parms{};

	Parms.InLoadoutItemWidget = InLoadoutItemWidget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseAllChildrenExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutClass_C*           InLoadoutClassWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutClass_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::CollapseAllChildrenExcept(class UW_LoadoutClass_C* InLoadoutClassWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutClass_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "CollapseAllChildrenExcept");

	Params::UW_LoadoutCategory_C_CollapseAllChildrenExcept_Params Parms{};

	Parms.InLoadoutClassWidget = InLoadoutClassWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.CreateLoadoutItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLoadoutCategory            InLoadoutCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FWeaponData>         WeaponsArray                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeviceData                 CallFunc_Array_Get_Item                                          (None)
// struct FDeviceData                 CallFunc_Array_Get_Item_1                                        (None)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourData                 CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourData                 CallFunc_Array_Get_Item_3                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponData                 CallFunc_Array_Get_Item_4                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_4                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponData                 CallFunc_Array_Get_Item_5                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_5                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutClass_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::CreateLoadoutItem(const struct FLoadoutCategory& InLoadoutCategory, const TArray<struct FWeaponData>& WeaponsArray, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, const struct FDeviceData& CallFunc_Array_Get_Item, const struct FDeviceData& CallFunc_Array_Get_Item_1, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FArmourData& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FArmourData& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FWeaponData& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FWeaponData& CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UW_LoadoutClass_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "CreateLoadoutItem");

	Params::UW_LoadoutCategory_C_CreateLoadoutItem_Params Parms{};

	Parms.InLoadoutCategory = InLoadoutCategory;
	Parms.WeaponsArray = WeaponsArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.ExpandChildren
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::ExpandChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "ExpandChildren");

	Params::UW_LoadoutCategory_C_ExpandChildren_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class = K2Node_DynamicCast_AsW_Loadout_Class;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.CollapseChildren
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResetPreviewAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::CollapseChildren(bool bResetPreviewAnim, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "CollapseChildren");

	Params::UW_LoadoutCategory_C_CollapseChildren_Params Parms{};

	Parms.bResetPreviewAnim = bResetPreviewAnim;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class = K2Node_DynamicCast_AsW_Loadout_Class;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "PreConstruct");

	Params::UW_LoadoutCategory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UW_LoadoutCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutClassButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutClass_C*           LoadoutClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnLoadoutClassButtonHovered(class UW_LoadoutClass_C* LoadoutClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnLoadoutClassButtonHovered");

	Params::UW_LoadoutCategory_C_OnLoadoutClassButtonHovered_Params Parms{};

	Parms.LoadoutClass = LoadoutClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnLoadoutItemButtonHovered(class UW_LoadoutItem_C* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnLoadoutItemButtonHovered");

	Params::UW_LoadoutCategory_C_OnLoadoutItemButtonHovered_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnLoadoutItemButtonUnhovered(class UW_LoadoutItem_C* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnLoadoutItemButtonUnhovered");

	Params::UW_LoadoutCategory_C_OnLoadoutItemButtonUnhovered_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "Tick");

	Params::UW_LoadoutCategory_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.ExecuteUbergraph_W_LoadoutCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Can_Interact_Pre_Mission_Planning_CanInteract           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutCategory            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_4                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutClass_C*           K2Node_CustomEvent_LoadoutClass                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            K2Node_CustomEvent_LoadoutItem_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            K2Node_CustomEvent_LoadoutItem                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UW_LoadoutClass_C*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutClass_C*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutCategory_C::ExecuteUbergraph_W_LoadoutCategory(int32 EntryPoint, bool CallFunc_Can_Interact_Pre_Mission_Planning_CanInteract, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool K2Node_Event_IsDesignTime, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Length_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, const struct FLoadoutCategory& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, class UW_LoadoutClass_C* K2Node_CustomEvent_LoadoutClass, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, class UW_LoadoutItem_C* K2Node_CustomEvent_LoadoutItem_1, int32 CallFunc_Array_Find_ReturnValue, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_5, class UW_LoadoutItem_C* K2Node_CustomEvent_LoadoutItem, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Array_Index_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_LoadoutClass_C* CallFunc_Array_Get_Item_3, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_4, bool CallFunc_Greater_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UW_LoadoutClass_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "ExecuteUbergraph_W_LoadoutCategory");

	Params::UW_LoadoutCategory_C_ExecuteUbergraph_W_LoadoutCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Can_Interact_Pre_Mission_Planning_CanInteract = CallFunc_Can_Interact_Pre_Mission_Planning_CanInteract;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.K2Node_CustomEvent_LoadoutClass = K2Node_CustomEvent_LoadoutClass;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_CustomEvent_LoadoutItem_1 = K2Node_CustomEvent_LoadoutItem_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_LoadoutItem = K2Node_CustomEvent_LoadoutItem;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutCategory_C*        LoadoutCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_LoadoutCategory_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.LoadoutCategory = LoadoutCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutCategory_C*        LoadoutCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnButtonHovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnButtonHovered__DelegateSignature");

	Params::UW_LoadoutCategory_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.LoadoutCategory = LoadoutCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemObjectClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsTactical                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TacticalSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMultipleTacticalSlots                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              MaxTacticalSlots                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Starting_Tactical_Slot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            Loadout_Item_Widget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnLoadoutItemButtonClicked__DelegateSignature(enum class EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32 TacticalSlot, bool bIsMultipleTacticalSlots, int32 MaxTacticalSlots, int32 Starting_Tactical_Slot, class UW_LoadoutItem_C* Loadout_Item_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnLoadoutItemButtonClicked__DelegateSignature");

	Params::UW_LoadoutCategory_C_OnLoadoutItemButtonClicked__DelegateSignature_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.ItemObjectClass = ItemObjectClass;
	Parms.bIsTactical = bIsTactical;
	Parms.TacticalSlot = TacticalSlot;
	Parms.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
	Parms.MaxTacticalSlots = MaxTacticalSlots;
	Parms.Starting_Tactical_Slot = Starting_Tactical_Slot;
	Parms.Loadout_Item_Widget = Loadout_Item_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutCategory.W_LoadoutCategory_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutCategory_C*        LoadoutCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutCategory_C::OnButtonClicked__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutCategory_C", "OnButtonClicked__DelegateSignature");

	Params::UW_LoadoutCategory_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.LoadoutCategory = LoadoutCategory;

	UObject::ProcessEvent(Func, &Parms);

}

}


