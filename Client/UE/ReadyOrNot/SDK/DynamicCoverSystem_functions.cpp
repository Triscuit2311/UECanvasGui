#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DynamicCoverSystem.CoverGenOverrideVolume
// (Actor)

class UClass* ACoverGenOverrideVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverGenOverrideVolume");

	return Clss;
}


// CoverGenOverrideVolume DynamicCoverSystem.Default__CoverGenOverrideVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ACoverGenOverrideVolume* ACoverGenOverrideVolume::GetDefaultObj()
{
	static class ACoverGenOverrideVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ACoverGenOverrideVolume*>(ACoverGenOverrideVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicCoverSystem.CoverGenOverrideVolume.GenerateCoverPoints
// (Final, Native, Public)
// Parameters:

void ACoverGenOverrideVolume::GenerateCoverPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverGenOverrideVolume", "GenerateCoverPoints");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class DynamicCoverSystem.CoverPoint
// (Actor)

class UClass* ACoverPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverPoint");

	return Clss;
}


// CoverPoint DynamicCoverSystem.Default__CoverPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ACoverPoint* ACoverPoint::GetDefaultObj()
{
	static class ACoverPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ACoverPoint*>(ACoverPoint::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicCoverSystem.CoverPoint.StopPreviewCoverAnim
// (Final, Native, Protected)
// Parameters:

void ACoverPoint::StopPreviewCoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverPoint", "StopPreviewCoverAnim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCoverSystem.CoverPoint.SetStandCoverType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EStandCoverType         NewCoverType                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACoverPoint::SetStandCoverType(enum class EStandCoverType& NewCoverType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverPoint", "SetStandCoverType");

	Params::ACoverPoint_SetStandCoverType_Params Parms{};

	Parms.NewCoverType = NewCoverType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCoverSystem.CoverPoint.SetCrouchCoverType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECrouchCoverType        NewCoverType                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACoverPoint::SetCrouchCoverType(enum class ECrouchCoverType& NewCoverType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverPoint", "SetCrouchCoverType");

	Params::ACoverPoint_SetCrouchCoverType_Params Parms{};

	Parms.NewCoverType = NewCoverType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCoverSystem.CoverPoint.ResetCoverTypes
// (Final, Native, Protected)
// Parameters:

void ACoverPoint::ResetCoverTypes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverPoint", "ResetCoverTypes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCoverSystem.CoverPoint.PreviewCoverAnim
// (Final, Native, Protected)
// Parameters:

void ACoverPoint::PreviewCoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverPoint", "PreviewCoverAnim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class DynamicCoverSystem.CoverSystem
// (None)

class UClass* UCoverSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverSystem");

	return Clss;
}


// CoverSystem DynamicCoverSystem.Default__CoverSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoverSystem* UCoverSystem::GetDefaultObj()
{
	static class UCoverSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoverSystem*>(UCoverSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicCoverSystem.CoverSystem.ReleaseCover
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InCoverPoint                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCoverSystem::ReleaseCover(struct FVector& InCoverPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverSystem", "ReleaseCover");

	Params::UCoverSystem_ReleaseCover_Params Parms{};

	Parms.InCoverPoint = InCoverPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DynamicCoverSystem.CoverSystem.OccupyCover
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InCoverPoint                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCoverSystem::OccupyCover(struct FVector& InCoverPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverSystem", "OccupyCover");

	Params::UCoverSystem_OccupyCover_Params Parms{};

	Parms.InCoverPoint = InCoverPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DynamicCoverSystem.CoverSystem.IsCoverPointOccupied
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     InCoverLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCoverSystem::IsCoverPointOccupied(struct FVector& InCoverLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverSystem", "IsCoverPointOccupied");

	Params::UCoverSystem_IsCoverPointOccupied_Params Parms{};

	Parms.InCoverLocation = InCoverLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DynamicCoverSystem.NotifyingRecastNavMesh
// (Actor)

class UClass* ANotifyingRecastNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotifyingRecastNavMesh");

	return Clss;
}


// NotifyingRecastNavMesh DynamicCoverSystem.Default__NotifyingRecastNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class ANotifyingRecastNavMesh* ANotifyingRecastNavMesh::GetDefaultObj()
{
	static class ANotifyingRecastNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<ANotifyingRecastNavMesh*>(ANotifyingRecastNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicCoverSystem.NotifyingRecastNavMesh.GenerateCoverPoints
// (Native, Public)
// Parameters:

void ANotifyingRecastNavMesh::GenerateCoverPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyingRecastNavMesh", "GenerateCoverPoints");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DynamicCoverSystem.NotifyingRecastNavMesh.DeleteAllCoverPoints
// (Native, Public)
// Parameters:

void ANotifyingRecastNavMesh::DeleteAllCoverPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyingRecastNavMesh", "DeleteAllCoverPoints");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


