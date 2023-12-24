#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PageWrapper.W_PageWrapper_C
// (None)

class UClass* UW_PageWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PageWrapper_C");

	return Clss;
}


// W_PageWrapper_C W_PageWrapper.Default__W_PageWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PageWrapper_C* UW_PageWrapper_C::GetDefaultObj()
{
	static class UW_PageWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PageWrapper_C*>(UW_PageWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PageWrapper.W_PageWrapper_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "GetFocusTarget");

	Params::UW_PageWrapper_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_PageWrapper.W_PageWrapper_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "BackPage");

	Params::UW_PageWrapper_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_PageWrapper.W_PageWrapper_C.HideRedLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::HideRedLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "HideRedLine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.SetFooterFocusByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SetFocusByID_FocusedEntryButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::SetFooterFocusByID(const class FString& ID, class UWidget* CallFunc_SetFocusByID_FocusedEntryButton, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "SetFooterFocusByID");

	Params::UW_PageWrapper_C_SetFooterFocusByID_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_SetFocusByID_FocusedEntryButton = CallFunc_SetFocusByID_FocusedEntryButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_PageWrapper_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "BP_GetDesiredFocusTarget");

	Params::UW_PageWrapper_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PageWrapper.W_PageWrapper_C.GetCurrentNavSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SelectedNavOption                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::GetCurrentNavSelection(class FName* SelectedNavOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "GetCurrentNavSelection");

	Params::UW_PageWrapper_C_GetCurrentNavSelection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedNavOption != nullptr)
		*SelectedNavOption = Parms.SelectedNavOption;

}


// Function W_PageWrapper.W_PageWrapper_C.UnhideFooterEntryByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::UnhideFooterEntryByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "UnhideFooterEntryByIndex");

	Params::UW_PageWrapper_C_UnhideFooterEntryByIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.UnhideFooterEntryByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_PageWrapper_C::UnhideFooterEntryByID(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "UnhideFooterEntryByID");

	Params::UW_PageWrapper_C_UnhideFooterEntryByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.HideFooterEntryByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::HideFooterEntryByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "HideFooterEntryByIndex");

	Params::UW_PageWrapper_C_HideFooterEntryByIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.HideFooterEntryByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_PageWrapper_C::HideFooterEntryByID(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "HideFooterEntryByID");

	Params::UW_PageWrapper_C_HideFooterEntryByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.IsAspectConstrained
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_PageWrapper_C::IsAspectConstrained(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "IsAspectConstrained");

	Params::UW_PageWrapper_C_IsAspectConstrained_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PageWrapper.W_PageWrapper_C.GetLineWidthByConstraint
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RelativeScreenLength                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OpenSpace                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAspectConstrained_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UW_PageWrapper_C::GetLineWidthByConstraint(float RelativeScreenLength, float OpenSpace, bool CallFunc_IsAspectConstrained_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "GetLineWidthByConstraint");

	Params::UW_PageWrapper_C_GetLineWidthByConstraint_Params Parms{};

	Parms.RelativeScreenLength = RelativeScreenLength;
	Parms.OpenSpace = OpenSpace;
	Parms.CallFunc_IsAspectConstrained_ReturnValue = CallFunc_IsAspectConstrained_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PageWrapper.W_PageWrapper_C.UpdateVignette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::UpdateVignette(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "UpdateVignette");

	Params::UW_PageWrapper_C_UpdateVignette_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.ClearTagline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::ClearTagline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "ClearTagline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.ClearHeadline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::ClearHeadline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "ClearHeadline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.InitializeHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::InitializeHeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "InitializeHeader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.InitializeNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::InitializeNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "InitializeNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.InitializeMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::InitializeMaterials(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "InitializeMaterials");

	Params::UW_PageWrapper_C_InitializeMaterials_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.UpdateBackgroundBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::UpdateBackgroundBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "UpdateBackgroundBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.AddFooterEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InsertAtIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      EntryID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// struct FScreenFooterEntry          ScreenFooterEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PageWrapper_C::AddFooterEntry(int32 InsertAtIndex, class FString& EntryID, const struct FScreenFooterEntry& ScreenFooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "AddFooterEntry");

	Params::UW_PageWrapper_C_AddFooterEntry_Params Parms{};

	Parms.InsertAtIndex = InsertAtIndex;
	Parms.EntryID = EntryID;
	Parms.ScreenFooterEntry = ScreenFooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.SetFooterEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, struct FScreenFooterEntry>FooterEntries                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::SetFooterEntries(TMap<class FString, struct FScreenFooterEntry> FooterEntries, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "SetFooterEntries");

	Params::UW_PageWrapper_C_SetFooterEntries_Params Parms{};

	Parms.FooterEntries = FooterEntries;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.HideFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::HideFooter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "HideFooter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.ShowFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::ShowFooter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "ShowFooter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.InitializeFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::InitializeFooter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "InitializeFooter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.SetAspectConstraints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::SetAspectConstraints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "SetAspectConstraints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.UpdateCurrentNavOptions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)

