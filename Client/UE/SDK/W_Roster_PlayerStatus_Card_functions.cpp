#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C
// (None)

class UClass* UW_Roster_PlayerStatus_Card_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Roster_PlayerStatus_Card_C");

	return Clss;
}


// W_Roster_PlayerStatus_Card_C W_Roster_PlayerStatus_Card.Default__W_Roster_PlayerStatus_Card_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Roster_PlayerStatus_Card_C* UW_Roster_PlayerStatus_Card_C::GetDefaultObj()
{
	static class UW_Roster_PlayerStatus_Card_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Roster_PlayerStatus_Card_C*>(UW_Roster_PlayerStatus_Card_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_PlayerStatus_Card_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BackPage");

	Params::UW_Roster_PlayerStatus_Card_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "GetFocusTarget");

	Params::UW_Roster_PlayerStatus_Card_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.UpdateStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetStatus_ReturnValue                                   (None)

void UW_Roster_PlayerStatus_Card_C::UpdateStatus(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetStatus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "UpdateStatus");

	Params::UW_Roster_PlayerStatus_Card_C_UpdateStatus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStatus_ReturnValue = CallFunc_GetStatus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.UpdateLoadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRosterLoadout              CallFunc_GetLoadout_ReturnValue                                  (None)

void UW_Roster_PlayerStatus_Card_C::UpdateLoadout(bool CallFunc_IsValid_ReturnValue, const struct FRosterLoadout& CallFunc_GetLoadout_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "UpdateLoadout");

	Params::UW_Roster_PlayerStatus_Card_C_UpdateLoadout_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLoadout_ReturnValue = CallFunc_GetLoadout_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.UpdateReadyStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FLinearColor                CallFunc_GetLinearColorScheme_White                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorScheme_Dark                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorScheme_Red                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorScheme_Yellow                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorScheme_Blue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorScheme_Green                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

void UW_Roster_PlayerStatus_Card_C::UpdateReadyStatus(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FLinearColor& CallFunc_GetLinearColorScheme_White, const struct FLinearColor& CallFunc_GetLinearColorScheme_Dark, const struct FLinearColor& CallFunc_GetLinearColorScheme_Red, const struct FLinearColor& CallFunc_GetLinearColorScheme_Yellow, const struct FLinearColor& CallFunc_GetLinearColorScheme_Blue, const struct FLinearColor& CallFunc_GetLinearColorScheme_Green, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "UpdateReadyStatus");

	Params::UW_Roster_PlayerStatus_Card_C_UpdateReadyStatus_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetLinearColorScheme_White = CallFunc_GetLinearColorScheme_White;
	Parms.CallFunc_GetLinearColorScheme_Dark = CallFunc_GetLinearColorScheme_Dark;
	Parms.CallFunc_GetLinearColorScheme_Red = CallFunc_GetLinearColorScheme_Red;
	Parms.CallFunc_GetLinearColorScheme_Yellow = CallFunc_GetLinearColorScheme_Yellow;
	Parms.CallFunc_GetLinearColorScheme_Blue = CallFunc_GetLinearColorScheme_Blue;
	Parms.CallFunc_GetLinearColorScheme_Green = CallFunc_GetLinearColorScheme_Green;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.UpdateLoadoutPS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               NewLoadout                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class UClass*, int32>         DeployablesSorted                                                (Edit, BlueprintVisible)
// TArray<TSubclassOf<class ABaseItem>>Deployables                                                      (Edit, BlueprintVisible)

void UW_Roster_PlayerStatus_Card_C::UpdateLoadoutPS(const struct FSavedLoadout& NewLoadout, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "UpdateLoadoutPS");

	Params::UW_Roster_PlayerStatus_Card_C_UpdateLoadoutPS_Params Parms{};

	Parms.NewLoadout = NewLoadout;
	Parms.DeployablesSorted = DeployablesSorted;
	Parms.Deployables = Deployables;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BlankDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::BlankDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BlankDetails");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.SetupAptitude
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                ProgressBar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UW_Roster_PlayerStatus_Card_C::SetupAptitude(class UProgressBar* ProgressBar, class UTextBlock* TextBlock, float Percent, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "SetupAptitude");

	Params::UW_Roster_PlayerStatus_Card_C_SetupAptitude_Params Parms{};

	Parms.ProgressBar = ProgressBar;
	Parms.TextBlock = TextBlock;
	Parms.Percent = Percent;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::UpdateHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "UpdateHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_PlayerStatus_Card_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BP_OnItemExpansionChanged");

	Params::UW_Roster_PlayerStatus_Card_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_PlayerStatus_Card_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BP_OnItemSelectionChanged");

	Params::UW_Roster_PlayerStatus_Card_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "OnListItemObjectSet");

	Params::UW_Roster_PlayerStatus_Card_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_PlayerStatus_Card_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "SetInputMode");

	Params::UW_Roster_PlayerStatus_Card_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "ChangePage");

	Params::UW_Roster_PlayerStatus_Card_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_PlayerStatus_Card_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "PreConstruct");

	Params::UW_Roster_PlayerStatus_Card_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "Reveal");

	Params::UW_Roster_PlayerStatus_Card_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.AnimRevealed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::AnimRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "AnimRevealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_PlayerStatus_Card_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "Hide");

	Params::UW_Roster_PlayerStatus_Card_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.AnimHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::AnimHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "AnimHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.QuickHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::QuickHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "QuickHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.SetByPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::SetByPlayerState(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "SetByPlayerState");

	Params::UW_Roster_PlayerStatus_Card_C_SetByPlayerState_Params Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Roster_PlayerStatus_Card_C_BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Roster_PlayerStatus_Card_C_BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Roster_PlayerStatus_Card_C_BndEvt__W_RosterPlayer_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.SetByProxy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterProxy*             CharacterProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::SetByProxy(class UCharacterProxy* CharacterProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "SetByProxy");

	Params::UW_Roster_PlayerStatus_Card_C_SetByProxy_Params Parms{};

	Parms.CharacterProxy = CharacterProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.UpdateCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Roster_PlayerStatus_Card_C::UpdateCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "UpdateCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.ExecuteUbergraph_W_Roster_PlayerStatus_Card
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_CustomEvent_PlayerState                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterProxy*             K2Node_CustomEvent_CharacterProxy                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_ReturnValue                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void UW_Roster_PlayerStatus_Card_C::ExecuteUbergraph_W_Roster_PlayerStatus_Card(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class APlayerState* K2Node_CustomEvent_PlayerState, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UCharacterProxy* K2Node_CustomEvent_CharacterProxy, class FText CallFunc_GetName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "ExecuteUbergraph_W_Roster_PlayerStatus_Card");

	Params::UW_Roster_PlayerStatus_Card_C_ExecuteUbergraph_W_Roster_PlayerStatus_Card_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerState = K2Node_CustomEvent_PlayerState;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State_1 = K2Node_DynamicCast_AsReady_or_Not_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_CharacterProxy = K2Node_CustomEvent_CharacterProxy;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_PlayerStatus_Card.W_Roster_PlayerStatus_Card_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_PlayerStatus_Card_C::OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_PlayerStatus_Card_C", "OnClicked__DelegateSignature");

	Params::UW_Roster_PlayerStatus_Card_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}

}


