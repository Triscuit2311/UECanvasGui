#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interact_Farm_RaskinAudioDiary.Interact_Farm_RaskinAudioDiary_C
// (Actor)

class UClass* AInteract_Farm_RaskinAudioDiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interact_Farm_RaskinAudioDiary_C");

	return Clss;
}


// Interact_Farm_RaskinAudioDiary_C Interact_Farm_RaskinAudioDiary.Default__Interact_Farm_RaskinAudioDiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInteract_Farm_RaskinAudioDiary_C* AInteract_Farm_RaskinAudioDiary_C::GetDefaultObj()
{
	static class AInteract_Farm_RaskinAudioDiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteract_Farm_RaskinAudioDiary_C*>(AInteract_Farm_RaskinAudioDiary_C::StaticClass()->DefaultObject);

	return Default;
}

}


