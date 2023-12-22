#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_Python_V2.Secondary_Python_V2_C
// (Actor)

class UClass* ASecondary_Python_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_Python_V2_C");

	return Clss;
}


// Secondary_Python_V2_C Secondary_Python_V2.Default__Secondary_Python_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_Python_V2_C* ASecondary_Python_V2_C::GetDefaultObj()
{
	static class ASecondary_Python_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_Python_V2_C*>(ASecondary_Python_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_Python_V2.Secondary_Python_V2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_Python_V2_C::UserConstructionScript(class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_Python_V2_C", "UserConstructionScript");

	Params::ASecondary_Python_V2_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


