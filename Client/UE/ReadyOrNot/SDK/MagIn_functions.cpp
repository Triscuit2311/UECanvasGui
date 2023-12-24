#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MagIn.MagIn_C
// (None)

class UClass* UMagIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagIn_C");

	return Clss;
}


// MagIn_C MagIn.Default__MagIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMagIn_C* UMagIn_C::GetDefaultObj()
{
	static class UMagIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagIn_C*>(UMagIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MagIn.MagIn_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMagIn_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagIn_C", "Received_Notify");

	Params::UMagIn_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


