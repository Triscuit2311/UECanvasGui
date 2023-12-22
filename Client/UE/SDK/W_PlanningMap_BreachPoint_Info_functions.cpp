#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C
// (None)

class UClass* UW_PlanningMap_BreachPoint_Info_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlanningMap_BreachPoint_Info_C");

	return Clss;
}


// W_PlanningMap_BreachPoint_Info_C W_PlanningMap_BreachPoint_Info.Default__W_PlanningMap_BreachPoint_Info_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlanningMap_BreachPoint_Info_C* UW_PlanningMap_BreachPoint_Info_C::GetDefaultObj()
{
	static class UW_PlanningMap_BreachPoint_Info_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlanningMap_BreachPoint_Info_C*>(UW_PlanningMap_BreachPoint_Info_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.SetRecommendedDeployables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDeployableData        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlanningMap_BreachPoint_Info_C::SetRecommendedDeployables(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FLevelDeployableData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "SetRecommendedDeployables");

	Params::UW_PlanningMap_BreachPoint_Info_C_SetRecommendedDeployables_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.SetDesignationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SpawnIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_PlanningMap_BreachPoint_Info_C::SetDesignationText(int32 SpawnIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "SetDesignationText");

	Params::UW_PlanningMap_BreachPoint_Info_C_SetDesignationText_Params Parms{};

	Parms.SpawnIndex = SpawnIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.Finished_B45778B942FC16674AB7A3BD06E9C36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_C::Finished_B45778B942FC16674AB7A3BD06E9C36E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "Finished_B45778B942FC16674AB7A3BD06E9C36E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.Finished_186E628046C415504DDD34A0079F53C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_C::Finished_186E628046C415504DDD34A0079F53C5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "Finished_186E628046C415504DDD34A0079F53C5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_C::BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.BndEvt__btn_SelectPoint_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_Info_C::BndEvt__btn_SelectPoint_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "BndEvt__btn_SelectPoint_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_Info_C_BndEvt__btn_SelectPoint_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.SetActiveSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpawnPoints                SpawnInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlanningMap_BreachPoint_Info_C::SetActiveSpawn(const struct FSpawnPoints& SpawnInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "SetActiveSpawn");

	Params::UW_PlanningMap_BreachPoint_Info_C_SetActiveSpawn_Params Parms{};

	Parms.SpawnInfo = SpawnInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.UpdateInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpawnPoints                SpawnInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SpawnIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_Info_C::UpdateInfo(const struct FSpawnPoints& SpawnInfo, int32 SpawnIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "UpdateInfo");

	Params::UW_PlanningMap_BreachPoint_Info_C_UpdateInfo_Params Parms{};

	Parms.SpawnInfo = SpawnInfo;
	Parms.SpawnIndex = SpawnIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.RevealPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_C::RevealPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "RevealPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.HidePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_C::HidePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "HidePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.ExecuteUbergraph_W_PlanningMap_BreachPoint_Info
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPoints                K2Node_CustomEvent_SpawnInfo_1                                   (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpawnPoints                K2Node_CustomEvent_SpawnInfo                                     (None)
// int32                              K2Node_CustomEvent_SpawnIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBasicLevelStats            CallFunc_LoadLevelStats_OutStats                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlanningMap_BreachPoint_Info_C::ExecuteUbergraph_W_PlanningMap_BreachPoint_Info(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnimationPlaying_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const struct FSpawnPoints& K2Node_CustomEvent_SpawnInfo_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FSpawnPoints& K2Node_CustomEvent_SpawnInfo, int32 K2Node_CustomEvent_SpawnIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FBasicLevelStats& CallFunc_LoadLevelStats_OutStats, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "ExecuteUbergraph_W_PlanningMap_BreachPoint_Info");

	Params::UW_PlanningMap_BreachPoint_Info_C_ExecuteUbergraph_W_PlanningMap_BreachPoint_Info_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_SpawnInfo_1 = K2Node_CustomEvent_SpawnInfo_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_SpawnInfo = K2Node_CustomEvent_SpawnInfo;
	Parms.K2Node_CustomEvent_SpawnIndex = K2Node_CustomEvent_SpawnIndex;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_LoadLevelStats_OutStats = CallFunc_LoadLevelStats_OutStats;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.OnDetailPanelHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_C::OnDetailPanelHide__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "OnDetailPanelHide__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.OnSetSpawnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_C::OnSetSpawnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_C", "OnSetSpawnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


