#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C
// (None)

class UClass* UW_PreMission_Tablet_RosterManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_RosterManager_C");

	return Clss;
}


// W_PreMission_Tablet_RosterManager_C W_PreMission_Tablet_RosterManager.Default__W_PreMission_Tablet_RosterManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_RosterManager_C* UW_PreMission_Tablet_RosterManager_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_RosterManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_RosterManager_C*>(UW_PreMission_Tablet_RosterManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "GetFocusTarget");

	Params::UW_PreMission_Tablet_RosterManager_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "BackPage");

	Params::UW_PreMission_Tablet_RosterManager_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.SequenceEvent__ENTRYPOINTW_PreMission_Tablet_RosterManager_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::SequenceEvent__ENTRYPOINTW_PreMission_Tablet_RosterManager_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "SequenceEvent__ENTRYPOINTW_PreMission_Tablet_RosterManager_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.PopulatePracticeUnits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESquadPosition          Position                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                PlayerToAdd                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>        NewPlayers                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::PopulatePracticeUnits(enum class ESquadPosition Position, int32 Count, class APlayerState* PlayerToAdd, const TArray<class APlayerState*>& NewPlayers, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "PopulatePracticeUnits");

	Params::UW_PreMission_Tablet_RosterManager_C_PopulatePracticeUnits_Params Parms{};

	Parms.Position = Position;
	Parms.Count = Count;
	Parms.PlayerToAdd = PlayerToAdd;
	Parms.NewPlayers = NewPlayers;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.CloseEnlistPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::CloseEnlistPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "CloseEnlistPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.EnlistCharacterClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_Card_C*   Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::EnlistCharacterClicked(class UW_RosterSelection_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "EnlistCharacterClicked");

	Params::UW_PreMission_Tablet_RosterManager_C_EnlistCharacterClicked_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.OpenEnlistPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_Card_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class URosterCharacter*>    CallFunc_GetRecruitableCharacters_ReturnValue                    (ReferenceParm)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::OpenEnlistPage(float Temp_float_Variable, float Temp_float_Variable_1, class UW_RosterSelection_Card_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_1, TArray<class URosterCharacter*>& CallFunc_GetRecruitableCharacters_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float K2Node_Select_Default_1, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "OpenEnlistPage");

	Params::UW_PreMission_Tablet_RosterManager_C_OpenEnlistPage_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetRecruitableCharacters_ReturnValue = CallFunc_GetRecruitableCharacters_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.CreateLockedMiniCards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MissionUnlockCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RosterSelection_MiniCard_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::CreateLockedMiniCards(int32 MissionUnlockCount, class FText Temp_text_Variable, const struct FMargin& K2Node_MakeStruct_Margin, class UW_RosterSelection_MiniCard_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText K2Node_Select_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "CreateLockedMiniCards");

	Params::UW_PreMission_Tablet_RosterManager_C_CreateLockedMiniCards_Params Parms{};

	Parms.MissionUnlockCount = MissionUnlockCount;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.CreateEmptyMiniCards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::CreateEmptyMiniCards(int32 Count, class UW_RosterSelection_MiniCard_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "CreateEmptyMiniCards");

	Params::UW_PreMission_Tablet_RosterManager_C_CreateEmptyMiniCards_Params Parms{};

	Parms.Count = Count;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.EmptyMiniCardClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*ClickedCard                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::EmptyMiniCardClicked(class UW_RosterSelection_MiniCard_C* Card, class UW_RosterSelection_MiniCard_C* ClickedCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "EmptyMiniCardClicked");

	Params::UW_PreMission_Tablet_RosterManager_C_EmptyMiniCardClicked_Params Parms{};

	Parms.Card = Card;
	Parms.ClickedCard = ClickedCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.PopulateDebugCharacterList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URosterCharacter*>    CharacterArray                                                   (Edit, BlueprintVisible)
