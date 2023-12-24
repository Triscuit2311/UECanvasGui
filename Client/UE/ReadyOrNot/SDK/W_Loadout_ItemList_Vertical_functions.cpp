#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C
// (None)

class UClass* UW_Loadout_ItemList_Vertical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_ItemList_Vertical_C");

	return Clss;
}


// W_Loadout_ItemList_Vertical_C W_Loadout_ItemList_Vertical.Default__W_Loadout_ItemList_Vertical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_ItemList_Vertical_C* UW_Loadout_ItemList_Vertical_C::GetDefaultObj()
{
	static class UW_Loadout_ItemList_Vertical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_ItemList_Vertical_C*>(UW_Loadout_ItemList_Vertical_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "BackPage");

	Params::UW_Loadout_ItemList_Vertical_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "GetFocusTarget");

	Params::UW_Loadout_ItemList_Vertical_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedArmourMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            RefreshingSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_LoadoutSlot_C*>    CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::RefreshEquippedArmourMaterial(class UClass* ItemData, class UW_LoadoutSlot_C* RefreshingSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<class UW_LoadoutSlot_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "RefreshEquippedArmourMaterial");

	Params::UW_Loadout_ItemList_Vertical_C_RefreshEquippedArmourMaterial_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.RefreshingSlot = RefreshingSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            RefreshingSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_LoadoutSlot_C*>    CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::RefreshEquippedAmmo(class UClass* ItemData, class UW_LoadoutSlot_C* RefreshingSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TArray<class UW_LoadoutSlot_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "RefreshEquippedAmmo");

	Params::UW_Loadout_ItemList_Vertical_C_RefreshEquippedAmmo_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.RefreshingSlot = RefreshingSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateArmourMaterialLoadoutWidgetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              AsScroll_Box_Slot                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            LoadoutSlotWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            Widget                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UW_LoadoutSlot_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::CreateArmourMaterialLoadoutWidgetItem(class UArmourMaterial* ArmourMaterial, class UScrollBoxSlot** AsScroll_Box_Slot, class UW_LoadoutSlot_C** LoadoutSlotWidget, class UW_LoadoutSlot_C* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_LoadoutSlot_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "CreateArmourMaterialLoadoutWidgetItem");

	Params::UW_Loadout_ItemList_Vertical_C_CreateArmourMaterialLoadoutWidgetItem_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;
	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsScroll_Box_Slot != nullptr)
		*AsScroll_Box_Slot = Parms.AsScroll_Box_Slot;

	if (LoadoutSlotWidget != nullptr)
		*LoadoutSlotWidget = Parms.LoadoutSlotWidget;

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateArmourMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FirstItem                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              ItemScrollSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDeviceData>         FilteredDeviceData                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TArray<struct FAssetData>          CallFunc_GetAssetsByClass_OutAssetData                           (ReferenceParm)
// bool                               CallFunc_GetAssetsByClass_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAssetData                  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetAsset_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmourMaterial*             K2Node_DynamicCast_AsArmour_Material                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              CallFunc_CreateArmourMaterialLoadoutWidgetItem_AsScroll_Box_Slot (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_CreateArmourMaterialLoadoutWidgetItem_LoadoutSlotWidget (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::PopulateArmourMaterials(bool FirstItem, class UScrollBoxSlot* ItemScrollSlot, const TArray<struct FDeviceData>& FilteredDeviceData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IAssetRegistry> CallFunc_GetAssetRegistry_ReturnValue, TArray<struct FAssetData>& CallFunc_GetAssetsByClass_OutAssetData, bool CallFunc_GetAssetsByClass_ReturnValue, const struct FAssetData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetAsset_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UArmourMaterial* K2Node_DynamicCast_AsArmour_Material, bool K2Node_DynamicCast_bSuccess, class UScrollBoxSlot* CallFunc_CreateArmourMaterialLoadoutWidgetItem_AsScroll_Box_Slot, class UW_LoadoutSlot_C* CallFunc_CreateArmourMaterialLoadoutWidgetItem_LoadoutSlotWidget, enum class EItemType Temp_byte_Variable, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "PopulateArmourMaterials");

	Params::UW_Loadout_ItemList_Vertical_C_PopulateArmourMaterials_Params Parms{};

	Parms.FirstItem = FirstItem;
	Parms.ItemScrollSlot = ItemScrollSlot;
	Parms.FilteredDeviceData = FilteredDeviceData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAssetRegistry_ReturnValue = CallFunc_GetAssetRegistry_ReturnValue;
	Parms.CallFunc_GetAssetsByClass_OutAssetData = CallFunc_GetAssetsByClass_OutAssetData;
	Parms.CallFunc_GetAssetsByClass_ReturnValue = CallFunc_GetAssetsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAsset_ReturnValue = CallFunc_GetAsset_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsArmour_Material = K2Node_DynamicCast_AsArmour_Material;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateArmourMaterialLoadoutWidgetItem_AsScroll_Box_Slot = CallFunc_CreateArmourMaterialLoadoutWidgetItem_AsScroll_Box_Slot;
	Parms.CallFunc_CreateArmourMaterialLoadoutWidgetItem_LoadoutSlotWidget = CallFunc_CreateArmourMaterialLoadoutWidgetItem_LoadoutSlotWidget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateAmmoLoadoutWidgetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              AsScroll_Box_Slot                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            LoadoutSlotWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            Widget                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UW_LoadoutSlot_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Magazine_Weapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_Select_Default                                            (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::CreateAmmoLoadoutWidgetItem(class FName AmmoType, class UClass* Weapon, class UScrollBoxSlot** AsScroll_Box_Slot, class UW_LoadoutSlot_C** LoadoutSlotWidget, class UW_LoadoutSlot_C* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_LoadoutSlot_C* CallFunc_Create_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Magazine_Weapon, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool Temp_bool_Variable, TArray<class FName>& K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "CreateAmmoLoadoutWidgetItem");

	Params::UW_Loadout_ItemList_Vertical_C_CreateAmmoLoadoutWidgetItem_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.Weapon = Weapon;
	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBase_Magazine_Weapon = K2Node_ClassDynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsScroll_Box_Slot != nullptr)
		*AsScroll_Box_Slot = Parms.AsScroll_Box_Slot;

	if (LoadoutSlotWidget != nullptr)
		*LoadoutSlotWidget = Parms.LoadoutSlotWidget;

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAmmo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                AmmoTypes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstItem                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              ItemScrollSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDeviceData>         FilteredDeviceData                                               (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetAmmoLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAmmoTypeData               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              CallFunc_CreateAmmoLoadoutWidgetItem_AsScroll_Box_Slot           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_CreateAmmoLoadoutWidgetItem_LoadoutSlotWidget           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::PopulateAmmo(TArray<class FName>& AmmoTypes, class UClass* Weapon, bool FirstItem, class UScrollBoxSlot* ItemScrollSlot, const TArray<struct FDeviceData>& FilteredDeviceData, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UScrollBoxSlot* CallFunc_CreateAmmoLoadoutWidgetItem_AsScroll_Box_Slot, class UW_LoadoutSlot_C* CallFunc_CreateAmmoLoadoutWidgetItem_LoadoutSlotWidget, int32 CallFunc_Array_Add_ReturnValue, enum class EItemType Temp_byte_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "PopulateAmmo");

	Params::UW_Loadout_ItemList_Vertical_C_PopulateAmmo_Params Parms{};

	Parms.AmmoTypes = AmmoTypes;
	Parms.Weapon = Weapon;
	Parms.FirstItem = FirstItem;
	Parms.ItemScrollSlot = ItemScrollSlot;
	Parms.FilteredDeviceData = FilteredDeviceData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAmmoLookupDataTable_ReturnValue = CallFunc_GetAmmoLookupDataTable_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_CreateAmmoLoadoutWidgetItem_AsScroll_Box_Slot = CallFunc_CreateAmmoLoadoutWidgetItem_AsScroll_Box_Slot;
	Parms.CallFunc_CreateAmmoLoadoutWidgetItem_LoadoutSlotWidget = CallFunc_CreateAmmoLoadoutWidgetItem_LoadoutSlotWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Page                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::ScrollToPage(int32 Page, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollToPage");

	Params::UW_Loadout_ItemList_Vertical_C_ScrollToPage_Params Parms{};

	Parms.Page = Page;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToTargetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ScrollToTargetIndex(int32 ItemIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollToTargetIndex");

	Params::UW_Loadout_ItemList_Vertical_C_ScrollToTargetIndex_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ScrollToPreviousItem(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollToPreviousItem");

	Params::UW_Loadout_ItemList_Vertical_C_ScrollToPreviousItem_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ScrollToNextItem(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollToNextItem");

	Params::UW_Loadout_ItemList_Vertical_C_ScrollToNextItem_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToPreviousPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::ScrollToPreviousPage(int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollToPreviousPage");

	Params::UW_Loadout_ItemList_Vertical_C_ScrollToPreviousPage_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToNextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ScrollToNextPage(int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollToNextPage");

	Params::UW_Loadout_ItemList_Vertical_C_ScrollToNextPage_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateScrollPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::UpdateScrollPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "UpdateScrollPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetupScrollPagination
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              CallFunc_SlotAsScrollBoxSlot_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::SetupScrollPagination(int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "SetupScrollPagination");

	Params::UW_Loadout_ItemList_Vertical_C_SetupScrollPagination_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SlotAsScrollBoxSlot_ReturnValue = CallFunc_SlotAsScrollBoxSlot_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollToEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::ScrollToEquipped(bool Temp_bool_Variable, bool Temp_bool_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class UWidget* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollToEquipped");

	Params::UW_Loadout_ItemList_Vertical_C_ScrollToEquipped_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_LoadoutSlot_Attachment_C*>CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_15                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_16                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_17                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::RefreshEquippedAttachments(bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, TArray<class UW_LoadoutSlot_Attachment_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, class UW_LoadoutSlot_Attachment_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_6, bool CallFunc_EqualEqual_ClassClass_ReturnValue_7, bool CallFunc_EqualEqual_ClassClass_ReturnValue_8, bool CallFunc_EqualEqual_ClassClass_ReturnValue_9, bool CallFunc_EqualEqual_ClassClass_ReturnValue_10, bool CallFunc_EqualEqual_ClassClass_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "RefreshEquippedAttachments");

	Params::UW_Loadout_ItemList_Vertical_C_RefreshEquippedAttachments_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_6 = CallFunc_EqualEqual_ClassClass_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_7 = CallFunc_EqualEqual_ClassClass_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_8 = CallFunc_EqualEqual_ClassClass_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_9 = CallFunc_EqualEqual_ClassClass_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_10 = CallFunc_EqualEqual_ClassClass_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_11 = CallFunc_EqualEqual_ClassClass_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_12 = CallFunc_EqualEqual_ClassClass_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_13 = CallFunc_EqualEqual_ClassClass_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_14 = CallFunc_EqualEqual_ClassClass_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_15 = CallFunc_EqualEqual_ClassClass_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_16 = CallFunc_EqualEqual_ClassClass_ReturnValue_16;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_17 = CallFunc_EqualEqual_ClassClass_ReturnValue_17;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquippedItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            RefreshingSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_LoadoutSlot_C*>    CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::RefreshEquippedItems(class UClass* ItemData, class UW_LoadoutSlot_C* RefreshingSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, TArray<class UW_LoadoutSlot_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "RefreshEquippedItems");

	Params::UW_Loadout_ItemList_Vertical_C_RefreshEquippedItems_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.RefreshingSlot = RefreshingSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetListItemPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFirstItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              ScrollBoxSlotItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::SetListItemPadding(bool IsFirstItem, class UScrollBoxSlot* ScrollBoxSlotItem, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "SetListItemPadding");

	Params::UW_Loadout_ItemList_Vertical_C_SetListItemPadding_Params Parms{};

	Parms.IsFirstItem = IsFirstItem;
	Parms.ScrollBoxSlotItem = ScrollBoxSlotItem;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateAttachments
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TArray<enum class EItemCategory>   Temp_byte_Variable_2                                             (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SelectClass_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::PopulateAttachments(TArray<class UClass*>& Attachments, const struct FSavedLoadout& ActiveLoadout, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_LoadoutSlot_Attachment_C* CallFunc_Create_ReturnValue, class UClass* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, class UClass* Temp_class_Variable, enum class EWeaponAttachmentType Temp_byte_Variable, class UClass* Temp_class_Variable_1, enum class EWeaponAttachmentType Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<enum class EItemCategory>& Temp_byte_Variable_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EItemCategory Temp_byte_Variable_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select_Default_1, class UClass* CallFunc_SelectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "PopulateAttachments");

	Params::UW_Loadout_ItemList_Vertical_C_PopulateAttachments_Params Parms{};

	Parms.Attachments = Attachments;
	Parms.ActiveLoadout = ActiveLoadout;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectClass_ReturnValue = CallFunc_SelectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.RefreshEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               RefreshAttachments                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::RefreshEquipped(const struct FSavedLoadout& ActiveLoadout, bool RefreshAttachments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "RefreshEquipped");

	Params::UW_Loadout_ItemList_Vertical_C_RefreshEquipped_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;
	Parms.RefreshAttachments = RefreshAttachments;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SortItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_LoadoutSlot_C*>    CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              CallFunc_SlotAsScrollBoxSlot_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              CallFunc_SlotAsScrollBoxSlot_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::SortItems(bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UW_LoadoutSlot_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue_1, enum class EItemType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "SortItems");

	Params::UW_Loadout_ItemList_Vertical_C_SortItems_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsScrollBoxSlot_ReturnValue = CallFunc_SlotAsScrollBoxSlot_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SlotAsScrollBoxSlot_ReturnValue_1 = CallFunc_SlotAsScrollBoxSlot_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.CreateLoadoutWidgetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              AsScroll_Box_Slot                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            LoadoutSlotWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            Widget                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::CreateLoadoutWidgetItem(class UClass* ItemData, class UScrollBoxSlot** AsScroll_Box_Slot, class UW_LoadoutSlot_C** LoadoutSlotWidget, class UW_LoadoutSlot_C* Widget, class UW_LoadoutSlot_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_LoadoutSlot_C* CallFunc_Create_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "CreateLoadoutWidgetItem");

	Params::UW_Loadout_ItemList_Vertical_C_CreateLoadoutWidgetItem_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.Widget = Widget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsScroll_Box_Slot != nullptr)
		*AsScroll_Box_Slot = Parms.AsScroll_Box_Slot;

	if (LoadoutSlotWidget != nullptr)
		*LoadoutSlotWidget = Parms.LoadoutSlotWidget;

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.GetItemArrayBySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::GetItemArrayBySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "GetItemArrayBySlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLoadoutCategory>    GearCategoryClasses                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               FirstItem                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              ItemScrollSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDeviceData>         FilteredDeviceData                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourData                 CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeviceData                 CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponData                 CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBoxSlot*              CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_2             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_2             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourData                 CallFunc_Array_Get_Item_3                                        (None)
// class UScrollBoxSlot*              CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_3             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_3             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponData                 CallFunc_Array_Get_Item_4                                        (None)
// class UScrollBoxSlot*              CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_4             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_4             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::PopulateItems(TArray<struct FLoadoutCategory>& GearCategoryClasses, bool FirstItem, class UScrollBoxSlot* ItemScrollSlot, const TArray<struct FDeviceData>& FilteredDeviceData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FArmourData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UScrollBoxSlot* CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot, class UW_LoadoutSlot_C* CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget, int32 CallFunc_Array_Length_ReturnValue_1, const struct FDeviceData& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class UScrollBoxSlot* CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_1, class UW_LoadoutSlot_C* CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, const struct FWeaponData& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_3, class UScrollBoxSlot* CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_2, class UW_LoadoutSlot_C* CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_3, const struct FArmourData& CallFunc_Array_Get_Item_3, class UScrollBoxSlot* CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_3, class UW_LoadoutSlot_C* CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_3, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, const struct FWeaponData& CallFunc_Array_Get_Item_4, class UScrollBoxSlot* CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_4, class UW_LoadoutSlot_C* CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "PopulateItems");

	Params::UW_Loadout_ItemList_Vertical_C_PopulateItems_Params Parms{};

	Parms.GearCategoryClasses = GearCategoryClasses;
	Parms.FirstItem = FirstItem;
	Parms.ItemScrollSlot = ItemScrollSlot;
	Parms.FilteredDeviceData = FilteredDeviceData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot = CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot;
	Parms.CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget = CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_1 = CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_1;
	Parms.CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_1 = CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_2 = CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_2;
	Parms.CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_2 = CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_3 = CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_3;
	Parms.CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_3 = CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_4 = CallFunc_CreateLoadoutWidgetItem_AsScroll_Box_Slot_4;
	Parms.CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_4 = CallFunc_CreateLoadoutWidgetItem_LoadoutSlotWidget_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PopulateSubnav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::PopulateSubnav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "PopulateSubnav");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeDeployableList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           LoadoutSlot                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    GearCategoryClasses                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UClass*>              ExcludedItems                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Loadout_ItemList_Vertical_C::InitializeDeployableList(enum class EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory>& GearCategoryClasses, TArray<class UClass*>& ExcludedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "InitializeDeployableList");

	Params::UW_Loadout_ItemList_Vertical_C_InitializeDeployableList_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;
	Parms.GearCategoryClasses = GearCategoryClasses;
	Parms.ExcludedItems = ExcludedItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemDoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::LoadoutItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "LoadoutItemDoubleClicked");

	Params::UW_Loadout_ItemList_Vertical_C_LoadoutItemDoubleClicked_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAmmoList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ExcludedAmmoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::InitializeAmmoList(class FName ExcludedAmmoType, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "InitializeAmmoList");

	Params::UW_Loadout_ItemList_Vertical_C_InitializeAmmoList_Params Parms{};

	Parms.ExcludedAmmoType = ExcludedAmmoType;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.HideList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::HideList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "HideList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::AmmoItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "AmmoItemClicked");

	Params::UW_Loadout_ItemList_Vertical_C_AmmoItemClicked_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::AmmoItemHovered(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "AmmoItemHovered");

	Params::UW_Loadout_ItemList_Vertical_C_AmmoItemHovered_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemDoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::AmmoItemDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "AmmoItemDoubleClicked");

	Params::UW_Loadout_ItemList_Vertical_C_AmmoItemDoubleClicked_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeArmourMaterialList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::InitializeArmourMaterialList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "InitializeArmourMaterialList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeAttachmentList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::InitializeAttachmentList(class UClass* ItemData, enum class EWeaponAttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "InitializeAttachmentList");

	Params::UW_Loadout_ItemList_Vertical_C_InitializeAttachmentList_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ArmourMaterialHovered(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ArmourMaterialHovered");

	Params::UW_Loadout_ItemList_Vertical_C_ArmourMaterialHovered_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialDoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ArmourMaterialDoubleClicked(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ArmourMaterialDoubleClicked");

	Params::UW_Loadout_ItemList_Vertical_C_ArmourMaterialDoubleClicked_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SubnavButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::SubnavButtonClicked(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "SubnavButtonClicked");

	Params::UW_Loadout_ItemList_Vertical_C_SubnavButtonClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::AttachmentItemUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "AttachmentItemUnhovered");

	Params::UW_Loadout_ItemList_Vertical_C_AttachmentItemUnhovered_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::LoadoutItemHovered(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "LoadoutItemHovered");

	Params::UW_Loadout_ItemList_Vertical_C_LoadoutItemHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::LoadoutItemUnhovered(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "LoadoutItemUnhovered");

	Params::UW_Loadout_ItemList_Vertical_C_LoadoutItemUnhovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AmmoItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::AmmoItemUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "AmmoItemUnhovered");

	Params::UW_Loadout_ItemList_Vertical_C_AmmoItemUnhovered_Params Parms{};

	Parms.TriggeringItem = TriggeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ArmourMaterialUnhovered(class UW_LoadoutSlot_C* TriggeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ArmourMaterialUnhovered");

	Params::UW_Loadout_ItemList_Vertical_C_ArmourMaterialUnhovered_Params Parms{};

	Parms.TriggeringItem = TriggeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.InitializeLoadoutList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           LoadoutSlot                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    GearCategoryClasses                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Loadout_ItemList_Vertical_C::InitializeLoadoutList(enum class EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory>& GearCategoryClasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "InitializeLoadoutList");

	Params::UW_Loadout_ItemList_Vertical_C_InitializeLoadoutList_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;
	Parms.GearCategoryClasses = GearCategoryClasses;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_ItemList_Vertical_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "UpdateActiveLoadout");

	Params::UW_Loadout_ItemList_Vertical_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.LoadoutItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::LoadoutItemClicked(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "LoadoutItemClicked");

	Params::UW_Loadout_ItemList_Vertical_C_LoadoutItemClicked_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "Tick");

	Params::UW_Loadout_ItemList_Vertical_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "PreConstruct");

	Params::UW_Loadout_ItemList_Vertical_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_ItemList_Vertical_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "SetLoadoutWidget");

	Params::UW_Loadout_ItemList_Vertical_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_ItemList_Vertical_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_ItemList_Vertical_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "UpdateCurrentSlot");

	Params::UW_Loadout_ItemList_Vertical_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ArmourMaterialClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TrigeringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ArmourMaterialClicked(class UW_LoadoutSlot_C* TrigeringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ArmourMaterialClicked");

	Params::UW_Loadout_ItemList_Vertical_C_ArmourMaterialClicked_Params Parms{};

	Parms.TrigeringItem = TrigeringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OpenList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::OpenList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OpenList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              CurrentOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_BndEvt__W_Loadout_ItemList_ItemScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ChangePage");

	Params::UW_Loadout_ItemList_Vertical_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "SetInputMode");

	Params::UW_Loadout_ItemList_Vertical_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ScrollOpenedToEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_ItemList_Vertical_C::ScrollOpenedToEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ScrollOpenedToEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::AttachmentItemHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "AttachmentItemHovered");

	Params::UW_Loadout_ItemList_Vertical_C_AttachmentItemHovered_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.AttachmentItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::AttachmentItemClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "AttachmentItemClicked");

	Params::UW_Loadout_ItemList_Vertical_C_AttachmentItemClicked_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_ItemList_Vertical_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "Hide");

	Params::UW_Loadout_ItemList_Vertical_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "Reveal");

	Params::UW_Loadout_ItemList_Vertical_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.ExecuteUbergraph_W_Loadout_ItemList_Vertical
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemCategory>   Temp_byte_Variable                                               (ReferenceParm)
// enum class EWeaponAttachmentType   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              Temp_class_Variable                                              (ReferenceParm)
// enum class EItemCategory           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemCategory           K2Node_CustomEvent_LoadoutSlot_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    K2Node_CustomEvent_GearCategoryClasses_1                         (ConstParm, ReferenceParm)
// TArray<class UClass*>              K2Node_CustomEvent_ExcludedItems                                 (ConstParm, ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem_7                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ExcludedAmmoType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem_6                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem_5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem_4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_ItemData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   K2Node_CustomEvent_AttachmentType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem_3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem_2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringItem_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringItem                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              K2Node_Select_Default_1                                          (ReferenceParm)
// enum class EItemCategory           K2Node_CustomEvent_LoadoutSlot                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    K2Node_CustomEvent_GearCategoryClasses                           (ConstParm, ReferenceParm)
// enum class EWeaponAttachmentType   Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TrigeringItem                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_CurrentOffset                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)

