#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VICODynamicsPlugin.BaseVDComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UBaseVDComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseVDComponent");

	return Clss;
}


// BaseVDComponent VICODynamicsPlugin.Default__BaseVDComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseVDComponent* UBaseVDComponent::GetDefaultObj()
{
	static class UBaseVDComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseVDComponent*>(UBaseVDComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               UseExplicitCollision                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaseVDComponent::SetUseExplicitRigidBodyCollision(bool UseExplicitCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseVDComponent", "SetUseExplicitRigidBodyCollision");

	Params::UBaseVDComponent_SetUseExplicitRigidBodyCollision_Params Parms{};

	Parms.UseExplicitCollision = UseExplicitCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsAffected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaseVDComponent::SetAffectedByGlobalWind(bool IsAffected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseVDComponent", "SetAffectedByGlobalWind");

	Params::UBaseVDComponent_SetAffectedByGlobalWind_Params Parms{};

	Parms.IsAffected = IsAffected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.BaseVDComponent.OnSync
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBaseVDComponent::OnSync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseVDComponent", "OnSync");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBaseVDComponent::GetTensionConstraintCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseVDComponent", "GetTensionConstraintCount");

	Params::UBaseVDComponent_GetTensionConstraintCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.BaseVDComponent.GetParticleBuildInfo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVDParticleInfo>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVDParticleInfo> UBaseVDComponent::GetParticleBuildInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseVDComponent", "GetParticleBuildInfo");

	Params::UBaseVDComponent_GetParticleBuildInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TensionConstraintIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UBaseVDComponent::GetLastAppliedForceFromTensionConstraint(int32 TensionConstraintIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseVDComponent", "GetLastAppliedForceFromTensionConstraint");

	Params::UBaseVDComponent_GetLastAppliedForceFromTensionConstraint_Params Parms{};

	Parms.TensionConstraintIndex = TensionConstraintIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies
// (Native, Public, BlueprintCallable)
// Parameters:

void UBaseVDComponent::AttachToOverlappingRigidBodies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseVDComponent", "AttachToOverlappingRigidBodies");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class VICODynamicsPlugin.VDBlueprintFunctionLibrary
// (None)

class UClass* UVDBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDBlueprintFunctionLibrary");

	return Clss;
}


// VDBlueprintFunctionLibrary VICODynamicsPlugin.Default__VDBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDBlueprintFunctionLibrary* UVDBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UVDBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDBlueprintFunctionLibrary*>(UVDBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVDSimulation*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVDSimulation* UVDBlueprintFunctionLibrary::GetVICODynamicsSimulationInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDBlueprintFunctionLibrary", "GetVICODynamicsSimulationInstance");

	Params::UVDBlueprintFunctionLibrary_GetVICODynamicsSimulationInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VICODynamicsPlugin.VDColliderComponent
// (None)

class UClass* UVDColliderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDColliderComponent");

	return Clss;
}


// VDColliderComponent VICODynamicsPlugin.Default__VDColliderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDColliderComponent* UVDColliderComponent::GetDefaultObj()
{
	static class UVDColliderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDColliderComponent*>(UVDColliderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VICODynamicsPlugin.VDRopeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVDRopeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDRopeComponent");

	return Clss;
}


// VDRopeComponent VICODynamicsPlugin.Default__VDRopeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDRopeComponent* UVDRopeComponent::GetDefaultObj()
{
	static class UVDRopeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDRopeComponent*>(UVDRopeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ParticleIndexStart                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDRopeComponent::SetNewRestLengthStartingAtParticle(int32 ParticleIndexStart, float NewLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDRopeComponent", "SetNewRestLengthStartingAtParticle");

	Params::UVDRopeComponent_SetNewRestLengthStartingAtParticle_Params Parms{};

	Parms.ParticleIndexStart = ParticleIndexStart;
	Parms.NewLength = NewLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PieceIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDRopeComponent::SetNewRestLength(float NewLength, int32 PieceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDRopeComponent", "SetNewRestLength");

	Params::UVDRopeComponent_SetNewRestLength_Params Parms{};

	Parms.NewLength = NewLength;
	Parms.PieceIndex = PieceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDRopeComponent.ResetRope
// (Native, Public, BlueprintCallable)
// Parameters:

void UVDRopeComponent::ResetRope()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDRopeComponent", "ResetRope");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PieceIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDRopeComponent::GetTrueLength(int32 PieceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDRopeComponent", "GetTrueLength");

	Params::UVDRopeComponent_GetTrueLength_Params Parms{};

	Parms.PieceIndex = PieceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDRopeComponent.GetPieces
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRopePiece>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRopePiece> UVDRopeComponent::GetPieces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDRopeComponent", "GetPieces");

	Params::UVDRopeComponent_GetPieces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDRopeComponent.CreateRopeGeometry_BP
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVDRopeComponent::CreateRopeGeometry_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDRopeComponent", "CreateRopeGeometry_BP");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SegmentIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDRopeComponent::BreakAtSegment(int32 SegmentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDRopeComponent", "BreakAtSegment");

	Params::UVDRopeComponent_BreakAtSegment_Params Parms{};

	Parms.SegmentIndex = SegmentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VICODynamicsPlugin.VDDynamicRopeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVDDynamicRopeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDDynamicRopeComponent");

	return Clss;
}


// VDDynamicRopeComponent VICODynamicsPlugin.Default__VDDynamicRopeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDDynamicRopeComponent* UVDDynamicRopeComponent::GetDefaultObj()
{
	static class UVDDynamicRopeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDDynamicRopeComponent*>(UVDDynamicRopeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DistancePerSegment                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             StartAttachedTo                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSocket                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               StartSimulateTension                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             EndAttachedTo                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EndSocket                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               EndSimulateTension                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDDynamicRopeComponent::RebuildRopeAttached(float DistancePerSegment, class USceneComponent* StartAttachedTo, class FName StartSocket, bool StartSimulateTension, class USceneComponent* EndAttachedTo, class FName EndSocket, bool EndSimulateTension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDDynamicRopeComponent", "RebuildRopeAttached");

	Params::UVDDynamicRopeComponent_RebuildRopeAttached_Params Parms{};

	Parms.DistancePerSegment = DistancePerSegment;
	Parms.StartAttachedTo = StartAttachedTo;
	Parms.StartSocket = StartSocket;
	Parms.StartSimulateTension = StartSimulateTension;
	Parms.EndAttachedTo = EndAttachedTo;
	Parms.EndSocket = EndSocket;
	Parms.EndSimulateTension = EndSimulateTension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DistancePerSegment                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRelativeLocations                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDDynamicRopeComponent::RebuildRopeAtPoints(float DistancePerSegment, struct FVector& StartLocation, struct FVector& EndLocation, bool bRelativeLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDDynamicRopeComponent", "RebuildRopeAtPoints");

	Params::UVDDynamicRopeComponent_RebuildRopeAtPoints_Params Parms{};

	Parms.DistancePerSegment = DistancePerSegment;
	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;
	Parms.bRelativeLocations = bRelativeLocations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope
// (Native, Public, BlueprintCallable)
// Parameters:

void UVDDynamicRopeComponent::RebuildRope()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDDynamicRopeComponent", "RebuildRope");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class VICODynamicsPlugin.VDMeshClothComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVDMeshClothComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDMeshClothComponent");

	return Clss;
}


// VDMeshClothComponent VICODynamicsPlugin.Default__VDMeshClothComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDMeshClothComponent* UVDMeshClothComponent::GetDefaultObj()
{
	static class UVDMeshClothComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDMeshClothComponent*>(UVDMeshClothComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVDMeshVolumeConstraint*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVDMeshVolumeConstraint* UVDMeshClothComponent::GetVolumeConstraint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDMeshClothComponent", "GetVolumeConstraint");

	Params::UVDMeshClothComponent_GetVolumeConstraint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVDParticleSpringConstraint*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UVDParticleSpringConstraint*> UVDMeshClothComponent::GetStretchConstraintsArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDMeshClothComponent", "GetStretchConstraintsArray");

	Params::UVDMeshClothComponent_GetStretchConstraintsArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVDParticleSpringConstraint*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UVDParticleSpringConstraint*> UVDMeshClothComponent::GetBendConstraintsArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDMeshClothComponent", "GetBendConstraintsArray");

	Params::UVDMeshClothComponent_GetBendConstraintsArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VICODynamicsPlugin.VDMeshVolumeConstraint
// (None)

class UClass* UVDMeshVolumeConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDMeshVolumeConstraint");

	return Clss;
}


// VDMeshVolumeConstraint VICODynamicsPlugin.Default__VDMeshVolumeConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDMeshVolumeConstraint* UVDMeshVolumeConstraint::GetDefaultObj()
{
	static class UVDMeshVolumeConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDMeshVolumeConstraint*>(UVDMeshVolumeConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDMeshVolumeConstraint::SetRestVolume(float NewVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDMeshVolumeConstraint", "SetRestVolume");

	Params::UVDMeshVolumeConstraint_SetRestVolume_Params Parms{};

	Parms.NewVolume = NewVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDMeshVolumeConstraint::GetRestVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDMeshVolumeConstraint", "GetRestVolume");

	Params::UVDMeshVolumeConstraint_GetRestVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDMeshVolumeConstraint::GetCurrentVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDMeshVolumeConstraint", "GetCurrentVolume");

	Params::UVDMeshVolumeConstraint_GetCurrentVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VICODynamicsPlugin.VDParticleSpringConstraint
// (None)

class UClass* UVDParticleSpringConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDParticleSpringConstraint");

	return Clss;
}


// VDParticleSpringConstraint VICODynamicsPlugin.Default__VDParticleSpringConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDParticleSpringConstraint* UVDParticleSpringConstraint::GetDefaultObj()
{
	static class UVDParticleSpringConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDParticleSpringConstraint*>(UVDParticleSpringConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              NewStiffness                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDParticleSpringConstraint::SetStiffness(float& NewStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDParticleSpringConstraint", "SetStiffness");

	Params::UVDParticleSpringConstraint_SetStiffness_Params Parms{};

	Parms.NewStiffness = NewStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              NewRestDistance                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDParticleSpringConstraint::SetRestDistance(float& NewRestDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDParticleSpringConstraint", "SetRestDistance");

	Params::UVDParticleSpringConstraint_SetRestDistance_Params Parms{};

	Parms.NewRestDistance = NewRestDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVDSimulatedParticle*        Particle1                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVDSimulatedParticle*        Particle2                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDParticleSpringConstraint::IsConstraining(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDParticleSpringConstraint", "IsConstraining");

	Params::UVDParticleSpringConstraint_IsConstraining_Params Parms{};

	Parms.Particle1 = Particle1;
	Parms.Particle2 = Particle2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDParticleSpringConstraint::GetStifffness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDParticleSpringConstraint", "GetStifffness");

	Params::UVDParticleSpringConstraint_GetStifffness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDParticleSpringConstraint::GetRestDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDParticleSpringConstraint", "GetRestDistance");

	Params::UVDParticleSpringConstraint_GetRestDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVDSimulatedParticle*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDParticleSpringConstraint", "GetParticle2");

	Params::UVDParticleSpringConstraint_GetParticle2_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVDSimulatedParticle*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDParticleSpringConstraint", "GetParticle1");

	Params::UVDParticleSpringConstraint_GetParticle1_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VICODynamicsPlugin.VDProceduralClothComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVDProceduralClothComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDProceduralClothComponent");

	return Clss;
}


// VDProceduralClothComponent VICODynamicsPlugin.Default__VDProceduralClothComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDProceduralClothComponent* UVDProceduralClothComponent::GetDefaultObj()
{
	static class UVDProceduralClothComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDProceduralClothComponent*>(UVDProceduralClothComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VICODynamicsPlugin.VDSimulatedObject
// (None)

class UClass* UVDSimulatedObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDSimulatedObject");

	return Clss;
}


// VDSimulatedObject VICODynamicsPlugin.Default__VDSimulatedObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDSimulatedObject* UVDSimulatedObject::GetDefaultObj()
{
	static class UVDSimulatedObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDSimulatedObject*>(UVDSimulatedObject::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Skip                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetSkipRelativeVelocityCheckDuringCollision(bool Skip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetSkipRelativeVelocityCheckDuringCollision");

	Params::UVDSimulatedObject_SetSkipRelativeVelocityCheckDuringCollision_Params Parms{};

	Parms.Skip = Skip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECollisionChannel       ObjectType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetObjectType(enum class ECollisionChannel ObjectType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetObjectType");

	Params::UVDSimulatedObject_SetObjectType_Params Parms{};

	Parms.ObjectType = ObjectType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              MinDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetMinimumConstraintSatisfactionDistance(float MinDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetMinimumConstraintSatisfactionDistance");

	Params::UVDSimulatedObject_SetMinimumConstraintSatisfactionDistance_Params Parms{};

	Parms.MinDistance = MinDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetGravityScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetGravityScale");

	Params::UVDSimulatedObject_SetGravityScale_Params Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECollisionChannel       ObjectType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollisionResponse      Response                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetCollisionResponseToObjectType(enum class ECollisionChannel ObjectType, enum class ECollisionResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetCollisionResponseToObjectType");

	Params::UVDSimulatedObject_SetCollisionResponseToObjectType_Params Parms{};

	Parms.ObjectType = ObjectType;
	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetCollisionEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetCollisionEnabled");

	Params::UVDSimulatedObject_SetCollisionEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECollisionChannel       Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetCollisionChannel(enum class ECollisionChannel Channel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetCollisionChannel");

	Params::UVDSimulatedObject_SetCollisionChannel_Params Parms{};

	Parms.Channel = Channel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewWindVector                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::SetAffectiveWindVector(const struct FVector& NewWindVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "SetAffectiveWindVector");

	Params::UVDSimulatedObject_SetAffectiveWindVector_Params Parms{};

	Parms.NewWindVector = NewWindVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UVDParticleSpringConstraint*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVDParticleSpringConstraint*> UVDSimulatedObject::GetSpringConstraints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetSpringConstraints");

	Params::UVDSimulatedObject_GetSpringConstraints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedObject::GetSkipRelativeVelocityCheckDuringCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetSkipRelativeVelocityCheckDuringCollision");

	Params::UVDSimulatedObject_GetSkipRelativeVelocityCheckDuringCollision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetParticles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UVDSimulatedParticle*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVDSimulatedParticle*> UVDSimulatedObject::GetParticles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetParticles");

	Params::UVDSimulatedObject_GetParticles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDSimulatedObject::GetMinimumConstraintSatisfactionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetMinimumConstraintSatisfactionDistance");

	Params::UVDSimulatedObject_GetMinimumConstraintSatisfactionDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDSimulatedObject::GetGravityScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetGravityScale");

	Params::UVDSimulatedObject_GetGravityScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVDCollisionSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVDCollisionSettings UVDSimulatedObject::GetCollisionSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetCollisionSettings");

	Params::UVDSimulatedObject_GetCollisionSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedObject::GetCollisionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetCollisionEnabled");

	Params::UVDSimulatedObject_GetCollisionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVDSimulatedObject::GetAffectiveWindVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "GetAffectiveWindVector");

	Params::UVDSimulatedObject_GetAffectiveWindVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVDMeshVolumeConstraint*     Constraint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::DestroyVolumeConstraint(class UVDMeshVolumeConstraint* Constraint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "DestroyVolumeConstraint");

	Params::UVDSimulatedObject_DestroyVolumeConstraint_Params Parms{};

	Parms.Constraint = Constraint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVDSimulatedParticle*        Particle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::DestroyParticle(class UVDSimulatedParticle* Particle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "DestroyParticle");

	Params::UVDSimulatedObject_DestroyParticle_Params Parms{};

	Parms.Particle = Particle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVDParticleSpringConstraint* Constraint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedObject::DestroyConstraint(class UVDParticleSpringConstraint* Constraint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "DestroyConstraint");

	Params::UVDSimulatedObject_DestroyConstraint_Params Parms{};

	Parms.Constraint = Constraint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      IndexList                                                        (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RestVolume                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVDMeshVolumeConstraint*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVDMeshVolumeConstraint* UVDSimulatedObject::CreateVolumeConstraint(const TArray<int32>& IndexList, float Alpha, float RestVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "CreateVolumeConstraint");

	Params::UVDSimulatedObject_CreateVolumeConstraint_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.Alpha = Alpha;
	Parms.RestVolume = RestVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVDSimulatedParticle*        Particle1                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVDSimulatedParticle*        Particle2                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RestDistance                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Stiffness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVDParticleSpringConstraint* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVDParticleSpringConstraint* UVDSimulatedObject::CreateSpringConstraint(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "CreateSpringConstraint");

	Params::UVDSimulatedObject_CreateSpringConstraint_Params Parms{};

	Parms.Particle1 = Particle1;
	Parms.Particle2 = Particle2;
	Parms.RestDistance = RestDistance;
	Parms.Stiffness = Stiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVDParticleInfo             ParticleInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UVDSimulatedParticle*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVDSimulatedParticle* UVDSimulatedObject::CreateParticle(struct FVDParticleInfo& ParticleInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedObject", "CreateParticle");

	Params::UVDSimulatedObject_CreateParticle_Params Parms{};

	Parms.ParticleInfo = ParticleInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VICODynamicsPlugin.VDSimulatedParticle
// (None)

class UClass* UVDSimulatedParticle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDSimulatedParticle");

	return Clss;
}


// VDSimulatedParticle VICODynamicsPlugin.Default__VDSimulatedParticle
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDSimulatedParticle* UVDSimulatedParticle::GetDefaultObj()
{
	static class UVDSimulatedParticle* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDSimulatedParticle*>(UVDSimulatedParticle::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewVelocity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetVelocity(struct FVector& NewVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetVelocity");

	Params::UVDSimulatedParticle_SetVelocity_Params Parms{};

	Parms.NewVelocity = NewVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRestitutionCoefficient                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetRestitutionCoefficient(float NewRestitutionCoefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetRestitutionCoefficient");

	Params::UVDSimulatedParticle_SetRestitutionCoefficient_Params Parms{};

	Parms.NewRestitutionCoefficient = NewRestitutionCoefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRadius                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetRadius(float NewRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetRadius");

	Params::UVDSimulatedParticle_SetRadius_Params Parms{};

	Parms.NewRadius = NewRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetMass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMass                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetMass(float NewMass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetMass");

	Params::UVDSimulatedParticle_SetMass_Params Parms{};

	Parms.NewMass = NewMass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetLocation(struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetLocation");

	Params::UVDSimulatedParticle_SetLocation_Params Parms{};

	Parms.NewLocation = NewLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsOccluded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetIsWindOccluded(bool IsOccluded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetIsWindOccluded");

	Params::UVDSimulatedParticle_SetIsWindOccluded_Params Parms{};

	Parms.IsOccluded = IsOccluded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetIsRigidBodyCollisionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetIsRigidBodyCollisionEnabled");

	Params::UVDSimulatedParticle_SetIsRigidBodyCollisionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetIsParticleCollisionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetIsParticleCollisionEnabled");

	Params::UVDSimulatedParticle_SetIsParticleCollisionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsFree                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetIsFree(bool IsFree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetIsFree");

	Params::UVDSimulatedParticle_SetIsFree_Params Parms{};

	Parms.IsFree = IsFree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFrictionCoefficient                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetFrictionCoefficient(float NewFrictionCoefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetFrictionCoefficient");

	Params::UVDSimulatedParticle_SetFrictionCoefficient_Params Parms{};

	Parms.NewFrictionCoefficient = NewFrictionCoefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewDragCoefficient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::SetDragCoefficient(float NewDragCoefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "SetDragCoefficient");

	Params::UVDSimulatedParticle_SetDragCoefficient_Params Parms{};

	Parms.NewDragCoefficient = NewDragCoefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVDSimulatedParticle::GetVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetVelocity");

	Params::UVDSimulatedParticle_GetVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDSimulatedParticle::GetRestitutionCoefficient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetRestitutionCoefficient");

	Params::UVDSimulatedParticle_GetRestitutionCoefficient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDSimulatedParticle::GetRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetRadius");

	Params::UVDSimulatedParticle_GetRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetMass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDSimulatedParticle::GetMass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetMass");

	Params::UVDSimulatedParticle_GetMass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVDSimulatedParticle::GetLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetLocation");

	Params::UVDSimulatedParticle_GetLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::GetIsWindOccluded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetIsWindOccluded");

	Params::UVDSimulatedParticle_GetIsWindOccluded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::GetIsRigidBodyCollisionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetIsRigidBodyCollisionEnabled");

	Params::UVDSimulatedParticle_GetIsRigidBodyCollisionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::GetIsParticleCollisionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetIsParticleCollisionEnabled");

	Params::UVDSimulatedParticle_GetIsParticleCollisionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::GetIsFree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetIsFree");

	Params::UVDSimulatedParticle_GetIsFree_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDSimulatedParticle::GetFrictionCoefficient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetFrictionCoefficient");

	Params::UVDSimulatedParticle_GetFrictionCoefficient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDSimulatedParticle::GetDragCoefficient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetDragCoefficient");

	Params::UVDSimulatedParticle_GetDragCoefficient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVDParticleAttachment       OutAttachment                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::GetAttachment(struct FVDParticleAttachment* OutAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "GetAttachment");

	Params::UVDSimulatedParticle_GetAttachment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttachment != nullptr)
		*OutAttachment = std::move(Parms.OutAttachment);

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.Detach
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVDSimulatedParticle::Detach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "Detach");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVDParticleAttachment       Attachment                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               UseCurrentMass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::CopyAttachment(struct FVDParticleAttachment& Attachment, bool UseCurrentMass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "CopyAttachment");

	Params::UVDSimulatedParticle_CopyAttachment_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.UseCurrentMass = UseCurrentMass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsRelative                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::AttachToLocation(const struct FVector& Location, bool IsRelative)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "AttachToLocation");

	Params::UVDSimulatedParticle_AttachToLocation_Params Parms{};

	Parms.Location = Location;
	Parms.IsRelative = IsRelative;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SimulateTension                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::AttachToComponent(class UPrimitiveComponent* Component, const struct FVector& Location, bool SimulateTension, class FName Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "AttachToComponent");

	Params::UVDSimulatedParticle_AttachToComponent_Params Parms{};

	Parms.Component = Component;
	Parms.Location = Location;
	Parms.SimulateTension = SimulateTension;
	Parms.Socket = Socket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SimulateTension                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulatedParticle::AttachToActor(class AActor* Actor, const struct FVector& Location, bool SimulateTension, class FName Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "AttachToActor");

	Params::UVDSimulatedParticle_AttachToActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.Location = Location;
	Parms.SimulateTension = SimulateTension;
	Parms.Socket = Socket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulatedParticle.AddForce
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Force                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulatedParticle::AddForce(struct FVector& Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulatedParticle", "AddForce");

	Params::UVDSimulatedParticle_AddForce_Params Parms{};

	Parms.Force = Force;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VICODynamicsPlugin.VDSimulation
// (None)

class UClass* UVDSimulation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDSimulation");

	return Clss;
}


// VDSimulation VICODynamicsPlugin.Default__VDSimulation
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDSimulation* UVDSimulation::GetDefaultObj()
{
	static class UVDSimulation* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDSimulation*>(UVDSimulation::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDSimulation.SetSubstepCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SubstepCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetSubstepCount(int32 SubstepCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetSubstepCount");

	Params::UVDSimulation_SetSubstepCount_Params Parms{};

	Parms.SubstepCount = SubstepCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetSelfCollisionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetSelfCollisionEnabled");

	Params::UVDSimulation_SetSelfCollisionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetPhysXSceneCollisionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetPhysXSceneCollisionEnabled");

	Params::UVDSimulation_SetPhysXSceneCollisionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetPerFrameCollisionCacheEnable(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetPerFrameCollisionCacheEnable");

	Params::UVDSimulation_SetPerFrameCollisionCacheEnable_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetPerformExtraCollisionResolutionLoop(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetPerformExtraCollisionResolutionLoop");

	Params::UVDSimulation_SetPerformExtraCollisionResolutionLoop_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetIsExplicitRigidBodyCollisionEnabled");

	Params::UVDSimulation_SetIsExplicitRigidBodyCollisionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              FrameRate                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetFrameRate(int32 FrameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetFrameRate");

	Params::UVDSimulation_SetFrameRate_Params Parms{};

	Parms.FrameRate = FrameRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ConstraintIterationCount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetConstraintIterationCount(int32 ConstraintIterationCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetConstraintIterationCount");

	Params::UVDSimulation_SetConstraintIterationCount_Params Parms{};

	Parms.ConstraintIterationCount = ConstraintIterationCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetConstrainSimulationTo2DPlane(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetConstrainSimulationTo2DPlane");

	Params::UVDSimulation_SetConstrainSimulationTo2DPlane_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetConstrainPlaneOrigin(const struct FVector& Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetConstrainPlaneOrigin");

	Params::UVDSimulation_SetConstrainPlaneOrigin_Params Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Normal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::SetConstrainPlaneNormal(const struct FVector& Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "SetConstrainPlaneNormal");

	Params::UVDSimulation_SetConstrainPlaneNormal_Params Parms{};

	Parms.Normal = Normal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseVDComponent*            VDComponent                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         Collider                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::RemoveExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "RemoveExplicitColliderMapping");

	Params::UVDSimulation_RemoveExplicitColliderMapping_Params Parms{};

	Parms.VDComponent = VDComponent;
	Parms.Collider = Collider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseVDComponent*            VDComponent                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::RemoveAllExplicitColliderMappings(class UBaseVDComponent* VDComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "RemoveAllExplicitColliderMappings");

	Params::UVDSimulation_RemoveAllExplicitColliderMappings_Params Parms{};

	Parms.VDComponent = VDComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVDSimulatedParticle*>Overlaps                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UVDSimulatedObject*>  SimObjectsToIgnore                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              MaxOverlaps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulation::K2QuerySphereOverlaps(const struct FVector& Location, float Radius, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "k2QuerySphereOverlaps");

	Params::UVDSimulation_K2QuerySphereOverlaps_Params Parms{};

	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.SimObjectsToIgnore = SimObjectsToIgnore;
	Parms.MaxOverlaps = MaxOverlaps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Overlaps != nullptr)
		*Overlaps = std::move(Parms.Overlaps);

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfExtents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVDSimulatedParticle*>Overlaps                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UVDSimulatedObject*>  SimObjectsToIgnore                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              MaxOverlaps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulation::K2QueryBoxOverlaps(const struct FVector& Location, const struct FVector& HalfExtents, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "k2QueryBoxOverlaps");

	Params::UVDSimulation_K2QueryBoxOverlaps_Params Parms{};

	Parms.Location = Location;
	Parms.HalfExtents = HalfExtents;
	Parms.SimObjectsToIgnore = SimObjectsToIgnore;
	Parms.MaxOverlaps = MaxOverlaps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Overlaps != nullptr)
		*Overlaps = std::move(Parms.Overlaps);

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulation.GetSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVDSettings                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVDSettings UVDSimulation::GetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "GetSettings");

	Params::UVDSimulation_GetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulation::GetIsRunningOnWorkerThread()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "GetIsRunningOnWorkerThread");

	Params::UVDSimulation_GetIsRunningOnWorkerThread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVDSimulation::GetIsExplicitRigidBodyCollisionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "GetIsExplicitRigidBodyCollisionEnabled");

	Params::UVDSimulation_GetIsExplicitRigidBodyCollisionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBaseVDComponent*            VDComponent                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutSpeed                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutGust                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::GetDirectionalWindParameters(class UBaseVDComponent* VDComponent, struct FVector* OutDirection, float* OutSpeed, float* OutGust)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "GetDirectionalWindParameters");

	Params::UVDSimulation_GetDirectionalWindParameters_Params Parms{};

	Parms.VDComponent = VDComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDirection != nullptr)
		*OutDirection = std::move(Parms.OutDirection);

	if (OutSpeed != nullptr)
		*OutSpeed = Parms.OutSpeed;

	if (OutGust != nullptr)
		*OutGust = Parms.OutGust;

}


// Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseVDComponent*            VDComponent                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         Collider                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IgnoreConvexShapes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDSimulation::AddExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider, bool IgnoreConvexShapes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulation", "AddExplicitColliderMapping");

	Params::UVDSimulation_AddExplicitColliderMapping_Params Parms{};

	Parms.VDComponent = VDComponent;
	Parms.Collider = Collider;
	Parms.IgnoreConvexShapes = IgnoreConvexShapes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VICODynamicsPlugin.VDSimulationSettingsActor
// (Actor)

class UClass* AVDSimulationSettingsActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDSimulationSettingsActor");

	return Clss;
}


// VDSimulationSettingsActor VICODynamicsPlugin.Default__VDSimulationSettingsActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AVDSimulationSettingsActor* AVDSimulationSettingsActor::GetDefaultObj()
{
	static class AVDSimulationSettingsActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AVDSimulationSettingsActor*>(AVDSimulationSettingsActor::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVDSettings                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FVDSettings AVDSimulationSettingsActor::GetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDSimulationSettingsActor", "GetSettings");

	Params::AVDSimulationSettingsActor_GetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VICODynamicsPlugin.VDSkinnedRopeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVDSkinnedRopeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDSkinnedRopeComponent");

	return Clss;
}


// VDSkinnedRopeComponent VICODynamicsPlugin.Default__VDSkinnedRopeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDSkinnedRopeComponent* UVDSkinnedRopeComponent::GetDefaultObj()
{
	static class UVDSkinnedRopeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDSkinnedRopeComponent*>(UVDSkinnedRopeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VICODynamicsPlugin.VDSplineRopeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVDSplineRopeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDSplineRopeComponent");

	return Clss;
}


// VDSplineRopeComponent VICODynamicsPlugin.Default__VDSplineRopeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDSplineRopeComponent* UVDSplineRopeComponent::GetDefaultObj()
{
	static class UVDSplineRopeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDSplineRopeComponent*>(UVDSplineRopeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VICODynamicsPlugin.VDWindDirectionalSourceActor
// (Actor)

class UClass* AVDWindDirectionalSourceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDWindDirectionalSourceActor");

	return Clss;
}


// VDWindDirectionalSourceActor VICODynamicsPlugin.Default__VDWindDirectionalSourceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AVDWindDirectionalSourceActor* AVDWindDirectionalSourceActor::GetDefaultObj()
{
	static class AVDWindDirectionalSourceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AVDWindDirectionalSourceActor*>(AVDWindDirectionalSourceActor::StaticClass()->DefaultObject);

	return Default;
}


// Class VICODynamicsPlugin.VDWindDirectionalSourceComponent
// (SceneComponent)

class UClass* UVDWindDirectionalSourceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VDWindDirectionalSourceComponent");

	return Clss;
}


// VDWindDirectionalSourceComponent VICODynamicsPlugin.Default__VDWindDirectionalSourceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVDWindDirectionalSourceComponent* UVDWindDirectionalSourceComponent::GetDefaultObj()
{
	static class UVDWindDirectionalSourceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVDWindDirectionalSourceComponent*>(UVDWindDirectionalSourceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVDWindDirectionalSourceComponent::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDWindDirectionalSourceComponent", "SetRadius");

	Params::UVDWindDirectionalSourceComponent_SetRadius_Params Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVDWindDirectionalSourceComponent::GetCurrentGust()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VDWindDirectionalSourceComponent", "GetCurrentGust");

	Params::UVDWindDirectionalSourceComponent_GetCurrentGust_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VICODynamicsPlugin.VICODynamicsSettings
// (None)

class UClass* UVICODynamicsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VICODynamicsSettings");

	return Clss;
}


// VICODynamicsSettings VICODynamicsPlugin.Default__VICODynamicsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UVICODynamicsSettings* UVICODynamicsSettings::GetDefaultObj()
{
	static class UVICODynamicsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UVICODynamicsSettings*>(UVICODynamicsSettings::StaticClass()->DefaultObject);

	return Default;
}

}