// class UW_RosterSelection_MiniCard_C*CurrentMiniCardWidget                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            CurrentCharacter                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URosterCharacter*>    CallFunc_GetAllCharacters_ReturnValue                            (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UW_RosterSelection_MiniCard_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::PopulateDebugCharacterList(const TArray<class URosterCharacter*>& CharacterArray, class UW_RosterSelection_MiniCard_C* CurrentMiniCardWidget, class URosterCharacter* CurrentCharacter, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, TArray<class URosterCharacter*>& CallFunc_GetAllCharacters_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_RosterSelection_MiniCard_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "PopulateDebugCharacterList");

	Params::UW_PreMission_Tablet_RosterManager_C_PopulateDebugCharacterList_Params Parms{};

	Parms.CharacterArray = CharacterArray;
	Parms.CurrentMiniCardWidget = CurrentMiniCardWidget;
	Parms.CurrentCharacter = CurrentCharacter;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllCharacters_ReturnValue = CallFunc_GetAllCharacters_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "GoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_PreMission_Tablet_RosterManager_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "BP_OnHandleBackAction");

	Params::UW_PreMission_Tablet_RosterManager_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.CloseDetailsPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::CloseDetailsPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "CloseDetailsPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.OpenDetailsPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URosterCharacter*            RosterCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::OpenDetailsPage(class URosterCharacter* RosterCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "OpenDetailsPage");

	Params::UW_PreMission_Tablet_RosterManager_C_OpenDetailsPage_Params Parms{};

	Parms.RosterCharacter = RosterCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.MiniCardUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::MiniCardUnhovered(class UW_RosterSelection_MiniCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "MiniCardUnhovered");

	Params::UW_PreMission_Tablet_RosterManager_C_MiniCardUnhovered_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.MiniCardClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*ClickedCard                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::MiniCardClicked(class UW_RosterSelection_MiniCard_C* Card, class UW_RosterSelection_MiniCard_C* ClickedCard, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "MiniCardClicked");

	Params::UW_PreMission_Tablet_RosterManager_C_MiniCardClicked_Params Parms{};

	Parms.Card = Card;
	Parms.ClickedCard = ClickedCard;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.GetIsSelfHost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAdminPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_PreMission_Tablet_RosterManager_C::GetIsSelfHost(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAdminPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "GetIsSelfHost");

	Params::UW_PreMission_Tablet_RosterManager_C_GetIsSelfHost_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAdminPlayerController_ReturnValue = CallFunc_IsAdminPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.PopulateCharacterList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URosterCharacter*>    CharacterArray                                                   (Edit, BlueprintVisible)
// class UW_RosterSelection_MiniCard_C*CurrentMiniCardWidget                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            CurrentCharacter                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetUnlockableSlotMissionsRemaining_ReturnValue          (ReferenceParm)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentRosterSize_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URosterCharacter*>    CallFunc_GetAllCharacters_ReturnValue                            (ReferenceParm)

void UW_PreMission_Tablet_RosterManager_C::PopulateCharacterList(const TArray<class URosterCharacter*>& CharacterArray, class UW_RosterSelection_MiniCard_C* CurrentMiniCardWidget, class URosterCharacter* CurrentCharacter, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class URosterCharacter* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, TArray<int32>& CallFunc_GetUnlockableSlotMissionsRemaining_ReturnValue, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetCurrentRosterSize_ReturnValue, class UW_RosterSelection_MiniCard_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TArray<class URosterCharacter*>& CallFunc_GetAllCharacters_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "PopulateCharacterList");

	Params::UW_PreMission_Tablet_RosterManager_C_PopulateCharacterList_Params Parms{};

	Parms.CharacterArray = CharacterArray;
	Parms.CurrentMiniCardWidget = CurrentMiniCardWidget;
	Parms.CurrentCharacter = CurrentCharacter;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetUnlockableSlotMissionsRemaining_ReturnValue = CallFunc_GetUnlockableSlotMissionsRemaining_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentRosterSize_ReturnValue = CallFunc_GetCurrentRosterSize_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetAllCharacters_ReturnValue = CallFunc_GetAllCharacters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.MiniCardHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_MiniCard_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_MiniCard_C*HoveredCard                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::MiniCardHovered(class UW_RosterSelection_MiniCard_C* Card, class UW_RosterSelection_MiniCard_C* HoveredCard, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "MiniCardHovered");

	Params::UW_PreMission_Tablet_RosterManager_C_MiniCardHovered_Params Parms{};

	Parms.Card = Card;
	Parms.HoveredCard = HoveredCard;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.PopulateSquadCharacters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URosterCharacter*>    SquadCharacterArray                                              (Edit, BlueprintVisible)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RosterSelection_Card_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class ERosterSquadPosition, class URosterCharacter*>CallFunc_GetSquadCharacters_ReturnValue                          (None)
