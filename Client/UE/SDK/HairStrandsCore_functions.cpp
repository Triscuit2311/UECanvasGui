#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HairStrandsCore.GroomActor
// (Actor)

class UClass* AGroomActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomActor");

	return Clss;
}


// GroomActor HairStrandsCore.Default__GroomActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGroomActor* AGroomActor::GetDefaultObj()
{
	static class AGroomActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGroomActor*>(AGroomActor::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomAsset
// (None)

class UClass* UGroomAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomAsset");

	return Clss;
}


// GroomAsset HairStrandsCore.Default__GroomAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomAsset* UGroomAsset::GetDefaultObj()
{
	static class UGroomAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomAsset*>(UGroomAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomAssetImportData
// (None)

class UClass* UGroomAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomAssetImportData");

	return Clss;
}


// GroomAssetImportData HairStrandsCore.Default__GroomAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomAssetImportData* UGroomAssetImportData::GetDefaultObj()
{
	static class UGroomAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomAssetImportData*>(UGroomAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomBindingAsset
// (None)

class UClass* UGroomBindingAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBindingAsset");

	return Clss;
}


// GroomBindingAsset HairStrandsCore.Default__GroomBindingAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBindingAsset* UGroomBindingAsset::GetDefaultObj()
{
	static class UGroomBindingAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBindingAsset*>(UGroomBindingAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomBlueprintLibrary
// (None)

class UClass* UGroomBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomBlueprintLibrary");

	return Clss;
}


// GroomBlueprintLibrary HairStrandsCore.Default__GroomBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomBlueprintLibrary* UGroomBlueprintLibrary::GetDefaultObj()
{
	static class UGroomBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomBlueprintLibrary*>(UGroomBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomAsset*                 InGroomAsset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumInterpolationPoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMatchingSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params Parms{};

	Parms.InDesiredPackagePath = InDesiredPackagePath;
	Parms.InGroomAsset = InGroomAsset;
	Parms.InSkeletalMesh = InSkeletalMesh;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 InGroomAsset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumInterpolationPoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMatchingSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params Parms{};

	Parms.InGroomAsset = InGroomAsset;
	Parms.InSkeletalMesh = InSkeletalMesh;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DesiredPackagePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomAsset*                 GroomAsset                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              GeometryCache                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumInterpolationPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MatchingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params Parms{};

	Parms.DesiredPackagePath = DesiredPackagePath;
	Parms.GroomAsset = GroomAsset;
	Parms.GeometryCache = GeometryCache;
	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 GroomAsset                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              GeometryCache                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumInterpolationPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MatchingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params Parms{};

	Parms.GroomAsset = GroomAsset;
	Parms.GeometryCache = GeometryCache;
	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HairStrandsCore.GroomCache
// (None)

class UClass* UGroomCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCache");

	return Clss;
}


// GroomCache HairStrandsCore.Default__GroomCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCache* UGroomCache::GetDefaultObj()
{
	static class UGroomCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCache*>(UGroomCache::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCacheImportOptions
// (None)

class UClass* UGroomCacheImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCacheImportOptions");

	return Clss;
}


// GroomCacheImportOptions HairStrandsCore.Default__GroomCacheImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCacheImportOptions* UGroomCacheImportOptions::GetDefaultObj()
{
	static class UGroomCacheImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCacheImportOptions*>(UGroomCacheImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCacheImportData
// (None)

class UClass* UGroomCacheImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCacheImportData");

	return Clss;
}


// GroomCacheImportData HairStrandsCore.Default__GroomCacheImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCacheImportData* UGroomCacheImportData::GetDefaultObj()
{
	static class UGroomCacheImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCacheImportData*>(UGroomCacheImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGroomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomComponent");

	return Clss;
}


// GroomComponent HairStrandsCore.Default__GroomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomComponent* UGroomComponent::GetDefaultObj()
{
	static class UGroomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomComponent*>(UGroomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HairStrandsCore.GroomComponent.SetGroomAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetGroomAsset");

	Params::UGroomComponent_SetGroomAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HairStrandsCore.GroomComponent.SetBindingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomBindingAsset*          InBinding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetBindingAsset(class UGroomBindingAsset* InBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GroomComponent", "SetBindingAsset");

	Params::UGroomComponent_SetBindingAsset_Params Parms{};

	Parms.InBinding = InBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HairStrandsCore.GroomCreateBindingOptions
// (None)

class UClass* UGroomCreateBindingOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateBindingOptions");

	return Clss;
}


// GroomCreateBindingOptions HairStrandsCore.Default__GroomCreateBindingOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateBindingOptions* UGroomCreateBindingOptions::GetDefaultObj()
{
	static class UGroomCreateBindingOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateBindingOptions*>(UGroomCreateBindingOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// (None)

class UClass* UGroomCreateFollicleMaskOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateFollicleMaskOptions");

	return Clss;
}


// GroomCreateFollicleMaskOptions HairStrandsCore.Default__GroomCreateFollicleMaskOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateFollicleMaskOptions* UGroomCreateFollicleMaskOptions::GetDefaultObj()
{
	static class UGroomCreateFollicleMaskOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateFollicleMaskOptions*>(UGroomCreateFollicleMaskOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// (None)

class UClass* UGroomCreateStrandsTexturesOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomCreateStrandsTexturesOptions");

	return Clss;
}


// GroomCreateStrandsTexturesOptions HairStrandsCore.Default__GroomCreateStrandsTexturesOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomCreateStrandsTexturesOptions* UGroomCreateStrandsTexturesOptions::GetDefaultObj()
{
	static class UGroomCreateStrandsTexturesOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomCreateStrandsTexturesOptions*>(UGroomCreateStrandsTexturesOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomImportOptions
// (None)

class UClass* UGroomImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomImportOptions");

	return Clss;
}


// GroomImportOptions HairStrandsCore.Default__GroomImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomImportOptions* UGroomImportOptions::GetDefaultObj()
{
	static class UGroomImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomImportOptions*>(UGroomImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomHairGroupsPreview
// (None)

class UClass* UGroomHairGroupsPreview::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomHairGroupsPreview");

	return Clss;
}


// GroomHairGroupsPreview HairStrandsCore.Default__GroomHairGroupsPreview
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomHairGroupsPreview* UGroomHairGroupsPreview::GetDefaultObj()
{
	static class UGroomHairGroupsPreview* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomHairGroupsPreview*>(UGroomHairGroupsPreview::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.GroomPluginSettings
// (None)

class UClass* UGroomPluginSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroomPluginSettings");

	return Clss;
}


// GroomPluginSettings HairStrandsCore.Default__GroomPluginSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroomPluginSettings* UGroomPluginSettings::GetDefaultObj()
{
	static class UGroomPluginSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroomPluginSettings*>(UGroomPluginSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.MovieSceneGroomCacheSection
// (None)

class UClass* UMovieSceneGroomCacheSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGroomCacheSection");

	return Clss;
}


// MovieSceneGroomCacheSection HairStrandsCore.Default__MovieSceneGroomCacheSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGroomCacheSection* UMovieSceneGroomCacheSection::GetDefaultObj()
{
	static class UMovieSceneGroomCacheSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGroomCacheSection*>(UMovieSceneGroomCacheSection::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.MovieSceneGroomCacheTrack
// (None)

class UClass* UMovieSceneGroomCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneGroomCacheTrack");

	return Clss;
}


// MovieSceneGroomCacheTrack HairStrandsCore.Default__MovieSceneGroomCacheTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneGroomCacheTrack* UMovieSceneGroomCacheTrack::GetDefaultObj()
{
	static class UMovieSceneGroomCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneGroomCacheTrack*>(UMovieSceneGroomCacheTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// (None)

class UClass* UNiagaraDataInterfaceHairStrands::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceHairStrands");

	return Clss;
}


// NiagaraDataInterfaceHairStrands HairStrandsCore.Default__NiagaraDataInterfaceHairStrands
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceHairStrands* UNiagaraDataInterfaceHairStrands::GetDefaultObj()
{
	static class UNiagaraDataInterfaceHairStrands* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceHairStrands*>(UNiagaraDataInterfaceHairStrands::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// (None)

class UClass* UNiagaraDataInterfacePhysicsAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfacePhysicsAsset");

	return Clss;
}


// NiagaraDataInterfacePhysicsAsset HairStrandsCore.Default__NiagaraDataInterfacePhysicsAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfacePhysicsAsset* UNiagaraDataInterfacePhysicsAsset::GetDefaultObj()
{
	static class UNiagaraDataInterfacePhysicsAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfacePhysicsAsset*>(UNiagaraDataInterfacePhysicsAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// (None)

class UClass* UNiagaraDataInterfaceVelocityGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVelocityGrid");

	return Clss;
}


// NiagaraDataInterfaceVelocityGrid HairStrandsCore.Default__NiagaraDataInterfaceVelocityGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVelocityGrid* UNiagaraDataInterfaceVelocityGrid::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVelocityGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVelocityGrid*>(UNiagaraDataInterfaceVelocityGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// (None)

class UClass* UNiagaraDataInterfacePressureGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfacePressureGrid");

	return Clss;
}


// NiagaraDataInterfacePressureGrid HairStrandsCore.Default__NiagaraDataInterfacePressureGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfacePressureGrid* UNiagaraDataInterfacePressureGrid::GetDefaultObj()
{
	static class UNiagaraDataInterfacePressureGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfacePressureGrid*>(UNiagaraDataInterfacePressureGrid::StaticClass()->DefaultObject);

	return Default;
}

}


