#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C
// (None)

class UClass* UW_Loadout_Preset_Preview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Preset_Preview_C");

	return Clss;
}


// W_Loadout_Preset_Preview_C W_Loadout_Preset_Preview.Default__W_Loadout_Preset_Preview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Preset_Preview_C* UW_Loadout_Preset_Preview_C::GetDefaultObj()
{
	static class UW_Loadout_Preset_Preview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Preset_Preview_C*>(UW_Loadout_Preset_Preview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "GetFocusTarget");

	Params::UW_Loadout_Preset_Preview_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Preset_Preview_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "BackPage");

	Params::UW_Loadout_Preset_Preview_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_Preset_Preview_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_Preset_Preview_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetMunitionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSubclassOf<class ABaseItem>       MunitionItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FText                        CountAndName                                                     (Parm, OutParm)
// class FText                        Category_Text                                                    (Parm, OutParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemClassText_Category_Text                          (None)
// int32                              CallFunc_GetPreviewSlotCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_Preset_Preview_C::GetMunitionInfo(TSubclassOf<class ABaseItem> MunitionItem, class FText* CountAndName, class FText* Category_Text, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_GetItemClassText_Category_Text, int32 CallFunc_GetPreviewSlotCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "GetMunitionInfo");

	Params::UW_Loadout_Preset_Preview_C_GetMunitionInfo_Params Parms{};

	Parms.MunitionItem = MunitionItem;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetItemClassText_Category_Text = CallFunc_GetItemClassText_Category_Text;
	Parms.CallFunc_GetPreviewSlotCount_ReturnValue = CallFunc_GetPreviewSlotCount_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CountAndName != nullptr)
		*CountAndName = Parms.CountAndName;

	if (Category_Text != nullptr)
		*Category_Text = Parms.Category_Text;

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.PopulateAttachmentList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                VerticalBox                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              AttachmentObjects                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_Preset_Preview_SubItem_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachmentInfo_IsNull                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetAttachmentInfo_Name                                  (None)
// class FText                        CallFunc_GetAttachmentInfo_Type                                  (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::PopulateAttachmentList(class UVerticalBox* VerticalBox, TArray<class UClass*>& AttachmentObjects, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_Loadout_Preset_Preview_SubItem_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_GetAttachmentInfo_IsNull, class FText CallFunc_GetAttachmentInfo_Name, class FText CallFunc_GetAttachmentInfo_Type, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "PopulateAttachmentList");

	Params::UW_Loadout_Preset_Preview_C_PopulateAttachmentList_Params Parms{};

	Parms.VerticalBox = VerticalBox;
	Parms.AttachmentObjects = AttachmentObjects;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAttachmentInfo_IsNull = CallFunc_GetAttachmentInfo_IsNull;
	Parms.CallFunc_GetAttachmentInfo_Name = CallFunc_GetAttachmentInfo_Name;
	Parms.CallFunc_GetAttachmentInfo_Type = CallFunc_GetAttachmentInfo_Type;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.PopulateAmmoList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                VerticalBox                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Ammo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsSecondary                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, int32>           AmmoCountMap                                                     (Edit, BlueprintVisible)
// TSet<class FName>                  AmmoTypes                                                        (Edit, BlueprintVisible)
// class FName                        AmmoType                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_Preset_Preview_SubItem_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAmmoInfo_Ammo_Variety                                (None)
// class FText                        CallFunc_GetAmmoInfo_Ammo_Caliber                                (None)
// TArray<class FName>                CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Preset_Preview_C::PopulateAmmoList(class UVerticalBox* VerticalBox, TArray<class FName>& Ammo, bool IsSecondary, TMap<class FName, int32> AmmoCountMap, TSet<class FName> AmmoTypes, class FName AmmoType, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, class UW_Loadout_Preset_Preview_SubItem_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class FText CallFunc_GetAmmoInfo_Ammo_Variety, class FText CallFunc_GetAmmoInfo_Ammo_Caliber, TArray<class FName>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "PopulateAmmoList");

	Params::UW_Loadout_Preset_Preview_C_PopulateAmmoList_Params Parms{};

	Parms.VerticalBox = VerticalBox;
	Parms.Ammo = Ammo;
	Parms.IsSecondary = IsSecondary;
	Parms.AmmoCountMap = AmmoCountMap;
	Parms.AmmoTypes = AmmoTypes;
	Parms.AmmoType = AmmoType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetAmmoInfo_Ammo_Variety = CallFunc_GetAmmoInfo_Ammo_Variety;
	Parms.CallFunc_GetAmmoInfo_Ammo_Caliber = CallFunc_GetAmmoInfo_Ammo_Caliber;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetAmmoInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AmmoName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSecondary                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Ammo_Variety                                                     (Parm, OutParm)
