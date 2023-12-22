#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EvidenceBodyTextStyle.EvidenceBodyTextStyle_C
// (None)

class UClass* UEvidenceBodyTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EvidenceBodyTextStyle_C");

	return Clss;
}


// EvidenceBodyTextStyle_C EvidenceBodyTextStyle.Default__EvidenceBodyTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEvidenceBodyTextStyle_C* UEvidenceBodyTextStyle_C::GetDefaultObj()
{
	static class UEvidenceBodyTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvidenceBodyTextStyle_C*>(UEvidenceBodyTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


