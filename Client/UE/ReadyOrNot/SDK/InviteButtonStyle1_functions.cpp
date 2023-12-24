#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InviteButtonStyle1.InviteButtonStyle1_C
// (None)

class UClass* UInviteButtonStyle1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InviteButtonStyle1_C");

	return Clss;
}


// InviteButtonStyle1_C InviteButtonStyle1.Default__InviteButtonStyle1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInviteButtonStyle1_C* UInviteButtonStyle1_C::GetDefaultObj()
{
	static class UInviteButtonStyle1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInviteButtonStyle1_C*>(UInviteButtonStyle1_C::StaticClass()->DefaultObject);

	return Default;
}

}


