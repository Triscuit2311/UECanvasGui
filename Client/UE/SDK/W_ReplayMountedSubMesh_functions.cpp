#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayMountedSubMesh.W_ReplayMountedSubMesh_C
// (None)

class UClass* UW_ReplayMountedSubMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayMountedSubMesh_C");

	return Clss;
}


// W_ReplayMountedSubMesh_C W_ReplayMountedSubMesh.Default__W_ReplayMountedSubMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayMountedSubMesh_C* UW_ReplayMountedSubMesh_C::GetDefaultObj()
{
	static class UW_ReplayMountedSubMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayMountedSubMesh_C*>(UW_ReplayMountedSubMesh_C::StaticClass()->DefaultObject);

	return Default;
}

}


