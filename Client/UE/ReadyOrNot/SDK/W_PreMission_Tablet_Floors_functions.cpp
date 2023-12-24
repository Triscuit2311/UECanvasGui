#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C
// (None)

class UClass* UW_PreMission_Tablet_Floors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Floors_C");

	return Clss;
}


// W_PreMission_Tablet_Floors_C W_PreMission_Tablet_Floors.Default__W_PreMission_Tablet_Floors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Floors_C* UW_PreMission_Tablet_Floors_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Floors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Floors_C*>(UW_PreMission_Tablet_Floors_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Floors_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "BackPage");

	Params::UW_PreMission_Tablet_Floors_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "GetFocusTarget");

	Params::UW_PreMission_Tablet_Floors_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.IncrementFloor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::IncrementFloor(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "IncrementFloor");

	Params::UW_PreMission_Tablet_Floors_C_IncrementFloor_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.DecrementFloor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::DecrementFloor(int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "DecrementFloor");

	Params::UW_PreMission_Tablet_Floors_C_DecrementFloor_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.UpdateFloorInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MissionURL                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLevelFloor                 FloorData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::UpdateFloorInfo(const class FString& MissionURL, const struct FLevelFloor& FloorData, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "UpdateFloorInfo");

	Params::UW_PreMission_Tablet_Floors_C_UpdateFloorInfo_Params Parms{};

	Parms.MissionURL = MissionURL;
	Parms.FloorData = FloorData;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Floors_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "SetInputMode");

	Params::UW_PreMission_Tablet_Floors_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "ChangePage");

	Params::UW_PreMission_Tablet_Floors_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Floors_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "Tick");

	Params::UW_PreMission_Tablet_Floors_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.ShowFloorInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::ShowFloorInfo(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "ShowFloorInfo");

	Params::UW_PreMission_Tablet_Floors_C_ShowFloorInfo_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.HideFloorInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Floors_C::HideFloorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "HideFloorInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.BndEvt__W_PreMission_Tablet_Floors_btn_UpFloor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::BndEvt__W_PreMission_Tablet_Floors_btn_UpFloor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "BndEvt__W_PreMission_Tablet_Floors_btn_UpFloor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Floors_C_BndEvt__W_PreMission_Tablet_Floors_btn_UpFloor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.BndEvt__W_PreMission_Tablet_Floors_btn_DnFloor_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::BndEvt__W_PreMission_Tablet_Floors_btn_DnFloor_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "BndEvt__W_PreMission_Tablet_Floors_btn_DnFloor_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Floors_C_BndEvt__W_PreMission_Tablet_Floors_btn_DnFloor_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.BndEvt__W_PreMission_Tablet_Floors_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Floors_C::BndEvt__W_PreMission_Tablet_Floors_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "BndEvt__W_PreMission_Tablet_Floors_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Floors_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "Hide");

	Params::UW_PreMission_Tablet_Floors_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "Reveal");

	Params::UW_PreMission_Tablet_Floors_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.InputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Floors_C::InputChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "InputChanged");

	Params::UW_PreMission_Tablet_Floors_C_InputChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.ExecuteUbergraph_W_PreMission_Tablet_Floors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_PlanningMap_Level_C*CallFunc_GetCurrentLevelMap_CurrentLevelCanvas                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_C*      CallFunc_WidgetGetParentOfClass_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Floors_C::ExecuteUbergraph_W_PreMission_Tablet_Floors(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UW_PreMission_PlanningMap_Level_C* CallFunc_GetCurrentLevelMap_CurrentLevelCanvas, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UW_PreMission_Tablet_C* CallFunc_WidgetGetParentOfClass_ReturnValue, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, float K2Node_Event_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class FName K2Node_Event_PageName, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_IsGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "ExecuteUbergraph_W_PreMission_Tablet_Floors");

	Params::UW_PreMission_Tablet_Floors_C_ExecuteUbergraph_W_PreMission_Tablet_Floors_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentLevelMap_CurrentLevelCanvas = CallFunc_GetCurrentLevelMap_CurrentLevelCanvas;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_WidgetGetParentOfClass_ReturnValue = CallFunc_WidgetGetParentOfClass_ReturnValue;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue = CallFunc_WasInputKeyJustPressed_ReturnValue;
	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue_1 = CallFunc_WasInputKeyJustPressed_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.OnFloorDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Floors_C::OnFloorDown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "OnFloorDown__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C.OnFloorUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Floors_C::OnFloorUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Floors_C", "OnFloorUp__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


