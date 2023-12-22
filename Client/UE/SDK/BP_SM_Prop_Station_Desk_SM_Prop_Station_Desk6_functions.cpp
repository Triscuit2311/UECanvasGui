#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6.BP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C
// (Actor)

class UClass* ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C");

	return Clss;
}


// BP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C BP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6.Default__BP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C* ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C::GetDefaultObj()
{
	static class ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C*>(ABP_SM_Prop_Station_Desk_SM_Prop_Station_Desk6_C::StaticClass()->DefaultObject);

	return Default;
}

}


