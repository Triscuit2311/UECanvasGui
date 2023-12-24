#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BriefingTaskButton.W_BriefingTaskButton_C
// (None)

class UClass* UW_BriefingTaskButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BriefingTaskButton_C");

	return Clss;
}


// W_BriefingTaskButton_C W_BriefingTaskButton.Default__W_BriefingTaskButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BriefingTaskButton_C* UW_BriefingTaskButton_C::GetDefaultObj()
{
	static class UW_BriefingTaskButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BriefingTaskButton_C*>(UW_BriefingTaskButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BriefingTaskButton.W_BriefingTaskButton_C.GetBriefingMainWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UW_BriefingMain_C*           BriefingMainWidget                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_BriefingMain_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_BriefingMain_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_BriefingTaskButton_C::GetBriefingMainWidget(class UW_BriefingMain_C** BriefingMainWidget, bool* Success, TArray<class UW_BriefingMain_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_BriefingMain_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingTaskButton_C", "GetBriefingMainWidget");

	Params::UW_BriefingTaskButton_C_GetBriefingMainWidget_Params Parms{};

	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BriefingMainWidget != nullptr)
		*BriefingMainWidget = Parms.BriefingMainWidget;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function W_BriefingTaskButton.W_BriefingTaskButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_BriefingTaskButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingTaskButton_C", "PreConstruct");

	Params::UW_BriefingTaskButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BriefingTaskButton.W_BriefingTaskButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BriefingTaskButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingTaskButton_C", "Tick");

	Params::UW_BriefingTaskButton_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BriefingTaskButton.W_BriefingTaskButton_C.BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_BriefingTaskButton_C::BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingTaskButton_C", "BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BriefingTaskButton.W_BriefingTaskButton_C.BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_BriefingTaskButton_C::BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingTaskButton_C", "BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BriefingTaskButton.W_BriefingTaskButton_C.BndEvt__MainBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_BriefingTaskButton_C::BndEvt__MainBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingTaskButton_C", "BndEvt__MainBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BriefingTaskButton.W_BriefingTaskButton_C.ExecuteUbergraph_W_BriefingTaskButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_C*             K2Node_DynamicCast_AsW_Pre_Mission                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// TArray<class UW_BriefingMain_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_BriefingMain_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_BriefingMain_C*           CallFunc_GetBriefingMainWidget_BriefingMainWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBriefingMainWidget_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_C*             K2Node_DynamicCast_AsW_Pre_Mission_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_BriefingTaskButton_C::ExecuteUbergraph_W_BriefingTaskButton(int32 EntryPoint, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, class UW_PreMission_C* K2Node_DynamicCast_AsW_Pre_Mission, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, TArray<class UW_BriefingMain_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_BriefingMain_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsEmpty_ReturnValue, class UW_BriefingMain_C* CallFunc_GetBriefingMainWidget_BriefingMainWidget, bool CallFunc_GetBriefingMainWidget_Success, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue_1, class UW_PreMission_C* K2Node_DynamicCast_AsW_Pre_Mission_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingTaskButton_C", "ExecuteUbergraph_W_BriefingTaskButton");

	Params::UW_BriefingTaskButton_C_ExecuteUbergraph_W_BriefingTaskButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPremissionPlanning_ReturnValue = CallFunc_GetPremissionPlanning_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Pre_Mission = K2Node_DynamicCast_AsW_Pre_Mission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetBriefingMainWidget_BriefingMainWidget = CallFunc_GetBriefingMainWidget_BriefingMainWidget;
	Parms.CallFunc_GetBriefingMainWidget_Success = CallFunc_GetBriefingMainWidget_Success;
	Parms.CallFunc_GetPremissionPlanning_ReturnValue_1 = CallFunc_GetPremissionPlanning_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Pre_Mission_1 = K2Node_DynamicCast_AsW_Pre_Mission_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


