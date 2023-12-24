#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass M1911_Camera_Draw.M1911_Camera_Draw_C
// (None)

class UClass* UM1911_Camera_Draw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M1911_Camera_Draw_C");

	return Clss;
}


// M1911_Camera_Draw_C M1911_Camera_Draw.Default__M1911_Camera_Draw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM1911_Camera_Draw_C* UM1911_Camera_Draw_C::GetDefaultObj()
{
	static class UM1911_Camera_Draw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM1911_Camera_Draw_C*>(UM1911_Camera_Draw_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M1911_Camera_Draw.M1911_Camera_Draw_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UM1911_Camera_Draw_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M1911_Camera_Draw_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


