#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BriefingAudioMedia.BriefingAudioMedia_C
// (None)

class UClass* UBriefingAudioMedia_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BriefingAudioMedia_C");

	return Clss;
}


// BriefingAudioMedia_C BriefingAudioMedia.Default__BriefingAudioMedia_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBriefingAudioMedia_C* UBriefingAudioMedia_C::GetDefaultObj()
{
	static class UBriefingAudioMedia_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBriefingAudioMedia_C*>(UBriefingAudioMedia_C::StaticClass()->DefaultObject);

	return Default;
}

}


