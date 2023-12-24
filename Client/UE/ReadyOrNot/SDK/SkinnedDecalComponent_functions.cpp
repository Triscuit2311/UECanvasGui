#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SkinnedDecalComponent.SkinnedDecalInstance
// (SceneComponent)

class UClass* USkinnedDecalInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinnedDecalInstance");

	return Clss;
}


// SkinnedDecalInstance SkinnedDecalComponent.Default__SkinnedDecalInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USkinnedDecalInstance* USkinnedDecalInstance::GetDefaultObj()
{
	static class USkinnedDecalInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinnedDecalInstance*>(USkinnedDecalInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USkinnedDecalInstance::UpdateDecal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalInstance", "UpdateDecal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkinnedDecalSampler*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkinnedDecalSampler* USkinnedDecalInstance::GetSampler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalInstance", "GetSampler");

	Params::USkinnedDecalInstance_GetSampler_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SkinnedDecalComponent.SkinnedDecalSampler
// (None)

class UClass* USkinnedDecalSampler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkinnedDecalSampler");

	return Clss;
}


// SkinnedDecalSampler SkinnedDecalComponent.Default__SkinnedDecalSampler
// (Public, ClassDefaultObject, ArchetypeObject)

class USkinnedDecalSampler* USkinnedDecalSampler::GetDefaultObj()
{
	static class USkinnedDecalSampler* Default = nullptr;

	if (!Default)
		Default = static_cast<USkinnedDecalSampler*>(USkinnedDecalSampler::StaticClass()->DefaultObject);

	return Default;
}


// Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
// (Final, Native, Public)
// Parameters:
// class USkinnedDecalInstance*       Instance                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USkinnedDecalSampler::UpdateInstance(class USkinnedDecalInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "UpdateInstance");

	Params::USkinnedDecalSampler_UpdateInstance_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USkinnedDecalSampler::UpdateAllDecals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "UpdateAllDecals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Rotation                                                         (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SubUV                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USkinnedDecalSampler::SpawnDecal(const struct FVector& Location, const struct FQuat& Rotation, class FName BoneName, float Size, int32 SubUV, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "SpawnDecal");

	Params::USkinnedDecalSampler_SpawnDecal_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.BoneName = BoneName;
	Parms.Size = Size;
	Parms.SubUV = SubUV;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USkinnedDecalSampler::SetupMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "SetupMaterials");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Child                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USkinnedDecalSampler::SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "SetMeshComponent");

	Params::USkinnedDecalSampler_SetMeshComponent_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.Child = Child;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USkinnedDecalSampler::RemoveDecal(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "RemoveDecal");

	Params::USkinnedDecalSampler_RemoveDecal_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* USkinnedDecalSampler::GetDataTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "GetDataTarget");

	Params::USkinnedDecalSampler_GetDataTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkinnedDecalSampler*        Source                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USkinnedDecalSampler::CloneDecals(class USkinnedDecalSampler* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "CloneDecals");

	Params::USkinnedDecalSampler_CloneDecals_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USkinnedDecalSampler::ClearAllDecals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkinnedDecalSampler", "ClearAllDecals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


