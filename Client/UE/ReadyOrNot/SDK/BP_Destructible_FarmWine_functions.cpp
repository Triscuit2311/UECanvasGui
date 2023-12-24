#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Destructible_FarmWine.BP_Destructible_FarmWine_C
// (Actor)

class UClass* ABP_Destructible_FarmWine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Destructible_FarmWine_C");

	return Clss;
}


// BP_Destructible_FarmWine_C BP_Destructible_FarmWine.Default__BP_Destructible_FarmWine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Destructible_FarmWine_C* ABP_Destructible_FarmWine_C::GetDefaultObj()
{
	static class ABP_Destructible_FarmWine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Destructible_FarmWine_C*>(ABP_Destructible_FarmWine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Destructible_FarmWine.BP_Destructible_FarmWine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Destructible_FarmWine_C::UserConstructionScript(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Destructible_FarmWine_C", "UserConstructionScript");

	Params::ABP_Destructible_FarmWine_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