// TArray<class URosterCharacter*>    CallFunc_Map_Values_Values                                       (ReferenceParm)

void UW_PreMission_Tablet_RosterManager_C::PopulateSquadCharacters(int32 CurrentIndex, const TArray<class URosterCharacter*>& SquadCharacterArray, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Variable, class URosterCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UW_RosterSelection_Card_C* CallFunc_Create_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TMap<enum class ERosterSquadPosition, class URosterCharacter*> CallFunc_GetSquadCharacters_ReturnValue, TArray<class URosterCharacter*>& CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "PopulateSquadCharacters");

	Params::UW_PreMission_Tablet_RosterManager_C_PopulateSquadCharacters_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.SquadCharacterArray = SquadCharacterArray;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetSquadCharacters_ReturnValue = CallFunc_GetSquadCharacters_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.GetPlayerCardByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UW_Roster_PlayerStatus_Card_C* UW_PreMission_Tablet_RosterManager_C::GetPlayerCardByIndex(int32 Index, int32 Temp_int_Variable, class UW_Roster_PlayerStatus_Card_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "GetPlayerCardByIndex");

	Params::UW_PreMission_Tablet_RosterManager_C_GetPlayerCardByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.PopulatePlayerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                PlayerToAdd                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>        NewPlayers                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSelfHost_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSelfHost_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Roster_PlayerStatus_Card_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerSelf_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::PopulatePlayerList(int32 Count, class APlayerState* PlayerToAdd, const TArray<class APlayerState*>& NewPlayers, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Roster_PlayerStatus_Card_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetIsSelfHost_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_GetIsSelfHost_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UW_Roster_PlayerStatus_Card_C* CallFunc_Create_ReturnValue_1, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsPlayerSelf_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "PopulatePlayerList");

	Params::UW_PreMission_Tablet_RosterManager_C_PopulatePlayerList_Params Parms{};

	Parms.Count = Count;
	Parms.PlayerToAdd = PlayerToAdd;
	Parms.NewPlayers = NewPlayers;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetIsSelfHost_ReturnValue = CallFunc_GetIsSelfHost_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsSelfHost_ReturnValue_1 = CallFunc_GetIsSelfHost_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue_1 = CallFunc_AddChildToWrapBox_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsPlayerSelf_ReturnValue = CallFunc_IsPlayerSelf_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.IsPlayerSelf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_PreMission_Tablet_RosterManager_C::IsPlayerSelf(class UObject* PlayerState, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "IsPlayerSelf");

	Params::UW_PreMission_Tablet_RosterManager_C_IsPlayerSelf_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.CloseSwapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::CloseSwapping(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "CloseSwapping");

	Params::UW_PreMission_Tablet_RosterManager_C_CloseSwapping_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.SquadMemberClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_RosterSelection_Card_C*   Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::SquadMemberClicked(class UW_RosterSelection_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "SquadMemberClicked");

	Params::UW_PreMission_Tablet_RosterManager_C_SquadMemberClicked_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.OnCharactersUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::OnCharactersUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "OnCharactersUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.BndEvt__W_PreMission_Tablet_Roster_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::BndEvt__W_PreMission_Tablet_Roster_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "BndEvt__W_PreMission_Tablet_Roster_btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.RefreshPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::RefreshPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "RefreshPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.OnPlayersUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::OnPlayersUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "OnPlayersUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.AudioPlayerVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AudioPlayer_C*            PlayerWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "AudioPlayerVisible");

	Params::UW_PreMission_Tablet_RosterManager_C_AudioPlayerVisible_Params Parms{};

	Parms.PlayerWidget = PlayerWidget;
	Parms.PlayerVisible = PlayerVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.PlayerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*PlayerCard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::PlayerClicked(class UW_Roster_PlayerStatus_Card_C* PlayerCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "PlayerClicked");

	Params::UW_PreMission_Tablet_RosterManager_C_PlayerClicked_Params Parms{};

	Parms.PlayerCard = PlayerCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.InitializeRoster
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::InitializeRoster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "InitializeRoster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.SetVisualTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDarkTheme                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::SetVisualTheme(bool UseDarkTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "SetVisualTheme");

	Params::UW_PreMission_Tablet_RosterManager_C_SetVisualTheme_Params Parms{};

	Parms.UseDarkTheme = UseDarkTheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.SetTabletState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAwake                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::SetTabletState(bool IsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "SetTabletState");

	Params::UW_PreMission_Tablet_RosterManager_C_SetTabletState_Params Parms{};

	Parms.IsAwake = IsAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "ChangePage");

	Params::UW_PreMission_Tablet_RosterManager_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "SetInputMode");

	Params::UW_PreMission_Tablet_RosterManager_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "Hide");

	Params::UW_PreMission_Tablet_RosterManager_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.BndEvt__W_PreMission_Tablet_Roster_btn_ClosePage_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::BndEvt__W_PreMission_Tablet_Roster_btn_ClosePage_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "BndEvt__W_PreMission_Tablet_Roster_btn_ClosePage_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_RosterManager_C_BndEvt__W_PreMission_Tablet_Roster_btn_ClosePage_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.ChangeRosterPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PageTitle                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowCloseButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_RosterManager_C::ChangeRosterPage(class FText PageTitle, bool ShowCloseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "ChangeRosterPage");

	Params::UW_PreMission_Tablet_RosterManager_C_ChangeRosterPage_Params Parms{};

	Parms.PageTitle = PageTitle;
	Parms.ShowCloseButton = ShowCloseButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.PageChangeReveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::PageChangeReveal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "PageChangeReveal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.RefreshRosterEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::RefreshRosterEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "RefreshRosterEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.OnPracticeUnitsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::OnPracticeUnitsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "OnPracticeUnitsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "Reveal");

	Params::UW_PreMission_Tablet_RosterManager_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_RosterManager_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_RosterManager.W_PreMission_Tablet_RosterManager_C.ExecuteUbergraph_W_PreMission_Tablet_RosterManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RosterSelection_Card_C*   K2Node_CustomEvent_Card                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AudioPlayer_C*            K2Node_Event_PlayerWidget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayerVisible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Roster_PlayerStatus_Card_C*K2Node_CustomEvent_PlayerCard                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseDarkTheme                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsAwake                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PageTitle                                     (None)
