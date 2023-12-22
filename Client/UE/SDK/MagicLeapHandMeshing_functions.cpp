#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// (None)

class UClass* UMagicLeapHandMeshingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapHandMeshingComponent");

	return Clss;
}


// MagicLeapHandMeshingComponent MagicLeapHandMeshing.Default__MagicLeapHandMeshingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapHandMeshingComponent* UMagicLeapHandMeshingComponent::GetDefaultObj()
{
	static class UMagicLeapHandMeshingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapHandMeshingComponent*>(UMagicLeapHandMeshingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInUseWeightedNormals                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapHandMeshingComponent::SetUseWeightedNormals(bool bInUseWeightedNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandMeshingComponent", "SetUseWeightedNormals");

	Params::UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Params Parms{};

	Parms.bInUseWeightedNormals = bInUseWeightedNormals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandMeshingComponent", "DisconnectMRMesh");

	Params::UMagicLeapHandMeshingComponent_DisconnectMRMesh_Params Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandMeshingComponent", "ConnectMRMesh");

	Params::UMagicLeapHandMeshingComponent_ConnectMRMesh_Params Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// (None)

class UClass* UMagicLeapHandMeshingFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapHandMeshingFunctionLibrary");

	return Clss;
}


// MagicLeapHandMeshingFunctionLibrary MagicLeapHandMeshing.Default__MagicLeapHandMeshingFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapHandMeshingFunctionLibrary* UMagicLeapHandMeshingFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapHandMeshingFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapHandMeshingFunctionLibrary*>(UMagicLeapHandMeshingFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandMeshingFunctionLibrary", "DisconnectMRMesh");

	Params::UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::DestroyClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandMeshingFunctionLibrary", "DestroyClient");

	Params::UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::CreateClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandMeshingFunctionLibrary", "CreateClient");

	Params::UMagicLeapHandMeshingFunctionLibrary_CreateClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandMeshingFunctionLibrary", "ConnectMRMesh");

	Params::UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


