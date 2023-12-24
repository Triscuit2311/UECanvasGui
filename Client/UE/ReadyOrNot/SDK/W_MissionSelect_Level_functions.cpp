#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionSelect_Level.W_MissionSelect_Level_C
// (None)

class UClass* UW_MissionSelect_Level_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionSelect_Level_C");

	return Clss;
}


// W_MissionSelect_Level_C W_MissionSelect_Level.Default__W_MissionSelect_Level_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionSelect_Level_C* UW_MissionSelect_Level_C::GetDefaultObj()
{
	static class UW_MissionSelect_Level_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionSelect_Level_C*>(UW_MissionSelect_Level_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "GetFocusTarget");

	Params::UW_MissionSelect_Level_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "BackPage");

	Params::UW_MissionSelect_Level_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.SequenceEvent__ENTRYPOINTW_MissionSelect_Level_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_Level_C::SequenceEvent__ENTRYPOINTW_MissionSelect_Level_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "SequenceEvent__ENTRYPOINTW_MissionSelect_Level_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.EntryPointSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_EntryPoint_C*EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::EntryPointSelected(class UW_MissionSelect_EntryPoint_C* EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "EntryPointSelected");

	Params::UW_MissionSelect_Level_C_EntryPointSelected_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.PopulateEntryPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsLast                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEntryPoint                 NewEntryPointData                                                (Edit, BlueprintVisible)
// class UW_MissionSelect_EntryPoint_C*NewEntryWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEntryPoint>         LevelEntryPoints                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MissionSelect_EntryPoint_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_MissionSelect_EntryPoint_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FEntryPoint                 CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::PopulateEntryPoints(bool bIsLast, const struct FEntryPoint& NewEntryPointData, class UW_MissionSelect_EntryPoint_C* NewEntryWidget, const TArray<struct FEntryPoint>& LevelEntryPoints, int32 Temp_int_Array_Index_Variable, class UW_MissionSelect_EntryPoint_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_MissionSelect_EntryPoint_C* CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FEntryPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "PopulateEntryPoints");

	Params::UW_MissionSelect_Level_C_PopulateEntryPoints_Params Parms{};

	Parms.bIsLast = bIsLast;
	Parms.NewEntryPointData = NewEntryPointData;
	Parms.NewEntryWidget = NewEntryWidget;
	Parms.LevelEntryPoints = LevelEntryPoints;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.SetLevelBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::SetLevelBackground(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "SetLevelBackground");

	Params::UW_MissionSelect_Level_C_SetLevelBackground_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.IsLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_MissionSelect_Level_C::IsLocked(bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "IsLocked");

	Params::UW_MissionSelect_Level_C_IsLocked_Params Parms{};

	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.UpdateVisualState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsLocked_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::UpdateVisualState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, TSubclassOf<class UCommonTextStyle> Temp_class_Variable, TSubclassOf<class UCommonTextStyle> Temp_class_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default_1, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "UpdateVisualState");

	Params::UW_MissionSelect_Level_C_UpdateVisualState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsLocked_ReturnValue = CallFunc_IsLocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.SetLevelText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::SetLevelText(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "SetLevelText");

	Params::UW_MissionSelect_Level_C_SetLevelText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "Hide");

	Params::UW_MissionSelect_Level_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "SetInputMode");

	Params::UW_MissionSelect_Level_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "ChangePage");

	Params::UW_MissionSelect_Level_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.SetLevelData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelData*                  LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::SetLevelData(class ULevelData* LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "SetLevelData");

	Params::UW_MissionSelect_Level_C_SetLevelData_Params Parms{};

	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "PreConstruct");

	Params::UW_MissionSelect_Level_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_Level_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.Deselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_Level_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ButtonColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::SetState(const struct FLinearColor& ButtonColor, const struct FLinearColor& TextColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "SetState");

	Params::UW_MissionSelect_Level_C_SetState_Params Parms{};

	Parms.ButtonColor = ButtonColor;
	Parms.TextColor = TextColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "Reveal");

	Params::UW_MissionSelect_Level_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.BndEvt__W_MissionSelect_Level_btn_Level_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::BndEvt__W_MissionSelect_Level_btn_Level_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "BndEvt__W_MissionSelect_Level_btn_Level_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_MissionSelect_Level_C_BndEvt__W_MissionSelect_Level_btn_Level_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.Expand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_Level_C::Expand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "Expand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.BndEvt__W_MissionSelect_Level_btn_Accept_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::BndEvt__W_MissionSelect_Level_btn_Accept_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "BndEvt__W_MissionSelect_Level_btn_Accept_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_MissionSelect_Level_C_BndEvt__W_MissionSelect_Level_btn_Accept_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.RevealEntryPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_Level_C::RevealEntryPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "RevealEntryPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.ExecuteUbergraph_W_MissionSelect_Level
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_ButtonColor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_TextColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelData*                  K2Node_CustomEvent_LevelData                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MissionSelect_EntryPoint_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_Level_C::ExecuteUbergraph_W_MissionSelect_Level(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_ButtonColor, const struct FLinearColor& K2Node_CustomEvent_TextColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float K2Node_Event_Delay, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class ULevelData* K2Node_CustomEvent_LevelData, int32 Temp_int_Array_Index_Variable, class FName K2Node_Event_PageName, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UW_MissionSelect_EntryPoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "ExecuteUbergraph_W_MissionSelect_Level");

	Params::UW_MissionSelect_Level_C_ExecuteUbergraph_W_MissionSelect_Level_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_ButtonColor = K2Node_CustomEvent_ButtonColor;
	Parms.K2Node_CustomEvent_TextColor = K2Node_CustomEvent_TextColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_LevelData = K2Node_CustomEvent_LevelData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.OnAcceptClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_Level_C::OnAcceptClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "OnAcceptClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_Level_C*    SelectedButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::OnSelected__DelegateSignature(class UW_MissionSelect_Level_C* SelectedButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "OnSelected__DelegateSignature");

	Params::UW_MissionSelect_Level_C_OnSelected__DelegateSignature_Params Parms{};

	Parms.SelectedButton = SelectedButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_Level_C*    Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::OnHovered__DelegateSignature(class UW_MissionSelect_Level_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "OnHovered__DelegateSignature");

	Params::UW_MissionSelect_Level_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_Level.W_MissionSelect_Level_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_Level_C*    Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelData*                  LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_Level_C::OnClicked__DelegateSignature(class UW_MissionSelect_Level_C* Button, class ULevelData* LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_Level_C", "OnClicked__DelegateSignature");

	Params::UW_MissionSelect_Level_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}

}


