#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EvidenceNameTextStyle.EvidenceNameTextStyle_C
// (None)

class UClass* UEvidenceNameTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EvidenceNameTextStyle_C");

	return Clss;
}


// EvidenceNameTextStyle_C EvidenceNameTextStyle.Default__EvidenceNameTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEvidenceNameTextStyle_C* UEvidenceNameTextStyle_C::GetDefaultObj()
{
	static class UEvidenceNameTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvidenceNameTextStyle_C*>(UEvidenceNameTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


