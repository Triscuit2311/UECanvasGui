#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionSelect.W_MissionSelect_C
// (None)

class UClass* UW_MissionSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionSelect_C");

	return Clss;
}


// W_MissionSelect_C W_MissionSelect.Default__W_MissionSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionSelect_C* UW_MissionSelect_C::GetDefaultObj()
{
	static class UW_MissionSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionSelect_C*>(UW_MissionSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MissionSelect.W_MissionSelect_C.SequenceEvent__ENTRYPOINTW_MissionSelect_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PageWrapper_C*            W_PageWrapper                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_C::SequenceEvent__ENTRYPOINTW_MissionSelect_0(class UW_PageWrapper_C* W_PageWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "SequenceEvent__ENTRYPOINTW_MissionSelect_0");

	Params::UW_MissionSelect_C_SequenceEvent__ENTRYPOINTW_MissionSelect_0_Params Parms{};

	Parms.W_PageWrapper = W_PageWrapper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.SetMissionDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelData*                  LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_C::SetMissionDetails(class ULevelData* LevelData, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "SetMissionDetails");

	Params::UW_MissionSelect_C_SetMissionDetails_Params Parms{};

	Parms.LevelData = LevelData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.PopulateLevelList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsLastWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_MissionSelect_Level_C*    NewLevelWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelData*                  NewLevelData                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MissionSelect_Level_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FMargin                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULevelData*>          CallFunc_GetLevelDataList_ReturnValue                            (ConstParm, ReferenceParm)
// class ULevelData*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_C::PopulateLevelList(bool bIsLastWidget, class UW_MissionSelect_Level_C* NewLevelWidget, class ULevelData* NewLevelData, class UW_MissionSelect_Level_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_Add_ReturnValue, const struct FMargin& K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<class ULevelData*>& CallFunc_GetLevelDataList_ReturnValue, class ULevelData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "PopulateLevelList");

	Params::UW_MissionSelect_C_PopulateLevelList_Params Parms{};

	Parms.bIsLastWidget = bIsLastWidget;
	Parms.NewLevelWidget = NewLevelWidget;
	Parms.NewLevelData = NewLevelData;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetLevelDataList_ReturnValue = CallFunc_GetLevelDataList_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.OnMissionClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_Level_C*    Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelData*                  LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_C::OnMissionClicked(class UW_MissionSelect_Level_C* Button, class ULevelData* LevelData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "OnMissionClicked");

	Params::UW_MissionSelect_C_OnMissionClicked_Params Parms{};

	Parms.Button = Button;
	Parms.LevelData = LevelData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.SelectLevelButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_Level_C*    ButtonToSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_C::SelectLevelButton(class UW_MissionSelect_Level_C* ButtonToSelect, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "SelectLevelButton");

	Params::UW_MissionSelect_C_SelectLevelButton_Params Parms{};

	Parms.ButtonToSelect = ButtonToSelect;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.GetDesiredMissionSelectButton
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MissionSelect_Level_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_C::GetDesiredMissionSelectButton(class UWidget** Widget, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_MissionSelect_Level_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "GetDesiredMissionSelectButton");

	Params::UW_MissionSelect_C_GetDesiredMissionSelectButton_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function W_MissionSelect.W_MissionSelect_C.EscapeMissionListNavigate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UW_MissionSelect_C::EscapeMissionListNavigate(enum class EUINavigation Navigation, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "EscapeMissionListNavigate");

	Params::UW_MissionSelect_C_EscapeMissionListNavigate_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionSelect.W_MissionSelect_C.AcceptMissionNavigate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredMissionSelectButton_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_MissionSelect_C::AcceptMissionNavigate(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDesiredMissionSelectButton_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "AcceptMissionNavigate");

	Params::UW_MissionSelect_C_AcceptMissionNavigate_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetDesiredMissionSelectButton_Widget = CallFunc_GetDesiredMissionSelectButton_Widget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionSelect.W_MissionSelect_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredMissionSelectButton_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_MissionSelect_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDesiredMissionSelectButton_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "BP_GetDesiredFocusTarget");

	Params::UW_MissionSelect_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetDesiredMissionSelectButton_Widget = CallFunc_GetDesiredMissionSelectButton_Widget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionSelect.W_MissionSelect_C.W_PageWrapper_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PageWrapper_C*            W_PageWrapper                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_C::W_PageWrapper_Event_0(class UW_PageWrapper_C* W_PageWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "W_PageWrapper_Event_0");

	Params::UW_MissionSelect_C_W_PageWrapper_Event_0_Params Parms{};

	Parms.W_PageWrapper = W_PageWrapper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MissionSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect.W_MissionSelect_C.SetupMissionList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_C::SetupMissionList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "SetupMissionList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect.W_MissionSelect_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MissionSelect_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect.W_MissionSelect_C.SetupNavigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_C::SetupNavigation(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "SetupNavigation");

	Params::UW_MissionSelect_C_SetupNavigation_Params Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.OnMissionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_Level_C*    Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_C::OnMissionHovered(class UW_MissionSelect_Level_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "OnMissionHovered");

	Params::UW_MissionSelect_C_OnMissionHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.ScrollToSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_Level_C*    LevelButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_C::ScrollToSelection(class UW_MissionSelect_Level_C* LevelButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "ScrollToSelection");

	Params::UW_MissionSelect_C_ScrollToSelection_Params Parms{};

	Parms.LevelButton = LevelButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.BndEvt__W_MissionSelect_W_PageWrapper_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_MissionSelect_C::BndEvt__W_MissionSelect_W_PageWrapper_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "BndEvt__W_MissionSelect_W_PageWrapper_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature");

	Params::UW_MissionSelect_C_BndEvt__W_MissionSelect_W_PageWrapper_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect.W_MissionSelect_C.AcceptMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_C::AcceptMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "AcceptMission");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect.W_MissionSelect_C.ExecuteUbergraph_W_MissionSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PageWrapper_C*            K2Node_CustomEvent_W_PageWrapper                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UsingGamepad                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MissionSelect_Level_C*    K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_MissionSelect_Level_C*    K2Node_CustomEvent_LevelButton                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_C::ExecuteUbergraph_W_MissionSelect(int32 EntryPoint, enum class ECommonInputType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UW_PageWrapper_C* K2Node_CustomEvent_W_PageWrapper, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_UsingGamepad, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UW_MissionSelect_Level_C* K2Node_CustomEvent_Button, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Select_Default, class UW_MissionSelect_Level_C* K2Node_CustomEvent_LevelButton, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_C", "ExecuteUbergraph_W_MissionSelect");

	Params::UW_MissionSelect_C_ExecuteUbergraph_W_MissionSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CustomEvent_W_PageWrapper = K2Node_CustomEvent_W_PageWrapper;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_UsingGamepad = K2Node_CustomEvent_UsingGamepad;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_LevelButton = K2Node_CustomEvent_LevelButton;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


