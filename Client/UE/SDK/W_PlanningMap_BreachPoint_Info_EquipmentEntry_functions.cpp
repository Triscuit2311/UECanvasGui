#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C
// (None)

class UClass* UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C");

	return Clss;
}


// W_PlanningMap_BreachPoint_Info_EquipmentEntry_C W_PlanningMap_BreachPoint_Info_EquipmentEntry.Default__W_PlanningMap_BreachPoint_Info_EquipmentEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C* UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::GetDefaultObj()
{
	static class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C*>(UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.OnLoaded_0AA3E177468D68E03944E59A03A2CFB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::OnLoaded_0AA3E177468D68E03944E59A03A2CFB4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "OnLoaded_0AA3E177468D68E03944E59A03A2CFB4");

	Params::UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C_OnLoaded_0AA3E177468D68E03944E59A03A2CFB4_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "BndEvt__W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "BndEvt__W_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.ExecuteUbergraph_W_PlanningMap_BreachPoint_Info_EquipmentEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::ExecuteUbergraph_W_PlanningMap_BreachPoint_Info_EquipmentEntry(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "ExecuteUbergraph_W_PlanningMap_BreachPoint_Info_EquipmentEntry");

	Params::UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C_ExecuteUbergraph_W_PlanningMap_BreachPoint_Info_EquipmentEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelDeployableData        DeployableData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C::OnClicked__DelegateSignature(const struct FLevelDeployableData& DeployableData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_Info_EquipmentEntry_C", "OnClicked__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.DeployableData = DeployableData;

	UObject::ProcessEvent(Func, &Parms);

}

}


