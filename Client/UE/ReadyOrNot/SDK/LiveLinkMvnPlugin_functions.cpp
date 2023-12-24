#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkMvnPlugin.LiveLinkGameInstance
// (None)

class UClass* ULiveLinkGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkGameInstance");

	return Clss;
}


// LiveLinkGameInstance LiveLinkMvnPlugin.Default__LiveLinkGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkGameInstance* ULiveLinkGameInstance::GetDefaultObj()
{
	static class ULiveLinkGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkGameInstance*>(ULiveLinkGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset
// (None)

class UClass* ULiveLinkMvnRetargetAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMvnRetargetAsset");

	return Clss;
}


// LiveLinkMvnRetargetAsset LiveLinkMvnPlugin.Default__LiveLinkMvnRetargetAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMvnRetargetAsset* ULiveLinkMvnRetargetAsset::GetDefaultObj()
{
	static class ULiveLinkMvnRetargetAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMvnRetargetAsset*>(ULiveLinkMvnRetargetAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetRemappedBoneNameByConvention
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EXsensMapping           Bone                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EXsensRetargetNamingConventionConvention                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkMvnRetargetAsset::GetRemappedBoneNameByConvention(enum class EXsensMapping Bone, enum class EXsensRetargetNamingConvention Convention)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMvnRetargetAsset", "GetRemappedBoneNameByConvention");

	Params::ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Params Parms{};

	Parms.Bone = Bone;
	Parms.Convention = Convention;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetCustomRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EXsensMapping           Bone                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkMvnRetargetAsset::GetCustomRemappedBoneName(enum class EXsensMapping Bone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMvnRetargetAsset", "GetCustomRemappedBoneName");

	Params::ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Params Parms{};

	Parms.Bone = Bone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LiveLinkMvnPlugin.LiveLinkMvnSourceSettings
// (None)

class UClass* ULiveLinkMvnSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMvnSourceSettings");

	return Clss;
}


// LiveLinkMvnSourceSettings LiveLinkMvnPlugin.Default__LiveLinkMvnSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMvnSourceSettings* ULiveLinkMvnSourceSettings::GetDefaultObj()
{
	static class ULiveLinkMvnSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMvnSourceSettings*>(ULiveLinkMvnSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMvnPlugin.LiveLinkMvnTransformController
// (None)

class UClass* ULiveLinkMvnTransformController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMvnTransformController");

	return Clss;
}


// LiveLinkMvnTransformController LiveLinkMvnPlugin.Default__LiveLinkMvnTransformController
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMvnTransformController* ULiveLinkMvnTransformController::GetDefaultObj()
{
	static class ULiveLinkMvnTransformController* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMvnTransformController*>(ULiveLinkMvnTransformController::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkMvnPlugin.MvnRemoteControlManager
// (None)

class UClass* UMvnRemoteControlManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MvnRemoteControlManager");

	return Clss;
}


// MvnRemoteControlManager LiveLinkMvnPlugin.Default__MvnRemoteControlManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMvnRemoteControlManager* UMvnRemoteControlManager::GetDefaultObj()
{
	static class UMvnRemoteControlManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMvnRemoteControlManager*>(UMvnRemoteControlManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLinkMvnPlugin.MvnRemoteControlManager.StopRecording
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              _fTimeOffsetInSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMvnRemoteControlManager::StopRecording(float _fTimeOffsetInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MvnRemoteControlManager", "StopRecording");

	Params::UMvnRemoteControlManager_StopRecording_Params Parms{};

	Parms._fTimeOffsetInSeconds = _fTimeOffsetInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLinkMvnPlugin.MvnRemoteControlManager.StartRecording
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              _fTimeOffsetInSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMvnRemoteControlManager::StartRecording(float _fTimeOffsetInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MvnRemoteControlManager", "StartRecording");

	Params::UMvnRemoteControlManager_StartRecording_Params Parms{};

	Parms._fTimeOffsetInSeconds = _fTimeOffsetInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


