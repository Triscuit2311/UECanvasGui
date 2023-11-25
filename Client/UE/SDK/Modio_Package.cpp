/**
 * Name: ReadyOrNot
 * Version: 2
 */

#include "../SDK.h"

namespace SDK
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.ListUserSubscriptionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          FilterParams                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioExampleLibrary::ListUserSubscriptionAsync(const struct FModioFilterParams& FilterParams, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13597);
		
		struct
		{
			struct FModioFilterParams                          FilterParams;
			class FScriptDelegate                              Callback;
		} params;
		params.FilterParams = FilterParams;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.GetLogoThumbnailSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioLogoSize                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EModioLogoSize UModioExampleLibrary::GetLogoThumbnailSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13596);
		
		struct
		{
			EModioLogoSize                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.GetLogoFullSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioLogoSize                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EModioLogoSize UModioExampleLibrary::GetLogoFullSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13595);
		
		struct
		{
			EModioLogoSize                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.GetAvatarThumbnailSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioAvatarSize                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EModioAvatarSize UModioExampleLibrary::GetAvatarThumbnailSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13594);
		
		struct
		{
			EModioAvatarSize                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioExampleLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioExampleLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(444);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.SetSessionIdentifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioInitializeOptions                     Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioInitializeOptions                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioCommonTypesLibrary::SetSessionIdentifier(const struct FModioInitializeOptions& Options, const class FString& SessionIdentifier)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13571);
		
		struct
		{
			struct FModioInitializeOptions                     Options;
			class FString                                      SessionIdentifier;
			struct FModioInitializeOptions                     ReturnValue;
		} params;
		params.Options = Options;
		params.SessionIdentifier = SessionIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.SetPortal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioInitializeOptions                     Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioPortal                                       PortalToUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioInitializeOptions                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioCommonTypesLibrary::SetPortal(const struct FModioInitializeOptions& Options, EModioPortal PortalToUse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13570);
		
		struct
		{
			struct FModioInitializeOptions                     Options;
			EModioPortal                                       PortalToUse;
			unsigned char                                      UnknownData_0000[0x7];
			struct FModioInitializeOptions                     ReturnValue;
		} params;
		params.Options = Options;
		params.PortalToUse = PortalToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.NotEqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioCommonTypesLibrary::NotEqualTo(const struct FModioModID& A, const struct FModioModID& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13569);
		
		struct
		{
			struct FModioModID                                 A;
			struct FModioModID                                 B;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeInitializeOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            GameId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ApiKey                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioEnvironment                                  GameEnvironment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioPortal                                       PortalInUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioInitializeOptions                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioCommonTypesLibrary::MakeInitializeOptions(int64_t GameId, const class FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13568);
		
		struct
		{
			int64_t                                            GameId;
			class FString                                      ApiKey;
			EModioEnvironment                                  GameEnvironment;
			EModioPortal                                       PortalInUse;
			unsigned char                                      UnknownData_0001[0x6];
			struct FModioInitializeOptions                     ReturnValue;
		} params;
		params.GameId = GameId;
		params.ApiKey = ApiKey;
		params.GameEnvironment = GameEnvironment;
		params.PortalInUse = PortalInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeGameId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            GameId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioGameID                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioGameID UModioCommonTypesLibrary::MakeGameId(int64_t GameId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13567);
		
		struct
		{
			int64_t                                            GameId;
			struct FModioGameID                                ReturnValue;
		} params;
		params.GameId = GameId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeAuthParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AuthToken                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EmailAddress                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAcceptedTOS                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioAuthenticationParams                  ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioAuthenticationParams UModioCommonTypesLibrary::MakeAuthParams(const class FString& AuthToken, const class FString& EmailAddress, bool bHasAcceptedTOS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13566);
		
		struct
		{
			class FString                                      AuthToken;
			class FString                                      EmailAddress;
			bool                                               bHasAcceptedTOS;
			unsigned char                                      UnknownData_0002[0x7];
			struct FModioAuthenticationParams                  ReturnValue;
		} params;
		params.AuthToken = AuthToken;
		params.EmailAddress = EmailAddress;
		params.bHasAcceptedTOS = bHasAcceptedTOS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeApiKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ApiKey                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioApiKey                                ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioApiKey UModioCommonTypesLibrary::MakeApiKey(const class FString& ApiKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13565);
		
		struct
		{
			class FString                                      ApiKey;
			struct FModioApiKey                                ReturnValue;
		} params;
		params.ApiKey = ApiKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.GetRawValueFromModID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UModioCommonTypesLibrary::GetRawValueFromModID(const struct FModioModID& In)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13564);
		
		struct
		{
			struct FModioModID                                 In;
			int64_t                                            ReturnValue;
		} params;
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.EqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioCommonTypesLibrary::EqualTo(const struct FModioModID& A, const struct FModioModID& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13563);
		
		struct
		{
			struct FModioModID                                 A;
			struct FModioModID                                 B;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_UserIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUserID                                UserID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_UserIDToString(const struct FModioUserID& UserID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13562);
		
		struct
		{
			struct FModioUserID                                UserID;
			class FString                                      ReturnValue;
		} params;
		params.UserID = UserID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioEmailAuthCode                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioEmailAuthCode UModioCommonTypesLibrary::Conv_StringToEmailAuthCode(const class FString& AuthCode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13561);
		
		struct
		{
			class FString                                      AuthCode;
			struct FModioEmailAuthCode                         ReturnValue;
		} params;
		params.AuthCode = AuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EMail                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioEmailAddress                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioEmailAddress UModioCommonTypesLibrary::Conv_StringToEmailAddress(const class FString& EMail)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13560);
		
		struct
		{
			class FString                                      EMail;
			struct FModioEmailAddress                          ReturnValue;
		} params;
		params.EMail = EMail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_ModIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_ModIDToString(const struct FModioModID& ModId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13559);
		
		struct
		{
			struct FModioModID                                 ModId;
			class FString                                      ReturnValue;
		} params;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_GameIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioGameID                                GameId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_GameIDToString(const struct FModioGameID& GameId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13558);
		
		struct
		{
			struct FModioGameID                                GameId;
			class FString                                      ReturnValue;
		} params;
		params.GameId = GameId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFileMetadataID                        FileMetadataID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_FileMetadataIDToString(const struct FModioFileMetadataID& FileMetadataID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13557);
		
		struct
		{
			struct FModioFileMetadataID                        FileMetadataID;
			class FString                                      ReturnValue;
		} params;
		params.FileMetadataID = FileMetadataID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAuthCode                         EmailAuthCode                                              (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_EmailAuthCodeToString(const struct FModioEmailAuthCode& EmailAuthCode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13556);
		
		struct
		{
			struct FModioEmailAuthCode                         EmailAuthCode;
			class FString                                      ReturnValue;
		} params;
		params.EmailAuthCode = EmailAuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAddress                          EmailAddress                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_EmailAddressToString(const struct FModioEmailAddress& EmailAddress)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13555);
		
		struct
		{
			struct FModioEmailAddress                          EmailAddress;
			class FString                                      ReturnValue;
		} params;
		params.EmailAddress = EmailAddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioApiKey                                ApiKey                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_ApiKeyToString(const struct FModioApiKey& ApiKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13554);
		
		struct
		{
			struct FModioApiKey                                ApiKey;
			class FString                                      ReturnValue;
		} params;
		params.ApiKey = ApiKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioCommonTypesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioCommonTypesLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(439);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              NewTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithTags(struct FModioFilterParams* Filter, TArray<class FString> NewTags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13611);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			TArray<class FString>                              NewTags;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.NewTags = NewTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithTag(struct FModioFilterParams* Filter, const class FString& Tag)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13610);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			class FString                                      Tag;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithoutTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              NewTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithoutTags(struct FModioFilterParams* Filter, TArray<class FString> NewTags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13609);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			TArray<class FString>                              NewTags;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.NewTags = NewTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithoutTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithoutTag(struct FModioFilterParams* Filter, const class FString& Tag)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13608);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			class FString                                      Tag;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.SortBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioSortFieldType                                ByField                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioSortDirection                                ByDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::SortBy(struct FModioFilterParams* Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13607);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			EModioSortFieldType                                ByField;
			EModioSortDirection                                ByDirection;
			unsigned char                                      UnknownData_0000[0x6];
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.ByField = ByField;
		params.ByDirection = ByDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.PagedResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int64_t                                            PageNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            PageSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::PagedResults(struct FModioFilterParams* Filter, int64_t PageNumber, int64_t PageSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13606);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			int64_t                                            PageNumber;
			int64_t                                            PageSize;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.PageNumber = PageNumber;
		params.PageSize = PageSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.NameContainsStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SearchStrings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::NameContainsStrings(struct FModioFilterParams* Filter, TArray<class FString> SearchStrings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13605);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			TArray<class FString>                              SearchStrings;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.SearchStrings = SearchStrings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.NameContains
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::NameContains(struct FModioFilterParams* Filter, const class FString& SearchString)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13604);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			class FString                                      SearchString;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MetadataLike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MetadataLike(struct FModioFilterParams* Filter, const class FString& SearchString)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13603);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			class FString                                      SearchString;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MatchingIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModioModID>                         IDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MatchingIDs(struct FModioFilterParams* Filter, TArray<struct FModioModID> IDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13602);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			TArray<struct FModioModID>                         IDs;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.IDs = IDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MarkedLiveBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                      LiveBefore                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MarkedLiveBefore(struct FModioFilterParams* Filter, const struct FDateTime& LiveBefore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13601);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			struct FDateTime                      LiveBefore;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.LiveBefore = LiveBefore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MarkedLiveAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                      LiveAfter                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MarkedLiveAfter(struct FModioFilterParams* Filter, const struct FDateTime& LiveAfter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13600);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			struct FDateTime                      LiveAfter;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.LiveAfter = LiveAfter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.IndexedResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int64_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            ResultCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::IndexedResults(struct FModioFilterParams* Filter, int64_t StartIndex, int64_t ResultCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13599);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			int64_t                                            StartIndex;
			int64_t                                            ResultCount;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.StartIndex = StartIndex;
		params.ResultCount = ResultCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.ExcludingIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModioModID>                         IDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioFilterParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::ExcludingIDs(struct FModioFilterParams* Filter, TArray<struct FModioModID> IDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13598);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			TArray<struct FModioModID>                         IDs;
			struct FModioFilterParams                          ReturnValue;
		} params;
		params.IDs = IDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioFilterParamsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioFilterParamsLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(445);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorCodeLibrary.IsError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioErrorCodeLibrary::IsError(const struct FModioErrorCode& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13592);
		
		struct
		{
			struct FModioErrorCode                             Error;
			bool                                               ReturnValue;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorCodeLibrary.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UModioErrorCodeLibrary::GetValue(const struct FModioErrorCode& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13591);
		
		struct
		{
			struct FModioErrorCode                             Error;
			int32_t                                            ReturnValue;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorCodeLibrary.GetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioErrorCodeLibrary::GetMessage(const struct FModioErrorCode& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13590);
		
		struct
		{
			struct FModioErrorCode                             Error;
			class FString                                      ReturnValue;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioErrorCodeLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioErrorCodeLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(442);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetVersionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Version                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetVersionString(struct FModioCreateModFileParams* In, const class FString& Version)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13581);
		
		struct
		{
			struct FModioCreateModFileParams                   In;
			class FString                                      Version;
		} params;
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tags                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetTags(struct FModioCreateModParams* In, TArray<class FString>* Tags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13580);
		
		struct
		{
			struct FModioCreateModParams                       In;
			TArray<class FString>                              Tags;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
		if (Tags != nullptr)
			*Tags = params.Tags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetModfilePlatforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<EModioModfilePlatform>                      Platforms                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetModfilePlatforms(struct FModioCreateModFileParams* In, TArray<EModioModfilePlatform>* Platforms)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13579);
		
		struct
		{
			struct FModioCreateModFileParams                   In;
			TArray<EModioModfilePlatform>                      Platforms;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
		if (Platforms != nullptr)
			*Platforms = params.Platforms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetModFileMetadataBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetadataBlob                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetModFileMetadataBlob(struct FModioCreateModFileParams* In, const class FString& MetadataBlob)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13578);
		
		struct
		{
			struct FModioCreateModFileParams                   In;
			class FString                                      MetadataBlob;
		} params;
		params.MetadataBlob = MetadataBlob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetMetadataBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetadataBlob                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetMetadataBlob(struct FModioCreateModParams* In, const class FString& MetadataBlob)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13577);
		
		struct
		{
			struct FModioCreateModParams                       In;
			class FString                                      MetadataBlob;
		} params;
		params.MetadataBlob = MetadataBlob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetMarkAsActiveRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkAsActiveRelease                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetMarkAsActiveRelease(struct FModioCreateModFileParams* In, bool bMarkAsActiveRelease)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13576);
		
		struct
		{
			struct FModioCreateModFileParams                   In;
			bool                                               bMarkAsActiveRelease;
		} params;
		params.bMarkAsActiveRelease = bMarkAsActiveRelease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetInitialVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               InitialVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetInitialVisibility(struct FModioCreateModParams* In, bool InitialVisibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13575);
		
		struct
		{
			struct FModioCreateModParams                       In;
			bool                                               InitialVisibility;
		} params;
		params.InitialVisibility = InitialVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetHomepageURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      HomepageURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetHomepageURL(struct FModioCreateModParams* In, const class FString& HomepageURL)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13574);
		
		struct
		{
			struct FModioCreateModParams                       In;
			class FString                                      HomepageURL;
		} params;
		params.HomepageURL = HomepageURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetDescription(struct FModioCreateModParams* In, const class FString& Description)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13573);
		
		struct
		{
			struct FModioCreateModParams                       In;
			class FString                                      Description;
		} params;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetChangelogString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Changelog                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioCreateModLibrary::SetChangelogString(struct FModioCreateModFileParams* In, const class FString& Changelog)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13572);
		
		struct
		{
			struct FModioCreateModFileParams                   In;
			class FString                                      Changelog;
		} params;
		params.Changelog = Changelog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioCreateModLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioCreateModLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(440);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModDependenciesLibrary.GetPagedResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModDependencyList                     ModTags                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioPagedResult                           ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioPagedResult UModioModDependenciesLibrary::GetPagedResult(const struct FModioModDependencyList& ModTags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13624);
		
		struct
		{
			struct FModioModDependencyList                     ModTags;
			struct FModioPagedResult                           ReturnValue;
		} params;
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModDependenciesLibrary.GetDependencies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModDependencyList                     ModTags                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModioModDependency>                 ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FModioModDependency> UModioModDependenciesLibrary::GetDependencies(const struct FModioModDependencyList& ModTags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13623);
		
		struct
		{
			struct FModioModDependencyList                     ModTags;
			TArray<struct FModioModDependency>                 ReturnValue;
		} params;
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModDependenciesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioModDependenciesLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(449);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.LoadAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioImageWrapper                          Image                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnImageLoaded                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioImageLibrary::LoadAsync(const struct FModioImageWrapper& Image, const class FScriptDelegate& OnImageLoaded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13617);
		
		struct
		{
			struct FModioImageWrapper                          Image;
			class FScriptDelegate                              OnImageLoaded;
		} params;
		params.Image = Image;
		params.OnImageLoaded = OnImageLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioImageWrapper                          Image                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UTexture2DDynamic*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2DDynamic* UModioImageLibrary::GetTexture(const struct FModioImageWrapper& Image)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13616);
		
		struct
		{
			struct FModioImageWrapper                          Image;
			class UTexture2DDynamic*                           ReturnValue;
		} params;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioImageWrapper                          Image                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioImageState                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EModioImageState UModioImageLibrary::GetState(const struct FModioImageWrapper& Image)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13615);
		
		struct
		{
			struct FModioImageWrapper                          Image;
			EModioImageState                                   ReturnValue;
		} params;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetLogoSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Logo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioLogoSize                                     LogoSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UModioImageLibrary::GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13614);
		
		struct
		{
			class UTexture*                                    Logo;
			EModioLogoSize                                     LogoSize;
			unsigned char                                      UnknownData_0000[0x3];
			struct FVector2D                      ReturnValue;
		} params;
		params.Logo = Logo;
		params.LogoSize = LogoSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetGallerySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    GalleryImage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioGallerySize                                  GallerySize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UModioImageLibrary::GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13613);
		
		struct
		{
			class UTexture*                                    GalleryImage;
			EModioGallerySize                                  GallerySize;
			unsigned char                                      UnknownData_0001[0x3];
			struct FVector2D                      ReturnValue;
		} params;
		params.GalleryImage = GalleryImage;
		params.GallerySize = GallerySize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetAvatarSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Avatar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UModioImageLibrary::GetAvatarSize(class UTexture* Avatar, EModioAvatarSize AvatarSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13612);
		
		struct
		{
			class UTexture*                                    Avatar;
			EModioAvatarSize                                   AvatarSize;
			unsigned char                                      UnknownData_0002[0x3];
			struct FVector2D                      ReturnValue;
		} params;
		params.Avatar = Avatar;
		params.AvatarSize = AvatarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioImageLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioImageLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(446);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Pct_Int64Int64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Dividend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Divisor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UModioSDKLibrary::Pct_Int64Int64(int64_t Dividend, int64_t Divisor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13662);
		
		struct
		{
			int64_t                                            Dividend;
			int64_t                                            Divisor;
			float                                              ReturnValue;
		} params;
		params.Dividend = Dividend;
		params.Divisor = Divisor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.IsValidSecurityCodeFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioSDKLibrary::IsValidSecurityCodeFormat(const class FString& String)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13661);
		
		struct
		{
			class FString                                      String;
			bool                                               ReturnValue;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.IsValidEmailAddressFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioSDKLibrary::IsValidEmailAddressFormat(const class FString& String)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13660);
		
		struct
		{
			class FString                                      String;
			bool                                               ReturnValue;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionID                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioInitializeOptions                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptionsForSessionId(const class FString& SessionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13659);
		
		struct
		{
			class FString                                      SessionID;
			struct FModioInitializeOptions                     ReturnValue;
		} params;
		params.SessionID = SessionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectInitializeOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioInitializeOptions                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13658);
		
		struct
		{
			struct FModioInitializeOptions                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectGameId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioGameID                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioGameID UModioSDKLibrary::GetProjectGameId()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13657);
		
		struct
		{
			struct FModioGameID                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectEnvironment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioEnvironment                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EModioEnvironment UModioSDKLibrary::GetProjectEnvironment()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13656);
		
		struct
		{
			EModioEnvironment                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectApiKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioApiKey                                ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioApiKey UModioSDKLibrary::GetProjectApiKey()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13655);
		
		struct
		{
			struct FModioApiKey                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Filesize_ToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Filesize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxDecimals                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFileSizeUnit                                      Unit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UModioSDKLibrary::Filesize_ToString(int64_t Filesize, int32_t MaxDecimals, EFileSizeUnit Unit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13654);
		
		struct
		{
			int64_t                                            Filesize;
			int32_t                                            MaxDecimals;
			EFileSizeUnit                                      Unit;
			unsigned char                                      UnknownData_0000[0x3];
			class FText                                        ReturnValue;
		} params;
		params.Filesize = Filesize;
		params.MaxDecimals = MaxDecimals;
		params.Unit = Unit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Conv_Int64ToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlwaysSign                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseGrouping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinimumIntegralDigits                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaximumIntegralDigits                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UModioSDKLibrary::Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13653);
		
		struct
		{
			int64_t                                            Value;
			bool                                               bAlwaysSign;
			bool                                               bUseGrouping;
			unsigned char                                      UnknownData_0001[0x2];
			int32_t                                            MinimumIntegralDigits;
			int32_t                                            MaximumIntegralDigits;
			unsigned char                                      UnknownData_0002[0x4];
			class FText                                        ReturnValue;
		} params;
		params.Value = Value;
		params.bAlwaysSign = bAlwaysSign;
		params.bUseGrouping = bUseGrouping;
		params.MinimumIntegralDigits = MinimumIntegralDigits;
		params.MaximumIntegralDigits = MaximumIntegralDigits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Conv_Int64ToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            inInt                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioSDKLibrary::Conv_Int64ToString(int64_t inInt)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13652);
		
		struct
		{
			int64_t                                            inInt;
			class FString                                      ReturnValue;
		} params;
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioSDKLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioSDKLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(457);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModInfoListLibrary.GetPagedResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModInfoList                           ModInfoList                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioPagedResult                           ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioPagedResult UModioModInfoListLibrary::GetPagedResult(const struct FModioModInfoList& ModInfoList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13626);
		
		struct
		{
			struct FModioModInfoList                           ModInfoList;
			struct FModioPagedResult                           ReturnValue;
		} params;
		params.ModInfoList = ModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModInfoListLibrary.GetMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModInfoList                           ModInfoList                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModioModInfo>                       ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FModioModInfo> UModioModInfoListLibrary::GetMods(const struct FModioModInfoList& ModInfoList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13625);
		
		struct
		{
			struct FModioModInfoList                           ModInfoList;
			TArray<struct FModioModInfo>                       ReturnValue;
		} params;
		params.ModInfoList = ModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModInfoListLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioModInfoListLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(450);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioInstallationOverride.OverrideModInstallationDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewInstallPath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioInitializeOptions                     InitParams                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioInstallationOverride::OverrideModInstallationDirectory(const class FString& NewInstallPath, const struct FModioInitializeOptions& InitParams)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13618);
		
		struct
		{
			class FString                                      NewInstallPath;
			struct FModioInitializeOptions                     InitParams;
			bool                                               ReturnValue;
		} params;
		params.NewInstallPath = NewInstallPath;
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioInstallationOverride.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioInstallationOverride::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(447);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioTestSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioTestSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(462);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(458);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModTagOptionsLibrary.GetTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModTagOptions                         ModTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModioModTagInfo>                    ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FModioModTagInfo> UModioModTagOptionsLibrary::GetTags(const struct FModioModTagOptions& ModTags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13628);
		
		struct
		{
			struct FModioModTagOptions                         ModTags;
			TArray<struct FModioModTagInfo>                    ReturnValue;
		} params;
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModTagOptionsLibrary.GetPagedResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModTagOptions                         ModTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioPagedResult                           ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioPagedResult UModioModTagOptionsLibrary::GetPagedResult(const struct FModioModTagOptions& ModTags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13627);
		
		struct
		{
			struct FModioModTagOptions                         ModTags;
			struct FModioPagedResult                           ReturnValue;
		} params;
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModTagOptionsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioModTagOptionsLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(451);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioModCollectionLibrary::GetPath(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13622);
		
		struct
		{
			struct FModioModCollectionEntry                    Entry;
			class FString                                      ReturnValue;
		} params;
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetModState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioModState                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EModioModState UModioModCollectionLibrary::GetModState(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13621);
		
		struct
		{
			struct FModioModCollectionEntry                    Entry;
			EModioModState                                     ReturnValue;
		} params;
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetModProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModInfo                               ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioModInfo UModioModCollectionLibrary::GetModProfile(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13620);
		
		struct
		{
			struct FModioModCollectionEntry                    Entry;
			struct FModioModInfo                               ReturnValue;
		} params;
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioModID UModioModCollectionLibrary::GetId(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13619);
		
		struct
		{
			struct FModioModCollectionEntry                    Entry;
			struct FModioModID                                 ReturnValue;
		} params;
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModCollectionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioModCollectionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(448);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Subtract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::Subtract(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13714);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			struct FModioUnsigned64                            ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Percentage_Unsigned64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::Percentage_Unsigned64(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13713);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			float                                              ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.NotEqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::NotEqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13712);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			bool                                               ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.MakeFromComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            High                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Low                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::MakeFromComponents(int32_t High, int32_t Low)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13711);
		
		struct
		{
			int32_t                                            High;
			int32_t                                            Low;
			struct FModioUnsigned64                            ReturnValue;
		} params;
		params.High = High;
		params.Low = Low;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.LessThan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::LessThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13710);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			bool                                               ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.GreaterThan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::GreaterThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13709);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			bool                                               ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.EqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::EqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13708);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			bool                                               ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.DivideToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::DivideToFloat(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13707);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			float                                              ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.DivideFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              RHS                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::DivideFloat(const struct FModioUnsigned64& LHS, float RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13706);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			float                                              RHS;
			float                                              ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Divide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::Divide(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13705);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			struct FModioUnsigned64                            ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::Conv_FModioUnsigned64ToFloat(const struct FModioUnsigned64& In)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13704);
		
		struct
		{
			struct FModioUnsigned64                            In;
			float                                              ReturnValue;
		} params;
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.BreakToComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            High                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Low                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioUnsigned64Library::BreakToComponents(const struct FModioUnsigned64& In, int32_t* High, int32_t* Low)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13703);
		
		struct
		{
			struct FModioUnsigned64                            In;
			int32_t                                            High;
			int32_t                                            Low;
		} params;
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (High != nullptr)
			*High = params.High;
		if (Low != nullptr)
			*Low = params.Low;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::Add(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13702);
		
		struct
		{
			struct FModioUnsigned64                            LHS;
			struct FModioUnsigned64                            RHS;
			struct FModioUnsigned64                            ReturnValue;
		} params;
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioUnsigned64Library.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioUnsigned64Library::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(463);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.SetLogLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioLogLevel                                     UnrealLogLevel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::SetLogLevel(EModioLogLevel UnrealLogLevel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13701);
		
		struct
		{
			EModioLogLevel                                     UnrealLogLevel;
		} params;
		params.UnrealLogLevel = UnrealLogLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.RunPendingHandlers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::RunPendingHandlers()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13700);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.QueryUserSubscriptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QueryUserSubscriptions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13699);
		
		struct
		{
			TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.QueryUserInstallations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIncludeOutdatedMods                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QueryUserInstallations(bool bIncludeOutdatedMods)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13698);
		
		struct
		{
			bool                                               bIncludeOutdatedMods;
			unsigned char                                      UnknownData_0000[0x7];
			TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue;
		} params;
		params.bIncludeOutdatedMods = bIncludeOutdatedMods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.QuerySystemInstallations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QuerySystemInstallations()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13697);
		
		struct
		{
			TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.PrioritizeTransferForMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToPrioritize                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioErrorCode                             ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioErrorCode UModioSubsystem::PrioritizeTransferForMod(const struct FModioModID& ModToPrioritize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13696);
		
		struct
		{
			struct FModioModID                                 ModToPrioritize;
			struct FModioErrorCode                             ReturnValue;
		} params;
		params.ModToPrioritize = ModToPrioritize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_VerifyUserAuthenticationAsync(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13695);
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_UnsubscribeFromModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToUnsubscribeFrom                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnUnsubscribeComplete                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_UnsubscribeFromModAsync(const struct FModioModID& ModToUnsubscribeFrom, const class FScriptDelegate& OnUnsubscribeComplete)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13694);
		
		struct
		{
			struct FModioModID                                 ModToUnsubscribeFrom;
			class FScriptDelegate                              OnUnsubscribeComplete;
		} params;
		params.ModToUnsubscribeFrom = ModToUnsubscribeFrom;
		params.OnUnsubscribeComplete = OnUnsubscribeComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubscribeToModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToSubscribeTo                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSubscribeComplete                                        (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_SubscribeToModAsync(const struct FModioModID& ModToSubscribeTo, const class FScriptDelegate& OnSubscribeComplete)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13693);
		
		struct
		{
			struct FModioModID                                 ModToSubscribeTo;
			class FScriptDelegate                              OnSubscribeComplete;
		} params;
		params.ModToSubscribeTo = ModToSubscribeTo;
		params.OnSubscribeComplete = OnSubscribeComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitNewModFileForMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioCreateModFileParams                   Params                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_SubmitNewModFileForMod(const struct FModioModID& Mod, const struct FModioCreateModFileParams& Params)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13692);
		
		struct
		{
			struct FModioModID                                 Mod;
			struct FModioCreateModFileParams                   Params;
		} params;
		params.Mod = Mod;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitNewModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCreationHandle                     Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioCreateModParams                       Params                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_SubmitNewModAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13691);
		
		struct
		{
			struct FModioModCreationHandle                     Handle;
			struct FModioCreateModParams                       Params;
			class FScriptDelegate                              Callback;
		} params;
		params.Handle = Handle;
		params.Params = Params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitModRatingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioRating                                       Rating                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_SubmitModRatingAsync(const struct FModioModID& Mod, EModioRating Rating, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13690);
		
		struct
		{
			struct FModioModID                                 Mod;
			EModioRating                                       Rating;
			unsigned char                                      UnknownData_0001[0x3];
			class FScriptDelegate                              Callback;
		} params;
		params.Mod = Mod;
		params.Rating = Rating;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitModChangesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioEditModParams                         Params                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_SubmitModChangesAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13689);
		
		struct
		{
			struct FModioModID                                 Mod;
			struct FModioEditModParams                         Params;
			class FScriptDelegate                              Callback;
		} params;
		params.Mod = Mod;
		params.Params = Params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ShutdownAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnShutdownComplete                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_ShutdownAsync(const class FScriptDelegate& OnShutdownComplete)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13688);
		
		struct
		{
			class FScriptDelegate                              OnShutdownComplete;
		} params;
		params.OnShutdownComplete = OnShutdownComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAddress                          EmailAddress                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_RequestEmailAuthCodeAsync(const struct FModioEmailAddress& EmailAddress, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13687);
		
		struct
		{
			struct FModioEmailAddress                          EmailAddress;
			class FScriptDelegate                              Callback;
		} params;
		params.EmailAddress = EmailAddress;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ReportContentAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioReportParams                          Report                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_ReportContentAsync(const struct FModioReportParams& Report, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13686);
		
		struct
		{
			struct FModioReportParams                          Report;
			class FScriptDelegate                              Callback;
		} params;
		params.Report = Report;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_QueryUserProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalUser                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioOptionalUser UModioSubsystem::K2_QueryUserProfile()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13685);
		
		struct
		{
			struct FModioOptionalUser                          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_QueryCurrentModUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModProgressInfo               ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioOptionalModProgressInfo UModioSubsystem::K2_QueryCurrentModUpdate()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13684);
		
		struct
		{
			struct FModioOptionalModProgressInfo               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ListAllModsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_ListAllModsAsync(const struct FModioFilterParams& Filter, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13683);
		
		struct
		{
			struct FModioFilterParams                          Filter;
			class FScriptDelegate                              Callback;
		} params;
		params.Filter = Filter;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_InitializeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioInitializeOptions                     InitializeOptions                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnInitComplete                                             (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_InitializeAsync(const struct FModioInitializeOptions& InitializeOptions, const class FScriptDelegate& OnInitComplete)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13682);
		
		struct
		{
			struct FModioInitializeOptions                     InitializeOptions;
			class FScriptDelegate                              OnInitComplete;
		} params;
		params.InitializeOptions = InitializeOptions;
		params.OnInitComplete = OnInitComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13681);
		
		struct
		{
			EModioAvatarSize                                   AvatarSize;
			unsigned char                                      UnknownData_0002[0x3];
			class FScriptDelegate                              Callback;
		} params;
		params.AvatarSize = AvatarSize;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetTermsOfUseAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioAuthenticationProvider                       Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioLanguage                                     Locale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13680);
		
		struct
		{
			EModioAuthenticationProvider                       Provider;
			EModioLanguage                                     Locale;
			unsigned char                                      UnknownData_0003[0x2];
			class FScriptDelegate                              Callback;
		} params;
		params.Provider = Provider;
		params.Locale = Locale;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModTagOptionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetModTagOptionsAsync(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13679);
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModMediaLogoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioLogoSize                                     LogoSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetModMediaLogoAsync(const struct FModioModID& ModId, EModioLogoSize LogoSize, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13678);
		
		struct
		{
			struct FModioModID                                 ModId;
			EModioLogoSize                                     LogoSize;
			unsigned char                                      UnknownData_0004[0x3];
			class FScriptDelegate                              Callback;
		} params;
		params.ModId = ModId;
		params.LogoSize = LogoSize;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioGallerySize                                  GallerySize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetModMediaGalleryImageAsync(const struct FModioModID& ModId, EModioGallerySize GallerySize, int32_t Index, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13677);
		
		struct
		{
			struct FModioModID                                 ModId;
			EModioGallerySize                                  GallerySize;
			unsigned char                                      UnknownData_0005[0x3];
			int32_t                                            Index;
			class FScriptDelegate                              Callback;
		} params;
		params.ModId = ModId;
		params.GallerySize = GallerySize;
		params.Index = Index;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModMediaAvatarAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetModMediaAvatarAsync(const struct FModioModID& ModId, EModioAvatarSize AvatarSize, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13676);
		
		struct
		{
			struct FModioModID                                 ModId;
			EModioAvatarSize                                   AvatarSize;
			unsigned char                                      UnknownData_0006[0x3];
			class FScriptDelegate                              Callback;
		} params;
		params.ModId = ModId;
		params.AvatarSize = AvatarSize;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetModInfoAsync(const struct FModioModID& ModId, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13675);
		
		struct
		{
			struct FModioModID                                 ModId;
			class FScriptDelegate                              Callback;
		} params;
		params.ModId = ModId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModDependenciesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_GetModDependenciesAsync(const struct FModioModID& ModId, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13674);
		
		struct
		{
			struct FModioModID                                 ModId;
			class FScriptDelegate                              Callback;
		} params;
		params.ModId = ModId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModCreationHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCreationHandle                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioModCreationHandle UModioSubsystem::K2_GetModCreationHandle()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13673);
		
		struct
		{
			struct FModioModCreationHandle                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ForceUninstallModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToRemove                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_ForceUninstallModAsync(const struct FModioModID& ModToRemove, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13672);
		
		struct
		{
			struct FModioModID                                 ModToRemove;
			class FScriptDelegate                              Callback;
		} params;
		params.ModToRemove = ModToRemove;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnFetchDone                                                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_FetchExternalUpdatesAsync(const class FScriptDelegate& OnFetchDone)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13671);
		
		struct
		{
			class FScriptDelegate                              OnFetchDone;
		} params;
		params.OnFetchDone = OnFetchDone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_EnableModManagement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioErrorCode                             ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioErrorCode UModioSubsystem::K2_EnableModManagement(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13670);
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FModioErrorCode                             ReturnValue;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ClearUserDataAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_ClearUserDataAsync(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13669);
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioAuthenticationParams                  User                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioAuthenticationProvider                       Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_AuthenticateUserExternalAsync(const struct FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13668);
		
		struct
		{
			struct FModioAuthenticationParams                  User;
			EModioAuthenticationProvider                       Provider;
			unsigned char                                      UnknownData_0007[0x3];
			class FScriptDelegate                              Callback;
		} params;
		params.User = User;
		params.Provider = Provider;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAuthCode                         AuthenticationCode                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_AuthenticateUserEmailAsync(const struct FModioEmailAuthCode& AuthenticationCode, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13667);
		
		struct
		{
			struct FModioEmailAuthCode                         AuthenticationCode;
			class FScriptDelegate                              Callback;
		} params;
		params.AuthenticationCode = AuthenticationCode;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ArchiveModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::K2_ArchiveModAsync(const struct FModioModID& Mod, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13666);
		
		struct
		{
			struct FModioModID                                 Mod;
			class FScriptDelegate                              Callback;
		} params;
		params.Mod = Mod;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.IsModManagementBusy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioSubsystem::IsModManagementBusy()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13665);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.GetLastValidationError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModioValidationError>               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FModioValidationError> UModioSubsystem::GetLastValidationError()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13664);
		
		struct
		{
			TArray<struct FModioValidationError>               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.DisableModManagement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UModioSubsystem::DisableModManagement()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13663);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(461);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetVisibility(struct FModioEditModParams* In, bool Visibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13589);
		
		struct
		{
			struct FModioEditModParams                         In;
			bool                                               Visibility;
		} params;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Summary                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetSummary(struct FModioEditModParams* In, const class FString& Summary)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13588);
		
		struct
		{
			struct FModioEditModParams                         In;
			class FString                                      Summary;
		} params;
		params.Summary = Summary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetNamePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      NamePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetNamePath(struct FModioEditModParams* In, const class FString& NamePath)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13587);
		
		struct
		{
			struct FModioEditModParams                         In;
			class FString                                      NamePath;
		} params;
		params.NamePath = NamePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetName(struct FModioEditModParams* In, const class FString& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13586);
		
		struct
		{
			struct FModioEditModParams                         In;
			class FString                                      Name;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetMetadataBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetadataBlob                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetMetadataBlob(struct FModioEditModParams* In, const class FString& MetadataBlob)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13585);
		
		struct
		{
			struct FModioEditModParams                         In;
			class FString                                      MetadataBlob;
		} params;
		params.MetadataBlob = MetadataBlob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetMaturityFlags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioMaturityFlags                                MaturityFlags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetMaturityFlags(struct FModioEditModParams* In, EModioMaturityFlags MaturityFlags)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13584);
		
		struct
		{
			struct FModioEditModParams                         In;
			EModioMaturityFlags                                MaturityFlags;
		} params;
		params.MaturityFlags = MaturityFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetHomepageURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      HomepageURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetHomepageURL(struct FModioEditModParams* In, const class FString& HomepageURL)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13583);
		
		struct
		{
			struct FModioEditModParams                         In;
			class FString                                      HomepageURL;
		} params;
		params.HomepageURL = HomepageURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UModioEditModLibrary::SetDescription(struct FModioEditModParams* In, const class FString& Description)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13582);
		
		struct
		{
			struct FModioEditModParams                         In;
			class FString                                      Description;
		} params;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioEditModLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioEditModLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(441);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalUser                          OptionalUser                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13646);
		
		struct
		{
			struct FModioOptionalUser                          OptionalUser;
			bool                                               ReturnValue;
		} params;
		params.OptionalUser = OptionalUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalTerms                         OptionalTerms                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13645);
		
		struct
		{
			struct FModioOptionalTerms                         OptionalTerms;
			bool                                               ReturnValue;
		} params;
		params.OptionalTerms = OptionalTerms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModTagOptions                 OptionalModTagOptions                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13644);
		
		struct
		{
			struct FModioOptionalModTagOptions                 OptionalModTagOptions;
			bool                                               ReturnValue;
		} params;
		params.OptionalModTagOptions = OptionalModTagOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModProgressInfo               OptionalModProgressInfo                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13643);
		
		struct
		{
			struct FModioOptionalModProgressInfo               OptionalModProgressInfo;
			bool                                               ReturnValue;
		} params;
		params.OptionalModProgressInfo = OptionalModProgressInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfoList                   OptionalModInfoList                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13642);
		
		struct
		{
			struct FModioOptionalModInfoList                   OptionalModInfoList;
			bool                                               ReturnValue;
		} params;
		params.OptionalModInfoList = OptionalModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfo                       OptionalModInfo                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13641);
		
		struct
		{
			struct FModioOptionalModInfo                       OptionalModInfo;
			bool                                               ReturnValue;
		} params;
		params.OptionalModInfo = OptionalModInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModID                         OptionalID                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModID(const struct FModioOptionalModID& OptionalID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13640);
		
		struct
		{
			struct FModioOptionalModID                         OptionalID;
			bool                                               ReturnValue;
		} params;
		params.OptionalID = OptionalID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModDependencyList             OptionalDependencyList                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13639);
		
		struct
		{
			struct FModioOptionalModDependencyList             OptionalDependencyList;
			bool                                               ReturnValue;
		} params;
		params.OptionalDependencyList = OptionalDependencyList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalImage                         OptionalImage                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13638);
		
		struct
		{
			struct FModioOptionalImage                         OptionalImage;
			bool                                               ReturnValue;
		} params;
		params.OptionalImage = OptionalImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalUser                          OptionalUser                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioUser                                  User                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser, struct FModioUser* User)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13637);
		
		struct
		{
			struct FModioOptionalUser                          OptionalUser;
			struct FModioUser                                  User;
			bool                                               ReturnValue;
		} params;
		params.OptionalUser = OptionalUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (User != nullptr)
			*User = params.User;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalTerms                         OptionalTerms                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioTerms                                 Terms                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms, struct FModioTerms* Terms)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13636);
		
		struct
		{
			struct FModioOptionalTerms                         OptionalTerms;
			struct FModioTerms                                 Terms;
			bool                                               ReturnValue;
		} params;
		params.OptionalTerms = OptionalTerms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Terms != nullptr)
			*Terms = params.Terms;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModTagOptions                 OptionalModTagOptions                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModTagOptions                         ModTagOptions                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions, struct FModioModTagOptions* ModTagOptions)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13635);
		
		struct
		{
			struct FModioOptionalModTagOptions                 OptionalModTagOptions;
			struct FModioModTagOptions                         ModTagOptions;
			bool                                               ReturnValue;
		} params;
		params.OptionalModTagOptions = OptionalModTagOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModTagOptions != nullptr)
			*ModTagOptions = params.ModTagOptions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModProgressInfo               OptionalModProgressInfo                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModProgressInfo                       ModProgressInfo                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo, struct FModioModProgressInfo* ModProgressInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13634);
		
		struct
		{
			struct FModioOptionalModProgressInfo               OptionalModProgressInfo;
			struct FModioModProgressInfo                       ModProgressInfo;
			bool                                               ReturnValue;
		} params;
		params.OptionalModProgressInfo = OptionalModProgressInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModProgressInfo != nullptr)
			*ModProgressInfo = params.ModProgressInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfoList                   OptionalModInfoList                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModInfoList                           ModInfoList                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList, struct FModioModInfoList* ModInfoList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13633);
		
		struct
		{
			struct FModioOptionalModInfoList                   OptionalModInfoList;
			struct FModioModInfoList                           ModInfoList;
			bool                                               ReturnValue;
		} params;
		params.OptionalModInfoList = OptionalModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModInfoList != nullptr)
			*ModInfoList = params.ModInfoList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfo                       OptionalModInfo                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModInfo                               ModInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo, struct FModioModInfo* ModInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13632);
		
		struct
		{
			struct FModioOptionalModInfo                       OptionalModInfo;
			struct FModioModInfo                               ModInfo;
			bool                                               ReturnValue;
		} params;
		params.OptionalModInfo = OptionalModInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModInfo != nullptr)
			*ModInfo = params.ModInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModID                         OptionalID                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 ID                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModID(const struct FModioOptionalModID& OptionalID, struct FModioModID* ID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13631);
		
		struct
		{
			struct FModioOptionalModID                         OptionalID;
			struct FModioModID                                 ID;
			bool                                               ReturnValue;
		} params;
		params.OptionalID = OptionalID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModDependencyList             OptionalDependencyList                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModDependencyList                     DependencyList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList, struct FModioModDependencyList* DependencyList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13630);
		
		struct
		{
			struct FModioOptionalModDependencyList             OptionalDependencyList;
			struct FModioModDependencyList                     DependencyList;
			bool                                               ReturnValue;
		} params;
		params.OptionalDependencyList = OptionalDependencyList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DependencyList != nullptr)
			*DependencyList = params.DependencyList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalImage                         OptionalImage                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioImageWrapper                          Image                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage, struct FModioImageWrapper* Image)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13629);
		
		struct
		{
			struct FModioOptionalImage                         OptionalImage;
			struct FModioImageWrapper                          Image;
			bool                                               ReturnValue;
		} params;
		params.OptionalImage = OptionalImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioOptionalLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioOptionalLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(452);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorConditionLibrary.ErrorCodeMatches
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             ErrorCode                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioErrorCondition                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioErrorConditionLibrary::ErrorCodeMatches(const struct FModioErrorCode& ErrorCode, EModioErrorCondition Condition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13593);
		
		struct
		{
			struct FModioErrorCode                             ErrorCode;
			EModioErrorCondition                               Condition;
			bool                                               ReturnValue;
		} params;
		params.ErrorCode = ErrorCode;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioErrorConditionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioErrorConditionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(443);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioPopupBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioPopupBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(454);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioPopupContainer.PushPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioPopupBase*                             PopupClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UModioPopupBase*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UModioPopupBase* UModioPopupContainer::PushPopup(class UModioPopupBase* PopupClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13648);
		
		struct
		{
			class UModioPopupBase*                             PopupClass;
			class UModioPopupBase*                             ReturnValue;
		} params;
		params.PopupClass = PopupClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioPopupContainer.PopPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioPopupBase*                             PopupClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UModioPopupBase*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UModioPopupBase* UModioPopupContainer::PopPopup(class UModioPopupBase* PopupClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13647);
		
		struct
		{
			class UModioPopupBase*                             PopupClass;
			class UModioPopupBase*                             ReturnValue;
		} params;
		params.PopupClass = PopupClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioPopupContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioPopupContainer::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(455);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioReportLibrary.MakeReportForUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUserID                                User                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioReportType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportDescription                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterContact                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioReportParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioReportParams UModioReportLibrary::MakeReportForUser(const struct FModioUserID& User, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13651);
		
		struct
		{
			struct FModioUserID                                User;
			EModioReportType                                   Type;
			unsigned char                                      UnknownData_0000[0x7];
			class FString                                      ReportDescription;
			class FString                                      ReporterName;
			class FString                                      ReporterContact;
			struct FModioReportParams                          ReturnValue;
		} params;
		params.User = User;
		params.Type = Type;
		params.ReportDescription = ReportDescription;
		params.ReporterName = ReporterName;
		params.ReporterContact = ReporterContact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioReportLibrary.MakeReportForMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioReportType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportDescription                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterContact                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioReportParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioReportParams UModioReportLibrary::MakeReportForMod(const struct FModioModID& Mod, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13650);
		
		struct
		{
			struct FModioModID                                 Mod;
			EModioReportType                                   Type;
			unsigned char                                      UnknownData_0001[0x7];
			class FString                                      ReportDescription;
			class FString                                      ReporterName;
			class FString                                      ReporterContact;
			struct FModioReportParams                          ReturnValue;
		} params;
		params.Mod = Mod;
		params.Type = Type;
		params.ReportDescription = ReportDescription;
		params.ReporterName = ReporterName;
		params.ReporterContact = ReporterContact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioReportLibrary.MakeReportForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioGameID                                Game                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioReportType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportDescription                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterContact                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioReportParams                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FModioReportParams UModioReportLibrary::MakeReportForGame(const struct FModioGameID& Game, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13649);
		
		struct
		{
			struct FModioGameID                                Game;
			EModioReportType                                   Type;
			unsigned char                                      UnknownData_0002[0x7];
			class FString                                      ReportDescription;
			class FString                                      ReporterName;
			class FString                                      ReporterContact;
			struct FModioReportParams                          ReturnValue;
		} params;
		params.Game = Game;
		params.Type = Type;
		params.ReportDescription = ReportDescription;
		params.ReporterName = ReporterName;
		params.ReporterContact = ReporterContact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioReportLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UModioReportLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(456);
		return ptr;
	}

}


