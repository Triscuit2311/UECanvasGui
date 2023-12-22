#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C
// (None)

class UClass* UW_Loadout_PresetDropdown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_PresetDropdown_C");

	return Clss;
}


// W_Loadout_PresetDropdown_C W_Loadout_PresetDropdown.Default__W_Loadout_PresetDropdown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_PresetDropdown_C* UW_Loadout_PresetDropdown_C::GetDefaultObj()
{
	static class UW_Loadout_PresetDropdown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_PresetDropdown_C*>(UW_Loadout_PresetDropdown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.GetPreset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetPreset_ReturnValue                                   (None)

struct FSavedLoadout UW_Loadout_PresetDropdown_C::GetPreset(const class FString& Name, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetPreset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "GetPreset");

	Params::UW_Loadout_PresetDropdown_C_GetPreset_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetPreset_ReturnValue = CallFunc_GetPreset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.ApplySelectedPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::ApplySelectedPreset(const class FString& Name, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "ApplySelectedPreset");

	Params::UW_Loadout_PresetDropdown_C_ApplySelectedPreset_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.SetSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::SetSelection(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "SetSelection");

	Params::UW_Loadout_PresetDropdown_C_SetSelection_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.SetPresetModified
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Modified                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_StringNotEmpty_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_PresetDropdown_C::SetPresetModified(bool Modified, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_StringNotEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "SetPresetModified");

	Params::UW_Loadout_PresetDropdown_C_SetPresetModified_Params Parms{};

	Parms.Modified = Modified;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_StringNotEmpty_ReturnValue = CallFunc_StringNotEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.PopulatePresets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               CallFunc_IsCurrentPresetDirty_IsDirty                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_StringIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_PresetDropdown_C::PopulatePresets(const class FString& Temp_string_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable, bool CallFunc_IsCurrentPresetDirty_IsDirty, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "PopulatePresets");

	Params::UW_Loadout_PresetDropdown_C_PopulatePresets_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsCurrentPresetDirty_IsDirty = CallFunc_IsCurrentPresetDirty_IsDirty;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_StringIsEmpty_ReturnValue = CallFunc_StringIsEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_PresetDropdown_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_PresetDropdown_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "SetLoadoutWidget");

	Params::UW_Loadout_PresetDropdown_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_PresetDropdown_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_PresetDropdown_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "UpdateCurrentSlot");

	Params::UW_Loadout_PresetDropdown_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_PresetDropdown_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.PresetsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_PresetDropdown_C::PresetsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "PresetsChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.PresetApplied
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               Loadout                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Loadout_PresetDropdown_C::PresetApplied(const class FString& Name, struct FSavedLoadout& Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "PresetApplied");

	Params::UW_Loadout_PresetDropdown_C_PresetApplied_Params Parms{};

	Parms.Name = Name;
	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_PresetDropdown_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "UpdateActiveLoadout");

	Params::UW_Loadout_PresetDropdown_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Dropdown_C*               TriggeringDropdown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature_Params Parms{};

	Parms.TriggeringDropdown = TriggeringDropdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.ExecuteUbergraph_W_Loadout_PresetDropdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID_3                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StringNotEmpty_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_OptionID_2                            (ZeroConstructor, HasGetValueTypeHash)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StringIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Name                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_CustomEvent_Loadout                                       (ConstParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_OptionID_1                            (ZeroConstructor, HasGetValueTypeHash)
// class UW_Dropdown_C*               K2Node_ComponentBoundEvent_TriggeringDropdown                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetPreset_ReturnValue                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)

void UW_Loadout_PresetDropdown_C::ExecuteUbergraph_W_Loadout_PresetDropdown(int32 EntryPoint, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& K2Node_ComponentBoundEvent_OptionID_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FName K2Node_Event_OptionNameID, bool CallFunc_StringNotEmpty_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_2, class UW_Loadout_C* K2Node_Event_LoadoutWidget, bool CallFunc_StringIsEmpty_ReturnValue, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, const class FString& K2Node_CustomEvent_Name, const struct FSavedLoadout& K2Node_CustomEvent_Loadout, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_ComponentBoundEvent_OptionID_1, class UW_Dropdown_C* K2Node_ComponentBoundEvent_TriggeringDropdown, const struct FSavedLoadout& CallFunc_GetPreset_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_ComponentBoundEvent_OptionID, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "ExecuteUbergraph_W_Loadout_PresetDropdown");

	Params::UW_Loadout_PresetDropdown_C_ExecuteUbergraph_W_Loadout_PresetDropdown_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_OptionID_3 = K2Node_ComponentBoundEvent_OptionID_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.CallFunc_StringNotEmpty_ReturnValue = CallFunc_StringNotEmpty_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OptionID_2 = K2Node_ComponentBoundEvent_OptionID_2;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.CallFunc_StringIsEmpty_ReturnValue = CallFunc_StringIsEmpty_ReturnValue;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_OptionID_1 = K2Node_ComponentBoundEvent_OptionID_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringDropdown = K2Node_ComponentBoundEvent_TriggeringDropdown;
	Parms.CallFunc_GetPreset_ReturnValue = CallFunc_GetPreset_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_2 = CallFunc_GetReadyOrNotGameState_ReturnValue_2;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnPresetMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_PresetDropdown_C::OnPresetMenuClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnPresetMenuClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnPresetHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               SavedLoadout                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_PresetDropdown_C::OnPresetHovered__DelegateSignature(const struct FSavedLoadout& SavedLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnPresetHovered__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_OnPresetHovered__DelegateSignature_Params Parms{};

	Parms.SavedLoadout = SavedLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnDefaultPresetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_PresetDropdown_C::OnDefaultPresetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnDefaultPresetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnPresetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::OnPresetSelected__DelegateSignature(const class FString& PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnPresetSelected__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_OnPresetSelected__DelegateSignature_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnDeletePresetClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::OnDeletePresetClicked__DelegateSignature(const class FString& PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnDeletePresetClicked__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_OnDeletePresetClicked__DelegateSignature_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnSaveNewPresetClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_PresetDropdown_C::OnSaveNewPresetClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnSaveNewPresetClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnSaveModifiedPresetClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ModifiedPreset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_PresetDropdown_C::OnSaveModifiedPresetClicked__DelegateSignature(const class FString& ModifiedPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_PresetDropdown_C", "OnSaveModifiedPresetClicked__DelegateSignature");

	Params::UW_Loadout_PresetDropdown_C_OnSaveModifiedPresetClicked__DelegateSignature_Params Parms{};

	Parms.ModifiedPreset = ModifiedPreset;

	UObject::ProcessEvent(Func, &Parms);

}

}


