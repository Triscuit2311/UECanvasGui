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
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URLToShow                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              AllowedDomains                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bEmbedded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowBackground                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowCloseButton                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OffsetX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OffsetY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedExternalUILibrary::ShowWebURLUI(const class FString& URLToShow, EBlueprintResultSwitch* Result, TArray<class FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11847);
		
		struct
		{
			class FString                                      URLToShow;
			EBlueprintResultSwitch                             Result;
			unsigned char                                      UnknownData_0000[0x7];
			TArray<class FString>                              AllowedDomains;
			bool                                               bEmbedded;
			bool                                               bShowBackground;
			bool                                               bShowCloseButton;
			unsigned char                                      UnknownData_0001[0x1];
			int32_t                                            OffsetX;
			int32_t                                            OffsetY;
			int32_t                                            SizeX;
			int32_t                                            SizeY;
		} params;
		params.URLToShow = URLToShow;
		params.bEmbedded = bEmbedded;
		params.bShowBackground = bShowBackground;
		params.bShowCloseButton = bShowCloseButton;
		params.OffsetX = OffsetX;
		params.OffsetY = OffsetY;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (AllowedDomains != nullptr)
			*AllowedDomains = params.AllowedDomains;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerViewingProfile                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerToViewProfileOf                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedExternalUILibrary::ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11846);
		
		struct
		{
			struct FBPUniqueNetId                              PlayerViewingProfile;
			struct FBPUniqueNetId                              PlayerToViewProfileOf;
			EBlueprintResultSwitch                             Result;
		} params;
		params.PlayerViewingProfile = PlayerViewingProfile;
		params.PlayerToViewProfileOf = PlayerToViewProfileOf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedExternalUILibrary::ShowLeaderBoardUI(const class FString& LeaderboardName, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11845);
		
		struct
		{
			class FString                                      LeaderboardName;
			EBlueprintResultSwitch                             Result;
		} params;
		params.LeaderboardName = LeaderboardName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedExternalUILibrary::ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11844);
		
		struct
		{
			class APlayerController*                           PlayerController;
			EBlueprintResultSwitch                             Result;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedExternalUILibrary::ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11843);
		
		struct
		{
			class APlayerController*                           PlayerController;
			EBlueprintResultSwitch                             Result;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerRequestingAccountUpgradeUI                           (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedExternalUILibrary::ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11842);
		
		struct
		{
			struct FBPUniqueNetId                              PlayerRequestingAccountUpgradeUI;
			EBlueprintResultSwitch                             Result;
		} params;
		params.PlayerRequestingAccountUpgradeUI = PlayerRequestingAccountUpgradeUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAdvancedExternalUILibrary::CloseWebURLUI()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11841);
		
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
	 * 		Name   -> PredefinedFunction UAdvancedExternalUILibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedExternalUILibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(74);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PersonInviting                                             (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SessionToJoin                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppId, const struct FBlueprintSessionResult& SessionToJoin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8613);
		
		struct
		{
			int32_t                                            LocalPlayerNum;
			unsigned char                                      UnknownData_0000[0x4];
			struct FBPUniqueNetId                              PersonInviting;
			class FString                                      AppId;
			struct FBlueprintSessionResult                     SessionToJoin;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		params.PersonInviting = PersonInviting;
		params.AppId = AppId;
		params.SessionToJoin = SessionToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PersonInvited                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SessionToJoin                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8612);
		
		struct
		{
			int32_t                                            LocalPlayerNum;
			unsigned char                                      UnknownData_0001[0x4];
			struct FBPUniqueNetId                              PersonInvited;
			struct FBlueprintSessionResult                     SessionToJoin;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		params.PersonInvited = PersonInvited;
		params.SessionToJoin = SessionToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerId                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTalking                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8611);
		
		struct
		{
			struct FBPUniqueNetId                              PlayerId;
			bool                                               bIsTalking;
		} params;
		params.PlayerId = PlayerId;
		params.bIsTalking = bIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     PreviousStatus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     NewStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              NewPlayerUniqueNetID                                       (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int32_t PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8610);
		
		struct
		{
			int32_t                                            PlayerNum;
			EBPLoginStatus                                     PreviousStatus;
			EBPLoginStatus                                     NewStatus;
			unsigned char                                      UnknownData_0002[0x2];
			struct FBPUniqueNetId                              NewPlayerUniqueNetID;
		} params;
		params.PlayerNum = PlayerNum;
		params.PreviousStatus = PreviousStatus;
		params.NewStatus = NewStatus;
		params.NewPlayerUniqueNetID = NewPlayerUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int32_t PlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(8609);
		
		struct
		{
			int32_t                                            PlayerNum;
		} params;
		params.PlayerNum = PlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedFriendsGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedFriendsGameInstance::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(76);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PersonInviting                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IAdvancedFriendsInterface::OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11852);
		
		struct
		{
			struct FBPUniqueNetId                              PersonInviting;
			struct FBlueprintSessionResult                     SearchResult;
		} params;
		params.PersonInviting = PersonInviting;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PersonInvited                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IAdvancedFriendsInterface::OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11851);
		
		struct
		{
			struct FBPUniqueNetId                              PersonInvited;
			struct FBlueprintSessionResult                     SearchResult;
		} params;
		params.PersonInvited = PersonInvited;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerId                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTalking                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IAdvancedFriendsInterface::OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11850);
		
		struct
		{
			struct FBPUniqueNetId                              PlayerId;
			bool                                               bIsTalking;
		} params;
		params.PlayerId = PlayerId;
		params.bIsTalking = bIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBPLoginStatus                                     PreviousStatus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     NewStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerUniqueNetID                                          (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IAdvancedFriendsInterface::OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11849);
		
		struct
		{
			EBPLoginStatus                                     PreviousStatus;
			EBPLoginStatus                                     NewStatus;
			unsigned char                                      UnknownData_0000[0x6];
			struct FBPUniqueNetId                              PlayerUniqueNetID;
		} params;
		params.PreviousStatus = PreviousStatus;
		params.NewStatus = NewStatus;
		params.PlayerUniqueNetID = PlayerUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IAdvancedFriendsInterface::OnPlayerLoginChanged(int32_t PlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11848);
		
		struct
		{
			int32_t                                            PlayerNum;
		} params;
		params.PlayerNum = PlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IAdvancedFriendsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IAdvancedFriendsInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(77);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBPUniqueNetId>                      Friends                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsLibrary::SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11858);
		
		struct
		{
			class APlayerController*                           PlayerController;
			TArray<struct FBPUniqueNetId>                      Friends;
			EBlueprintResultSwitch                             Result;
		} params;
		params.PlayerController = PlayerController;
		params.Friends = Friends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              FriendUniqueNetId                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsLibrary::SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11857);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FBPUniqueNetId                              FriendUniqueNetId;
			EBlueprintResultSwitch                             Result;
		} params;
		params.PlayerController = PlayerController;
		params.FriendUniqueNetId = FriendUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFriend                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsLibrary::IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11856);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               IsFriend;
		} params;
		params.PlayerController = PlayerController;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFriend != nullptr)
			*IsFriend = params.IsFriend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBPOnlineRecentPlayer>               PlayersList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsLibrary::GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11855);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			TArray<struct FBPOnlineRecentPlayer>               PlayersList;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayersList != nullptr)
			*PlayersList = params.PlayersList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBPFriendInfo>                       FriendsList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsLibrary::GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11854);
		
		struct
		{
			class APlayerController*                           PlayerController;
			TArray<struct FBPFriendInfo>                       FriendsList;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsList != nullptr)
			*FriendsList = params.FriendsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              FriendUniqueNetId                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FBPFriendInfo                               Friend                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedFriendsLibrary::GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11853);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FBPUniqueNetId                              FriendUniqueNetId;
			struct FBPFriendInfo                               Friend;
		} params;
		params.PlayerController = PlayerController;
		params.FriendUniqueNetId = FriendUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Friend != nullptr)
			*Friend = params.Friend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedFriendsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedFriendsLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(78);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAdvancedGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AAdvancedGameSession::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(81);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewAttributeValue                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, const class FString& NewAttributeValue, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11870);
		
		struct
		{
			struct FBPUserOnlineAccount                        AccountInfo;
			class FString                                      AttributeName;
			class FString                                      NewAttributeValue;
			EBlueprintResultSwitch                             Result;
		} params;
		params.AccountInfo = AccountInfo;
		params.AttributeName = AttributeName;
		params.NewAttributeValue = NewAttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11869);
		
		struct
		{
			struct FBPUserOnlineAccount                        AccountInfo;
			struct FBPUniqueNetId                              UniqueNetId;
		} params;
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Username                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, class FString* Username)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11868);
		
		struct
		{
			struct FBPUserOnlineAccount                        AccountInfo;
			class FString                                      Username;
		} params;
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Username != nullptr)
			*Username = params.Username;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      DisplayName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, class FString* DisplayName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11867);
		
		struct
		{
			struct FBPUserOnlineAccount                        AccountInfo;
			class FString                                      DisplayName;
		} params;
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayName != nullptr)
			*DisplayName = params.DisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuthAttribute                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AuthAttribute, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11866);
		
		struct
		{
			struct FBPUserOnlineAccount                        AccountInfo;
			class FString                                      AttributeName;
			class FString                                      AuthAttribute;
			EBlueprintResultSwitch                             Result;
		} params;
		params.AccountInfo = AccountInfo;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AuthAttribute != nullptr)
			*AuthAttribute = params.AuthAttribute;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeValue                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AttributeValue, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11865);
		
		struct
		{
			struct FBPUserOnlineAccount                        AccountInfo;
			class FString                                      AttributeName;
			class FString                                      AttributeValue;
			EBlueprintResultSwitch                             Result;
		} params;
		params.AccountInfo = AccountInfo;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttributeValue != nullptr)
			*AttributeValue = params.AttributeValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccessToken                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, class FString* AccessToken)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11864);
		
		struct
		{
			struct FBPUserOnlineAccount                        AccountInfo;
			class FString                                      AccessToken;
		} params;
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccessToken != nullptr)
			*AccessToken = params.AccessToken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11863);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			struct FBPUserOnlineAccount                        AccountInfo;
			EBlueprintResultSwitch                             Result;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountInfo != nullptr)
			*AccountInfo = params.AccountInfo;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerNickname                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, class FString* PlayerNickname)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11862);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			class FString                                      PlayerNickname;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerNickname != nullptr)
			*PlayerNickname = params.PlayerNickname;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuthToken                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetPlayerAuthToken(class APlayerController* PlayerController, class FString* AuthToken, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11861);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class FString                                      AuthToken;
			EBlueprintResultSwitch                             Result;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AuthToken != nullptr)
			*AuthToken = params.AuthToken;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     LoginStatus                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11860);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			EBPLoginStatus                                     LoginStatus;
			EBlueprintResultSwitch                             Result;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoginStatus != nullptr)
			*LoginStatus = params.LoginStatus;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPUserOnlineAccount>                AccountInfos                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedIdentityLibrary::GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11859);
		
		struct
		{
			TArray<struct FBPUserOnlineAccount>                AccountInfos;
			EBlueprintResultSwitch                             Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountInfos != nullptr)
			*AccountInfos = params.AccountInfos;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedIdentityLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedIdentityLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(82);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, class FString* String)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11906);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			class FString                                      String;
		} params;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11905);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class FString                                      PlayerName;
		} params;
		params.PlayerController = PlayerController;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSessionPropertyKeyPair                     SessionSearchProperty                                      (Parm, NativeAccessSpecifierPublic)
	 * 		EOnlineComparisonOpRedux                           ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionsSearchSetting                      ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSessionsSearchSetting UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11904);
		
		struct
		{
			struct FSessionPropertyKeyPair                     SessionSearchProperty;
			EOnlineComparisonOpRedux                           ComparisonOp;
			unsigned char                                      UnknownData_0000[0x7];
			struct FSessionsSearchSetting                      ReturnValue;
		} params;
		params.SessionSearchProperty = SessionSearchProperty;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(const class FName& Key, const class FString& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11903);
		
		struct
		{
			class FName                                        Key;
			class FString                                      Value;
			struct FSessionPropertyKeyPair                     ReturnValue;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(const class FName& Key, int32_t Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11902);
		
		struct
		{
			class FName                                        Key;
			int32_t                                            Value;
			unsigned char                                      UnknownData_0001[0x4];
			struct FSessionPropertyKeyPair                     ReturnValue;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(const class FName& Key, float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11901);
		
		struct
		{
			class FName                                        Key;
			float                                              Value;
			unsigned char                                      UnknownData_0002[0x4];
			struct FSessionPropertyKeyPair                     ReturnValue;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint8_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(const class FName& Key, uint8_t Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11900);
		
		struct
		{
			class FName                                        Key;
			uint8_t                                            Value;
			unsigned char                                      UnknownData_0003[0x7];
			struct FSessionPropertyKeyPair                     ReturnValue;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(const class FName& Key, bool Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11899);
		
		struct
		{
			class FName                                        Key;
			bool                                               Value;
			unsigned char                                      UnknownData_0004[0x7];
			struct FSessionPropertyKeyPair                     ReturnValue;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerToKick                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        KickReason                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, const class FText& KickReason)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11898);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerToKick;
			class FText                                        KickReason;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerToKick = PlayerToKick;
		params.KickReason = KickReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11897);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               ReturnValue;
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
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::IsValidSession(const struct FBlueprintSessionResult& SessionResult)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11896);
		
		struct
		{
			struct FBlueprintSessionResult                     SessionResult;
			bool                                               ReturnValue;
		} params;
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerToCheck                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsInSession                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::IsPlayerInSession(class UObject* WorldContextObject, const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11895);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FBPUniqueNetId                              PlayerToCheck;
			bool                                               bIsInSession;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerToCheck = PlayerToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsInSession != nullptr)
			*bIsInSession = params.bIsInSession;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SubSystemName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::HasOnlineSubsystem(const class FName& SubSystemName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11894);
		
		struct
		{
			class FName                                        SubSystemName;
			bool                                               ReturnValue;
		} params;
		params.SubSystemName = SubSystemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11893);
		
		struct
		{
			class APlayerState*                                PlayerState;
			struct FBPUniqueNetId                              UniqueNetId;
		} params;
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11892);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FBPUniqueNetId                              UniqueNetId;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UniqueBuildId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32_t* UniqueBuildId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11891);
		
		struct
		{
			struct FBlueprintSessionResult                     SessionResult;
			int32_t                                            UniqueBuildId;
		} params;
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueBuildId != nullptr)
			*UniqueBuildId = params.UniqueBuildId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOnlineSessionState                              SessionState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState* SessionState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11890);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			EBPOnlineSessionState                              SessionState;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionState != nullptr)
			*SessionState = params.SessionState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumConnections                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPrivateConnections                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLAN                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinInProgress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAnticheatEnabled                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BuildUniqueID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionSettings(class UObject* WorldContextObject, int32_t* NumConnections, int32_t* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32_t* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11889);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            NumConnections;
			int32_t                                            NumPrivateConnections;
			bool                                               bIsLAN;
			bool                                               bIsDedicated;
			bool                                               bAllowInvites;
			bool                                               bAllowJoinInProgress;
			bool                                               bIsAnticheatEnabled;
			unsigned char                                      UnknownData_0005[0x3];
			int32_t                                            BuildUniqueID;
			unsigned char                                      UnknownData_0006[0x4];
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			EBlueprintResultSwitch                             Result;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumConnections != nullptr)
			*NumConnections = params.NumConnections;
		if (NumPrivateConnections != nullptr)
			*NumPrivateConnections = params.NumPrivateConnections;
		if (bIsLAN != nullptr)
			*bIsLAN = params.bIsLAN;
		if (bIsDedicated != nullptr)
			*bIsDedicated = params.bIsDedicated;
		if (bAllowInvites != nullptr)
			*bAllowInvites = params.bAllowInvites;
		if (bAllowJoinInProgress != nullptr)
			*bAllowJoinInProgress = params.bAllowJoinInProgress;
		if (bIsAnticheatEnabled != nullptr)
			*bIsAnticheatEnabled = params.bIsAnticheatEnabled;
		if (BuildUniqueID != nullptr)
			*BuildUniqueID = params.BuildUniqueID;
		if (ExtraSettings != nullptr)
			*ExtraSettings = params.ExtraSettings;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SettingValue                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, class FString* SettingValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11888);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class FName                                        SettingName;
			ESessionSettingSearchResult                        SearchResult;
			unsigned char                                      UnknownData_0007[0x7];
			class FString                                      SettingValue;
		} params;
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSessionPropertyKeyPair                     SessionProperty                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UAdvancedSessionsLibrary::GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11887);
		
		struct
		{
			struct FSessionPropertyKeyPair                     SessionProperty;
			class FName                                        ReturnValue;
		} params;
		params.SessionProperty = SessionProperty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, int32_t* SettingValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11886);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class FName                                        SettingName;
			ESessionSettingSearchResult                        SearchResult;
			unsigned char                                      UnknownData_0008[0x3];
			int32_t                                            SettingValue;
		} params;
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11885);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class FName                                        SettingName;
			ESessionSettingSearchResult                        SearchResult;
			unsigned char                                      UnknownData_0009[0x3];
			float                                              SettingValue;
		} params;
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint8_t                                            SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, uint8_t* SettingValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11884);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class FName                                        SettingName;
			ESessionSettingSearchResult                        SearchResult;
			uint8_t                                            SettingValue;
		} params;
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11883);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class FName                                        SettingName;
			ESessionSettingSearchResult                        SearchResult;
			bool                                               SettingValue;
		} params;
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetSessionID_AsString(const struct FBlueprintSessionResult& SessionResult, class FString* SessionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11882);
		
		struct
		{
			struct FBlueprintSessionResult                     SessionResult;
			class FString                                      SessionID;
		} params;
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionID != nullptr)
			*SessionID = params.SessionID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11881);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class FString                                      PlayerName;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerName != nullptr)
			*PlayerName = params.PlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumNetPlayers                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32_t* NumNetPlayers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11880);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            NumNetPlayers;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumNetPlayers != nullptr)
			*NumNetPlayers = params.NumNetPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NetPlayerIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetNetPlayerIndex(class APlayerController* PlayerController, int32_t* NetPlayerIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11879);
		
		struct
		{
			class APlayerController*                           PlayerController;
			int32_t                                            NetPlayerIndex;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NetPlayerIndex != nullptr)
			*NetPlayerIndex = params.NetPlayerIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11878);
		
		struct
		{
			struct FBlueprintSessionResult                     SessionResult;
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
		} params;
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExtraSettings != nullptr)
			*ExtraSettings = params.ExtraSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UniqueBuildId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(int32_t* UniqueBuildId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11877);
		
		struct
		{
			int32_t                                            UniqueBuildId;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueBuildId != nullptr)
			*UniqueBuildId = params.UniqueBuildId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::GetCurrentSessionID_AsString(class UObject* WorldContextObject, class FString* SessionID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11876);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SessionID;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionID != nullptr)
			*SessionID = params.SessionID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, EBlueprintResultSwitch* Result, int32_t* OutIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11875);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class FName                                        SettingName;
			EBlueprintResultSwitch                             Result;
			unsigned char                                      UnknownData_0010[0x3];
			int32_t                                            OutIndex;
		} params;
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingsName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     OutProperty                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11874);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class FName                                        SettingsName;
			EBlueprintResultSwitch                             Result;
			unsigned char                                      UnknownData_0011[0x7];
			struct FSessionPropertyKeyPair                     OutProperty;
		} params;
		params.ExtraSettings = ExtraSettings;
		params.SettingsName = SettingsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (OutProperty != nullptr)
			*OutProperty = params.OutProperty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11873);
		
		struct
		{
			struct FBPUniqueNetId                              A;
			struct FBPUniqueNetId                              B;
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
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerToBan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        BanReason                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, const class FText& BanReason)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11872);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerToBan;
			class FText                                        BanReason;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerToBan = PlayerToBan;
		params.BanReason = BanReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             SettingsArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             NewOrChangedSettings                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ModifiedSettingsArray                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedSessionsLibrary::AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11871);
		
		struct
		{
			TArray<struct FSessionPropertyKeyPair>             SettingsArray;
			TArray<struct FSessionPropertyKeyPair>             NewOrChangedSettings;
			TArray<struct FSessionPropertyKeyPair>             ModifiedSettingsArray;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SettingsArray != nullptr)
			*SettingsArray = params.SettingsArray;
		if (NewOrChangedSettings != nullptr)
			*NewOrChangedSettings = params.NewOrChangedSettings;
		if (ModifiedSettingsArray != nullptr)
			*ModifiedSettingsArray = params.ModifiedSettingsArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSessionsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedSessionsLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(83);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11922);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               ReturnValue;
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
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::UnRegisterLocalTalker(uint8_t LocalPlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11921);
		
		struct
		{
			uint8_t                                            LocalPlayerNum;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::UnRegisterAllLocalTalkers()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11920);
		
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
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSystemWide                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::UnMuteRemoteTalker(uint8_t LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11919);
		
		struct
		{
			uint8_t                                            LocalUserNum;
			unsigned char                                      UnknownData_0000[0x7];
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               bIsSystemWide;
			bool                                               ReturnValue;
		} params;
		params.LocalUserNum = LocalUserNum;
		params.UniqueNetId = UniqueNetId;
		params.bIsSystemWide = bIsSystemWide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::StopNetworkedVoice(uint8_t LocalPlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11918);
		
		struct
		{
			uint8_t                                            LocalPlayerNum;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::StartNetworkedVoice(uint8_t LocalPlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11917);
		
		struct
		{
			uint8_t                                            LocalPlayerNum;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::RemoveAllRemoteTalkers()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11916);
		
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
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11915);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               ReturnValue;
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
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::RegisterLocalTalker(uint8_t LocalPlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11914);
		
		struct
		{
			uint8_t                                            LocalPlayerNum;
			bool                                               ReturnValue;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::RegisterAllLocalTalkers()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11913);
		
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
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSystemWide                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::MuteRemoteTalker(uint8_t LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11912);
		
		struct
		{
			uint8_t                                            LocalUserNum;
			unsigned char                                      UnknownData_0001[0x7];
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               bIsSystemWide;
			bool                                               ReturnValue;
		} params;
		params.LocalUserNum = LocalUserNum;
		params.UniqueNetId = UniqueNetId;
		params.bIsSystemWide = bIsSystemWide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11911);
		
		struct
		{
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               ReturnValue;
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
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalUserNumChecking                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::IsPlayerMuted(uint8_t LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11910);
		
		struct
		{
			uint8_t                                            LocalUserNumChecking;
			unsigned char                                      UnknownData_0002[0x7];
			struct FBPUniqueNetId                              UniqueNetId;
			bool                                               ReturnValue;
		} params;
		params.LocalUserNumChecking = LocalUserNumChecking;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::IsLocalPlayerTalking(uint8_t LocalPlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11909);
		
		struct
		{
			uint8_t                                            LocalPlayerNum;
			bool                                               ReturnValue;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHasHeadset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint8_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::IsHeadsetPresent(bool* bHasHeadset, uint8_t LocalPlayerNum)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11908);
		
		struct
		{
			bool                                               bHasHeadset;
			uint8_t                                            LocalPlayerNum;
		} params;
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasHeadset != nullptr)
			*bHasHeadset = params.bHasHeadset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumLocalTalkers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAdvancedVoiceLibrary::GetNumLocalTalkers(int32_t* NumLocalTalkers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11907);
		
		struct
		{
			int32_t                                            NumLocalTalkers;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumLocalTalkers != nullptr)
			*NumLocalTalkers = params.NumLocalTalkers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedVoiceLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAdvancedVoiceLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCancelFindSessionsCallbackProxy*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11923);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UCancelFindSessionsCallbackProxy*            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCancelFindSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCancelFindSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(85);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroySession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDestroySessionCallbackProxyAdvanced*        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDestroySessionCallbackProxyAdvanced* UDestroySessionCallbackProxyAdvanced::DestroySession(class UWorld* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11925);
		
		struct
		{
			class UWorld*                                      WorldContextObject;
			class APlayerController*                           PlayerController;
			class UDestroySessionCallbackProxyAdvanced*        ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroySessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDestroySessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(87);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.EndSessionCallbackProxy.EndSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEndSessionCallbackProxy*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEndSessionCallbackProxy* UEndSessionCallbackProxy::EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11926);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UEndSessionCallbackProxy*                    ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEndSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              FriendUniqueNetId                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UFindFriendSessionCallbackProxy*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11927);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			struct FBPUniqueNetId                              FriendUniqueNetId;
			class UFindFriendSessionCallbackProxy*             ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.FriendUniqueNetId = FriendUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindFriendSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFindFriendSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGetFriendsCallbackProxy*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11930);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UGetFriendsCallbackProxy*                    ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetFriendsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGetFriendsCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(91);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PrivateConnections                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicatedServer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePresence                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLobbiesIfAvailable                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinViaPresence                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinViaPresenceFriendsOnly                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAntiCheatProtected                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsesStats                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldAdvertise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCreateSessionCallbackProxyAdvanced*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11924);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			class APlayerController*                           PlayerController;
			int32_t                                            PublicConnections;
			int32_t                                            PrivateConnections;
			bool                                               bUseLAN;
			bool                                               bAllowInvites;
			bool                                               bIsDedicatedServer;
			bool                                               bUsePresence;
			bool                                               bUseLobbiesIfAvailable;
			bool                                               bAllowJoinViaPresence;
			bool                                               bAllowJoinViaPresenceFriendsOnly;
			bool                                               bAntiCheatProtected;
			bool                                               bUsesStats;
			bool                                               bShouldAdvertise;
			unsigned char                                      UnknownData_0000[0x6];
			class UCreateSessionCallbackProxyAdvanced*         ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ExtraSettings = ExtraSettings;
		params.PlayerController = PlayerController;
		params.PublicConnections = PublicConnections;
		params.PrivateConnections = PrivateConnections;
		params.bUseLAN = bUseLAN;
		params.bAllowInvites = bAllowInvites;
		params.bIsDedicatedServer = bIsDedicatedServer;
		params.bUsePresence = bUsePresence;
		params.bUseLobbiesIfAvailable = bUseLobbiesIfAvailable;
		params.bAllowJoinViaPresence = bAllowJoinViaPresence;
		params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
		params.bAntiCheatProtected = bAntiCheatProtected;
		params.bUsesStats = bUsesStats;
		params.bShouldAdvertise = bShouldAdvertise;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateSessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCreateSessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(86);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UGetRecentPlayersCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11931);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FBPUniqueNetId                              UniqueNetId;
			class UGetRecentPlayersCallbackProxy*              ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetRecentPlayersCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGetRecentPlayersCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(92);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPServerPresenceSearchType                        ServerTypeToSearch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionsSearchSetting>              Filters                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bEmptyServersOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNonEmptyServersOnly                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSecureServersOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSearchLobbies                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinSlotsAvailable                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFindSessionsCallbackProxyAdvanced*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32_t MinSlotsAvailable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11929);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			int32_t                                            MaxResults;
			bool                                               bUseLAN;
			EBPServerPresenceSearchType                        ServerTypeToSearch;
			unsigned char                                      UnknownData_0000[0x2];
			TArray<struct FSessionsSearchSetting>              Filters;
			bool                                               bEmptyServersOnly;
			bool                                               bNonEmptyServersOnly;
			bool                                               bSecureServersOnly;
			bool                                               bSearchLobbies;
			int32_t                                            MinSlotsAvailable;
			class UFindSessionsCallbackProxyAdvanced*          ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MaxResults = MaxResults;
		params.bUseLAN = bUseLAN;
		params.ServerTypeToSearch = ServerTypeToSearch;
		params.Filters = Filters;
		params.bEmptyServersOnly = bEmptyServersOnly;
		params.bNonEmptyServersOnly = bNonEmptyServersOnly;
		params.bSecureServersOnly = bSecureServersOnly;
		params.bSearchLobbies = bSearchLobbies;
		params.MinSlotsAvailable = MinSlotsAvailable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             SessionResults                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionsSearchSetting>              Filters                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBlueprintSessionResult>             FilteredResults                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFindSessionsCallbackProxyAdvanced::FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11928);
		
		struct
		{
			TArray<struct FBlueprintSessionResult>             SessionResults;
			TArray<struct FSessionsSearchSetting>              Filters;
			TArray<struct FBlueprintSessionResult>             FilteredResults;
		} params;
		params.SessionResults = SessionResults;
		params.Filters = Filters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilteredResults != nullptr)
			*FilteredResults = params.FilteredResults;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindSessionsCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFindSessionsCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.JoinSessionCallbackProxyAdvanced.JoinSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UJoinSessionCallbackProxyAdvanced*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UJoinSessionCallbackProxyAdvanced* UJoinSessionCallbackProxyAdvanced::JoinSession(class UWorld* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11933);
		
		struct
		{
			class UWorld*                                      WorldContextObject;
			class APlayerController*                           PlayerController;
			struct FBlueprintSessionResult                     SearchResult;
			class UJoinSessionCallbackProxyAdvanced*           ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJoinSessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UJoinSessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(94);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULoginUserCallbackProxy*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULoginUserCallbackProxy* ULoginUserCallbackProxy::LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& UserID, const class FString& UserToken)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11934);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FString                                      UserID;
			class FString                                      UserToken;
			class ULoginUserCallbackProxy*                     ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.UserID = UserID;
		params.UserToken = UserToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginUserCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULoginUserCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(95);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPUserPrivileges                                  PrivilegeToCheck                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerUniqueNetID                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UGetUserPrivilegeCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11932);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			EBPUserPrivileges                                  PrivilegeToCheck;
			unsigned char                                      UnknownData_0000[0x7];
			struct FBPUniqueNetId                              PlayerUniqueNetID;
			class UGetUserPrivilegeCallbackProxy*              ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PrivilegeToCheck = PrivilegeToCheck;
		params.PlayerUniqueNetID = PlayerUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetUserPrivilegeCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGetUserPrivilegeCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(93);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULogoutUserCallbackProxy*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11935);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class ULogoutUserCallbackProxy*                    ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULogoutUserCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULogoutUserCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(96);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PrivateConnections                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinInProgress                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRefreshOnlineData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicatedServer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUpdateSessionCallbackProxyAdvanced*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11937);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<struct FSessionPropertyKeyPair>             ExtraSettings;
			int32_t                                            PublicConnections;
			int32_t                                            PrivateConnections;
			bool                                               bUseLAN;
			bool                                               bAllowInvites;
			bool                                               bAllowJoinInProgress;
			bool                                               bRefreshOnlineData;
			bool                                               bIsDedicatedServer;
			unsigned char                                      UnknownData_0000[0x3];
			class UUpdateSessionCallbackProxyAdvanced*         ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ExtraSettings = ExtraSettings;
		params.PublicConnections = PublicConnections;
		params.PrivateConnections = PrivateConnections;
		params.bUseLAN = bUseLAN;
		params.bAllowInvites = bAllowInvites;
		params.bAllowJoinInProgress = bAllowJoinInProgress;
		params.bRefreshOnlineData = bRefreshOnlineData;
		params.bIsDedicatedServer = bIsDedicatedServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateSessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUpdateSessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(98);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetIDInvited                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class USendFriendInviteCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11936);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			struct FBPUniqueNetId                              UniqueNetIDInvited;
			class USendFriendInviteCallbackProxy*              ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.UniqueNetIDInvited = UniqueNetIDInvited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USendFriendInviteCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USendFriendInviteCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(97);
		return ptr;
	}

}


