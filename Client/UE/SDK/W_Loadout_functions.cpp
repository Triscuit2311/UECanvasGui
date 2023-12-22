#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout.W_Loadout_C
// (None)

class UClass* UW_Loadout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_C");

	return Clss;
}


// W_Loadout_C W_Loadout.Default__W_Loadout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_C* UW_Loadout_C::GetDefaultObj()
{
	static class UW_Loadout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_C*>(UW_Loadout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout.W_Loadout_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BackPage");

	Params::UW_Loadout_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout.W_Loadout_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "GetFocusTarget");

	Params::UW_Loadout_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout.W_Loadout_C.InitializeQuartermaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::InitializeQuartermaster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "InitializeQuartermaster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.SetActiveQuartermasterSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::SetActiveQuartermasterSlot(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetActiveQuartermasterSlot");

	Params::UW_Loadout_C_SetActiveQuartermasterSlot_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_Loadout_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BP_OnHandleBackAction");

	Params::UW_Loadout_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout.W_Loadout_C.ClearPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::ClearPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ClearPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.SetPresetModified
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::SetPresetModified(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetPresetModified");

	Params::UW_Loadout_C_SetPresetModified_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.LoadDefaultLoadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutPreset              K2Node_MakeStruct_LoadoutPreset                                  (None)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::LoadDefaultLoadout(class UWorld* CallFunc_GetWorldBP_ReturnValue, const struct FLoadoutPreset& K2Node_MakeStruct_LoadoutPreset, class UItemData* CallFunc_GetItemData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "LoadDefaultLoadout");

	Params::UW_Loadout_C_LoadDefaultLoadout_Params Parms{};

	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.K2Node_MakeStruct_LoadoutPreset = K2Node_MakeStruct_LoadoutPreset;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.CheckPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::CheckPreset(bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "CheckPreset");

	Params::UW_Loadout_C_CheckPreset_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.DeleteLoadoutPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FName                        PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::DeleteLoadoutPreset(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, class FName PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "DeleteLoadoutPreset");

	Params::UW_Loadout_C_DeleteLoadoutPreset_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.Open Loadout Preset Modal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentPreset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Delete                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_3                                             (None)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_Select_Default                                            (ConstParm, ZeroConstructor, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutPreset              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)

void UW_Loadout_C::Open_Loadout_Preset_Modal(const class FString& CurrentPreset, bool Delete, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, const struct FAnchors& K2Node_MakeStruct_Anchors, bool Temp_bool_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText Temp_text_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_Select_Default, class FText K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& Temp_struct_Variable, const struct FLoadoutPreset& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "Open Loadout Preset Modal");

	Params::UW_Loadout_C_Open_Loadout_Preset_Modal_Params Parms{};

	Parms.CurrentPreset = CurrentPreset;
	Parms.Delete = Delete;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ApplyLoadoutPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLoadoutPreset              LoadoutPreset                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::ApplyLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ApplyLoadoutPreset");

	Params::UW_Loadout_C_ApplyLoadoutPreset_Params Parms{};

	Parms.LoadoutPreset = LoadoutPreset;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OpenAttachmentList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OpenAttachmentList(bool VerticalList, class UClass* ItemData, enum class EWeaponAttachmentType AttachmentType, class FText CallFunc_GetAttachmentSlotText_SlotText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OpenAttachmentList");

	Params::UW_Loadout_C_OpenAttachmentList_Params Parms{};

	Parms.VerticalList = VerticalList;
	Parms.ItemData = ItemData;
	Parms.AttachmentType = AttachmentType;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OpenItemList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemCategory           LoadoutSlot                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    GearCategoryClasses                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        CallFunc_GetLoadoutCategoryText_Category_Text                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OpenItemList(bool VerticalList, enum class EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory>& GearCategoryClasses, class FText CallFunc_GetLoadoutCategoryText_Category_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OpenItemList");

	Params::UW_Loadout_C_OpenItemList_Params Parms{};

	Parms.VerticalList = VerticalList;
	Parms.LoadoutSlot = LoadoutSlot;
	Parms.GearCategoryClasses = GearCategoryClasses;
	Parms.CallFunc_GetLoadoutCategoryText_Category_Text = CallFunc_GetLoadoutCategoryText_Category_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OpenDeployableList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemCategory           LoadoutSlot                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    GearCategoryClasses                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UClass*>              ExcludedItems                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        CallFunc_GetLoadoutCategoryText_Category_Text                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OpenDeployableList(bool VerticalList, enum class EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory>& GearCategoryClasses, TArray<class UClass*>& ExcludedItems, class FText CallFunc_GetLoadoutCategoryText_Category_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OpenDeployableList");

	Params::UW_Loadout_C_OpenDeployableList_Params Parms{};

	Parms.VerticalList = VerticalList;
	Parms.LoadoutSlot = LoadoutSlot;
	Parms.GearCategoryClasses = GearCategoryClasses;
	Parms.ExcludedItems = ExcludedItems;
	Parms.CallFunc_GetLoadoutCategoryText_Category_Text = CallFunc_GetLoadoutCategoryText_Category_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.Open Armour Material List
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::Open_Armour_Material_List(bool VerticalList, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "Open Armour Material List");

	Params::UW_Loadout_C_Open_Armour_Material_List_Params Parms{};

	Parms.VerticalList = VerticalList;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OpenAmmoList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ExcludedAmmoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OpenAmmoList(bool VerticalList, class FName ExcludedAmmoType, class UClass* Weapon, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OpenAmmoList");

	Params::UW_Loadout_C_OpenAmmoList_Params Parms{};

	Parms.VerticalList = VerticalList;
	Parms.ExcludedAmmoType = ExcludedAmmoType;
	Parms.Weapon = Weapon;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SaveLoadoutPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FName                        PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FLoadoutPreset              K2Node_MakeStruct_LoadoutPreset                                  (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FLoadoutPreset              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::SaveLoadoutPreset(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, class FName PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const struct FLoadoutPreset& K2Node_MakeStruct_LoadoutPreset, class FText CallFunc_Format_ReturnValue_2, const struct FLoadoutPreset& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SaveLoadoutPreset");

	Params::UW_Loadout_C_SaveLoadoutPreset_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_LoadoutPreset = K2Node_MakeStruct_LoadoutPreset;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.IsNullAttachment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNull                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::IsNullAttachment(class UClass* Attachment, bool* IsNull, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "IsNullAttachment");

	Params::UW_Loadout_C_IsNullAttachment_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_6 = CallFunc_EqualEqual_ClassClass_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNull != nullptr)
		*IsNull = Parms.IsNull;

}


// Function W_Loadout.W_Loadout_C.RefreshAttachmentInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* AttachmentSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::RefreshAttachmentInfoPanel(class UW_LoadoutSlot_Attachment_C* AttachmentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "RefreshAttachmentInfoPanel");

	Params::UW_Loadout_C_RefreshAttachmentInfoPanel_Params Parms{};

	Parms.AttachmentSlot = AttachmentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.RefreshItemInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::RefreshItemInfoPanel(class UW_LoadoutSlot_C* LoadoutSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "RefreshItemInfoPanel");

	Params::UW_Loadout_C_RefreshItemInfoPanel_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.HideItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::HideItemList(bool NewLocalVar_0, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "HideItemList");

	Params::UW_Loadout_C_HideItemList_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipArmourMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipArmourMaterial(class UArmourMaterial* ArmourMaterial, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipArmourMaterial");

	Params::UW_Loadout_C_EquipArmourMaterial_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SaveArmorCoverage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmourCoverage         ArmorCoverage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::SaveArmorCoverage(enum class EArmourCoverage ArmorCoverage, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SaveArmorCoverage");

	Params::UW_Loadout_C_SaveArmorCoverage_Params Parms{};

	Parms.ArmorCoverage = ArmorCoverage;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipSidearmAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                SidearmAmmo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipSidearmAmmo(TArray<class FName>& SidearmAmmo, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipSidearmAmmo");

	Params::UW_Loadout_C_EquipSidearmAmmo_Params Parms{};

	Parms.SidearmAmmo = SidearmAmmo;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipPrimaryAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PrimaryAmmo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipPrimaryAmmo(TArray<class FName>& PrimaryAmmo, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipPrimaryAmmo");

	Params::UW_Loadout_C_EquipPrimaryAmmo_Params Parms{};

	Parms.PrimaryAmmo = PrimaryAmmo;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OpenArmorQuartermaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RevealDelay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachingItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsSWATArmour                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::OpenArmorQuartermaster(class UClass* ItemToModify, float RevealDelay, class UClass* AttachingItem, bool CallFunc_Not_PreBool_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsSWATArmour, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OpenArmorQuartermaster");

	Params::UW_Loadout_C_OpenArmorQuartermaster_Params Parms{};

	Parms.ItemToModify = ItemToModify;
	Parms.RevealDelay = RevealDelay;
	Parms.AttachingItem = AttachingItem;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsSWATArmour = K2Node_ClassDynamicCast_AsSWATArmour;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SaveTacticalSlotcount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tactical_Slots_Count                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SaveTacticalSlotcount(int32 Tactical_Slots_Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SaveTacticalSlotcount");

	Params::UW_Loadout_C_SaveTacticalSlotcount_Params Parms{};

	Parms.Tactical_Slots_Count = Tactical_Slots_Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SaveGrenadeSlotCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Grenade_Slots_Count                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SaveGrenadeSlotCount(int32 Grenade_Slots_Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SaveGrenadeSlotCount");

	Params::UW_Loadout_C_SaveGrenadeSlotCount_Params Parms{};

	Parms.Grenade_Slots_Count = Grenade_Slots_Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SaveSidearmAmmoSlotCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Secondary_Ammo_Slots_Count                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SaveSidearmAmmoSlotCount(int32 Secondary_Ammo_Slots_Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SaveSidearmAmmoSlotCount");

	Params::UW_Loadout_C_SaveSidearmAmmoSlotCount_Params Parms{};

	Parms.Secondary_Ammo_Slots_Count = Secondary_Ammo_Slots_Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SavePrimaryAmmoSlotCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Primary_Ammo_Slots_Count                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SavePrimaryAmmoSlotCount(int32 Primary_Ammo_Slots_Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SavePrimaryAmmoSlotCount");

	Params::UW_Loadout_C_SavePrimaryAmmoSlotCount_Params Parms{};

	Parms.Primary_Ammo_Slots_Count = Primary_Ammo_Slots_Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdateCurrentItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutUI_C>K2Node_DynamicCast_AsLoadout_UI                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::UpdateCurrentItem(enum class EItemCategory ItemCategory, class UClass* ItemClass, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateCurrentItem");

	Params::UW_Loadout_C_UpdateCurrentItem_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.ItemClass = ItemClass;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_UI = K2Node_DynamicCast_AsLoadout_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.DeselectAttachmentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::DeselectAttachmentSlot(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "DeselectAttachmentSlot");

	Params::UW_Loadout_C_DeselectAttachmentSlot_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdateWorkbenchCameraRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::UpdateWorkbenchCameraRotation(float DeltaTime, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateWorkbenchCameraRotation");

	Params::UW_Loadout_C_UpdateWorkbenchCameraRotation_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SetupWorkbenchCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ACameraActor*>        CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ACameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SetupWorkbenchCamera(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetupWorkbenchCamera");

	Params::UW_Loadout_C_SetupWorkbenchCamera_Params Parms{};

	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.LookAtAttachmentSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon*                 K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::LookAtAttachmentSlot(enum class EWeaponAttachmentType AttachmentSlot, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable_1, enum class EWeaponAttachmentType Temp_byte_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABaseItem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "LookAtAttachmentSlot");

	Params::UW_Loadout_C_LookAtAttachmentSlot_Params Parms{};

	Parms.AttachmentSlot = AttachmentSlot;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue_1 = CallFunc_SelectRotator_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SaveWeaponPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData                      (NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_1                    (NoDestructor)
// struct FWeaponPreset               K2Node_MakeStruct_WeaponPreset                                   (NoDestructor)
// struct FWeaponPreset               K2Node_MakeStruct_WeaponPreset_1                                 (NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponPreset               K2Node_Select_Default                                            (NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FWeaponPreset               CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SaveWeaponPreset(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, class FText CallFunc_Format_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_1, const struct FWeaponPreset& K2Node_MakeStruct_WeaponPreset, const struct FWeaponPreset& K2Node_MakeStruct_WeaponPreset_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FWeaponPreset& K2Node_Select_Default, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, const struct FWeaponPreset& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SaveWeaponPreset");

	Params::UW_Loadout_C_SaveWeaponPreset_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData = K2Node_MakeStruct_SavedWeaponAttachmentData;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_1 = K2Node_MakeStruct_SavedWeaponAttachmentData_1;
	Parms.K2Node_MakeStruct_WeaponPreset = K2Node_MakeStruct_WeaponPreset;
	Parms.K2Node_MakeStruct_WeaponPreset_1 = K2Node_MakeStruct_WeaponPreset_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.CleanCurrentWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::CleanCurrentWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "CleanCurrentWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.CloseLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::CloseLoadout(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "CloseLoadout");

	Params::UW_Loadout_C_CloseLoadout_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdateHUDStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::UpdateHUDStates(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateHUDStates");

	Params::UW_Loadout_C_UpdateHUDStates_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ShowHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_HumanCharacter_HUD_V2_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_HumanCharacter_HUD_V2_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::ShowHUD(TArray<class UW_HumanCharacter_HUD_V2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_HumanCharacter_HUD_V2_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ShowHUD");

	Params::UW_Loadout_C_ShowHUD_Params Parms{};

	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.HideHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_HumanCharacter_HUD_V2_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HumanCharacter_HUD_V2_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::HideHUD(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_HumanCharacter_HUD_V2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_HumanCharacter_HUD_V2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "HideHUD");

	Params::UW_Loadout_C_HideHUD_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SaveActiveLoadoutOld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::SaveActiveLoadoutOld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SaveActiveLoadoutOld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.HolsterPreviewCharacterWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHolstering                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotCharacter*        CallFunc_GetDefaultPreviewCharacter_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetLastTableMontagePlayed_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_C::HolsterPreviewCharacterWeapon(bool* IsHolstering, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetDefaultPreviewCharacter_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_GetLastTableMontagePlayed_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "HolsterPreviewCharacterWeapon");

	Params::UW_Loadout_C_HolsterPreviewCharacterWeapon_Params Parms{};

	Parms.CallFunc_GetPremissionPlanning_ReturnValue = CallFunc_GetPremissionPlanning_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetDefaultPreviewCharacter_ReturnValue = CallFunc_GetDefaultPreviewCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetLastTableMontagePlayed_ReturnValue = CallFunc_GetLastTableMontagePlayed_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining = CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue = CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHolstering != nullptr)
		*IsHolstering = Parms.IsHolstering;

}


// Function W_Loadout.W_Loadout_C.InitializeWeaponAttachmentMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData                      (NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_1                    (NoDestructor)

void UW_Loadout_C::InitializeWeaponAttachmentMap(const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "InitializeWeaponAttachmentMap");

	Params::UW_Loadout_C_InitializeWeaponAttachmentMap_Params Parms{};

	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData = K2Node_MakeStruct_SavedWeaponAttachmentData;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_1 = K2Node_MakeStruct_SavedWeaponAttachmentData_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdateAllPreviewWeaponAttachments
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWorkbench                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ABaseItem>       Weapon                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               IsSidearm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              Attachments                                                      (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData                      (NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_1                    (NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_2                    (NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default                                            (ConstParm, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default_1                                          (ConstParm, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default_2                                          (ConstParm, NoDestructor)
// class UClass*                      K2Node_Select_Default_3                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::UpdateAllPreviewWeaponAttachments(bool IsWorkbench, TSubclassOf<class ABaseItem>& Weapon, bool IsSidearm, const TArray<class UClass*>& Attachments, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_1, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, const struct FSavedWeaponAttachmentData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_Select_Default_1, const struct FSavedWeaponAttachmentData& K2Node_Select_Default_2, class UClass* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateAllPreviewWeaponAttachments");

	Params::UW_Loadout_C_UpdateAllPreviewWeaponAttachments_Params Parms{};

	Parms.IsWorkbench = IsWorkbench;
	Parms.Weapon = Weapon;
	Parms.IsSidearm = IsSidearm;
	Parms.Attachments = Attachments;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPremissionPlanning_ReturnValue = CallFunc_GetPremissionPlanning_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData = K2Node_MakeStruct_SavedWeaponAttachmentData;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_1 = K2Node_MakeStruct_SavedWeaponAttachmentData_1;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_2 = K2Node_MakeStruct_SavedWeaponAttachmentData_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdatePreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::UpdatePreview(enum class EItemCategory Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdatePreview");

	Params::UW_Loadout_C_UpdatePreview_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SetPreMissionCameraBySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::SetPreMissionCameraBySlot(enum class EItemCategory LoadoutSlot, float BlendTime, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetPreMissionCameraBySlot");

	Params::UW_Loadout_C_SetPreMissionCameraBySlot_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipSidearmAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachingWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Attachment                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipSidearmAttachments(enum class EWeaponAttachmentType AttachmentType, class UClass* AttachmentData, class UClass* AttachingWeapon, class UClass* Attachment, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipSidearmAttachments");

	Params::UW_Loadout_C_EquipSidearmAttachments_Params Parms{};

	Parms.AttachmentType = AttachmentType;
	Parms.AttachmentData = AttachmentData;
	Parms.AttachingWeapon = AttachingWeapon;
	Parms.Attachment = Attachment;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipPrimaryAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachingWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Attachment                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipPrimaryAttachments(enum class EWeaponAttachmentType AttachmentType, class UClass* AttachmentData, class UClass* AttachingWeapon, class UClass* Attachment, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipPrimaryAttachments");

	Params::UW_Loadout_C_EquipPrimaryAttachments_Params Parms{};

	Parms.AttachmentType = AttachmentType;
	Parms.AttachmentData = AttachmentData;
	Parms.AttachingWeapon = AttachingWeapon;
	Parms.Attachment = Attachment;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.DeselectLoadoutSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::DeselectLoadoutSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "DeselectLoadoutSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Loadout_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnMouseButtonUp");

	Params::UW_Loadout_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout.W_Loadout_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::GoBack(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "GoBack");

	Params::UW_Loadout_C_GoBack_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_Loadout_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnKeyDown");

	Params::UW_Loadout_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout.W_Loadout_C.EquipAttachment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachingWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Attachment                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EWeaponAttachmentType>Temp_byte_Variable                                               (ReferenceParm)
// enum class EWeaponAttachmentType   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::EquipAttachment(class UClass* AttachingWeapon, class UClass* AttachmentData, class UClass* Attachment, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<enum class EWeaponAttachmentType>& Temp_byte_Variable, enum class EWeaponAttachmentType CallFunc_Array_Get_Item, enum class EWeaponAttachmentType CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipAttachment");

	Params::UW_Loadout_C_EquipAttachment_Params Parms{};

	Parms.AttachingWeapon = AttachingWeapon;
	Parms.AttachmentData = AttachmentData;
	Parms.Attachment = Attachment;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue_3 = CallFunc_PlayEvent2D_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.InitializeAttachmentSelectionPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::InitializeAttachmentSelectionPanel(class UW_LoadoutSlot_Attachment_C* TriggeringSlot, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "InitializeAttachmentSelectionPanel");

	Params::UW_Loadout_C_InitializeAttachmentSelectionPanel_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.InitializeItemSelectionRemote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::InitializeItemSelectionRemote(class UW_LoadoutSlot_C* TriggeringSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "InitializeItemSelectionRemote");

	Params::UW_Loadout_C_InitializeItemSelectionRemote_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.InitializeItemSelectionPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::InitializeItemSelectionPanel(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "InitializeItemSelectionPanel");

	Params::UW_Loadout_C_InitializeItemSelectionPanel_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipTactical
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipTactical(TArray<class UClass*>& ItemData, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipTactical");

	Params::UW_Loadout_C_EquipTactical_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipGrenades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipGrenades(TArray<class UClass*>& ItemData, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipGrenades");

	Params::UW_Loadout_C_EquipGrenades_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipLongTactical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipLongTactical(class UClass* ItemData, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipLongTactical");

	Params::UW_Loadout_C_EquipLongTactical_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipHeadwear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipHeadwear(class UClass* ItemData, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipHeadwear");

	Params::UW_Loadout_C_EquipHeadwear_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.EquipArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsSWATArmour                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::EquipArmor(class UClass* ItemData, class UClass* K2Node_ClassDynamicCast_AsSWATArmour, bool K2Node_ClassDynamicCast_bSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipArmor");

	Params::UW_Loadout_C_EquipArmor_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.K2Node_ClassDynamicCast_AsSWATArmour = K2Node_ClassDynamicCast_AsSWATArmour;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SidearmChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UW_Loadout_C::SidearmChanged(TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SidearmChanged");

	Params::UW_Loadout_C_SidearmChanged_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.PrimaryChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::PrimaryChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "PrimaryChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.EquipItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemCategory>   ItemCategories                                                   (Edit, BlueprintVisible)
// enum class EItemClass              EquippingItemClass                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      EquippingItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Weapon                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponData                 K2Node_MakeStruct_WeaponData                                     (None)

void UW_Loadout_C::EquipItem(class UClass* ItemData, const TArray<enum class EItemCategory>& ItemCategories, enum class EItemClass EquippingItemClass, class UClass* EquippingItem, enum class EItemCategory Temp_byte_Variable, enum class EItemCategory Temp_byte_Variable_1, enum class EItemCategory Temp_byte_Variable_2, enum class EItemCategory Temp_byte_Variable_3, enum class EItemCategory Temp_byte_Variable_4, enum class EItemCategory Temp_byte_Variable_5, enum class EItemCategory Temp_byte_Variable_6, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_6, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Weapon, bool K2Node_ClassDynamicCast_bSuccess, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FWeaponData& K2Node_MakeStruct_WeaponData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "EquipItem");

	Params::UW_Loadout_C_EquipItem_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.ItemCategories = ItemCategories;
	Parms.EquippingItemClass = EquippingItemClass;
	Parms.EquippingItem = EquippingItem;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.CallFunc_Array_Contains_ReturnValue_5 = CallFunc_Array_Contains_ReturnValue_5;
	Parms.CallFunc_Array_Contains_ReturnValue_6 = CallFunc_Array_Contains_ReturnValue_6;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBase_Weapon = K2Node_ClassDynamicCast_AsBase_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_WeaponData = K2Node_MakeStruct_WeaponData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SetActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LoadoutName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      RoNPlayerState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquippingSwat          EquippingUnit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SetActiveLoadout(const class FString& LoadoutName, class AReadyOrNotPlayerState* RoNPlayerState, enum class EEquippingSwat EquippingUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetActiveLoadout");

	Params::UW_Loadout_C_SetActiveLoadout_Params Parms{};

	Parms.LoadoutName = LoadoutName;
	Parms.RoNPlayerState = RoNPlayerState;
	Parms.EquippingUnit = EquippingUnit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SetupBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)

void UW_Loadout_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetupBindings");

	Params::UW_Loadout_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OpenWeaponQuartermaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RevealDelay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachingItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OpenWeaponQuartermaster(class UClass* ItemToModify, float RevealDelay, class UClass* AttachingItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OpenWeaponQuartermaster");

	Params::UW_Loadout_C_OpenWeaponQuartermaster_Params Parms{};

	Parms.ItemToModify = ItemToModify;
	Parms.RevealDelay = RevealDelay;
	Parms.AttachingItem = AttachingItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.HideItemInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Hide_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::HideItemInfoPanel(TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "HideItemInfoPanel");

	Params::UW_Loadout_C_HideItemInfoPanel_Params Parms{};

	Parms.CallFunc_Hide_self_CastInput = CallFunc_Hide_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ShowItemInfoPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::ShowItemInfoPanel(class UW_LoadoutSlot_C* LoadoutSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ShowItemInfoPanel");

	Params::UW_Loadout_C_ShowItemInfoPanel_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.InitializeOverview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RevealDelay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CurrentInitSlot                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CurrentInitItem                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::InitializeOverview(float RevealDelay, class UW_LoadoutSlot_C* CurrentInitSlot, class UClass* CurrentInitItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "InitializeOverview");

	Params::UW_Loadout_C_InitializeOverview_Params Parms{};

	Parms.RevealDelay = RevealDelay;
	Parms.CurrentInitSlot = CurrentInitSlot;
	Parms.CurrentInitItem = CurrentInitItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ShowToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelDataLookupTable       MissionDetails                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::ShowToolTip(const struct FLevelDataLookupTable& MissionDetails, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ShowToolTip");

	Params::UW_Loadout_C_ShowToolTip_Params Parms{};

	Parms.MissionDetails = MissionDetails;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnDragDetected");

	Params::UW_Loadout_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function W_Loadout.W_Loadout_C.SetPreMissionCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SetPreMissionCamera(class FName Tag, const class FString& Animation, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetPreMissionCamera");

	Params::UW_Loadout_C_SetPreMissionCamera_Params Parms{};

	Parms.Tag = Tag;
	Parms.Animation = Animation;
	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnSwatCharacterChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnSwatCharacterChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnSwatCharacterChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.CancelSavePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::CancelSavePreset(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "CancelSavePreset");

	Params::UW_Loadout_C_CancelSavePreset_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.RedrawWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::RedrawWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "RedrawWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature(enum class EWeaponAttachmentType Slot, class UClass* AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_11_OnInfoPanelAttachmentClicked__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.AttachmentData = AttachmentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateCurrentSlot");

	Params::UW_Loadout_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_18_OnOverviewItemDoubleClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsPrimary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            NewLoadoutSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature(bool IsPrimary, class UW_LoadoutSlot_C* NewLoadoutSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_20_OnQuartermasterWeaponSwapped__DelegateSignature_Params Parms{};

	Parms.IsPrimary = IsPrimary;
	Parms.NewLoadoutSlot = NewLoadoutSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_22_OnQuartermasterClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_23_OnQuartermasterOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_5_OnArmorEditorOpen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.CloseArmorQuartermaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::CloseArmorQuartermaster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "CloseArmorQuartermaster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "Tick");

	Params::UW_Loadout_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_10_OnArmorEditorClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature(class FName AmmoType, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_9_OnAmmoItemClicked__DelegateSignature_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_13_OnArmourMaterialClicked__DelegateSignature_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_15_OnCleanWeaponClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "PreConstruct");

	Params::UW_Loadout_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OverviewItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OverviewItemClicked(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OverviewItemClicked");

	Params::UW_Loadout_C_OverviewItemClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.AttachmentSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::AttachmentSlotClicked(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "AttachmentSlotClicked");

	Params::UW_Loadout_C_AttachmentSlotClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.QuartermasterWeaponClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::QuartermasterWeaponClicked(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "QuartermasterWeaponClicked");

	Params::UW_Loadout_C_QuartermasterWeaponClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.RefreshItemList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::RefreshItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "RefreshItemList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      HotkeyID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_HotkeyBar_K2Node_ComponentBoundEvent_6_OnHotkeyClicked__DelegateSignature_Params Parms{};

	Parms.HotkeyID = HotkeyID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnLoadoutSaved
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnLoadoutSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnLoadoutSaved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.SelectListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SelectListItem(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SelectListItem");

	Params::UW_Loadout_C_SelectListItem_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::ItemHovered(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ItemHovered");

	Params::UW_Loadout_C_ItemHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.AttachmentHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::AttachmentHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "AttachmentHovered");

	Params::UW_Loadout_C_AttachmentHovered_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::ItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ItemUnhovered");

	Params::UW_Loadout_C_ItemUnhovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.DoAttachmentUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::DoAttachmentUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "DoAttachmentUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.AttachmentUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::AttachmentUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "AttachmentUnhovered");

	Params::UW_Loadout_C_AttachmentUnhovered_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature(enum class EWeaponAttachmentType Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_7_OnInfoPanelRemoveAttachmentClicked__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnLoadoutLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "Reveal");

	Params::UW_Loadout_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "Hide");

	Params::UW_Loadout_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetInputMode");

	Params::UW_Loadout_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ChangePage");

	Params::UW_Loadout_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateActiveLoadout");

	Params::UW_Loadout_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "SetLoadoutWidget");

	Params::UW_Loadout_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.CloseQuartermaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::CloseQuartermaster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "CloseQuartermaster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature(class UClass* ItemToModify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_InformationTable_C_1_K2Node_ComponentBoundEvent_4_OnModifyWeaponButtonClicked__DelegateSignature_Params Parms{};

	Parms.ItemToModify = ItemToModify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_3_OnLoadoutItemDoubleClicked__DelegateSignature_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      AttachingWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature(class UClass* AttachingWeapon, class UClass* AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_2_OnAttachmentItemClicked__DelegateSignature_Params Parms{};

	Parms.AttachingWeapon = AttachingWeapon;
	Parms.AttachmentData = AttachmentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_12_OnLoadoutItemClicked__DelegateSignature_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      AttachingWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature(class UClass* AttachingWeapon, class UClass* AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_16_OnAttachmentItemClicked__DelegateSignature_Params Parms{};

	Parms.AttachingWeapon = AttachingWeapon;
	Parms.AttachmentData = AttachmentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_19_OnLoadoutItemDoubleClicked__DelegateSignature_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature(class FName AmmoType, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_24_OnAmmoItemClicked__DelegateSignature_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_Vertical_C_5_K2Node_ComponentBoundEvent_26_OnArmourMaterialClicked__DelegateSignature_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnLoadoutPresetsLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnLoadoutPresetsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnLoadoutPresetsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_btn_SidebarBack_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.DoItemUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::DoItemUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "DoItemUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FST_EquippingUnit           EquippingUnitInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_LoadoutCharacterSelect_K2Node_ComponentBoundEvent_1_OnEquippingUnitSelected__DelegateSignature_Params Parms{};

	Parms.EquippingUnitInfo = EquippingUnitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_8_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_8_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_Overview_K2Node_ComponentBoundEvent_8_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_VerticalItemList_K2Node_ComponentBoundEvent_17_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_C::BndEvt__W_Loadout_VerticalItemList_K2Node_ComponentBoundEvent_17_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_VerticalItemList_K2Node_ComponentBoundEvent_17_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature");

	Params::UW_Loadout_C_BndEvt__W_Loadout_W_Loadout_ItemList_C_2_K2Node_ComponentBoundEvent_0_OnLoadoutItemClicked__DelegateSignature_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.ExecuteUbergraph_W_Loadout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStandardModal*              K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   K2Node_ComponentBoundEvent_Slot_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_AttachmentData_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_ComponentBoundEvent_TriggeringSlot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsPrimary                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_ComponentBoundEvent_NewLoadoutSlot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutUI_C>K2Node_DynamicCast_AsLoadout_UI                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Tag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Animation                                     (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BlendTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_AmmoType_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_Weapon_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             K2Node_ComponentBoundEvent_ArmourMaterial_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringSlot_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_HotkeyID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_ItemData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNullAttachment_IsNull                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNullAttachment_IsNull_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWeaponAttachmentType   K2Node_ComponentBoundEvent_Slot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets_1               (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_ItemToModify                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutUI_C>K2Node_DynamicCast_AsLoadout_UI_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ComponentBoundEvent_ItemData_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_AttachingWeapon_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_AttachmentData_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_ItemData_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_AttachingWeapon                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_AttachmentData                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_ItemData_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_AmmoType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_Weapon                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             K2Node_ComponentBoundEvent_ArmourMaterial                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FST_EquippingUnit           K2Node_ComponentBoundEvent_EquippingUnitInfo                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ComponentBoundEvent_ItemData                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_C::ExecuteUbergraph_W_Loadout(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_Slot_1, class UClass* K2Node_ComponentBoundEvent_AttachmentData_2, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class UW_LoadoutSlot_C* K2Node_ComponentBoundEvent_TriggeringSlot, bool K2Node_ComponentBoundEvent_IsPrimary, class UW_LoadoutSlot_C* K2Node_ComponentBoundEvent_NewLoadoutSlot, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_Tag, const class FString& K2Node_CustomEvent_Animation, float K2Node_CustomEvent_BlendTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_ComponentBoundEvent_AmmoType_1, class UClass* K2Node_ComponentBoundEvent_Weapon_1, class UArmourMaterial* K2Node_ComponentBoundEvent_ArmourMaterial_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_4, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringSlot_3, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_2, const class FString& K2Node_ComponentBoundEvent_HotkeyID, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UClass* K2Node_CustomEvent_ItemData, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment_1, bool CallFunc_IsNullAttachment_IsNull, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment, bool CallFunc_IsNullAttachment_IsNull_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_Slot, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue_1, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, bool CallFunc_IsValid_ReturnValue_3, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, int32 Temp_int_Array_Index_Variable_1, class UClass* K2Node_ComponentBoundEvent_ItemToModify, class UUserWidget* CallFunc_Array_Get_Item_1, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI_1, bool K2Node_DynamicCast_bSuccess_2, class UClass* K2Node_ComponentBoundEvent_ItemData_3, class UClass* K2Node_ComponentBoundEvent_AttachingWeapon_1, class UClass* K2Node_ComponentBoundEvent_AttachmentData_1, class UClass* K2Node_ComponentBoundEvent_ItemData_2, class UClass* K2Node_ComponentBoundEvent_AttachingWeapon, class UClass* K2Node_ComponentBoundEvent_AttachmentData, class UClass* K2Node_ComponentBoundEvent_ItemData_1, class FName K2Node_ComponentBoundEvent_AmmoType, class UClass* K2Node_ComponentBoundEvent_Weapon, class UArmourMaterial* K2Node_ComponentBoundEvent_ArmourMaterial, class UW_Button_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FST_EquippingUnit& K2Node_ComponentBoundEvent_EquippingUnitInfo, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class UClass* K2Node_ComponentBoundEvent_ItemData, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "ExecuteUbergraph_W_Loadout");

	Params::UW_Loadout_C_ExecuteUbergraph_W_Loadout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_ComponentBoundEvent_Slot_1 = K2Node_ComponentBoundEvent_Slot_1;
	Parms.K2Node_ComponentBoundEvent_AttachmentData_2 = K2Node_ComponentBoundEvent_AttachmentData_2;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot = K2Node_ComponentBoundEvent_TriggeringSlot;
	Parms.K2Node_ComponentBoundEvent_IsPrimary = K2Node_ComponentBoundEvent_IsPrimary;
	Parms.K2Node_ComponentBoundEvent_NewLoadoutSlot = K2Node_ComponentBoundEvent_NewLoadoutSlot;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsLoadout_UI = K2Node_DynamicCast_AsLoadout_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_CustomEvent_Animation = K2Node_CustomEvent_Animation;
	Parms.K2Node_CustomEvent_BlendTime = K2Node_CustomEvent_BlendTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_AmmoType_1 = K2Node_ComponentBoundEvent_AmmoType_1;
	Parms.K2Node_ComponentBoundEvent_Weapon_1 = K2Node_ComponentBoundEvent_Weapon_1;
	Parms.K2Node_ComponentBoundEvent_ArmourMaterial_1 = K2Node_ComponentBoundEvent_ArmourMaterial_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_TriggeringSlot_4 = K2Node_CustomEvent_TriggeringSlot_4;
	Parms.K2Node_CustomEvent_TriggeringSlot_3 = K2Node_CustomEvent_TriggeringSlot_3;
	Parms.K2Node_CustomEvent_TriggeringSlot_2 = K2Node_CustomEvent_TriggeringSlot_2;
	Parms.K2Node_ComponentBoundEvent_HotkeyID = K2Node_ComponentBoundEvent_HotkeyID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.K2Node_CustomEvent_TriggeringAttachment_1 = K2Node_CustomEvent_TriggeringAttachment_1;
	Parms.CallFunc_IsNullAttachment_IsNull = CallFunc_IsNullAttachment_IsNull;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_TriggeringAttachment = K2Node_CustomEvent_TriggeringAttachment;
	Parms.CallFunc_IsNullAttachment_IsNull_1 = CallFunc_IsNullAttachment_IsNull_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets_1 = CallFunc_GetAllWidgetsWithInterface_FoundWidgets_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_ComponentBoundEvent_ItemToModify = K2Node_ComponentBoundEvent_ItemToModify;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsLoadout_UI_1 = K2Node_DynamicCast_AsLoadout_UI_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_ComponentBoundEvent_ItemData_3 = K2Node_ComponentBoundEvent_ItemData_3;
	Parms.K2Node_ComponentBoundEvent_AttachingWeapon_1 = K2Node_ComponentBoundEvent_AttachingWeapon_1;
	Parms.K2Node_ComponentBoundEvent_AttachmentData_1 = K2Node_ComponentBoundEvent_AttachmentData_1;
	Parms.K2Node_ComponentBoundEvent_ItemData_2 = K2Node_ComponentBoundEvent_ItemData_2;
	Parms.K2Node_ComponentBoundEvent_AttachingWeapon = K2Node_ComponentBoundEvent_AttachingWeapon;
	Parms.K2Node_ComponentBoundEvent_AttachmentData = K2Node_ComponentBoundEvent_AttachmentData;
	Parms.K2Node_ComponentBoundEvent_ItemData_1 = K2Node_ComponentBoundEvent_ItemData_1;
	Parms.K2Node_ComponentBoundEvent_AmmoType = K2Node_ComponentBoundEvent_AmmoType;
	Parms.K2Node_ComponentBoundEvent_Weapon = K2Node_ComponentBoundEvent_Weapon;
	Parms.K2Node_ComponentBoundEvent_ArmourMaterial = K2Node_ComponentBoundEvent_ArmourMaterial;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_EquippingUnitInfo = K2Node_ComponentBoundEvent_EquippingUnitInfo;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_ItemData = K2Node_ComponentBoundEvent_ItemData;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnAmmoOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::OnAmmoOptionSelected__DelegateSignature(class FName AmmoType, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnAmmoOptionSelected__DelegateSignature");

	Params::UW_Loadout_C_OnAmmoOptionSelected__DelegateSignature_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.OnArmorMaterialEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnArmorMaterialEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnArmorMaterialEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnArmorCoverageSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnArmorCoverageSaved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnArmorCoverageSaved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnArmorEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnArmorEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnArmorEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnSidearmWeaponEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnSidearmWeaponEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnSidearmWeaponEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnPrimaryWeaponEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnPrimaryWeaponEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnPrimaryWeaponEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnTacticalCountSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnTacticalCountSaved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnTacticalCountSaved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnGrenadeCountSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnGrenadeCountSaved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnGrenadeCountSaved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnSidearmAmmoCountSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnSidearmAmmoCountSaved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnSidearmAmmoCountSaved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnPrimaryAmmoCountSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnPrimaryAmmoCountSaved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnPrimaryAmmoCountSaved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnTacticalEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnTacticalEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnTacticalEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnGrenadesEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnGrenadesEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnGrenadesEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnSidearmAmmoEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnSidearmAmmoEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnSidearmAmmoEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnPrimaryAmmoEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnPrimaryAmmoEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnPrimaryAmmoEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.OnQuartermasterListHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_C::OnQuartermasterListHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "OnQuartermasterListHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout.W_Loadout_C.UpdateMapMaterial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LayoutTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::UpdateMapMaterial__DelegateSignature(class UTexture2D* LayoutTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "UpdateMapMaterial__DelegateSignature");

	Params::UW_Loadout_C_UpdateMapMaterial__DelegateSignature_Params Parms{};

	Parms.LayoutTexture = LayoutTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout.W_Loadout_C.PanMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_C::PanMap__DelegateSignature(bool Pressed, const struct FVector2D& CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_C", "PanMap__DelegateSignature");

	Params::UW_Loadout_C_PanMap__DelegateSignature_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

}

}