// class FText                        Ammo_Caliber                                                     (Parm, OutParm)
// class FText                        Caliber                                                          (Edit, BlueprintVisible)
// class FText                        Variety                                                          (Edit, BlueprintVisible)
// struct FAmmoTypeData               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPreviewSecondarySlotCount_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPreviewPrimarySlotCount_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_Preset_Preview_C::GetAmmoInfo(class FName AmmoName, bool IsSecondary, class FText* Ammo_Variety, class FText* Ammo_Caliber, class FText Caliber, class FText Variety, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_GetPreviewSecondarySlotCount_ReturnValue, int32 CallFunc_GetPreviewPrimarySlotCount_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "GetAmmoInfo");

	Params::UW_Loadout_Preset_Preview_C_GetAmmoInfo_Params Parms{};

	Parms.AmmoName = AmmoName;
	Parms.IsSecondary = IsSecondary;
	Parms.Caliber = Caliber;
	Parms.Variety = Variety;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetPreviewSecondarySlotCount_ReturnValue = CallFunc_GetPreviewSecondarySlotCount_ReturnValue;
	Parms.CallFunc_GetPreviewPrimarySlotCount_ReturnValue = CallFunc_GetPreviewPrimarySlotCount_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ammo_Variety != nullptr)
		*Ammo_Variety = Parms.Ammo_Variety;

	if (Ammo_Caliber != nullptr)
		*Ammo_Caliber = Parms.Ammo_Caliber;

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetHeadwearInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Preset_Preview_C::SetHeadwearInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetHeadwearInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetGearInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetItemName_Item_Name                                   (None)
// class FText                        CallFunc_GetItemName_Item_Name_1                                 (None)

