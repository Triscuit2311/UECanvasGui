#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioTagListWidget.ModioTagListWidget_C
// (None)

class UClass* UModioTagListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagListWidget_C");

	return Clss;
}


// ModioTagListWidget_C ModioTagListWidget.Default__ModioTagListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioTagListWidget_C* UModioTagListWidget_C::GetDefaultObj()
{
	static class UModioTagListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagListWidget_C*>(UModioTagListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioTagListWidget.ModioTagListWidget_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UModioTagListWidget_C::GetVisibility_0(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagListWidget_C", "GetVisibility_0");

	Params::UModioTagListWidget_C_GetVisibility_0_Params Parms{};

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


