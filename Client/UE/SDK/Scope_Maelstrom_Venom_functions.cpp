#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_Maelstrom_Venom.Scope_Maelstrom_Venom_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_Maelstrom_Venom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_Maelstrom_Venom_C");

	return Clss;
}


// Scope_Maelstrom_Venom_C Scope_Maelstrom_Venom.Default__Scope_Maelstrom_Venom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_Maelstrom_Venom_C* UScope_Maelstrom_Venom_C::GetDefaultObj()
{
	static class UScope_Maelstrom_Venom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_Maelstrom_Venom_C*>(UScope_Maelstrom_Venom_C::StaticClass()->DefaultObject);

	return Default;
}

}


