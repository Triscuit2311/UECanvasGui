#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_S_Python.Secondary_S_Python_C
// (Actor)

class UClass* ASecondary_S_Python_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_S_Python_C");

	return Clss;
}


// Secondary_S_Python_C Secondary_S_Python.Default__Secondary_S_Python_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_S_Python_C* ASecondary_S_Python_C::GetDefaultObj()
{
	static class ASecondary_S_Python_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_S_Python_C*>(ASecondary_S_Python_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_S_Python.Secondary_S_Python_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_S_Python_C::UserConstructionScript(class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_S_Python_C", "UserConstructionScript");

	Params::ASecondary_S_Python_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


