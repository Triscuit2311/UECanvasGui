/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequireNameOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11950);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               bRequireNameOnly;
			bool                                               ReturnValue;
		} params;
		params.UniqueNetId = UniqueNetId;
		params.bRequireNameOnly = bRequireNameOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		ESteamUserOverlayType                              DialogType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, ESteamUserOverlayType DialogType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11949);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			ESteamUserOverlayType                              DialogType;
			bool                                               ReturnValue;
		} params;
		params.UniqueNetId = UniqueNetId;
		params.DialogType = DialogType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::IsSteamInBigPictureMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11948);
		
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
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::IsOverlayEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11947);
		
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
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::InitTextFiltering()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11946);
		
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
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAdvancedSteamFriendsLibrary::GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11945);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			class FString                                      ReturnValue;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPSteamGroupInfo>                   SteamGroups                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSteamFriendsLibrary::GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11944);
		
		struct
		{
			TArray<struct FBPSteamGroupInfo>                   SteamGroups;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamGroups != nullptr)
			*SteamGroups = params.SteamGroups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, int32_t* AppId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11943);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			EBlueprintResultSwitch                             Result;
			unsigned char                                      UnknownData_0000[0x3];
			int32_t                                            AppId;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (AppId != nullptr)
			*AppId = params.AppId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintAsyncResultSwitch                        Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, EBlueprintAsyncResultSwitch* Result, ESteamAvatarSize AvatarSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11942);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			EBlueprintAsyncResultSwitch                        Result;
			ESteamAvatarSize                                   AvatarSize;
			unsigned char                                      UnknownData_0001[0x6];
			class UTexture2D*                                  ReturnValue;
		} params;
		params.UniqueNetId = UniqueNetId;
		params.AvatarSize = AvatarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::GetLocalSteamIDFromSteam()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11941);
		
		struct
		{
			struct FBPUniqueNetId                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11940);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			int32_t                                            ReturnValue;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TextToFilter                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPTextFilteringContext                            Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              TextSourceID                                               (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilteredText                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::FilterText(const class FString& TextToFilter, EBPTextFilteringContext Context, const struct FBPUniqueNetId& TextSourceID, class FString* FilteredText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11939);
		
		struct
		{
			class FString                                      TextToFilter;
			EBPTextFilteringContext                            Context;
			unsigned char                                      UnknownData_0002[0x7];
			struct FBPUniqueNetId                              TextSourceID;
			class FString                                      FilteredText;
			bool                                               ReturnValue;
		} params;
		params.TextToFilter = TextToFilter;
		params.Context = Context;
		params.TextSourceID = TextSourceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilteredText != nullptr)
			*FilteredText = params.FilteredText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamID64                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(const class FString& SteamID64)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11938);
		
		struct
		{
			class FString                                      SteamID64;
			struct FBPUniqueNetId                              ReturnValue;
		} params;
		params.SteamID64 = SteamID64;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamFriendsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedSteamFriendsLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(100);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              GroupUniqueNetID                                           (Parm, NativeAccessSpecifierPublic)
	 * 		class USteamRequestGroupOfficersCallbackProxy*     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11953);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FBPUniqueNetId                              GroupUniqueNetID;
			class USteamRequestGroupOfficersCallbackProxy*     ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.GroupUniqueNetID = GroupUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamRequestGroupOfficersCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USteamRequestGroupOfficersCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(102);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfItems                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBPSteamWorkshopID>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(int32_t* NumberOfItems)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11952);
		
		struct
		{
			int32_t                                            NumberOfItems;
			unsigned char                                      UnknownData_0000[0x4];
			TArray<struct FBPSteamWorkshopID>                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberOfItems != nullptr)
			*NumberOfItems = params.NumberOfItems;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfItems                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(int32_t* NumberOfItems)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11951);
		
		struct
		{
			int32_t                                            NumberOfItems;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberOfItems != nullptr)
			*NumberOfItems = params.NumberOfItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamWorkshopLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedSteamWorkshopLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(101);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPSteamWorkshopID                          WorkShopID                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class USteamWSRequestUGCDetailsCallbackProxy*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11954);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FBPSteamWorkshopID                          WorkShopID;
			class USteamWSRequestUGCDetailsCallbackProxy*      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WorkShopID = WorkShopID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamWSRequestUGCDetailsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USteamWSRequestUGCDetailsCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(103);
		return ptr;
	}

}


