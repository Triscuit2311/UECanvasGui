#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_EquipTeamMateCategory.W_EquipTeamMateCategory_C
// (None)

class UClass* UW_EquipTeamMateCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_EquipTeamMateCategory_C");

	return Clss;
}


// W_EquipTeamMateCategory_C W_EquipTeamMateCategory.Default__W_EquipTeamMateCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_EquipTeamMateCategory_C* UW_EquipTeamMateCategory_C::GetDefaultObj()
{
	static class UW_EquipTeamMateCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_EquipTeamMateCategory_C*>(UW_EquipTeamMateCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UW_EquipTeamMateCategory_C::GetColorAndOpacity_0(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "GetColorAndOpacity_0");

	Params::UW_EquipTeamMateCategory_C_GetColorAndOpacity_0_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Get_GearCategory_Text_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UW_EquipTeamMateCategory_C::Get_GearCategory_Text_Text_0(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "Get_GearCategory_Text_Text_0");

	Params::UW_EquipTeamMateCategory_C_Get_GearCategory_Text_Text_0_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_EquipTeamMateCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "PreConstruct");

	Params::UW_EquipTeamMateCategory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipTeamMateCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::UW_EquipTeamMateCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipTeamMateCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "Tick");

	Params::UW_EquipTeamMateCategory_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.ExecuteUbergraph_W_EquipTeamMateCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Get_GearCategory_Text_Text_0_ReturnValue                (None)
// struct FLinearColor                CallFunc_GetColorAndOpacity_0_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquippingSwat          CallFunc_GetEquippingSwatMember_EquippingSwat                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorAndOpacity_0_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipTeamMateCategory_C::ExecuteUbergraph_W_EquipTeamMateCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_Get_GearCategory_Text_Text_0_ReturnValue, const struct FLinearColor& CallFunc_GetColorAndOpacity_0_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, enum class EEquippingSwat CallFunc_GetEquippingSwatMember_EquippingSwat, const struct FLinearColor& CallFunc_GetColorAndOpacity_0_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "ExecuteUbergraph_W_EquipTeamMateCategory");

	Params::UW_EquipTeamMateCategory_C_ExecuteUbergraph_W_EquipTeamMateCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Get_GearCategory_Text_Text_0_ReturnValue = CallFunc_Get_GearCategory_Text_Text_0_ReturnValue;
	Parms.CallFunc_GetColorAndOpacity_0_ReturnValue = CallFunc_GetColorAndOpacity_0_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPremissionPlanning_ReturnValue = CallFunc_GetPremissionPlanning_ReturnValue;
	Parms.CallFunc_GetEquippingSwatMember_EquippingSwat = CallFunc_GetEquippingSwatMember_EquippingSwat;
	Parms.CallFunc_GetColorAndOpacity_0_ReturnValue_1 = CallFunc_GetColorAndOpacity_0_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPremissionPlanning_ReturnValue_1 = CallFunc_GetPremissionPlanning_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutCategory_C*        LoadoutCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipTeamMateCategory_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_EquipTeamMateCategory_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.LoadoutCategory = LoadoutCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutCategory_C*        LoadoutCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipTeamMateCategory_C::OnButtonHovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "OnButtonHovered__DelegateSignature");

	Params::UW_EquipTeamMateCategory_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.LoadoutCategory = LoadoutCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnLoadoutItemButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemObjectClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsTactical                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TacticalSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMultipleTacticalSlots                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              MaxTacticalSlots                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Starting_Tactical_Slot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            Loadout_Item_Widget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipTeamMateCategory_C::OnLoadoutItemButtonClicked__DelegateSignature(enum class EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32 TacticalSlot, bool bIsMultipleTacticalSlots, int32 MaxTacticalSlots, int32 Starting_Tactical_Slot, class UW_LoadoutItem_C* Loadout_Item_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "OnLoadoutItemButtonClicked__DelegateSignature");

	Params::UW_EquipTeamMateCategory_C_OnLoadoutItemButtonClicked__DelegateSignature_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.ItemObjectClass = ItemObjectClass;
	Parms.bIsTactical = bIsTactical;
	Parms.TacticalSlot = TacticalSlot;
	Parms.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
	Parms.MaxTacticalSlots = MaxTacticalSlots;
	Parms.Starting_Tactical_Slot = Starting_Tactical_Slot;
	Parms.Loadout_Item_Widget = Loadout_Item_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EquipTeamMateCategory.W_EquipTeamMateCategory_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutCategory_C*        LoadoutCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EquipTeamMateCategory_C::OnButtonClicked__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EquipTeamMateCategory_C", "OnButtonClicked__DelegateSignature");

	Params::UW_EquipTeamMateCategory_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.LoadoutCategory = LoadoutCategory;

	UObject::ProcessEvent(Func, &Parms);

}

}