void UW_Loadout_ItemList_Vertical_C::ExecuteUbergraph_W_Loadout_ItemList_Vertical(int32 EntryPoint, TArray<enum class EItemCategory>& Temp_byte_Variable, enum class EWeaponAttachmentType Temp_byte_Variable_1, TArray<class UClass*>& Temp_class_Variable, enum class EItemCategory Temp_byte_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EItemCategory K2Node_CustomEvent_LoadoutSlot_1, TArray<struct FLoadoutCategory>& K2Node_CustomEvent_GearCategoryClasses_1, TArray<class UClass*>& K2Node_CustomEvent_ExcludedItems, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem_7, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName K2Node_CustomEvent_ExcludedAmmoType, class UClass* K2Node_CustomEvent_Weapon, bool CallFunc_Not_PreBool_ReturnValue_2, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue_1, bool Temp_bool_Variable, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem_6, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem_5, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem_4, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, class UClass* K2Node_CustomEvent_ItemData, enum class EWeaponAttachmentType K2Node_CustomEvent_AttachmentType, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem_3, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem_2, class UW_Button_C* K2Node_CustomEvent_Button, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment_2, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringItem_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringItem, class UWidget* K2Node_Select_Default, bool Temp_bool_Variable_1, TArray<class UClass*>& K2Node_Select_Default_1, enum class EItemCategory K2Node_CustomEvent_LoadoutSlot, TArray<struct FLoadoutCategory>& K2Node_CustomEvent_GearCategoryClasses, enum class EWeaponAttachmentType Temp_byte_Variable_3, bool K2Node_Select_Default_2, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem_1, bool CallFunc_Not_PreBool_ReturnValue_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, class UW_Loadout_C* K2Node_Event_LoadoutWidget, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, bool CallFunc_Array_Contains_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_LoadoutSlot_C* K2Node_CustomEvent_TrigeringItem, float K2Node_ComponentBoundEvent_CurrentOffset, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment_1, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachment, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "ExecuteUbergraph_W_Loadout_ItemList_Vertical");

	Params::UW_Loadout_ItemList_Vertical_C_ExecuteUbergraph_W_Loadout_ItemList_Vertical_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_LoadoutSlot_1 = K2Node_CustomEvent_LoadoutSlot_1;
	Parms.K2Node_CustomEvent_GearCategoryClasses_1 = K2Node_CustomEvent_GearCategoryClasses_1;
	Parms.K2Node_CustomEvent_ExcludedItems = K2Node_CustomEvent_ExcludedItems;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_TrigeringItem_7 = K2Node_CustomEvent_TrigeringItem_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_CustomEvent_ExcludedAmmoType = K2Node_CustomEvent_ExcludedAmmoType;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue_1 = CallFunc_GetItemLookupDataTable_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_CustomEvent_TrigeringItem_6 = K2Node_CustomEvent_TrigeringItem_6;
	Parms.K2Node_CustomEvent_TrigeringItem_5 = K2Node_CustomEvent_TrigeringItem_5;
	Parms.K2Node_CustomEvent_TrigeringItem_4 = K2Node_CustomEvent_TrigeringItem_4;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue_2 = CallFunc_GetItemLookupDataTable_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.K2Node_CustomEvent_AttachmentType = K2Node_CustomEvent_AttachmentType;
	Parms.K2Node_CustomEvent_TrigeringItem_3 = K2Node_CustomEvent_TrigeringItem_3;
	Parms.K2Node_CustomEvent_TrigeringItem_2 = K2Node_CustomEvent_TrigeringItem_2;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_TriggeringAttachment_2 = K2Node_CustomEvent_TriggeringAttachment_2;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.K2Node_CustomEvent_TriggeringItem_1 = K2Node_CustomEvent_TriggeringItem_1;
	Parms.K2Node_CustomEvent_TriggeringItem = K2Node_CustomEvent_TriggeringItem;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_LoadoutSlot = K2Node_CustomEvent_LoadoutSlot;
	Parms.K2Node_CustomEvent_GearCategoryClasses = K2Node_CustomEvent_GearCategoryClasses;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_CustomEvent_TrigeringItem_1 = K2Node_CustomEvent_TrigeringItem_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_TrigeringItem = K2Node_CustomEvent_TrigeringItem;
	Parms.K2Node_ComponentBoundEvent_CurrentOffset = K2Node_ComponentBoundEvent_CurrentOffset;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_CustomEvent_TriggeringAttachment_1 = K2Node_CustomEvent_TriggeringAttachment_1;
	Parms.K2Node_CustomEvent_TriggeringAttachment = K2Node_CustomEvent_TriggeringAttachment;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnLoadoutItemUnhovered__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnLoadoutItemUnhovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnLoadoutItemHovered__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnLoadoutItemHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnAttachmentUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnAttachmentUnhovered__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnAttachmentUnhovered__DelegateSignature_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialHovered__DelegateSignature(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnArmourMaterialHovered__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnArmourMaterialHovered__DelegateSignature_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialDoubleClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnArmourMaterialDoubleClicked__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnArmourMaterialDoubleClicked__DelegateSignature_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnArmourMaterialClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnArmourMaterialClicked__DelegateSignature(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnArmourMaterialClicked__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnArmourMaterialClicked__DelegateSignature_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnAmmoItemDoubleClicked__DelegateSignature(class FName AmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnAmmoItemDoubleClicked__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnAmmoItemDoubleClicked__DelegateSignature_Params Parms{};

	Parms.AmmoType = AmmoType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnAmmoItemHovered__DelegateSignature(class FName AmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnAmmoItemHovered__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnAmmoItemHovered__DelegateSignature_Params Parms{};

	Parms.AmmoType = AmmoType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAmmoItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnAmmoItemClicked__DelegateSignature(class FName AmmoType, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnAmmoItemClicked__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnAmmoItemClicked__DelegateSignature_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnAttachmentItemHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnAttachmentItemHovered__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnAttachmentItemHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnAttachmentItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachingWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnAttachmentItemClicked__DelegateSignature(class UClass* AttachingWeapon, class UClass* AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnAttachmentItemClicked__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnAttachmentItemClicked__DelegateSignature_Params Parms{};

	Parms.AttachingWeapon = AttachingWeapon;
	Parms.AttachmentData = AttachmentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemDoubleClicked__DelegateSignature(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnLoadoutItemDoubleClicked__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnLoadoutItemDoubleClicked__DelegateSignature_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_ItemList_Vertical.W_Loadout_ItemList_Vertical_C.OnLoadoutItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_ItemList_Vertical_C::OnLoadoutItemClicked__DelegateSignature(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_ItemList_Vertical_C", "OnLoadoutItemClicked__DelegateSignature");

	Params::UW_Loadout_ItemList_Vertical_C_OnLoadoutItemClicked__DelegateSignature_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}

}