void UW_Loadout_Preset_Preview_C::SetGearInfo(class FText CallFunc_GetItemName_Item_Name, class FText CallFunc_GetItemName_Item_Name_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetGearInfo");

	Params::UW_Loadout_Preset_Preview_C_SetGearInfo_Params Parms{};

	Parms.CallFunc_GetItemName_Item_Name = CallFunc_GetItemName_Item_Name;
	Parms.CallFunc_GetItemName_Item_Name_1 = CallFunc_GetItemName_Item_Name_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetMunitionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      MunitionItem                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<TSubclassOf<class ABaseItem>> MunitionItems                                                    (Edit, BlueprintVisible)
// class UW_Loadout_Preset_Preview_SubItem_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class ABaseItem>>CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMunitionInfo_CountAndName                            (None)
// class FText                        CallFunc_GetMunitionInfo_Category_Text                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Preset_Preview_C::SetMunitionInfo(class UClass* MunitionItem, TSet<TSubclassOf<class ABaseItem>> MunitionItems, class UW_Loadout_Preset_Preview_SubItem_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<TSubclassOf<class ABaseItem>>& CallFunc_Set_ToArray_Result, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetMunitionInfo_CountAndName, class FText CallFunc_GetMunitionInfo_Category_Text, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetMunitionInfo");

	Params::UW_Loadout_Preset_Preview_C_SetMunitionInfo_Params Parms{};

	Parms.MunitionItem = MunitionItem;
	Parms.MunitionItems = MunitionItems;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetMunitionInfo_CountAndName = CallFunc_GetMunitionInfo_CountAndName;
	Parms.CallFunc_GetMunitionInfo_Category_Text = CallFunc_GetMunitionInfo_Category_Text;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetArmorInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaximumSlotCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetArmorCoverageText_CoverageText                       (None)
// class FText                        CallFunc_GetItemName_Item_Name                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UW_Loadout_Preset_Preview_C::SetArmorInfo(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_GetMaximumSlotCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetArmorCoverageText_CoverageText, class FText CallFunc_GetItemName_Item_Name, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetArmorInfo");

	Params::UW_Loadout_Preset_Preview_C_SetArmorInfo_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetMaximumSlotCount_ReturnValue = CallFunc_GetMaximumSlotCount_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetArmorCoverageText_CoverageText = CallFunc_GetArmorCoverageText_CoverageText;
	Parms.CallFunc_GetItemName_Item_Name = CallFunc_GetItemName_Item_Name;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetSecondaryInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                AmmoTypes                                                        (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_Item_Name                                   (None)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::SetSecondaryInfo(class FName AmmoType, const TArray<class FName>& AmmoTypes, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetItemName_Item_Name, TArray<class UClass*>& K2Node_MakeArray_Array, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetSecondaryInfo");

	Params::UW_Loadout_Preset_Preview_C_SetSecondaryInfo_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.AmmoTypes = AmmoTypes;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetItemName_Item_Name = CallFunc_GetItemName_Item_Name;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetAttachmentInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      WeaponAttachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNull                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Name                                                             (Parm, OutParm)
// class FText                        Type                                                             (Parm, OutParm)
// enum class EWeaponAttachmentType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Preset_Preview_C::GetAttachmentInfo(class UClass* WeaponAttachment, bool* IsNull, class FText* Name, class FText* Type, enum class EWeaponAttachmentType Temp_byte_Variable, bool Temp_bool_Variable, class FText CallFunc_GetAttachmentSlotText_SlotText, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "GetAttachmentInfo");

	Params::UW_Loadout_Preset_Preview_C_GetAttachmentInfo_Params Parms{};

	Parms.WeaponAttachment = WeaponAttachment;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNull != nullptr)
		*IsNull = Parms.IsNull;

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetItemName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      BaseItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Item_Name                                                        (Parm, OutParm)

void UW_Loadout_Preset_Preview_C::GetItemName(class UClass* BaseItem, class FText* Item_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "GetItemName");

	Params::UW_Loadout_Preset_Preview_C_GetItemName_Params Parms{};

	Parms.BaseItem = BaseItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Item_Name != nullptr)
		*Item_Name = Parms.Item_Name;

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetPrimaryInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_Item_Name                                   (None)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::SetPrimaryInfo(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetItemName_Item_Name, TArray<class UClass*>& K2Node_MakeArray_Array, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetPrimaryInfo");

	Params::UW_Loadout_Preset_Preview_C_SetPrimaryInfo_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetItemName_Item_Name = CallFunc_GetItemName_Item_Name;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Preset_Preview_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Preset_Preview_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "UpdateCurrentSlot");

	Params::UW_Loadout_Preset_Preview_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Preset_Preview_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Preset_Preview_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetLoadoutWidget");

	Params::UW_Loadout_Preset_Preview_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Preset_Preview_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Preset_Preview_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "SetInputMode");

	Params::UW_Loadout_Preset_Preview_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "ChangePage");

	Params::UW_Loadout_Preset_Preview_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Preset_Preview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.PreviewPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               SavedLoadout                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Preset_Preview_C::PreviewPreset(const struct FSavedLoadout& SavedLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "PreviewPreset");

	Params::UW_Loadout_Preset_Preview_C_PreviewPreset_Params Parms{};

	Parms.SavedLoadout = SavedLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Preset_Preview_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "Reveal");

	Params::UW_Loadout_Preset_Preview_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Preset_Preview_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "Hide");

	Params::UW_Loadout_Preset_Preview_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.ExecuteUbergraph_W_Loadout_Preset_Preview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_CustomEvent_SavedLoadout                                  (None)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Preset_Preview_C::ExecuteUbergraph_W_Loadout_Preset_Preview(int32 EntryPoint, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, bool CallFunc_IsValidClass_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_CustomEvent_SavedLoadout, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Preset_Preview_C", "ExecuteUbergraph_W_Loadout_Preset_Preview");

	Params::UW_Loadout_Preset_Preview_C_ExecuteUbergraph_W_Loadout_Preset_Preview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_CustomEvent_SavedLoadout = K2Node_CustomEvent_SavedLoadout;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


