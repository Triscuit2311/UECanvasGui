#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C
// (None)

class UClass* UW_Loadout_Munition_SummaryEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Munition_SummaryEntry_C");

	return Clss;
}


// W_Loadout_Munition_SummaryEntry_C W_Loadout_Munition_SummaryEntry.Default__W_Loadout_Munition_SummaryEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Munition_SummaryEntry_C* UW_Loadout_Munition_SummaryEntry_C::GetDefaultObj()
{
	static class UW_Loadout_Munition_SummaryEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Munition_SummaryEntry_C*>(UW_Loadout_Munition_SummaryEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Munition_SummaryEntry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "BackPage");

	Params::UW_Loadout_Munition_SummaryEntry_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "GetFocusTarget");

	Params::UW_Loadout_Munition_SummaryEntry_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.CreateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScaleBox*                   ScaleBox                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    SizeBox                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScaleBox*                   CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_SpawnObject_ReturnValue_2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::CreateIcon(class UImage* Image, class UScaleBox* ScaleBox, class USizeBox* SizeBox, class UImage* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScaleBox* CallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class USizeBox* CallFunc_SpawnObject_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "CreateIcon");

	Params::UW_Loadout_Munition_SummaryEntry_C_CreateIcon_Params Parms{};

	Parms.Image = Image;
	Parms.ScaleBox = ScaleBox;
	Parms.SizeBox = SizeBox;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = CallFunc_SpawnObject_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsShotgun                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsTaser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPepperball_Gun                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Munition_SummaryEntry_C::GetAmmoIcon(bool Temp_bool_Variable, enum class EItemCategory Temp_byte_Variable, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UTexture2D* K2Node_Select_Default, class UClass* K2Node_ClassDynamicCast_AsShotgun, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsTaser, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* K2Node_ClassDynamicCast_AsPepperball_Gun, bool K2Node_ClassDynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "GetAmmoIcon");

	Params::UW_Loadout_Munition_SummaryEntry_C_GetAmmoIcon_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ClassDynamicCast_AsShotgun = K2Node_ClassDynamicCast_AsShotgun;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsTaser = K2Node_ClassDynamicCast_AsTaser;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.K2Node_ClassDynamicCast_AsPepperball_Gun = K2Node_ClassDynamicCast_AsPepperball_Gun;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        AmmoName                                                         (Parm, OutParm)
// class UDataTable*                  CallFunc_GetAmmoLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAmmoTypeData               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Munition_SummaryEntry_C::GetAmmoName(class FText* AmmoName, class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "GetAmmoName");

	Params::UW_Loadout_Munition_SummaryEntry_C_GetAmmoName_Params Parms{};

	Parms.CallFunc_GetAmmoLookupDataTable_ReturnValue = CallFunc_GetAmmoLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoName != nullptr)
		*AmmoName = Parms.AmmoName;

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetItemIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

class UTexture2D* UW_Loadout_Munition_SummaryEntry_C::GetItemIcon(bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "GetItemIcon");

	Params::UW_Loadout_Munition_SummaryEntry_C_GetItemIcon_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.GetAmmoInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  CallFunc_GetAmmoLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAmmoTypeData               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Munition_SummaryEntry_C::GetAmmoInfo(class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "GetAmmoInfo");

	Params::UW_Loadout_Munition_SummaryEntry_C_GetAmmoInfo_Params Parms{};

	Parms.CallFunc_GetAmmoLookupDataTable_ReturnValue = CallFunc_GetAmmoLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "UpdateCurrentSlot");

	Params::UW_Loadout_Munition_SummaryEntry_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Munition_SummaryEntry_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Munition_SummaryEntry_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Munition_SummaryEntry_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "Reveal");

	Params::UW_Loadout_Munition_SummaryEntry_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Munition_SummaryEntry_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "Hide");

	Params::UW_Loadout_Munition_SummaryEntry_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Munition_SummaryEntry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "SetInputMode");

	Params::UW_Loadout_Munition_SummaryEntry_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "ChangePage");

	Params::UW_Loadout_Munition_SummaryEntry_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Munition_SummaryEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "PreConstruct");

	Params::UW_Loadout_Munition_SummaryEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Munition_SummaryEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Munition_SummaryEntry_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Munition_SummaryEntry_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "SetLoadoutWidget");

	Params::UW_Loadout_Munition_SummaryEntry_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateAmmunition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::UpdateAmmunition(class UClass* Weapon, class FName AmmoType, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "UpdateAmmunition");

	Params::UW_Loadout_Munition_SummaryEntry_C_UpdateAmmunition_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.AmmoType = AmmoType;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.UpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::UpdateItem(class UClass* ItemData, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "UpdateItem");

	Params::UW_Loadout_Munition_SummaryEntry_C_UpdateItem_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C.ExecuteUbergraph_W_Loadout_Munition_SummaryEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AmmoType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Count_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetItemIcon_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ItemData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Count                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Munition_SummaryEntry_C::ExecuteUbergraph_W_Loadout_Munition_SummaryEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class FName K2Node_Event_OptionNameID, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UClass* K2Node_CustomEvent_Weapon, class FName K2Node_CustomEvent_AmmoType, int32 K2Node_CustomEvent_Count_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTexture2D* CallFunc_GetItemIcon_ReturnValue, class UClass* K2Node_CustomEvent_ItemData, int32 K2Node_CustomEvent_Count, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Munition_SummaryEntry_C", "ExecuteUbergraph_W_Loadout_Munition_SummaryEntry");

	Params::UW_Loadout_Munition_SummaryEntry_C_ExecuteUbergraph_W_Loadout_Munition_SummaryEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.K2Node_CustomEvent_AmmoType = K2Node_CustomEvent_AmmoType;
	Parms.K2Node_CustomEvent_Count_1 = K2Node_CustomEvent_Count_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetItemIcon_ReturnValue = CallFunc_GetItemIcon_ReturnValue;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.K2Node_CustomEvent_Count = K2Node_CustomEvent_Count;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


