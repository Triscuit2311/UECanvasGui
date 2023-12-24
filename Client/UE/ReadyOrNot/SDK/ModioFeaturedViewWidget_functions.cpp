#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioFeaturedViewWidget.ModioFeaturedViewWidget_C
// (None)

class UClass* UModioFeaturedViewWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedViewWidget_C");

	return Clss;
}


// ModioFeaturedViewWidget_C ModioFeaturedViewWidget.Default__ModioFeaturedViewWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioFeaturedViewWidget_C* UModioFeaturedViewWidget_C::GetDefaultObj()
{
	static class UModioFeaturedViewWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedViewWidget_C*>(UModioFeaturedViewWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioFeaturedViewWidget.ModioFeaturedViewWidget_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UModioFeaturedViewWidget_C::DoCustomNavigation_0(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedViewWidget_C", "DoCustomNavigation_0");

	Params::UModioFeaturedViewWidget_C_DoCustomNavigation_0_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


