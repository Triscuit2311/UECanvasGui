#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// (None)

class UClass* UAdvancedSteamFriendsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedSteamFriendsLibrary");

	return Clss;
}


// AdvancedSteamFriendsLibrary AdvancedSteamSessions.Default__AdvancedSteamFriendsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedSteamFriendsLibrary* UAdvancedSteamFriendsLibrary::GetDefaultObj()
{
	static class UAdvancedSteamFriendsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedSteamFriendsLibrary*>(UAdvancedSteamFriendsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               bRequireNameOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "RequestSteamFriendInfo");

	Params::UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;
	Parms.bRequireNameOnly = bRequireNameOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class ESteamUserOverlayType   DialogType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, enum class ESteamUserOverlayType DialogType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "OpenSteamUserOverlay");

	Params::UAdvancedSteamFriendsLibrary_OpenSteamUserOverlay_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;
	Parms.DialogType = DialogType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::IsSteamInBigPictureMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "IsSteamInBigPictureMode");

	Params::UAdvancedSteamFriendsLibrary_IsSteamInBigPictureMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::IsOverlayEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "IsOverlayEnabled");

	Params::UAdvancedSteamFriendsLibrary_IsOverlayEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::InitTextFiltering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "InitTextFiltering");

	Params::UAdvancedSteamFriendsLibrary_InitTextFiltering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAdvancedSteamFriendsLibrary::GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamPersonaName");

	Params::UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBPSteamGroupInfo>   SteamGroups                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAdvancedSteamFriendsLibrary::GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamGroups");

	Params::UAdvancedSteamFriendsLibrary_GetSteamGroups_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SteamGroups != nullptr)
		*SteamGroups = std::move(Parms.SteamGroups);

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppId                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, enum class EBlueprintResultSwitch* Result, int32* AppId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamFriendGamePlayed");

	Params::UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AppId != nullptr)
		*AppId = Parms.AppId;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class EBlueprintAsyncResultSwitchResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamAvatarSize        AvatarSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, enum class EBlueprintAsyncResultSwitch* Result, enum class ESteamAvatarSize AvatarSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "GetSteamFriendAvatar");

	Params::UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;
	Parms.AvatarSize = AvatarSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::GetLocalSteamIDFromSteam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "GetLocalSteamIDFromSteam");

	Params::UAdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "GetFriendSteamLevel");

	Params::UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      TextToFilter                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBPTextFilteringContext Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              TextSourceID                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FString                      FilteredText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSteamFriendsLibrary::FilterText(const class FString& TextToFilter, enum class EBPTextFilteringContext Context, const struct FBPUniqueNetId& TextSourceID, class FString* FilteredText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "FilterText");

	Params::UAdvancedSteamFriendsLibrary_FilterText_Params Parms{};

	Parms.TextToFilter = TextToFilter;
	Parms.Context = Context;
	Parms.TextSourceID = TextSourceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilteredText != nullptr)
		*FilteredText = std::move(Parms.FilteredText);

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SteamID64                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(const class FString& SteamID64)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamFriendsLibrary", "CreateSteamIDFromString");

	Params::UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params Parms{};

	Parms.SteamID64 = SteamID64;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// (None)

class UClass* UAdvancedSteamWorkshopLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedSteamWorkshopLibrary");

	return Clss;
}


// AdvancedSteamWorkshopLibrary AdvancedSteamSessions.Default__AdvancedSteamWorkshopLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedSteamWorkshopLibrary* UAdvancedSteamWorkshopLibrary::GetDefaultObj()
{
	static class UAdvancedSteamWorkshopLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedSteamWorkshopLibrary*>(UAdvancedSteamWorkshopLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumberOfItems                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPSteamWorkshopID>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(int32* NumberOfItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamWorkshopLibrary", "GetSubscribedWorkshopItems");

	Params::UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumberOfItems != nullptr)
		*NumberOfItems = Parms.NumberOfItems;

	return Parms.ReturnValue;

}


// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumberOfItems                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(int32* NumberOfItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSteamWorkshopLibrary", "GetNumSubscribedWorkshopItems");

	Params::UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumberOfItems != nullptr)
		*NumberOfItems = Parms.NumberOfItems;

}


// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// (None)

class UClass* USteamRequestGroupOfficersCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamRequestGroupOfficersCallbackProxy");

	return Clss;
}


// SteamRequestGroupOfficersCallbackProxy AdvancedSteamSessions.Default__SteamRequestGroupOfficersCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::GetDefaultObj()
{
	static class USteamRequestGroupOfficersCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamRequestGroupOfficersCallbackProxy*>(USteamRequestGroupOfficersCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              GroupUniqueNetID                                                 (Parm, NativeAccessSpecifierPublic)
// class USteamRequestGroupOfficersCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamRequestGroupOfficersCallbackProxy", "GetSteamGroupOfficerList");

	Params::USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GroupUniqueNetID = GroupUniqueNetID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// (None)

class UClass* USteamWSRequestUGCDetailsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamWSRequestUGCDetailsCallbackProxy");

	return Clss;
}


// SteamWSRequestUGCDetailsCallbackProxy AdvancedSteamSessions.Default__SteamWSRequestUGCDetailsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::GetDefaultObj()
{
	static class USteamWSRequestUGCDetailsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamWSRequestUGCDetailsCallbackProxy*>(USteamWSRequestUGCDetailsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPSteamWorkshopID          WorkShopID                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USteamWSRequestUGCDetailsCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWSRequestUGCDetailsCallbackProxy", "GetWorkshopItemDetails");

	Params::USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WorkShopID = WorkShopID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


