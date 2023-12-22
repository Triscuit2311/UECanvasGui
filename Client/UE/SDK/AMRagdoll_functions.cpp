#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AMRagdoll.AnimNotify_EnableRagdoll
// (None)

class UClass* UAnimNotify_EnableRagdoll::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_EnableRagdoll");

	return Clss;
}


// AnimNotify_EnableRagdoll AMRagdoll.Default__AnimNotify_EnableRagdoll
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_EnableRagdoll* UAnimNotify_EnableRagdoll::GetDefaultObj()
{
	static class UAnimNotify_EnableRagdoll* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_EnableRagdoll*>(UAnimNotify_EnableRagdoll::StaticClass()->DefaultObject);

	return Default;
}


// Class AMRagdoll.AnimNotify_EnableRagdollChecks
// (None)

class UClass* UAnimNotify_EnableRagdollChecks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_EnableRagdollChecks");

	return Clss;
}


// AnimNotify_EnableRagdollChecks AMRagdoll.Default__AnimNotify_EnableRagdollChecks
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_EnableRagdollChecks* UAnimNotify_EnableRagdollChecks::GetDefaultObj()
{
	static class UAnimNotify_EnableRagdollChecks* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_EnableRagdollChecks*>(UAnimNotify_EnableRagdollChecks::StaticClass()->DefaultObject);

	return Default;
}


// Class AMRagdoll.AnimNotify_TogglePhysAnim
// (None)

class UClass* UAnimNotify_TogglePhysAnim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_TogglePhysAnim");

	return Clss;
}


// AnimNotify_TogglePhysAnim AMRagdoll.Default__AnimNotify_TogglePhysAnim
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_TogglePhysAnim* UAnimNotify_TogglePhysAnim::GetDefaultObj()
{
	static class UAnimNotify_TogglePhysAnim* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_TogglePhysAnim*>(UAnimNotify_TogglePhysAnim::StaticClass()->DefaultObject);

	return Default;
}


// Class AMRagdoll.RagdollComponent
// (None)

class UClass* URagdollComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RagdollComponent");

	return Clss;
}


// RagdollComponent AMRagdoll.Default__RagdollComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URagdollComponent* URagdollComponent::GetDefaultObj()
{
	static class URagdollComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URagdollComponent*>(URagdollComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AMRagdoll.RagdollComponent.RequestAnim2RagdollBlend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URagdollComponent::RequestAnim2RagdollBlend(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollComponent", "RequestAnim2RagdollBlend");

	Params::URagdollComponent_RequestAnim2RagdollBlend_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction AMRagdoll.RagdollComponent.OnRagdollHitEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// class URagdollComponent*           Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Impulse                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void URagdollComponent::OnRagdollHitEvent__DelegateSignature(class URagdollComponent* Component, const struct FVector& Impulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollComponent", "OnRagdollHitEvent__DelegateSignature");

	Params::URagdollComponent_OnRagdollHitEvent__DelegateSignature_Params Parms{};

	Parms.Component = Component;
	Parms.Impulse = Impulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction AMRagdoll.RagdollComponent.OnRagdollEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class URagdollComponent*           Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URagdollComponent::OnRagdollEvent__DelegateSignature(class URagdollComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollComponent", "OnRagdollEvent__DelegateSignature");

	Params::URagdollComponent_OnRagdollEvent__DelegateSignature_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AMRagdoll.RagdollComponent.OnPhysBodyHit
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void URagdollComponent::OnPhysBodyHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollComponent", "OnPhysBodyHit");

	Params::URagdollComponent_OnPhysBodyHit_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AMRagdoll.RagdollComponent.OnCapsuleHit
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void URagdollComponent::OnCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollComponent", "OnCapsuleHit");

	Params::URagdollComponent_OnCapsuleHit_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AMRagdoll.RagdollComponent.IsInRagdoll
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URagdollComponent::IsInRagdoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollComponent", "IsInRagdoll");

	Params::URagdollComponent_IsInRagdoll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


