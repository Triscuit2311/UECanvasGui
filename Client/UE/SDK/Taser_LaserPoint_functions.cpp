#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Taser_LaserPoint.Taser_LaserPoint_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UTaser_LaserPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Taser_LaserPoint_C");

	return Clss;
}


// Taser_LaserPoint_C Taser_LaserPoint.Default__Taser_LaserPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTaser_LaserPoint_C* UTaser_LaserPoint_C::GetDefaultObj()
{
	static class UTaser_LaserPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTaser_LaserPoint_C*>(UTaser_LaserPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


