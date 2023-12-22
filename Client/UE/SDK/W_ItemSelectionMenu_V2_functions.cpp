#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C
// (None)

class UClass* UW_ItemSelectionMenu_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemSelectionMenu_V2_C");

	return Clss;
}


// W_ItemSelectionMenu_V2_C W_ItemSelectionMenu_V2.Default__W_ItemSelectionMenu_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemSelectionMenu_V2_C* UW_ItemSelectionMenu_V2_C::GetDefaultObj()
{
	static class UW_ItemSelectionMenu_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemSelectionMenu_V2_C*>(UW_ItemSelectionMenu_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ConfirmSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_V2_C*CallFunc_Get_List_At_Index_Return_Value                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelectionMenu_V2_C::ConfirmSelection(int32 Index, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UW_ItemSelection_ItemList_V2_C* CallFunc_Get_List_At_Index_Return_Value, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "ConfirmSelection");

	Params::UW_ItemSelectionMenu_V2_C_ConfirmSelection_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_Get_List_At_Index_Return_Value = CallFunc_Get_List_At_Index_Return_Value;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.SelectCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelectionMenu_V2_C::SelectCategory(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "SelectCategory");

	Params::UW_ItemSelectionMenu_V2_C_SelectCategory_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Update Menu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemSelectionGroup> InItemGroups                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ItemSelectionMenu_V2_C::Update_Menu(TArray<struct FItemSelectionGroup>& InItemGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "Update Menu");

	Params::UW_ItemSelectionMenu_V2_C_Update_Menu_Params Parms{};

	Parms.InItemGroups = InItemGroups;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelectionMenu_V2_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelectionMenu_V2_C::OpenMenu(int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "OpenMenu");

	Params::UW_ItemSelectionMenu_V2_C_OpenMenu_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemSelectionGroup> InItemSelectionGroups                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ItemSelectionMenu_V2_C::Initialize(bool bForce, TArray<struct FItemSelectionGroup>& InItemSelectionGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "Initialize");

	Params::UW_ItemSelectionMenu_V2_C_Initialize_Params Parms{};

	Parms.bForce = bForce;
	Parms.InItemSelectionGroups = InItemSelectionGroups;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ExecuteUbergraph_W_ItemSelectionMenu_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bForce                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemSelectionGroup> K2Node_CustomEvent_InItemSelectionGroups                         (ConstParm, ReferenceParm)

void UW_ItemSelectionMenu_V2_C::ExecuteUbergraph_W_ItemSelectionMenu_V2(int32 EntryPoint, bool K2Node_CustomEvent_bForce, TArray<struct FItemSelectionGroup>& K2Node_CustomEvent_InItemSelectionGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "ExecuteUbergraph_W_ItemSelectionMenu_V2");

	Params::UW_ItemSelectionMenu_V2_C_ExecuteUbergraph_W_ItemSelectionMenu_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bForce = K2Node_CustomEvent_bForce;
	Parms.K2Node_CustomEvent_InItemSelectionGroups = K2Node_CustomEvent_InItemSelectionGroups;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OnMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelectionMenu_V2_C::OnMenuOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelectionMenu_V2_C", "OnMenuOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