void UW_PageWrapper_C::UpdateCurrentNavOptions(TArray<class FName>& CallFunc_Map_Keys_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "UpdateCurrentNavOptions");

	Params::UW_PageWrapper_C_UpdateCurrentNavOptions_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.ToggleNavVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::ToggleNavVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "ToggleNavVisibility");

	Params::UW_PageWrapper_C_ToggleNavVisibility_Params Parms{};

	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.RemoveHeaderNavOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::RemoveHeaderNavOption(class FName OptionNameID, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "RemoveHeaderNavOption");

	Params::UW_PageWrapper_C_RemoveHeaderNavOption_Params Parms{};

	Parms.OptionNameID = OptionNameID;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.EnableHeaderNavOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::EnableHeaderNavOption(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "EnableHeaderNavOption");

	Params::UW_PageWrapper_C_EnableHeaderNavOption_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.DisableHeaderNavOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::DisableHeaderNavOption(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "DisableHeaderNavOption");

	Params::UW_PageWrapper_C_DisableHeaderNavOption_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.SetHeaderNavSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::SetHeaderNavSelection(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "SetHeaderNavSelection");

	Params::UW_PageWrapper_C_SetHeaderNavSelection_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.AddHeaderNavOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OptionLabelText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               DefaultSelection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::AddHeaderNavOption(class FName OptionNameID, class FText OptionLabelText, bool DefaultSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "AddHeaderNavOption");

	Params::UW_PageWrapper_C_AddHeaderNavOption_Params Parms{};

	Parms.OptionNameID = OptionNameID;
	Parms.OptionLabelText = OptionLabelText;
	Parms.DefaultSelection = DefaultSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.SetHeaderNavOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, class FText>     OptionMap                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Array_Identical_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::SetHeaderNavOptions(TMap<class FName, class FText> OptionMap, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_Identical_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "SetHeaderNavOptions");

	Params::UW_PageWrapper_C_SetHeaderNavOptions_Params Parms{};

	Parms.OptionMap = OptionMap;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Identical_ReturnValue = CallFunc_Array_Identical_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.UpdateHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewHeader                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NewTagline                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsNotEmpty_NotEmpty                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsNotEmpty_NotEmpty_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::UpdateHeader(class FText NewHeader, class FText NewTagline, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_TextIsNotEmpty_NotEmpty_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "UpdateHeader");

	Params::UW_PageWrapper_C_UpdateHeader_Params Parms{};

	Parms.NewHeader = NewHeader;
	Parms.NewTagline = NewTagline;
	Parms.CallFunc_TextIsNotEmpty_NotEmpty = CallFunc_TextIsNotEmpty_NotEmpty;
	Parms.CallFunc_TextIsNotEmpty_NotEmpty_1 = CallFunc_TextIsNotEmpty_NotEmpty_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "Hide");

	Params::UW_PageWrapper_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "SetInputMode");

	Params::UW_PageWrapper_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "ChangePage");

	Params::UW_PageWrapper_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PageWrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "PreConstruct");

	Params::UW_PageWrapper_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "Tick");

	Params::UW_PageWrapper_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.BndEvt__W_PageHeader_W_PageHeader_Carousel_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::BndEvt__W_PageHeader_W_PageHeader_Carousel_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "BndEvt__W_PageHeader_W_PageHeader_Carousel_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature");

	Params::UW_PageWrapper_C_BndEvt__W_PageHeader_W_PageHeader_Carousel_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "Reveal");

	Params::UW_PageWrapper_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "InputMethodChanged");

	Params::UW_PageWrapper_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_2_OnFooterEntriesUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_2_OnFooterEntriesUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_2_OnFooterEntriesUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_3_OnFooterEntryClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_3_OnFooterEntryClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_3_OnFooterEntryClicked__DelegateSignature");

	Params::UW_PageWrapper_C_BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_3_OnFooterEntryClicked__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.Animating
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PageWrapper_C::Animating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "Animating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PageWrapper.W_PageWrapper_C.ExecuteUbergraph_W_PageWrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      K2Node_ComponentBoundEvent_FooterEntry                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetButtonID_ButtonID                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLineWidthByConstraint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::ExecuteUbergraph_W_PageWrapper(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_ComponentBoundEvent_OptionID, float K2Node_Event_Delay, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UW_ScreenFooterEntry_C* K2Node_ComponentBoundEvent_FooterEntry, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const class FString& CallFunc_GetButtonID_ButtonID, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_GetLineWidthByConstraint_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "ExecuteUbergraph_W_PageWrapper");

	Params::UW_PageWrapper_C_ExecuteUbergraph_W_PageWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_FooterEntry = K2Node_ComponentBoundEvent_FooterEntry;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_GetButtonID_ButtonID = CallFunc_GetButtonID_ButtonID;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetLineWidthByConstraint_ReturnValue = CallFunc_GetLineWidthByConstraint_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.OnFooterButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_PageWrapper_C::OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "OnFooterButtonClicked__DelegateSignature");

	Params::UW_PageWrapper_C_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PageWrapper.W_PageWrapper_C.OnNavOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PageWrapper_C::OnNavOptionSelected__DelegateSignature(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PageWrapper_C", "OnNavOptionSelected__DelegateSignature");

	Params::UW_PageWrapper_C_OnNavOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}

}


