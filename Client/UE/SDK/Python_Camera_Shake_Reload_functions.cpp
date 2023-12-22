#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Python_Camera_Shake_Reload.Python_Camera_Shake_Reload_C
// (None)

class UClass* UPython_Camera_Shake_Reload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Python_Camera_Shake_Reload_C");

	return Clss;
}


// Python_Camera_Shake_Reload_C Python_Camera_Shake_Reload.Default__Python_Camera_Shake_Reload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPython_Camera_Shake_Reload_C* UPython_Camera_Shake_Reload_C::GetDefaultObj()
{
	static class UPython_Camera_Shake_Reload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPython_Camera_Shake_Reload_C*>(UPython_Camera_Shake_Reload_C::StaticClass()->DefaultObject);

	return Default;
}

}


