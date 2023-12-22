#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default12ptBoldCapsTextStyle.Default12ptBoldCapsTextStyle_C
// (None)

class UClass* UDefault12ptBoldCapsTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default12ptBoldCapsTextStyle_C");

	return Clss;
}


// Default12ptBoldCapsTextStyle_C Default12ptBoldCapsTextStyle.Default__Default12ptBoldCapsTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault12ptBoldCapsTextStyle_C* UDefault12ptBoldCapsTextStyle_C::GetDefaultObj()
{
	static class UDefault12ptBoldCapsTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault12ptBoldCapsTextStyle_C*>(UDefault12ptBoldCapsTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


