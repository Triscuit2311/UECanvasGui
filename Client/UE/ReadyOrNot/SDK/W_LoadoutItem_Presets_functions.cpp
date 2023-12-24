#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutItem_Presets.W_LoadoutItem_Presets_C
// (None)

class UClass* UW_LoadoutItem_Presets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutItem_Presets_C");

	return Clss;
}


// W_LoadoutItem_Presets_C W_LoadoutItem_Presets.Default__W_LoadoutItem_Presets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutItem_Presets_C* UW_LoadoutItem_Presets_C::GetDefaultObj()
{
	static class UW_LoadoutItem_Presets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutItem_Presets_C*>(UW_LoadoutItem_Presets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.LoadPresets (ItemClass)
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemClass                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PresetSelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSelectedPreset_Return_Value                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     CallFunc_FindSelectedPreset_Loadout_Item_Preset                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponPreset          CallFunc_GetWeaponPresetsData_ReturnValue                        (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::LoadPresets__ItemClass_(class UClass*& ItemClass, int32 PresetSelectedIndex, int32 CallFunc_FindSelectedPreset_Return_Value, class UW_LoadoutItem_Preset_C* CallFunc_FindSelectedPreset_Loadout_Item_Preset, const struct FSavedWeaponPreset& CallFunc_GetWeaponPresetsData_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "LoadPresets (ItemClass)");

	Params::UW_LoadoutItem_Presets_C_LoadPresets__ItemClass__Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.PresetSelectedIndex = PresetSelectedIndex;
	Parms.CallFunc_FindSelectedPreset_Return_Value = CallFunc_FindSelectedPreset_Return_Value;
	Parms.CallFunc_FindSelectedPreset_Loadout_Item_Preset = CallFunc_FindSelectedPreset_Loadout_Item_Preset;
	Parms.CallFunc_GetWeaponPresetsData_ReturnValue = CallFunc_GetWeaponPresetsData_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.FindSelectedPreset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                      ItemClass                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     Loadout_Item_Preset                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponPreset          CallFunc_GetWeaponPresetsData_ReturnValue                        (None)

void UW_LoadoutItem_Presets_C::FindSelectedPreset(class UClass*& ItemClass, int32* Return_Value, class UW_LoadoutItem_Preset_C** Loadout_Item_Preset, const struct FSavedWeaponPreset& CallFunc_GetWeaponPresetsData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "FindSelectedPreset");

	Params::UW_LoadoutItem_Presets_C_FindSelectedPreset_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.CallFunc_GetWeaponPresetsData_ReturnValue = CallFunc_GetWeaponPresetsData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

	if (Loadout_Item_Preset != nullptr)
		*Loadout_Item_Preset = Parms.Loadout_Item_Preset;

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.CanRenamePreset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_Preset_C*     CallFunc_GetSelectedPresetWidget_Return_Value                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanRename_Return_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::CanRenamePreset(bool* Return_Value, class UW_LoadoutItem_Preset_C* CallFunc_GetSelectedPresetWidget_Return_Value, bool CallFunc_CanRename_Return_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "CanRenamePreset");

	Params::UW_LoadoutItem_Presets_C_CanRenamePreset_Params Parms{};

	Parms.CallFunc_GetSelectedPresetWidget_Return_Value = CallFunc_GetSelectedPresetWidget_Return_Value;
	Parms.CallFunc_CanRename_Return_Value = CallFunc_CanRename_Return_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.GetSelectedPresetWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UW_LoadoutItem_Preset_C*     Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::GetSelectedPresetWidget(class UW_LoadoutItem_Preset_C** Return_Value, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "GetSelectedPresetWidget");

	Params::UW_LoadoutItem_Presets_C_GetSelectedPresetWidget_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.IsRenamingPreset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRenaming_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::IsRenamingPreset(bool* Return_Value, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRenaming_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "IsRenamingPreset");

	Params::UW_LoadoutItem_Presets_C_IsRenamingPreset_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRenaming_Return_Value = CallFunc_IsRenaming_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ConflictsWithOtherPresets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UW_LoadoutItem_Preset_C*     Loadout_Item_Preset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        TestingPresetText                                                (Edit, BlueprintVisible)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_CurrentText                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::ConflictsWithOtherPresets(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset, class FText& InText, bool* Return_Value, class FText TestingPresetText, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class FText CallFunc_GetText_CurrentText, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "ConflictsWithOtherPresets");

	Params::UW_LoadoutItem_Presets_C_ConflictsWithOtherPresets_Params Parms{};

	Parms.Loadout_Item_Preset = Loadout_Item_Preset;
	Parms.InText = InText;
	Parms.TestingPresetText = TestingPresetText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetText_CurrentText = CallFunc_GetText_CurrentText;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.UnhoverAllPresetsExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_Preset_C*     Loadout_Item_Preset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_Presets_C::UnhoverAllPresetsExcept(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "UnhoverAllPresetsExcept");

	Params::UW_LoadoutItem_Presets_C_UnhoverAllPresetsExcept_Params Parms{};

	Parms.Loadout_Item_Preset = Loadout_Item_Preset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.DeselectAllPresetsExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_Preset_C*     Loadout_Item_Preset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_Presets_C::DeselectAllPresetsExcept(class UW_LoadoutItem_Preset_C* Loadout_Item_Preset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "DeselectAllPresetsExcept");

	Params::UW_LoadoutItem_Presets_C_DeselectAllPresetsExcept_Params Parms{};

	Parms.Loadout_Item_Preset = Loadout_Item_Preset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StopRenamingPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::StopRenamingPreset(TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "StopRenamingPreset");

	Params::UW_LoadoutItem_Presets_C_StopRenamingPreset_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StartRenamingPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::StartRenamingPreset(TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "StartRenamingPreset");

	Params::UW_LoadoutItem_Presets_C_StartRenamingPreset_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Enter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::Enter(bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Enter");

	Params::UW_LoadoutItem_Presets_C_Enter_Params Parms{};

	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetCurrentlyFocusedWidget_Return_Value                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutClass_C*           K2Node_DynamicCast_AsW_Loadout_Class                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::Exit(class UWidget* CallFunc_GetCurrentlyFocusedWidget_Return_Value, class UW_LoadoutClass_C* K2Node_DynamicCast_AsW_Loadout_Class, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Exit");

	Params::UW_LoadoutItem_Presets_C_Exit_Params Parms{};

	Parms.CallFunc_GetCurrentlyFocusedWidget_Return_Value = CallFunc_GetCurrentlyFocusedWidget_Return_Value;
	Parms.K2Node_DynamicCast_AsW_Loadout_Class = K2Node_DynamicCast_AsW_Loadout_Class;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Escape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsRenamingPreset_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::Escape(bool CallFunc_IsRenamingPreset_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Escape");

	Params::UW_LoadoutItem_Presets_C_Escape_Params Parms{};

	Parms.CallFunc_IsRenamingPreset_Return_Value = CallFunc_IsRenamingPreset_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::Select(int32 Index, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Select");

	Params::UW_LoadoutItem_Presets_C_Select_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Click
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::Click(TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Click");

	Params::UW_LoadoutItem_Presets_C_Click_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Unhover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::Unhover(TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Unhover");

	Params::UW_LoadoutItem_Presets_C_Unhover_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Hover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::Hover(TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Hover");

	Params::UW_LoadoutItem_Presets_C_Hover_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.PreviousRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::PreviousRow(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "PreviousRow");

	Params::UW_LoadoutItem_Presets_C_PreviousRow_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.NextRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_Presets_C::NextRow(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "NextRow");

	Params::UW_LoadoutItem_Presets_C_NextRow_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_HandleMenuWideMultiInput__Up__Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_LoadoutItem_Presets_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "OnKeyUp");

	Params::UW_LoadoutItem_Presets_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Up__Return_Value = CallFunc_HandleMenuWideMultiInput__Up__Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMenuWideMultiInput__Down__Return_Value            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_2                                    (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue_3                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_4                                    (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue_5                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_6                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_7                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_8                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_24                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_25                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_26                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_27                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMenuWideInput_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_Preset_C*     CallFunc_GetSelectedPresetWidget_Return_Value                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// bool                               CallFunc_IsUIHidden_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_3                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_4                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_5                                   (None)

struct FEventReply UW_LoadoutItem_Presets_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FKey& CallFunc_GetKey_ReturnValue_2, const struct FKey& CallFunc_GetKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, const struct FKey& CallFunc_GetKey_ReturnValue_4, const struct FKey& CallFunc_GetKey_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, const struct FKey& CallFunc_GetKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, bool CallFunc_EqualEqual_KeyKey_ReturnValue_18, bool CallFunc_EqualEqual_KeyKey_ReturnValue_19, const struct FKey& CallFunc_GetKey_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_22, bool CallFunc_EqualEqual_KeyKey_ReturnValue_23, const struct FKey& CallFunc_GetKey_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_24, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_25, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_26, bool CallFunc_EqualEqual_KeyKey_ReturnValue_27, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_HandleMenuWideInput_Return_Value, bool CallFunc_BooleanOR_ReturnValue_18, class UW_LoadoutItem_Preset_C* CallFunc_GetSelectedPresetWidget_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_IsUIHidden_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3, const struct FEventReply& CallFunc_Handled_ReturnValue_4, const struct FEventReply& CallFunc_Handled_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "OnKeyDown");

	Params::UW_LoadoutItem_Presets_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Down__Return_Value = CallFunc_HandleMenuWideMultiInput__Down__Return_Value;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_GetKey_ReturnValue_1 = CallFunc_GetKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetKey_ReturnValue_2 = CallFunc_GetKey_ReturnValue_2;
	Parms.CallFunc_GetKey_ReturnValue_3 = CallFunc_GetKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_8 = CallFunc_EqualEqual_KeyKey_ReturnValue_8;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_9 = CallFunc_EqualEqual_KeyKey_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_GetKey_ReturnValue_4 = CallFunc_GetKey_ReturnValue_4;
	Parms.CallFunc_GetKey_ReturnValue_5 = CallFunc_GetKey_ReturnValue_5;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_10 = CallFunc_EqualEqual_KeyKey_ReturnValue_10;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_11 = CallFunc_EqualEqual_KeyKey_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_12 = CallFunc_EqualEqual_KeyKey_ReturnValue_12;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_13 = CallFunc_EqualEqual_KeyKey_ReturnValue_13;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_14 = CallFunc_EqualEqual_KeyKey_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_15 = CallFunc_EqualEqual_KeyKey_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_GetKey_ReturnValue_6 = CallFunc_GetKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_16 = CallFunc_EqualEqual_KeyKey_ReturnValue_16;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_17 = CallFunc_EqualEqual_KeyKey_ReturnValue_17;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_18 = CallFunc_EqualEqual_KeyKey_ReturnValue_18;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_19 = CallFunc_EqualEqual_KeyKey_ReturnValue_19;
	Parms.CallFunc_GetKey_ReturnValue_7 = CallFunc_GetKey_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_20 = CallFunc_EqualEqual_KeyKey_ReturnValue_20;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_21 = CallFunc_EqualEqual_KeyKey_ReturnValue_21;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_22 = CallFunc_EqualEqual_KeyKey_ReturnValue_22;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_23 = CallFunc_EqualEqual_KeyKey_ReturnValue_23;
	Parms.CallFunc_GetKey_ReturnValue_8 = CallFunc_GetKey_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_24 = CallFunc_EqualEqual_KeyKey_ReturnValue_24;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_25 = CallFunc_EqualEqual_KeyKey_ReturnValue_25;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_26 = CallFunc_EqualEqual_KeyKey_ReturnValue_26;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_27 = CallFunc_EqualEqual_KeyKey_ReturnValue_27;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_HandleMenuWideInput_Return_Value = CallFunc_HandleMenuWideInput_Return_Value;
	Parms.CallFunc_BooleanOR_ReturnValue_18 = CallFunc_BooleanOR_ReturnValue_18;
	Parms.CallFunc_GetSelectedPresetWidget_Return_Value = CallFunc_GetSelectedPresetWidget_Return_Value;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_IsUIHidden_Return_Value = CallFunc_IsUIHidden_Return_Value;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue_3 = CallFunc_Handled_ReturnValue_3;
	Parms.CallFunc_Handled_ReturnValue_4 = CallFunc_Handled_ReturnValue_4;
	Parms.CallFunc_Handled_ReturnValue_5 = CallFunc_Handled_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.InitializeWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_Presets_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_Preset_C*     LoadoutItemPresetWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_Presets_C::OnLoadoutItemPresetButtonClicked(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "OnLoadoutItemPresetButtonClicked");

	Params::UW_LoadoutItem_Presets_C_OnLoadoutItemPresetButtonClicked_Params Parms{};

	Parms.LoadoutItemPresetWidget = LoadoutItemPresetWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_Preset_C*     LoadoutItemPresetWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_Presets_C::OnLoadoutItemPresetButtonHovered(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "OnLoadoutItemPresetButtonHovered");

	Params::UW_LoadoutItem_Presets_C_OnLoadoutItemPresetButtonHovered_Params Parms{};

	Parms.LoadoutItemPresetWidget = LoadoutItemPresetWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_Presets_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ExecuteUbergraph_W_LoadoutItem_Presets
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_Preset_C*     K2Node_CustomEvent_LoadoutItemPresetWidget_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_Preset_C*     K2Node_DynamicCast_AsW_Loadout_Item_Preset                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_Preset_C*     K2Node_CustomEvent_LoadoutItemPresetWidget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UW_LoadoutItem_Presets_C::ExecuteUbergraph_W_LoadoutItem_Presets(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UW_LoadoutItem_Preset_C* K2Node_CustomEvent_LoadoutItemPresetWidget_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutItem_Preset_C* K2Node_DynamicCast_AsW_Loadout_Item_Preset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UW_LoadoutItem_Preset_C* K2Node_CustomEvent_LoadoutItemPresetWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_Presets_C", "ExecuteUbergraph_W_LoadoutItem_Presets");

	Params::UW_LoadoutItem_Presets_C_ExecuteUbergraph_W_LoadoutItem_Presets_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_LoadoutItemPresetWidget_1 = K2Node_CustomEvent_LoadoutItemPresetWidget_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Item_Preset = K2Node_DynamicCast_AsW_Loadout_Item_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_LoadoutItemPresetWidget = K2Node_CustomEvent_LoadoutItemPresetWidget;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


