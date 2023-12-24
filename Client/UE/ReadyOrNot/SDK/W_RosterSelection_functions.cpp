#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RosterSelection.W_RosterSelection_C
// (None)

class UClass* UW_RosterSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RosterSelection_C");

	return Clss;
}


// W_RosterSelection_C W_RosterSelection.Default__W_RosterSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RosterSelection_C* UW_RosterSelection_C::GetDefaultObj()
{
	static class UW_RosterSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RosterSelection_C*>(UW_RosterSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RosterSelection.W_RosterSelection_C.DebugPopulateCharacters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URosterCharacter*>    Characters                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class URosterCharacter*>    CallFunc_GetAllCharacters_ReturnValue                            (ReferenceParm)

void UW_RosterSelection_C::DebugPopulateCharacters(const TArray<class URosterCharacter*>& Characters, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class URosterCharacter*>& CallFunc_GetAllCharacters_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "DebugPopulateCharacters");

	Params::UW_RosterSelection_C_DebugPopulateCharacters_Params Parms{};

	Parms.Characters = Characters;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllCharacters_ReturnValue = CallFunc_GetAllCharacters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection.W_RosterSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_RosterSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection.W_RosterSelection_C.OnCharactersUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RosterSelection_C::OnCharactersUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "OnCharactersUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection.W_RosterSelection_C.BndEvt__W_RosterSelection_RecruitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_C::BndEvt__W_RosterSelection_RecruitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "BndEvt__W_RosterSelection_RecruitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection.W_RosterSelection_C.MiniCardClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_C::MiniCardClicked(class UW_RosterSelection_MiniCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "MiniCardClicked");

	Params::UW_RosterSelection_C_MiniCardClicked_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection.W_RosterSelection_C.MiniCardHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_C::MiniCardHovered(class UW_RosterSelection_MiniCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "MiniCardHovered");

	Params::UW_RosterSelection_C_MiniCardHovered_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection.W_RosterSelection_C.SquadMemberClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_Card_C*   Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RosterSelection_C::SquadMemberClicked(class UW_RosterSelection_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "SquadMemberClicked");

	Params::UW_RosterSelection_C_SquadMemberClicked_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RosterSelection.W_RosterSelection_C.BndEvt__W_RosterSelection_CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_C::BndEvt__W_RosterSelection_CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "BndEvt__W_RosterSelection_CancelButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection.W_RosterSelection_C.BndEvt__W_RosterSelection_TherapistButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RosterSelection_C::BndEvt__W_RosterSelection_TherapistButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "BndEvt__W_RosterSelection_TherapistButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RosterSelection.W_RosterSelection_C.ExecuteUbergraph_W_RosterSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URosterCharacter*>    CallFunc_GetAllCharacters_ReturnValue                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RosterSelection_Card_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class ERosterSquadPosition, class URosterCharacter*>CallFunc_GetSquadCharacters_ReturnValue                          (None)
// TArray<class URosterCharacter*>    CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RosterSelection_GuestCard_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*K2Node_CustomEvent_Card_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*K2Node_CustomEvent_Card_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RosterSelection_Card_C*   K2Node_CustomEvent_Card                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URosterCharacter*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanUseTherapist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RosterSelection_C::ExecuteUbergraph_W_RosterSelection(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class URosterCharacter*>& CallFunc_GetAllCharacters_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_RosterSelection_Card_C* CallFunc_Create_ReturnValue, TMap<enum class ERosterSquadPosition, class URosterCharacter*> CallFunc_GetSquadCharacters_ReturnValue, TArray<class URosterCharacter*>& CallFunc_Map_Values_Values, int32 Temp_int_Variable, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UW_RosterSelection_GuestCard_C* CallFunc_Create_ReturnValue_1, class UW_RosterSelection_MiniCard_C* K2Node_CustomEvent_Card_2, class UW_RosterSelection_MiniCard_C* K2Node_CustomEvent_Card_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_RosterSelection_Card_C* K2Node_CustomEvent_Card, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class URosterCharacter* CallFunc_Array_Get_Item_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, class UW_RosterSelection_MiniCard_C* CallFunc_Create_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_CanUseTherapist_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UWidget* CallFunc_Array_Get_Item_2, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RosterSelection_C", "ExecuteUbergraph_W_RosterSelection");

	Params::UW_RosterSelection_C_ExecuteUbergraph_W_RosterSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllCharacters_ReturnValue = CallFunc_GetAllCharacters_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetSquadCharacters_ReturnValue = CallFunc_GetSquadCharacters_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CustomEvent_Card_2 = K2Node_CustomEvent_Card_2;
	Parms.K2Node_CustomEvent_Card_1 = K2Node_CustomEvent_Card_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Card = K2Node_CustomEvent_Card;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_CanUseTherapist_ReturnValue = CallFunc_CanUseTherapist_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


