#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Memorial.W_Memorial_C
// (None)

class UClass* UW_Memorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Memorial_C");

	return Clss;
}


// W_Memorial_C W_Memorial.Default__W_Memorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Memorial_C* UW_Memorial_C::GetDefaultObj()
{
	static class UW_Memorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Memorial_C*>(UW_Memorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Memorial.W_Memorial_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Memorial_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "GetFocusTarget");

	Params::UW_Memorial_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Memorial.W_Memorial_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Memorial_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "BackPage");

	Params::UW_Memorial_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Memorial.W_Memorial_C.GetSpacerVisibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_Memorial_C::GetSpacerVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "GetSpacerVisibility");

	Params::UW_Memorial_C_GetSpacerVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Memorial.W_Memorial_C.PopulateMemorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RevealDelay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLastCard                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_MemorialCard_C*           NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URosterCharacter*            NewCharacter                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MemorialCard_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetSpacerVisibility_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class URosterCharacter*>    CallFunc_GetMemorialCharacters_ReturnValue                       (ReferenceParm)
// class URosterCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class URosterCharacter*>    CallFunc_GetMemorialCharacters_ReturnValue_1                     (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Memorial_C::PopulateMemorial(float RevealDelay, bool bLastCard, class UW_MemorialCard_C* NewCard, class URosterCharacter* NewCharacter, class UW_MemorialCard_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility CallFunc_GetSpacerVisibility_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class URosterCharacter*>& CallFunc_GetMemorialCharacters_ReturnValue, class URosterCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, TArray<class URosterCharacter*>& CallFunc_GetMemorialCharacters_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "PopulateMemorial");

	Params::UW_Memorial_C_PopulateMemorial_Params Parms{};

	Parms.RevealDelay = RevealDelay;
	Parms.bLastCard = bLastCard;
	Parms.NewCard = NewCard;
	Parms.NewCharacter = NewCharacter;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSpacerVisibility_ReturnValue = CallFunc_GetSpacerVisibility_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetMemorialCharacters_ReturnValue = CallFunc_GetMemorialCharacters_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;
	Parms.CallFunc_GetMemorialCharacters_ReturnValue_1 = CallFunc_GetMemorialCharacters_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Memorial.W_Memorial_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_Memorial_C::BP_OnHandleBackAction(bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "BP_OnHandleBackAction");

	Params::UW_Memorial_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Memorial.W_Memorial_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Memorial_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "Reveal");

	Params::UW_Memorial_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Memorial.W_Memorial_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Memorial_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "Hide");

	Params::UW_Memorial_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Memorial.W_Memorial_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Memorial_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "SetInputMode");

	Params::UW_Memorial_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Memorial.W_Memorial_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Memorial_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "ChangePage");

	Params::UW_Memorial_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Memorial.W_Memorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Memorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Memorial.W_Memorial_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Memorial_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Memorial.W_Memorial_C.BndEvt__W_Memorial_W_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Memorial_C::BndEvt__W_Memorial_W_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "BndEvt__W_Memorial_W_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature");

	Params::UW_Memorial_C_BndEvt__W_Memorial_W_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Memorial.W_Memorial_C.ExecuteUbergraph_W_Memorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Memorial_C::ExecuteUbergraph_W_Memorial(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool CallFunc_BackPage_Handled, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Memorial_C", "ExecuteUbergraph_W_Memorial");

	Params::UW_Memorial_C_ExecuteUbergraph_W_Memorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


