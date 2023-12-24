#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SM_Cult_Prop_Drawer.BP_SM_Cult_Prop_Drawer_C
// (Actor)

class UClass* ABP_SM_Cult_Prop_Drawer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SM_Cult_Prop_Drawer_C");

	return Clss;
}


// BP_SM_Cult_Prop_Drawer_C BP_SM_Cult_Prop_Drawer.Default__BP_SM_Cult_Prop_Drawer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SM_Cult_Prop_Drawer_C* ABP_SM_Cult_Prop_Drawer_C::GetDefaultObj()
{
	static class ABP_SM_Cult_Prop_Drawer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SM_Cult_Prop_Drawer_C*>(ABP_SM_Cult_Prop_Drawer_C::StaticClass()->DefaultObject);

	return Default;
}

}