// bool                               K2Node_CustomEvent_ShowCloseButton                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_RosterManager_C::ExecuteUbergraph_W_PreMission_Tablet_RosterManager(int32 EntryPoint, class UW_RosterSelection_Card_C* K2Node_CustomEvent_Card, bool CallFunc_IsValid_ReturnValue, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, class UW_Roster_PlayerStatus_Card_C* K2Node_CustomEvent_PlayerCard, bool K2Node_Event_UseDarkTheme, bool K2Node_Event_IsAwake, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class FText K2Node_CustomEvent_PageTitle, bool K2Node_CustomEvent_ShowCloseButton, enum class ESlateVisibility Temp_byte_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_RosterManager_C", "ExecuteUbergraph_W_PreMission_Tablet_RosterManager");

	Params::UW_PreMission_Tablet_RosterManager_C_ExecuteUbergraph_W_PreMission_Tablet_RosterManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Card = K2Node_CustomEvent_Card;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_PlayerWidget = K2Node_Event_PlayerWidget;
	Parms.K2Node_Event_PlayerVisible = K2Node_Event_PlayerVisible;
	Parms.K2Node_CustomEvent_PlayerCard = K2Node_CustomEvent_PlayerCard;
	Parms.K2Node_Event_UseDarkTheme = K2Node_Event_UseDarkTheme;
	Parms.K2Node_Event_IsAwake = K2Node_Event_IsAwake;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_PageTitle = K2Node_CustomEvent_PageTitle;
	Parms.K2Node_CustomEvent_ShowCloseButton = K2Node_CustomEvent_ShowCloseButton;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;

	UObject::ProcessEvent(Func, &Parms);

}

}


