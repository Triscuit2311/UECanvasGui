#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadoutUI.LoadoutUI_C
// (None)

class UClass* ILoadoutUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutUI_C");

	return Clss;
}


// LoadoutUI_C LoadoutUI.Default__LoadoutUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ILoadoutUI_C* ILoadoutUI_C::GetDefaultObj()
{
	static class ILoadoutUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ILoadoutUI_C*>(ILoadoutUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadoutUI.LoadoutUI_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ILoadoutUI_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutUI_C", "HeaderSubpageNavigation");

	Params::ILoadoutUI_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadoutUI.LoadoutUI_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ILoadoutUI_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutUI_C", "SetLoadoutWidget");

	Params::ILoadoutUI_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadoutUI.LoadoutUI_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ILoadoutUI_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutUI_C", "UpdateCurrentItemMap");

	Params::ILoadoutUI_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadoutUI.LoadoutUI_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ILoadoutUI_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutUI_C", "UpdateCurrentSlot");

	Params::ILoadoutUI_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadoutUI.LoadoutUI_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ILoadoutUI_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutUI_C", "UpdateActiveLoadout");

	Params::ILoadoutUI_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}

}


