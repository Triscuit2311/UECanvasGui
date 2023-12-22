#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Modio.ModioCommonTypesLibrary
// (None)

class UClass* UModioCommonTypesLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCommonTypesLibrary");

	return Clss;
}


// ModioCommonTypesLibrary Modio.Default__ModioCommonTypesLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCommonTypesLibrary* UModioCommonTypesLibrary::GetDefaultObj()
{
	static class UModioCommonTypesLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCommonTypesLibrary*>(UModioCommonTypesLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioCommonTypesLibrary.SetSessionIdentifier
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioInitializeOptions     Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      SessionIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioInitializeOptions     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioInitializeOptions UModioCommonTypesLibrary::SetSessionIdentifier(struct FModioInitializeOptions& Options, const class FString& SessionIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "SetSessionIdentifier");

	Params::UModioCommonTypesLibrary_SetSessionIdentifier_Params Parms{};

	Parms.Options = Options;
	Parms.SessionIdentifier = SessionIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.SetPortal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioInitializeOptions     Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioPortal            PortalToUse                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioInitializeOptions     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioInitializeOptions UModioCommonTypesLibrary::SetPortal(struct FModioInitializeOptions& Options, enum class EModioPortal PortalToUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "SetPortal");

	Params::UModioCommonTypesLibrary_SetPortal_Params Parms{};

	Parms.Options = Options;
	Parms.PortalToUse = PortalToUse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.NotEqualTo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModID                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioCommonTypesLibrary::NotEqualTo(struct FModioModID& A, struct FModioModID& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "NotEqualTo");

	Params::UModioCommonTypesLibrary_NotEqualTo_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.MakeInitializeOptions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              GameId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ApiKey                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioEnvironment       GameEnvironment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioPortal            PortalInUse                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioInitializeOptions     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioInitializeOptions UModioCommonTypesLibrary::MakeInitializeOptions(int64 GameId, const class FString& ApiKey, enum class EModioEnvironment GameEnvironment, enum class EModioPortal PortalInUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "MakeInitializeOptions");

	Params::UModioCommonTypesLibrary_MakeInitializeOptions_Params Parms{};

	Parms.GameId = GameId;
	Parms.ApiKey = ApiKey;
	Parms.GameEnvironment = GameEnvironment;
	Parms.PortalInUse = PortalInUse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.MakeGameId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              GameId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioGameID                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioGameID UModioCommonTypesLibrary::MakeGameId(int64 GameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "MakeGameId");

	Params::UModioCommonTypesLibrary_MakeGameId_Params Parms{};

	Parms.GameId = GameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.MakeAuthParams
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AuthToken                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EmailAddress                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAcceptedTOS                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioAuthenticationParams  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioAuthenticationParams UModioCommonTypesLibrary::MakeAuthParams(const class FString& AuthToken, const class FString& EmailAddress, bool bHasAcceptedTOS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "MakeAuthParams");

	Params::UModioCommonTypesLibrary_MakeAuthParams_Params Parms{};

	Parms.AuthToken = AuthToken;
	Parms.EmailAddress = EmailAddress;
	Parms.bHasAcceptedTOS = bHasAcceptedTOS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.MakeApiKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ApiKey                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioApiKey                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioApiKey UModioCommonTypesLibrary::MakeApiKey(const class FString& ApiKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "MakeApiKey");

	Params::UModioCommonTypesLibrary_MakeApiKey_Params Parms{};

	Parms.ApiKey = ApiKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.GetRawValueFromModID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModID                 In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UModioCommonTypesLibrary::GetRawValueFromModID(struct FModioModID& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "GetRawValueFromModID");

	Params::UModioCommonTypesLibrary_GetRawValueFromModID_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.EqualTo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModID                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioCommonTypesLibrary::EqualTo(struct FModioModID& A, struct FModioModID& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "EqualTo");

	Params::UModioCommonTypesLibrary_EqualTo_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_UserIDToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUserID                UserID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioCommonTypesLibrary::Conv_UserIDToString(const struct FModioUserID& UserID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_UserIDToString");

	Params::UModioCommonTypesLibrary_Conv_UserIDToString_Params Parms{};

	Parms.UserID = UserID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AuthCode                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioEmailAuthCode         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioEmailAuthCode UModioCommonTypesLibrary::Conv_StringToEmailAuthCode(const class FString& AuthCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_StringToEmailAuthCode");

	Params::UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Params Parms{};

	Parms.AuthCode = AuthCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      EMail                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioEmailAddress          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioEmailAddress UModioCommonTypesLibrary::Conv_StringToEmailAddress(const class FString& EMail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_StringToEmailAddress");

	Params::UModioCommonTypesLibrary_Conv_StringToEmailAddress_Params Parms{};

	Parms.EMail = EMail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_ModIDToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioCommonTypesLibrary::Conv_ModIDToString(const struct FModioModID& ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_ModIDToString");

	Params::UModioCommonTypesLibrary_Conv_ModIDToString_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_GameIDToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioGameID                GameId                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioCommonTypesLibrary::Conv_GameIDToString(const struct FModioGameID& GameId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_GameIDToString");

	Params::UModioCommonTypesLibrary_Conv_GameIDToString_Params Parms{};

	Parms.GameId = GameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFileMetadataID        FileMetadataID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioCommonTypesLibrary::Conv_FileMetadataIDToString(const struct FModioFileMetadataID& FileMetadataID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_FileMetadataIDToString");

	Params::UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Params Parms{};

	Parms.FileMetadataID = FileMetadataID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioEmailAuthCode         EmailAuthCode                                                    (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioCommonTypesLibrary::Conv_EmailAuthCodeToString(const struct FModioEmailAuthCode& EmailAuthCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_EmailAuthCodeToString");

	Params::UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Params Parms{};

	Parms.EmailAuthCode = EmailAuthCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioEmailAddress          EmailAddress                                                     (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioCommonTypesLibrary::Conv_EmailAddressToString(const struct FModioEmailAddress& EmailAddress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_EmailAddressToString");

	Params::UModioCommonTypesLibrary_Conv_EmailAddressToString_Params Parms{};

	Parms.EmailAddress = EmailAddress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioApiKey                ApiKey                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioCommonTypesLibrary::Conv_ApiKeyToString(const struct FModioApiKey& ApiKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommonTypesLibrary", "Conv_ApiKeyToString");

	Params::UModioCommonTypesLibrary_Conv_ApiKeyToString_Params Parms{};

	Parms.ApiKey = ApiKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioCreateModLibrary
// (None)

class UClass* UModioCreateModLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCreateModLibrary");

	return Clss;
}


// ModioCreateModLibrary Modio.Default__ModioCreateModLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCreateModLibrary* UModioCreateModLibrary::GetDefaultObj()
{
	static class UModioCreateModLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCreateModLibrary*>(UModioCreateModLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioCreateModLibrary.SetVersionString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModFileParams   In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Version                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetVersionString(struct FModioCreateModFileParams& In, const class FString& Version)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetVersionString");

	Params::UModioCreateModLibrary_SetVersionString_Params Parms{};

	Parms.In = In;
	Parms.Version = Version;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModParams       In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              Tags                                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetTags(struct FModioCreateModParams& In, TArray<class FString>& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetTags");

	Params::UModioCreateModLibrary_SetTags_Params Parms{};

	Parms.In = In;
	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetModfilePlatforms
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModFileParams   In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<enum class EModioModfilePlatform>Platforms                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetModfilePlatforms(struct FModioCreateModFileParams& In, TArray<enum class EModioModfilePlatform>& Platforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetModfilePlatforms");

	Params::UModioCreateModLibrary_SetModfilePlatforms_Params Parms{};

	Parms.In = In;
	Parms.Platforms = Platforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetModFileMetadataBlob
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModFileParams   In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      MetadataBlob                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetModFileMetadataBlob(struct FModioCreateModFileParams& In, const class FString& MetadataBlob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetModFileMetadataBlob");

	Params::UModioCreateModLibrary_SetModFileMetadataBlob_Params Parms{};

	Parms.In = In;
	Parms.MetadataBlob = MetadataBlob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetMetadataBlob
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModParams       In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      MetadataBlob                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetMetadataBlob(struct FModioCreateModParams& In, const class FString& MetadataBlob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetMetadataBlob");

	Params::UModioCreateModLibrary_SetMetadataBlob_Params Parms{};

	Parms.In = In;
	Parms.MetadataBlob = MetadataBlob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetMarkAsActiveRelease
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModFileParams   In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bMarkAsActiveRelease                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetMarkAsActiveRelease(struct FModioCreateModFileParams& In, bool bMarkAsActiveRelease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetMarkAsActiveRelease");

	Params::UModioCreateModLibrary_SetMarkAsActiveRelease_Params Parms{};

	Parms.In = In;
	Parms.bMarkAsActiveRelease = bMarkAsActiveRelease;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetInitialVisibility_DEPRECATED
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModParams       In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               InitialVisibility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetInitialVisibility_DEPRECATED(struct FModioCreateModParams& In, bool InitialVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetInitialVisibility_DEPRECATED");

	Params::UModioCreateModLibrary_SetInitialVisibility_DEPRECATED_Params Parms{};

	Parms.In = In;
	Parms.InitialVisibility = InitialVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetInitialVisibility
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModParams       In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioObjectVisibilityFlagsInitialVisibility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetInitialVisibility(struct FModioCreateModParams& In, enum class EModioObjectVisibilityFlags InitialVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetInitialVisibility");

	Params::UModioCreateModLibrary_SetInitialVisibility_Params Parms{};

	Parms.In = In;
	Parms.InitialVisibility = InitialVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetHomepageURL
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModParams       In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      HomepageURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetHomepageURL(struct FModioCreateModParams& In, const class FString& HomepageURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetHomepageURL");

	Params::UModioCreateModLibrary_SetHomepageURL_Params Parms{};

	Parms.In = In;
	Parms.HomepageURL = HomepageURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetDescription
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModParams       In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetDescription(struct FModioCreateModParams& In, const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetDescription");

	Params::UModioCreateModLibrary_SetDescription_Params Parms{};

	Parms.In = In;
	Parms.Description = Description;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioCreateModLibrary.SetChangelogString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioCreateModFileParams   In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Changelog                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCreateModLibrary::SetChangelogString(struct FModioCreateModFileParams& In, const class FString& Changelog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCreateModLibrary", "SetChangelogString");

	Params::UModioCreateModLibrary_SetChangelogString_Params Parms{};

	Parms.In = In;
	Parms.Changelog = Changelog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Modio.ModioEditModLibrary
// (None)

class UClass* UModioEditModLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEditModLibrary");

	return Clss;
}


// ModioEditModLibrary Modio.Default__ModioEditModLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEditModLibrary* UModioEditModLibrary::GetDefaultObj()
{
	static class UModioEditModLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEditModLibrary*>(UModioEditModLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioEditModLibrary.SetVisibility_DEPRECATED
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Visibility                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetVisibility_DEPRECATED(struct FModioEditModParams& In, bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetVisibility_DEPRECATED");

	Params::UModioEditModLibrary_SetVisibility_DEPRECATED_Params Parms{};

	Parms.In = In;
	Parms.Visibility = Visibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetVisibility
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioObjectVisibilityFlagsVisibility                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetVisibility(struct FModioEditModParams& In, enum class EModioObjectVisibilityFlags Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetVisibility");

	Params::UModioEditModLibrary_SetVisibility_Params Parms{};

	Parms.In = In;
	Parms.Visibility = Visibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetTags
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              Tags                                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetTags(struct FModioEditModParams& In, TArray<class FString>& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetTags");

	Params::UModioEditModLibrary_SetTags_Params Parms{};

	Parms.In = In;
	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetSummary
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Summary                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetSummary(struct FModioEditModParams& In, const class FString& Summary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetSummary");

	Params::UModioEditModLibrary_SetSummary_Params Parms{};

	Parms.In = In;
	Parms.Summary = Summary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetNamePath
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      NamePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetNamePath(struct FModioEditModParams& In, const class FString& NamePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetNamePath");

	Params::UModioEditModLibrary_SetNamePath_Params Parms{};

	Parms.In = In;
	Parms.NamePath = NamePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetName(struct FModioEditModParams& In, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetName");

	Params::UModioEditModLibrary_SetName_Params Parms{};

	Parms.In = In;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetMetadataBlob
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      MetadataBlob                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetMetadataBlob(struct FModioEditModParams& In, const class FString& MetadataBlob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetMetadataBlob");

	Params::UModioEditModLibrary_SetMetadataBlob_Params Parms{};

	Parms.In = In;
	Parms.MetadataBlob = MetadataBlob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetMaturityFlags
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioMaturityFlags     MaturityFlags                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetMaturityFlags(struct FModioEditModParams& In, enum class EModioMaturityFlags MaturityFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetMaturityFlags");

	Params::UModioEditModLibrary_SetMaturityFlags_Params Parms{};

	Parms.In = In;
	Parms.MaturityFlags = MaturityFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetLogoPath
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      LogoPath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetLogoPath(struct FModioEditModParams& In, const class FString& LogoPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetLogoPath");

	Params::UModioEditModLibrary_SetLogoPath_Params Parms{};

	Parms.In = In;
	Parms.LogoPath = LogoPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetHomepageURL
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      HomepageURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetHomepageURL(struct FModioEditModParams& In, const class FString& HomepageURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetHomepageURL");

	Params::UModioEditModLibrary_SetHomepageURL_Params Parms{};

	Parms.In = In;
	Parms.HomepageURL = HomepageURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioEditModLibrary.SetDescription
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEditModParams         In                                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEditModLibrary::SetDescription(struct FModioEditModParams& In, const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditModLibrary", "SetDescription");

	Params::UModioEditModLibrary_SetDescription_Params Parms{};

	Parms.In = In;
	Parms.Description = Description;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Modio.ModioErrorCodeLibrary
// (None)

class UClass* UModioErrorCodeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioErrorCodeLibrary");

	return Clss;
}


// ModioErrorCodeLibrary Modio.Default__ModioErrorCodeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioErrorCodeLibrary* UModioErrorCodeLibrary::GetDefaultObj()
{
	static class UModioErrorCodeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioErrorCodeLibrary*>(UModioErrorCodeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioErrorCodeLibrary.IsError
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioErrorCode             Error                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioErrorCodeLibrary::IsError(struct FModioErrorCode& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioErrorCodeLibrary", "IsError");

	Params::UModioErrorCodeLibrary_IsError_Params Parms{};

	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioErrorCodeLibrary.GetValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioErrorCode             Error                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UModioErrorCodeLibrary::GetValue(struct FModioErrorCode& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioErrorCodeLibrary", "GetValue");

	Params::UModioErrorCodeLibrary_GetValue_Params Parms{};

	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioErrorCodeLibrary.GetMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioErrorCode             Error                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioErrorCodeLibrary::GetMessage(struct FModioErrorCode& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioErrorCodeLibrary", "GetMessage");

	Params::UModioErrorCodeLibrary_GetMessage_Params Parms{};

	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioErrorConditionLibrary
// (None)

class UClass* UModioErrorConditionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioErrorConditionLibrary");

	return Clss;
}


// ModioErrorConditionLibrary Modio.Default__ModioErrorConditionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioErrorConditionLibrary* UModioErrorConditionLibrary::GetDefaultObj()
{
	static class UModioErrorConditionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioErrorConditionLibrary*>(UModioErrorConditionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioErrorConditionLibrary.ErrorCodeMatches
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioErrorCondition    Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioErrorConditionLibrary::ErrorCodeMatches(const struct FModioErrorCode& ErrorCode, enum class EModioErrorCondition Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioErrorConditionLibrary", "ErrorCodeMatches");

	Params::UModioErrorConditionLibrary_ErrorCodeMatches_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.Condition = Condition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioExampleLibrary
// (None)

class UClass* UModioExampleLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioExampleLibrary");

	return Clss;
}


// ModioExampleLibrary Modio.Default__ModioExampleLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioExampleLibrary* UModioExampleLibrary::GetDefaultObj()
{
	static class UModioExampleLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioExampleLibrary*>(UModioExampleLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioExampleLibrary.ListUserSubscriptionAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          FilterParams                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioExampleLibrary::ListUserSubscriptionAsync(struct FModioFilterParams& FilterParams, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExampleLibrary", "ListUserSubscriptionAsync");

	Params::UModioExampleLibrary_ListUserSubscriptionAsync_Params Parms{};

	Parms.FilterParams = FilterParams;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioExampleLibrary.GetLogoThumbnailSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EModioLogoSize          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioLogoSize UModioExampleLibrary::GetLogoThumbnailSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExampleLibrary", "GetLogoThumbnailSize");

	Params::UModioExampleLibrary_GetLogoThumbnailSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioExampleLibrary.GetLogoFullSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EModioLogoSize          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioLogoSize UModioExampleLibrary::GetLogoFullSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExampleLibrary", "GetLogoFullSize");

	Params::UModioExampleLibrary_GetLogoFullSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioExampleLibrary.GetAvatarThumbnailSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EModioAvatarSize        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioAvatarSize UModioExampleLibrary::GetAvatarThumbnailSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExampleLibrary", "GetAvatarThumbnailSize");

	Params::UModioExampleLibrary_GetAvatarThumbnailSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioFilterParamsLibrary
// (None)

class UClass* UModioFilterParamsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFilterParamsLibrary");

	return Clss;
}


// ModioFilterParamsLibrary Modio.Default__ModioFilterParamsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFilterParamsLibrary* UModioFilterParamsLibrary::GetDefaultObj()
{
	static class UModioFilterParamsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFilterParamsLibrary*>(UModioFilterParamsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioFilterParamsLibrary.WithTags
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              NewTags                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::WithTags(struct FModioFilterParams& Filter, TArray<class FString>& NewTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "WithTags");

	Params::UModioFilterParamsLibrary_WithTags_Params Parms{};

	Parms.Filter = Filter;
	Parms.NewTags = NewTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.WithTag
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Tag                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::WithTag(struct FModioFilterParams& Filter, const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "WithTag");

	Params::UModioFilterParamsLibrary_WithTag_Params Parms{};

	Parms.Filter = Filter;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.WithoutTags
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              NewTags                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::WithoutTags(struct FModioFilterParams& Filter, TArray<class FString>& NewTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "WithoutTags");

	Params::UModioFilterParamsLibrary_WithoutTags_Params Parms{};

	Parms.Filter = Filter;
	Parms.NewTags = NewTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.WithoutTag
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Tag                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::WithoutTag(struct FModioFilterParams& Filter, const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "WithoutTag");

	Params::UModioFilterParamsLibrary_WithoutTag_Params Parms{};

	Parms.Filter = Filter;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.SortBy
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioSortFieldType     ByField                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioSortDirection     ByDirection                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::SortBy(struct FModioFilterParams& Filter, enum class EModioSortFieldType ByField, enum class EModioSortDirection ByDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "SortBy");

	Params::UModioFilterParamsLibrary_SortBy_Params Parms{};

	Parms.Filter = Filter;
	Parms.ByField = ByField;
	Parms.ByDirection = ByDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.PagedResults
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              PageNumber                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              PageSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::PagedResults(struct FModioFilterParams& Filter, int64 PageNumber, int64 PageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "PagedResults");

	Params::UModioFilterParamsLibrary_PagedResults_Params Parms{};

	Parms.Filter = Filter;
	Parms.PageNumber = PageNumber;
	Parms.PageSize = PageSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.NameContainsStrings
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              SearchStrings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::NameContainsStrings(struct FModioFilterParams& Filter, TArray<class FString>& SearchStrings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "NameContainsStrings");

	Params::UModioFilterParamsLibrary_NameContainsStrings_Params Parms{};

	Parms.Filter = Filter;
	Parms.SearchStrings = SearchStrings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.NameContains
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      SearchString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::NameContains(struct FModioFilterParams& Filter, const class FString& SearchString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "NameContains");

	Params::UModioFilterParamsLibrary_NameContains_Params Parms{};

	Parms.Filter = Filter;
	Parms.SearchString = SearchString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.MetadataLike
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      SearchString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::MetadataLike(struct FModioFilterParams& Filter, const class FString& SearchString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "MetadataLike");

	Params::UModioFilterParamsLibrary_MetadataLike_Params Parms{};

	Parms.Filter = Filter;
	Parms.SearchString = SearchString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.MatchingIDs
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FModioModID>         IDs                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::MatchingIDs(struct FModioFilterParams& Filter, TArray<struct FModioModID>& IDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "MatchingIDs");

	Params::UModioFilterParamsLibrary_MatchingIDs_Params Parms{};

	Parms.Filter = Filter;
	Parms.IDs = IDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.MarkedLiveBefore
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDateTime                   LiveBefore                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::MarkedLiveBefore(struct FModioFilterParams& Filter, const struct FDateTime& LiveBefore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "MarkedLiveBefore");

	Params::UModioFilterParamsLibrary_MarkedLiveBefore_Params Parms{};

	Parms.Filter = Filter;
	Parms.LiveBefore = LiveBefore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.MarkedLiveAfter
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDateTime                   LiveAfter                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::MarkedLiveAfter(struct FModioFilterParams& Filter, const struct FDateTime& LiveAfter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "MarkedLiveAfter");

	Params::UModioFilterParamsLibrary_MarkedLiveAfter_Params Parms{};

	Parms.Filter = Filter;
	Parms.LiveAfter = LiveAfter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.IndexedResults
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ResultCount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::IndexedResults(struct FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "IndexedResults");

	Params::UModioFilterParamsLibrary_IndexedResults_Params Parms{};

	Parms.Filter = Filter;
	Parms.StartIndex = StartIndex;
	Parms.ResultCount = ResultCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioFilterParamsLibrary.ExcludingIDs
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioFilterParams          Filter                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FModioModID>         IDs                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams UModioFilterParamsLibrary::ExcludingIDs(struct FModioFilterParams& Filter, TArray<struct FModioModID>& IDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterParamsLibrary", "ExcludingIDs");

	Params::UModioFilterParamsLibrary_ExcludingIDs_Params Parms{};

	Parms.Filter = Filter;
	Parms.IDs = IDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioImageLibrary
// (None)

class UClass* UModioImageLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioImageLibrary");

	return Clss;
}


// ModioImageLibrary Modio.Default__ModioImageLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioImageLibrary* UModioImageLibrary::GetDefaultObj()
{
	static class UModioImageLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioImageLibrary*>(UModioImageLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioImageLibrary.LoadAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioImageWrapper          Image                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnImageLoaded                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioImageLibrary::LoadAsync(struct FModioImageWrapper& Image, FDelegateProperty_ OnImageLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageLibrary", "LoadAsync");

	Params::UModioImageLibrary_LoadAsync_Params Parms{};

	Parms.Image = Image;
	Parms.OnImageLoaded = OnImageLoaded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioImageLibrary.GetTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioImageWrapper          Image                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2DDynamic*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2DDynamic* UModioImageLibrary::GetTexture(struct FModioImageWrapper& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageLibrary", "GetTexture");

	Params::UModioImageLibrary_GetTexture_Params Parms{};

	Parms.Image = Image;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioImageLibrary.GetState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioImageWrapper          Image                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioImageState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioImageState UModioImageLibrary::GetState(struct FModioImageWrapper& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageLibrary", "GetState");

	Params::UModioImageLibrary_GetState_Params Parms{};

	Parms.Image = Image;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioImageLibrary.GetLogoSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture*                    Logo                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          LogoSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UModioImageLibrary::GetLogoSize(class UTexture* Logo, enum class EModioLogoSize LogoSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageLibrary", "GetLogoSize");

	Params::UModioImageLibrary_GetLogoSize_Params Parms{};

	Parms.Logo = Logo;
	Parms.LogoSize = LogoSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioImageLibrary.GetGallerySize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture*                    GalleryImage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioGallerySize       GallerySize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UModioImageLibrary::GetGallerySize(class UTexture* GalleryImage, enum class EModioGallerySize GallerySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageLibrary", "GetGallerySize");

	Params::UModioImageLibrary_GetGallerySize_Params Parms{};

	Parms.GalleryImage = GalleryImage;
	Parms.GallerySize = GallerySize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioImageLibrary.GetAvatarSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture*                    Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioAvatarSize        AvatarSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UModioImageLibrary::GetAvatarSize(class UTexture* Avatar, enum class EModioAvatarSize AvatarSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageLibrary", "GetAvatarSize");

	Params::UModioImageLibrary_GetAvatarSize_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.AvatarSize = AvatarSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioInstallationOverride
// (None)

class UClass* UModioInstallationOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioInstallationOverride");

	return Clss;
}


// ModioInstallationOverride Modio.Default__ModioInstallationOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioInstallationOverride* UModioInstallationOverride::GetDefaultObj()
{
	static class UModioInstallationOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioInstallationOverride*>(UModioInstallationOverride::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioInstallationOverride.OverrideModInstallationDirectory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      NewInstallPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioInitializeOptions     InitParams                                                       (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioInstallationOverride::OverrideModInstallationDirectory(const class FString& NewInstallPath, const struct FModioInitializeOptions& InitParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioInstallationOverride", "OverrideModInstallationDirectory");

	Params::UModioInstallationOverride_OverrideModInstallationDirectory_Params Parms{};

	Parms.NewInstallPath = NewInstallPath;
	Parms.InitParams = InitParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioModCollectionLibrary
// (None)

class UClass* UModioModCollectionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModCollectionLibrary");

	return Clss;
}


// ModioModCollectionLibrary Modio.Default__ModioModCollectionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModCollectionLibrary* UModioModCollectionLibrary::GetDefaultObj()
{
	static class UModioModCollectionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModCollectionLibrary*>(UModioModCollectionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioModCollectionLibrary.GetPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModCollectionEntry    Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioModCollectionLibrary::GetPath(struct FModioModCollectionEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionLibrary", "GetPath");

	Params::UModioModCollectionLibrary_GetPath_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModCollectionLibrary.GetModState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModCollectionEntry    Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioModState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioModState UModioModCollectionLibrary::GetModState(struct FModioModCollectionEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionLibrary", "GetModState");

	Params::UModioModCollectionLibrary_GetModState_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModCollectionLibrary.GetModProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModCollectionEntry    Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModInfo               ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FModioModInfo UModioModCollectionLibrary::GetModProfile(struct FModioModCollectionEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionLibrary", "GetModProfile");

	Params::UModioModCollectionLibrary_GetModProfile_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModCollectionLibrary.GetId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModCollectionEntry    Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModID                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioModID UModioModCollectionLibrary::GetId(struct FModioModCollectionEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionLibrary", "GetId");

	Params::UModioModCollectionLibrary_GetId_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioModDependenciesLibrary
// (None)

class UClass* UModioModDependenciesLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDependenciesLibrary");

	return Clss;
}


// ModioModDependenciesLibrary Modio.Default__ModioModDependenciesLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDependenciesLibrary* UModioModDependenciesLibrary::GetDefaultObj()
{
	static class UModioModDependenciesLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDependenciesLibrary*>(UModioModDependenciesLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioModDependenciesLibrary.GetPagedResult
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModDependencyList     ModTags                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioPagedResult           ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioPagedResult UModioModDependenciesLibrary::GetPagedResult(struct FModioModDependencyList& ModTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDependenciesLibrary", "GetPagedResult");

	Params::UModioModDependenciesLibrary_GetPagedResult_Params Parms{};

	Parms.ModTags = ModTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModDependenciesLibrary.GetDependencies
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModDependencyList     ModTags                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FModioModDependency> ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FModioModDependency> UModioModDependenciesLibrary::GetDependencies(struct FModioModDependencyList& ModTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDependenciesLibrary", "GetDependencies");

	Params::UModioModDependenciesLibrary_GetDependencies_Params Parms{};

	Parms.ModTags = ModTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioModInfoListLibrary
// (None)

class UClass* UModioModInfoListLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModInfoListLibrary");

	return Clss;
}


// ModioModInfoListLibrary Modio.Default__ModioModInfoListLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModInfoListLibrary* UModioModInfoListLibrary::GetDefaultObj()
{
	static class UModioModInfoListLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModInfoListLibrary*>(UModioModInfoListLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioModInfoListLibrary.GetPagedResult
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModInfoList           ModInfoList                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioPagedResult           ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioPagedResult UModioModInfoListLibrary::GetPagedResult(struct FModioModInfoList& ModInfoList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModInfoListLibrary", "GetPagedResult");

	Params::UModioModInfoListLibrary_GetPagedResult_Params Parms{};

	Parms.ModInfoList = ModInfoList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModInfoListLibrary.GetMods
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModInfoList           ModInfoList                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FModioModInfo>       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FModioModInfo> UModioModInfoListLibrary::GetMods(struct FModioModInfoList& ModInfoList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModInfoListLibrary", "GetMods");

	Params::UModioModInfoListLibrary_GetMods_Params Parms{};

	Parms.ModInfoList = ModInfoList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioModProgressInfoLibrary
// (None)

class UClass* UModioModProgressInfoLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModProgressInfoLibrary");

	return Clss;
}


// ModioModProgressInfoLibrary Modio.Default__ModioModProgressInfoLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModProgressInfoLibrary* UModioModProgressInfoLibrary::GetDefaultObj()
{
	static class UModioModProgressInfoLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModProgressInfoLibrary*>(UModioModProgressInfoLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioModProgressInfoLibrary.GetTotalProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModProgressInfo       Info                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EModioModProgressState  State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioUnsigned64 UModioModProgressInfoLibrary::GetTotalProgress(struct FModioModProgressInfo& Info, enum class EModioModProgressState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModProgressInfoLibrary", "GetTotalProgress");

	Params::UModioModProgressInfoLibrary_GetTotalProgress_Params Parms{};

	Parms.Info = Info;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModProgressInfoLibrary.GetCurrentState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModProgressInfo       Info                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EModioModProgressState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioModProgressState UModioModProgressInfoLibrary::GetCurrentState(struct FModioModProgressInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModProgressInfoLibrary", "GetCurrentState");

	Params::UModioModProgressInfoLibrary_GetCurrentState_Params Parms{};

	Parms.Info = Info;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModProgressInfoLibrary.GetCurrentProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModProgressInfo       Info                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EModioModProgressState  State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioUnsigned64 UModioModProgressInfoLibrary::GetCurrentProgress(struct FModioModProgressInfo& Info, enum class EModioModProgressState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModProgressInfoLibrary", "GetCurrentProgress");

	Params::UModioModProgressInfoLibrary_GetCurrentProgress_Params Parms{};

	Parms.Info = Info;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioModTagOptionsLibrary
// (None)

class UClass* UModioModTagOptionsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagOptionsLibrary");

	return Clss;
}


// ModioModTagOptionsLibrary Modio.Default__ModioModTagOptionsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagOptionsLibrary* UModioModTagOptionsLibrary::GetDefaultObj()
{
	static class UModioModTagOptionsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagOptionsLibrary*>(UModioModTagOptionsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioModTagOptionsLibrary.GetTags
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModTagOptions         ModTags                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FModioModTagInfo>    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FModioModTagInfo> UModioModTagOptionsLibrary::GetTags(struct FModioModTagOptions& ModTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagOptionsLibrary", "GetTags");

	Params::UModioModTagOptionsLibrary_GetTags_Params Parms{};

	Parms.ModTags = ModTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioModTagOptionsLibrary.GetPagedResult
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModTagOptions         ModTags                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioPagedResult           ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioPagedResult UModioModTagOptionsLibrary::GetPagedResult(struct FModioModTagOptions& ModTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagOptionsLibrary", "GetPagedResult");

	Params::UModioModTagOptionsLibrary_GetPagedResult_Params Parms{};

	Parms.ModTags = ModTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioOptionalLibrary
// (None)

class UClass* UModioOptionalLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioOptionalLibrary");

	return Clss;
}


// ModioOptionalLibrary Modio.Default__ModioOptionalLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioOptionalLibrary* UModioOptionalLibrary::GetDefaultObj()
{
	static class UModioOptionalLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioOptionalLibrary*>(UModioOptionalLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalUser          OptionalUser                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalUser(struct FModioOptionalUser& OptionalUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalUser");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalUser_Params Parms{};

	Parms.OptionalUser = OptionalUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalTerms         OptionalTerms                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalTerms(struct FModioOptionalTerms& OptionalTerms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalTerms");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalTerms_Params Parms{};

	Parms.OptionalTerms = OptionalTerms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModTagOptions OptionalModTagOptions                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalModTagOptions(struct FModioOptionalModTagOptions& OptionalModTagOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalModTagOptions");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalModTagOptions_Params Parms{};

	Parms.OptionalModTagOptions = OptionalModTagOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModProgressInfoOptionalModProgressInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalModProgressInfo(struct FModioOptionalModProgressInfo& OptionalModProgressInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalModProgressInfo");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalModProgressInfo_Params Parms{};

	Parms.OptionalModProgressInfo = OptionalModProgressInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModInfoList   OptionalModInfoList                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalModInfoList(struct FModioOptionalModInfoList& OptionalModInfoList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalModInfoList");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalModInfoList_Params Parms{};

	Parms.OptionalModInfoList = OptionalModInfoList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModInfo       OptionalModInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalModInfo(struct FModioOptionalModInfo& OptionalModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalModInfo");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalModInfo_Params Parms{};

	Parms.OptionalModInfo = OptionalModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModID         OptionalID                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalModID(struct FModioOptionalModID& OptionalID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalModID");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalModID_Params Parms{};

	Parms.OptionalID = OptionalID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModDependencyListOptionalDependencyList                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalModDependencyList(struct FModioOptionalModDependencyList& OptionalDependencyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalModDependencyList");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalModDependencyList_Params Parms{};

	Parms.OptionalDependencyList = OptionalDependencyList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalImage         OptionalImage                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalImage(struct FModioOptionalImage& OptionalImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalImage");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalImage_Params Parms{};

	Parms.OptionalImage = OptionalImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalGameInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalGameInfo      OptionalGameInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::IsSet_ModioOptionalGameInfo(struct FModioOptionalGameInfo& OptionalGameInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "IsSet_ModioOptionalGameInfo");

	Params::UModioOptionalLibrary_IsSet_ModioOptionalGameInfo_Params Parms{};

	Parms.OptionalGameInfo = OptionalGameInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalUser          OptionalUser                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioUser                  User                                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalUser(struct FModioOptionalUser& OptionalUser, struct FModioUser* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalUser");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalUser_Params Parms{};

	Parms.OptionalUser = OptionalUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (User != nullptr)
		*User = std::move(Parms.User);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalTerms         OptionalTerms                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioTerms                 Terms                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalTerms(struct FModioOptionalTerms& OptionalTerms, struct FModioTerms* Terms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalTerms");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalTerms_Params Parms{};

	Parms.OptionalTerms = OptionalTerms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Terms != nullptr)
		*Terms = std::move(Parms.Terms);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModTagOptions OptionalModTagOptions                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModTagOptions         ModTagOptions                                                    (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalModTagOptions(struct FModioOptionalModTagOptions& OptionalModTagOptions, struct FModioModTagOptions* ModTagOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalModTagOptions");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalModTagOptions_Params Parms{};

	Parms.OptionalModTagOptions = OptionalModTagOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModTagOptions != nullptr)
		*ModTagOptions = std::move(Parms.ModTagOptions);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModProgressInfoOptionalModProgressInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModProgressInfo       ModProgressInfo                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalModProgressInfo(struct FModioOptionalModProgressInfo& OptionalModProgressInfo, struct FModioModProgressInfo* ModProgressInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalModProgressInfo");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalModProgressInfo_Params Parms{};

	Parms.OptionalModProgressInfo = OptionalModProgressInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModProgressInfo != nullptr)
		*ModProgressInfo = std::move(Parms.ModProgressInfo);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModInfoList   OptionalModInfoList                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModInfoList           ModInfoList                                                      (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalModInfoList(struct FModioOptionalModInfoList& OptionalModInfoList, struct FModioModInfoList* ModInfoList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalModInfoList");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalModInfoList_Params Parms{};

	Parms.OptionalModInfoList = OptionalModInfoList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModInfoList != nullptr)
		*ModInfoList = std::move(Parms.ModInfoList);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModInfo       OptionalModInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModInfo               ModInfo                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalModInfo(struct FModioOptionalModInfo& OptionalModInfo, struct FModioModInfo* ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalModInfo");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalModInfo_Params Parms{};

	Parms.OptionalModInfo = OptionalModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModInfo != nullptr)
		*ModInfo = std::move(Parms.ModInfo);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModID         OptionalID                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModID                 ID                                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalModID(struct FModioOptionalModID& OptionalID, struct FModioModID* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalModID");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalModID_Params Parms{};

	Parms.OptionalID = OptionalID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModDependencyListOptionalDependencyList                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioModDependencyList     DependencyList                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalModDependencyList(struct FModioOptionalModDependencyList& OptionalDependencyList, struct FModioModDependencyList* DependencyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalModDependencyList");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalModDependencyList_Params Parms{};

	Parms.OptionalDependencyList = OptionalDependencyList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DependencyList != nullptr)
		*DependencyList = std::move(Parms.DependencyList);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalImage         OptionalImage                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioImageWrapper          Image                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalImage(struct FModioOptionalImage& OptionalImage, struct FModioImageWrapper* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalImage");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalImage_Params Parms{};

	Parms.OptionalImage = OptionalImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Image != nullptr)
		*Image = std::move(Parms.Image);

	return Parms.ReturnValue;

}


// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalGameInfo
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalGameInfo      OptionalGameInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioGameInfo              GameInfo                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioOptionalLibrary::GetValue_ModioOptionalGameInfo(struct FModioOptionalGameInfo& OptionalGameInfo, struct FModioGameInfo* GameInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOptionalLibrary", "GetValue_ModioOptionalGameInfo");

	Params::UModioOptionalLibrary_GetValue_ModioOptionalGameInfo_Params Parms{};

	Parms.OptionalGameInfo = OptionalGameInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameInfo != nullptr)
		*GameInfo = std::move(Parms.GameInfo);

	return Parms.ReturnValue;

}


// Class Modio.ModioPopupBase
// (None)

class UClass* UModioPopupBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPopupBase");

	return Clss;
}


// ModioPopupBase Modio.Default__ModioPopupBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPopupBase* UModioPopupBase::GetDefaultObj()
{
	static class UModioPopupBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPopupBase*>(UModioPopupBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Modio.ModioPopupContainer
// (None)

class UClass* UModioPopupContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPopupContainer");

	return Clss;
}


// ModioPopupContainer Modio.Default__ModioPopupContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPopupContainer* UModioPopupContainer::GetDefaultObj()
{
	static class UModioPopupContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPopupContainer*>(UModioPopupContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioPopupContainer.PushPopup
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UModioPopupBase> PopupClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UModioPopupBase*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioPopupBase* UModioPopupContainer::PushPopup(TSubclassOf<class UModioPopupBase> PopupClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPopupContainer", "PushPopup");

	Params::UModioPopupContainer_PushPopup_Params Parms{};

	Parms.PopupClass = PopupClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioPopupContainer.PopPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UModioPopupBase> PopupClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UModioPopupBase*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioPopupBase* UModioPopupContainer::PopPopup(TSubclassOf<class UModioPopupBase> PopupClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPopupContainer", "PopPopup");

	Params::UModioPopupContainer_PopPopup_Params Parms{};

	Parms.PopupClass = PopupClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioReportLibrary
// (None)

class UClass* UModioReportLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioReportLibrary");

	return Clss;
}


// ModioReportLibrary Modio.Default__ModioReportLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioReportLibrary* UModioReportLibrary::GetDefaultObj()
{
	static class UModioReportLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioReportLibrary*>(UModioReportLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioReportLibrary.MakeReportForUser
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUserID                User                                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioReportType        Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportDescription                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReporterName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReporterContact                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioReportParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioReportParams UModioReportLibrary::MakeReportForUser(const struct FModioUserID& User, enum class EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioReportLibrary", "MakeReportForUser");

	Params::UModioReportLibrary_MakeReportForUser_Params Parms{};

	Parms.User = User;
	Parms.Type = Type;
	Parms.ReportDescription = ReportDescription;
	Parms.ReporterName = ReporterName;
	Parms.ReporterContact = ReporterContact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioReportLibrary.MakeReportForMod
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioModID                 Mod                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioReportType        Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportDescription                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReporterName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReporterContact                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioReportParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioReportParams UModioReportLibrary::MakeReportForMod(const struct FModioModID& Mod, enum class EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioReportLibrary", "MakeReportForMod");

	Params::UModioReportLibrary_MakeReportForMod_Params Parms{};

	Parms.Mod = Mod;
	Parms.Type = Type;
	Parms.ReportDescription = ReportDescription;
	Parms.ReporterName = ReporterName;
	Parms.ReporterContact = ReporterContact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioReportLibrary.MakeReportForGame
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioGameID                Game                                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioReportType        Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportDescription                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReporterName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReporterContact                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioReportParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioReportParams UModioReportLibrary::MakeReportForGame(const struct FModioGameID& Game, enum class EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioReportLibrary", "MakeReportForGame");

	Params::UModioReportLibrary_MakeReportForGame_Params Parms{};

	Parms.Game = Game;
	Parms.Type = Type;
	Parms.ReportDescription = ReportDescription;
	Parms.ReporterName = ReporterName;
	Parms.ReporterContact = ReporterContact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioSDKLibrary
// (None)

class UClass* UModioSDKLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSDKLibrary");

	return Clss;
}


// ModioSDKLibrary Modio.Default__ModioSDKLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSDKLibrary* UModioSDKLibrary::GetDefaultObj()
{
	static class UModioSDKLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSDKLibrary*>(UModioSDKLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioSDKLibrary.RoundNumberString
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        InputText                                                        (Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioSDKLibrary::RoundNumberString(class FText InputText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "RoundNumberString");

	Params::UModioSDKLibrary_RoundNumberString_Params Parms{};

	Parms.InputText = InputText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.Pct_Int64Int64
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Dividend                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Divisor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioSDKLibrary::Pct_Int64Int64(int64 Dividend, int64 Divisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "Pct_Int64Int64");

	Params::UModioSDKLibrary_Pct_Int64Int64_Params Parms{};

	Parms.Dividend = Dividend;
	Parms.Divisor = Divisor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.IsValidSecurityCodeFormat
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioSDKLibrary::IsValidSecurityCodeFormat(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "IsValidSecurityCodeFormat");

	Params::UModioSDKLibrary_IsValidSecurityCodeFormat_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.IsValidEmailAddressFormat
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioSDKLibrary::IsValidEmailAddressFormat(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "IsValidEmailAddressFormat");

	Params::UModioSDKLibrary_IsValidEmailAddressFormat_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SessionID                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioInitializeOptions     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptionsForSessionId(const class FString& SessionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "GetProjectInitializeOptionsForSessionId");

	Params::UModioSDKLibrary_GetProjectInitializeOptionsForSessionId_Params Parms{};

	Parms.SessionID = SessionID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.GetProjectInitializeOptions
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioInitializeOptions     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "GetProjectInitializeOptions");

	Params::UModioSDKLibrary_GetProjectInitializeOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.GetProjectGameId
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioGameID                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioGameID UModioSDKLibrary::GetProjectGameId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "GetProjectGameId");

	Params::UModioSDKLibrary_GetProjectGameId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.GetProjectEnvironment
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EModioEnvironment       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioEnvironment UModioSDKLibrary::GetProjectEnvironment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "GetProjectEnvironment");

	Params::UModioSDKLibrary_GetProjectEnvironment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.GetProjectApiKey
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioApiKey                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioApiKey UModioSDKLibrary::GetProjectApiKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "GetProjectApiKey");

	Params::UModioSDKLibrary_GetProjectApiKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.GetDesiredFileSizeUnit
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Filesize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFileSizeUnit           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFileSizeUnit UModioSDKLibrary::GetDesiredFileSizeUnit(int64 Filesize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "GetDesiredFileSizeUnit");

	Params::UModioSDKLibrary_GetDesiredFileSizeUnit_Params Parms{};

	Parms.Filesize = Filesize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.Filesize_ToString
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Filesize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinDecimals                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxDecimals                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFileSizeUnit           Unit                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeUnitName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioSDKLibrary::Filesize_ToString(int64 Filesize, int32 MinDecimals, int32 MaxDecimals, enum class EFileSizeUnit Unit, bool bIncludeUnitName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "Filesize_ToString");

	Params::UModioSDKLibrary_Filesize_ToString_Params Parms{};

	Parms.Filesize = Filesize;
	Parms.MinDecimals = MinDecimals;
	Parms.MaxDecimals = MaxDecimals;
	Parms.Unit = Unit;
	Parms.bIncludeUnitName = bIncludeUnitName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.Conv_Int64ToText
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAlwaysSign                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseGrouping                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinimumIntegralDigits                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaximumIntegralDigits                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioSDKLibrary::Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "Conv_Int64ToText");

	Params::UModioSDKLibrary_Conv_Int64ToText_Params Parms{};

	Parms.Value = Value;
	Parms.bAlwaysSign = bAlwaysSign;
	Parms.bUseGrouping = bUseGrouping;
	Parms.MinimumIntegralDigits = MinimumIntegralDigits;
	Parms.MaximumIntegralDigits = MaximumIntegralDigits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSDKLibrary.Conv_Int64ToString
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              InInt                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UModioSDKLibrary::Conv_Int64ToString(int64 InInt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSDKLibrary", "Conv_Int64ToString");

	Params::UModioSDKLibrary_Conv_Int64ToString_Params Parms{};

	Parms.InInt = InInt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Modio.ModioSettings
// (None)

class UClass* UModioSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSettings");

	return Clss;
}


// ModioSettings Modio.Default__ModioSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSettings* UModioSettings::GetDefaultObj()
{
	static class UModioSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSettings*>(UModioSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Modio.ModioSubsystem
// (None)

class UClass* UModioSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSubsystem");

	return Clss;
}


// ModioSubsystem Modio.Default__ModioSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSubsystem* UModioSubsystem::GetDefaultObj()
{
	static class UModioSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSubsystem*>(UModioSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioSubsystem.SetLogLevel
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EModioLogLevel          UnrealLogLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioSubsystem::SetLogLevel(enum class EModioLogLevel UnrealLogLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "SetLogLevel");

	Params::UModioSubsystem_SetLogLevel_Params Parms{};

	Parms.UnrealLogLevel = UnrealLogLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.RunPendingHandlers
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UModioSubsystem::RunPendingHandlers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "RunPendingHandlers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.QueryUserSubscriptions
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FModioModID, struct FModioModCollectionEntry>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QueryUserSubscriptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "QueryUserSubscriptions");

	Params::UModioSubsystem_QueryUserSubscriptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.QueryUserInstallations
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bIncludeOutdatedMods                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FModioModID, struct FModioModCollectionEntry>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QueryUserInstallations(bool bIncludeOutdatedMods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "QueryUserInstallations");

	Params::UModioSubsystem_QueryUserInstallations_Params Parms{};

	Parms.bIncludeOutdatedMods = bIncludeOutdatedMods;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.QuerySystemInstallations
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FModioModID, struct FModioModCollectionEntry>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QuerySystemInstallations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "QuerySystemInstallations");

	Params::UModioSubsystem_QuerySystemInstallations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.PrioritizeTransferForMod
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModToPrioritize                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioErrorCode UModioSubsystem::PrioritizeTransferForMod(const struct FModioModID& ModToPrioritize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "PrioritizeTransferForMod");

	Params::UModioSubsystem_PrioritizeTransferForMod_Params Parms{};

	Parms.ModToPrioritize = ModToPrioritize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.KillBackgroundThread
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UModioSubsystem::KillBackgroundThread()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "KillBackgroundThread");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_VerifyUserAuthenticationAsync(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_VerifyUserAuthenticationAsync");

	Params::UModioSubsystem_K2_VerifyUserAuthenticationAsync_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_UnsubscribeFromModAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModToUnsubscribeFrom                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnUnsubscribeComplete                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_UnsubscribeFromModAsync(const struct FModioModID& ModToUnsubscribeFrom, FDelegateProperty_ OnUnsubscribeComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_UnsubscribeFromModAsync");

	Params::UModioSubsystem_K2_UnsubscribeFromModAsync_Params Parms{};

	Parms.ModToUnsubscribeFrom = ModToUnsubscribeFrom;
	Parms.OnUnsubscribeComplete = OnUnsubscribeComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_UnmuteUserAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioUserID                UserID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_UnmuteUserAsync(const struct FModioUserID& UserID, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_UnmuteUserAsync");

	Params::UModioSubsystem_K2_UnmuteUserAsync_Params Parms{};

	Parms.UserID = UserID;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_SubscribeToModAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModToSubscribeTo                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSubscribeComplete                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_SubscribeToModAsync(const struct FModioModID& ModToSubscribeTo, FDelegateProperty_ OnSubscribeComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_SubscribeToModAsync");

	Params::UModioSubsystem_K2_SubscribeToModAsync_Params Parms{};

	Parms.ModToSubscribeTo = ModToSubscribeTo;
	Parms.OnSubscribeComplete = OnSubscribeComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_SubmitNewModFileForMod
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 Mod                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioCreateModFileParams   Params                                                           (Parm, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_SubmitNewModFileForMod(const struct FModioModID& Mod, const struct FModioCreateModFileParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_SubmitNewModFileForMod");

	Params::UModioSubsystem_K2_SubmitNewModFileForMod_Params Parms{};

	Parms.Mod = Mod;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_SubmitNewModAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModCreationHandle     Handle                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioCreateModParams       Params                                                           (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_SubmitNewModAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_SubmitNewModAsync");

	Params::UModioSubsystem_K2_SubmitNewModAsync_Params Parms{};

	Parms.Handle = Handle;
	Parms.Params = Params;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_SubmitModRatingAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 Mod                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioRating            Rating                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_SubmitModRatingAsync(const struct FModioModID& Mod, enum class EModioRating Rating, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_SubmitModRatingAsync");

	Params::UModioSubsystem_K2_SubmitModRatingAsync_Params Parms{};

	Parms.Mod = Mod;
	Parms.Rating = Rating;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_SubmitModChangesAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 Mod                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioEditModParams         Params                                                           (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_SubmitModChangesAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_SubmitModChangesAsync");

	Params::UModioSubsystem_K2_SubmitModChangesAsync_Params Parms{};

	Parms.Mod = Mod;
	Parms.Params = Params;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_ShutdownAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnShutdownComplete                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_ShutdownAsync(FDelegateProperty_ OnShutdownComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_ShutdownAsync");

	Params::UModioSubsystem_K2_ShutdownAsync_Params Parms{};

	Parms.OnShutdownComplete = OnShutdownComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEmailAddress          EmailAddress                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_RequestEmailAuthCodeAsync(struct FModioEmailAddress& EmailAddress, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_RequestEmailAuthCodeAsync");

	Params::UModioSubsystem_K2_RequestEmailAuthCodeAsync_Params Parms{};

	Parms.EmailAddress = EmailAddress;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_ReportContentAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioReportParams          Report                                                           (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_ReportContentAsync(const struct FModioReportParams& Report, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_ReportContentAsync");

	Params::UModioSubsystem_K2_ReportContentAsync_Params Parms{};

	Parms.Report = Report;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_QueryUserProfile
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalUser          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioOptionalUser UModioSubsystem::K2_QueryUserProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_QueryUserProfile");

	Params::UModioSubsystem_K2_QueryUserProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.K2_QueryCurrentModUpdate
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioOptionalModProgressInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioOptionalModProgressInfo UModioSubsystem::K2_QueryCurrentModUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_QueryCurrentModUpdate");

	Params::UModioSubsystem_K2_QueryCurrentModUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.K2_MuteUserAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioUserID                UserID                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_MuteUserAsync(const struct FModioUserID& UserID, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_MuteUserAsync");

	Params::UModioSubsystem_K2_MuteUserAsync_Params Parms{};

	Parms.UserID = UserID;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_ListUserCreatedModsAsync
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          Filter                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_ListUserCreatedModsAsync(struct FModioFilterParams& Filter, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_ListUserCreatedModsAsync");

	Params::UModioSubsystem_K2_ListUserCreatedModsAsync_Params Parms{};

	Parms.Filter = Filter;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_ListAllModsAsync
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          Filter                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_ListAllModsAsync(struct FModioFilterParams& Filter, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_ListAllModsAsync");

	Params::UModioSubsystem_K2_ListAllModsAsync_Params Parms{};

	Parms.Filter = Filter;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_InitializeAsync
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioInitializeOptions     InitializeOptions                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnInitComplete                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_InitializeAsync(struct FModioInitializeOptions& InitializeOptions, FDelegateProperty_ OnInitComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_InitializeAsync");

	Params::UModioSubsystem_K2_InitializeAsync_Params Parms{};

	Parms.InitializeOptions = InitializeOptions;
	Parms.OnInitComplete = OnInitComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EModioAvatarSize        AvatarSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetUserMediaAvatarAsync(enum class EModioAvatarSize AvatarSize, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetUserMediaAvatarAsync");

	Params::UModioSubsystem_K2_GetUserMediaAvatarAsync_Params Parms{};

	Parms.AvatarSize = AvatarSize;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetTermsOfUseAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EModioAuthenticationProviderProvider                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLanguage          Locale                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetTermsOfUseAsync(enum class EModioAuthenticationProvider Provider, enum class EModioLanguage Locale, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetTermsOfUseAsync");

	Params::UModioSubsystem_K2_GetTermsOfUseAsync_Params Parms{};

	Parms.Provider = Provider;
	Parms.Locale = Locale;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetMutedUsersAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetMutedUsersAsync(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetMutedUsersAsync");

	Params::UModioSubsystem_K2_GetMutedUsersAsync_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetModTagOptionsAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetModTagOptionsAsync(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetModTagOptionsAsync");

	Params::UModioSubsystem_K2_GetModTagOptionsAsync_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetModMediaLogoAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          LogoSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetModMediaLogoAsync(const struct FModioModID& ModId, enum class EModioLogoSize LogoSize, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetModMediaLogoAsync");

	Params::UModioSubsystem_K2_GetModMediaLogoAsync_Params Parms{};

	Parms.ModId = ModId;
	Parms.LogoSize = LogoSize;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioGallerySize       GallerySize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetModMediaGalleryImageAsync(const struct FModioModID& ModId, enum class EModioGallerySize GallerySize, int32 Index, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetModMediaGalleryImageAsync");

	Params::UModioSubsystem_K2_GetModMediaGalleryImageAsync_Params Parms{};

	Parms.ModId = ModId;
	Parms.GallerySize = GallerySize;
	Parms.Index = Index;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetModMediaAvatarAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioAvatarSize        AvatarSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetModMediaAvatarAsync(const struct FModioModID& ModId, enum class EModioAvatarSize AvatarSize, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetModMediaAvatarAsync");

	Params::UModioSubsystem_K2_GetModMediaAvatarAsync_Params Parms{};

	Parms.ModId = ModId;
	Parms.AvatarSize = AvatarSize;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetModInfoAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetModInfoAsync(const struct FModioModID& ModId, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetModInfoAsync");

	Params::UModioSubsystem_K2_GetModInfoAsync_Params Parms{};

	Parms.ModId = ModId;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetModDependenciesAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetModDependenciesAsync(const struct FModioModID& ModId, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetModDependenciesAsync");

	Params::UModioSubsystem_K2_GetModDependenciesAsync_Params Parms{};

	Parms.ModId = ModId;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_GetModCreationHandle
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModCreationHandle     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FModioModCreationHandle UModioSubsystem::K2_GetModCreationHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetModCreationHandle");

	Params::UModioSubsystem_K2_GetModCreationHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.K2_GetGameInfoAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioGameID                GameId                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_GetGameInfoAsync(const struct FModioGameID& GameId, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_GetGameInfoAsync");

	Params::UModioSubsystem_K2_GetGameInfoAsync_Params Parms{};

	Parms.GameId = GameId;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_ForceUninstallModAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ModToRemove                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_ForceUninstallModAsync(const struct FModioModID& ModToRemove, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_ForceUninstallModAsync");

	Params::UModioSubsystem_K2_ForceUninstallModAsync_Params Parms{};

	Parms.ModToRemove = ModToRemove;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnFetchDone                                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_FetchExternalUpdatesAsync(FDelegateProperty_ OnFetchDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_FetchExternalUpdatesAsync");

	Params::UModioSubsystem_K2_FetchExternalUpdatesAsync_Params Parms{};

	Parms.OnFetchDone = OnFetchDone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_EnableModManagement
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioErrorCode UModioSubsystem::K2_EnableModManagement(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_EnableModManagement");

	Params::UModioSubsystem_K2_EnableModManagement_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.K2_ClearUserDataAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_ClearUserDataAsync(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_ClearUserDataAsync");

	Params::UModioSubsystem_K2_ClearUserDataAsync_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioAuthenticationParams  User                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EModioAuthenticationProviderProvider                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_AuthenticateUserExternalAsync(struct FModioAuthenticationParams& User, enum class EModioAuthenticationProvider Provider, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_AuthenticateUserExternalAsync");

	Params::UModioSubsystem_K2_AuthenticateUserExternalAsync_Params Parms{};

	Parms.User = User;
	Parms.Provider = Provider;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioEmailAuthCode         AuthenticationCode                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_AuthenticateUserEmailAsync(struct FModioEmailAuthCode& AuthenticationCode, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_AuthenticateUserEmailAsync");

	Params::UModioSubsystem_K2_AuthenticateUserEmailAsync_Params Parms{};

	Parms.AuthenticationCode = AuthenticationCode;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.K2_ArchiveModAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 Mod                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubsystem::K2_ArchiveModAsync(const struct FModioModID& Mod, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "K2_ArchiveModAsync");

	Params::UModioSubsystem_K2_ArchiveModAsync_Params Parms{};

	Parms.Mod = Mod;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Modio.ModioSubsystem.IsUsingBackgroundThread
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioSubsystem::IsUsingBackgroundThread()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "IsUsingBackgroundThread");

	Params::UModioSubsystem_IsUsingBackgroundThread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.IsModManagementBusy
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioSubsystem::IsModManagementBusy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "IsModManagementBusy");

	Params::UModioSubsystem_IsModManagementBusy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.GetLastValidationError
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModioValidationError>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FModioValidationError> UModioSubsystem::GetLastValidationError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "GetLastValidationError");

	Params::UModioSubsystem_GetLastValidationError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioSubsystem.DisableModManagement
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UModioSubsystem::DisableModManagement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubsystem", "DisableModManagement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Modio.ModioUnsigned64Library
// (None)

class UClass* UModioUnsigned64Library::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUnsigned64Library");

	return Clss;
}


// ModioUnsigned64Library Modio.Default__ModioUnsigned64Library
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUnsigned64Library* UModioUnsigned64Library::GetDefaultObj()
{
	static class UModioUnsigned64Library* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUnsigned64Library*>(UModioUnsigned64Library::StaticClass()->DefaultObject);

	return Default;
}


// Function Modio.ModioUnsigned64Library.Subtract
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioUnsigned64 UModioUnsigned64Library::Subtract(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "Subtract");

	Params::UModioUnsigned64Library_Subtract_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.Percentage_Unsigned64
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioUnsigned64Library::Percentage_Unsigned64(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "Percentage_Unsigned64");

	Params::UModioUnsigned64Library_Percentage_Unsigned64_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.NotEqualTo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUnsigned64Library::NotEqualTo(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "NotEqualTo");

	Params::UModioUnsigned64Library_NotEqualTo_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.MakeFromComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              High                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Low                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioUnsigned64 UModioUnsigned64Library::MakeFromComponents(int32& High, int32& Low)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "MakeFromComponents");

	Params::UModioUnsigned64Library_MakeFromComponents_Params Parms{};

	Parms.High = High;
	Parms.Low = Low;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.LessThan
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUnsigned64Library::LessThan(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "LessThan");

	Params::UModioUnsigned64Library_LessThan_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.GreaterThan
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUnsigned64Library::GreaterThan(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "GreaterThan");

	Params::UModioUnsigned64Library_GreaterThan_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.EqualTo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUnsigned64Library::EqualTo(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "EqualTo");

	Params::UModioUnsigned64Library_EqualTo_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.DivideToFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioUnsigned64Library::DivideToFloat(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "DivideToFloat");

	Params::UModioUnsigned64Library_DivideToFloat_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.DivideFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              RHS                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioUnsigned64Library::DivideFloat(struct FModioUnsigned64& LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "DivideFloat");

	Params::UModioUnsigned64Library_DivideFloat_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.Divide
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioUnsigned64 UModioUnsigned64Library::Divide(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "Divide");

	Params::UModioUnsigned64Library_Divide_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioUnsigned64Library::Conv_FModioUnsigned64ToFloat(struct FModioUnsigned64& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "Conv_FModioUnsigned64ToFloat");

	Params::UModioUnsigned64Library_Conv_FModioUnsigned64ToFloat_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Modio.ModioUnsigned64Library.BreakToComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              High                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Low                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUnsigned64Library::BreakToComponents(struct FModioUnsigned64& In, int32* High, int32* Low)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "BreakToComponents");

	Params::UModioUnsigned64Library_BreakToComponents_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (High != nullptr)
		*High = Parms.High;

	if (Low != nullptr)
		*Low = Parms.Low;

}


// Function Modio.ModioUnsigned64Library.Add
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioUnsigned64            LHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            RHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioUnsigned64 UModioUnsigned64Library::Add(struct FModioUnsigned64& LHS, struct FModioUnsigned64& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUnsigned64Library", "Add");

	Params::UModioUnsigned64Library_Add_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


