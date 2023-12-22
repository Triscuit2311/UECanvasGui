#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DisplayBoldRed24pt.DisplayBoldRed24pt_C
// (None)

class UClass* UDisplayBoldRed24pt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplayBoldRed24pt_C");

	return Clss;
}


// DisplayBoldRed24pt_C DisplayBoldRed24pt.Default__DisplayBoldRed24pt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDisplayBoldRed24pt_C* UDisplayBoldRed24pt_C::GetDefaultObj()
{
	static class UDisplayBoldRed24pt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplayBoldRed24pt_C*>(UDisplayBoldRed24pt_C::StaticClass()->DefaultObject);

	return Default;
}

}


