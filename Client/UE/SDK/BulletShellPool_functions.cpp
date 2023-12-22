#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletShellPool.BulletShellPool_C
// (None)

class UClass* UBulletShellPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletShellPool_C");

	return Clss;
}


// BulletShellPool_C BulletShellPool.Default__BulletShellPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletShellPool_C* UBulletShellPool_C::GetDefaultObj()
{
	static class UBulletShellPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletShellPool_C*>(UBulletShellPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


