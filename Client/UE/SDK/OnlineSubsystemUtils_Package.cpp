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
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFindSessionsCallbackProxy::GetServerName(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11793);
		
		struct
		{
			struct FBlueprintSessionResult                     Result;
			class FString                                      ReturnValue;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFindSessionsCallbackProxy::GetPingInMs(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11792);
		
		struct
		{
			struct FBlueprintSessionResult                     Result;
			int32_t                                            ReturnValue;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFindSessionsCallbackProxy::GetMaxPlayers(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11791);
		
		struct
		{
			struct FBlueprintSessionResult                     Result;
			int32_t                                            ReturnValue;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFindSessionsCallbackProxy::GetCurrentPlayers(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11790);
		
		struct
		{
			struct FBlueprintSessionResult                     Result;
			int32_t                                            ReturnValue;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFindSessionsCallbackProxy*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11789);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			int32_t                                            MaxResults;
			bool                                               bUseLAN;
			unsigned char                                      UnknownData_0000[0x3];
			class UFindSessionsCallbackProxy*                  ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MaxResults = MaxResults;
		params.bUseLAN = bUseLAN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFindSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(32);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInAppPurchaseProductRequest                ProductRequest                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseCallbackProxy*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11795);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FInAppPurchaseProductRequest                ProductRequest;
			class UInAppPurchaseCallbackProxy*                 ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.ProductRequest = ProductRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInAppPurchaseCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(34);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseCallbackProxy2*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11798);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class UInAppPurchaseCallbackProxy2*                ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseCallbackProxy2*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11797);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class UInAppPurchaseCallbackProxy2*                ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInAppPurchaseProductRequest2               ProductRequest                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseCallbackProxy2*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11796);
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FInAppPurchaseProductRequest2               ProductRequest;
			class UInAppPurchaseCallbackProxy2*                ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.ProductRequest = ProductRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseCallbackProxy2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInAppPurchaseCallbackProxy2::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(35);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ProductIdentifiers                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseQueryCallbackProxy*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11799);
		
		struct
		{
			class APlayerController*                           PlayerController;
			TArray<class FString>                              ProductIdentifiers;
			class UInAppPurchaseQueryCallbackProxy*            ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.ProductIdentifiers = ProductIdentifiers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInAppPurchaseQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(36);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInAppPurchaseProductRequest>        ConsumableProductFlags                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseRestoreCallbackProxy*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11801);
		
		struct
		{
			TArray<struct FInAppPurchaseProductRequest>        ConsumableProductFlags;
			class APlayerController*                           PlayerController;
			class UInAppPurchaseRestoreCallbackProxy*          ReturnValue;
		} params;
		params.ConsumableProductFlags = ConsumableProductFlags;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseRestoreCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInAppPurchaseRestoreCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(38);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TScriptInterface<class ITurnBasedMatchInterface>   MatchActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowExistingMatches                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFindTurnBasedMatchCallbackProxy*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class ITurnBasedMatchInterface>& MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11794);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			TScriptInterface<class ITurnBasedMatchInterface>   MatchActor;
			int32_t                                            MinPlayers;
			int32_t                                            MaxPlayers;
			int32_t                                            PlayerGroup;
			bool                                               ShowExistingMatches;
			unsigned char                                      UnknownData_0000[0x3];
			class UFindTurnBasedMatchCallbackProxy*            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchActor = MatchActor;
		params.MinPlayers = MinPlayers;
		params.MaxPlayers = MaxPlayers;
		params.PlayerGroup = PlayerGroup;
		params.ShowExistingMatches = ShowExistingMatches;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindTurnBasedMatchCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFindTurnBasedMatchCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(33);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ProductIdentifiers                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseQueryCallbackProxy2*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11800);
		
		struct
		{
			class APlayerController*                           PlayerController;
			TArray<class FString>                              ProductIdentifiers;
			class UInAppPurchaseQueryCallbackProxy2*           ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.ProductIdentifiers = ProductIdentifiers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseQueryCallbackProxy2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInAppPurchaseQueryCallbackProxy2::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(37);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInAppPurchaseProductRequest2>       ConsumableProductFlags                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInAppPurchaseRestoreCallbackProxy2*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11802);
		
		struct
		{
			TArray<struct FInAppPurchaseProductRequest2>       ConsumableProductFlags;
			class APlayerController*                           PlayerController;
			class UInAppPurchaseRestoreCallbackProxy2*         ReturnValue;
		} params;
		params.ConsumableProductFlags = ConsumableProductFlags;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseRestoreCallbackProxy2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInAppPurchaseRestoreCallbackProxy2::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UJoinSessionCallbackProxy*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11803);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			struct FBlueprintSessionResult                     SearchResult;
			class UJoinSessionCallbackProxy*                   ReturnValue;
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
	 * 		Name   -> PredefinedFunction UJoinSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UJoinSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(40);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SessionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULeaderboardFlushCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController* PlayerController, const class FName& SessionName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11805);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class FName                                        SessionName;
			class ULeaderboardFlushCallbackProxy*              ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.SessionName = SessionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardFlushCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULeaderboardFlushCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(42);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StatValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, const class FName& StatName, int32_t StatValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11804);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class FName                                        StatName;
			int32_t                                            StatValue;
			bool                                               ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.StatName = StatName;
		params.StatValue = StatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULeaderboardBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(41);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULeaderboardQueryCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const class FName& StatName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11806);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class FName                                        StatName;
			class ULeaderboardQueryCallbackProxy*              ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULeaderboardQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULogoutCallbackProxy*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11807);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class ULogoutCallbackProxy*                        ReturnValue;
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
	 * 		Name   -> PredefinedFunction ULogoutCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULogoutCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(44);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnlineBeacon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AOnlineBeacon::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(46);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AOnlineBeaconClient::ClientOnConnected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11808);
		
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
	 * 		Name   -> PredefinedFunction AOnlineBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AOnlineBeaconClient::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(47);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnlineBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AOnlineBeaconHost::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(48);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineEngineInterfaceImpl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UOnlineEngineInterfaceImpl::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(51);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlinePIESettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UOnlinePIESettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyReservation                           ReservationUpdate                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ServerUpdateReservationRequest(const class FString& SessionID, const struct FPartyReservation& ReservationUpdate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11817);
		
		struct
		{
			class FString                                      SessionID;
			struct FPartyReservation                           ReservationUpdate;
		} params;
		params.SessionID = SessionID;
		params.ReservationUpdate = ReservationUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyReservation                           Reservation                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ServerReservationRequest(const class FString& SessionID, const struct FPartyReservation& Reservation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11816);
		
		struct
		{
			class FString                                      SessionID;
			struct FPartyReservation                           Reservation;
		} params;
		params.SessionID = SessionID;
		params.Reservation = Reservation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyReservation                           ReservationUpdate                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(const class FString& SessionID, const struct FPartyReservation& ReservationUpdate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11815);
		
		struct
		{
			class FString                                      SessionID;
			struct FPartyReservation                           ReservationUpdate;
		} params;
		params.SessionID = SessionID;
		params.ReservationUpdate = ReservationUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PartyLeader                                                (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11814);
		
		struct
		{
			struct FUniqueNetIdRepl                            PartyLeader;
		} params;
		params.PartyLeader = PartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyReservation                           Reservation                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ServerAddOrUpdateReservationRequest(const class FString& SessionID, const struct FPartyReservation& Reservation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11813);
		
		struct
		{
			class FString                                      SessionID;
			struct FPartyReservation                           Reservation;
		} params;
		params.SessionID = SessionID;
		params.Reservation = Reservation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumRemainingReservations                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11812);
		
		struct
		{
			int32_t                                            NumRemainingReservations;
		} params;
		params.NumRemainingReservations = NumRemainingReservations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ClientSendReservationFull()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11811);
		
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
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPartyReservationResult                            ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ClientReservationResponse(EPartyReservationResult ReservationResponse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11810);
		
		struct
		{
			EPartyReservationResult                            ReservationResponse;
		} params;
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPartyReservationResult                            ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void APartyBeaconClient::ClientCancelReservationResponse(EPartyReservationResult ReservationResponse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11809);
		
		struct
		{
			EPartyReservationResult                            ReservationResponse;
		} params;
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APartyBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APartyBeaconClient::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(57);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(56);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnlineBeaconHostObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AOnlineBeaconHostObject::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(49);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APartyBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APartyBeaconHost::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(58);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyBeaconState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPartyBeaconState::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(59);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMPMatchOutcome                                    Outcome                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TurnTimeoutInSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UQuitMatchCallbackProxy*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11818);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FString                                      MatchID;
			EMPMatchOutcome                                    Outcome;
			unsigned char                                      UnknownData_0000[0x3];
			int32_t                                            TurnTimeoutInSeconds;
			class UQuitMatchCallbackProxy*                     ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		params.Outcome = Outcome;
		params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuitMatchCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UQuitMatchCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UShowLoginUICallbackProxy*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11819);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           InPlayerController;
			class UShowLoginUICallbackProxy*                   ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShowLoginUICallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UShowLoginUICallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(61);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpectatorReservation                       Reservation                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ASpectatorBeaconClient::ServerReservationRequest(const class FString& SessionID, const struct FSpectatorReservation& Reservation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11825);
		
		struct
		{
			class FString                                      SessionID;
			struct FSpectatorReservation                       Reservation;
		} params;
		params.SessionID = SessionID;
		params.Reservation = Reservation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            Spectator                                                  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ASpectatorBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11824);
		
		struct
		{
			struct FUniqueNetIdRepl                            Spectator;
		} params;
		params.Spectator = Spectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumRemainingReservations                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ASpectatorBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11823);
		
		struct
		{
			int32_t                                            NumRemainingReservations;
		} params;
		params.NumRemainingReservations = NumRemainingReservations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ASpectatorBeaconClient::ClientSendReservationFull()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11822);
		
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
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESpectatorReservationResult                        ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ASpectatorBeaconClient::ClientReservationResponse(ESpectatorReservationResult ReservationResponse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11821);
		
		struct
		{
			ESpectatorReservationResult                        ReservationResponse;
		} params;
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESpectatorReservationResult                        ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ASpectatorBeaconClient::ClientCancelReservationResponse(ESpectatorReservationResult ReservationResponse)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11820);
		
		struct
		{
			ESpectatorReservationResult                        ReservationResponse;
		} params;
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpectatorBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ASpectatorBeaconClient::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectatorBeaconState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USpectatorBeaconState::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(64);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpectatorBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ASpectatorBeaconHost::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(63);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ATestBeaconHost::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(66);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11831);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UObject*                                     Object;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerDisplayName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t PlayerIndex, class FString* PlayerDisplayName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11830);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FString                                      MatchID;
			int32_t                                            PlayerIndex;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      PlayerDisplayName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerDisplayName != nullptr)
			*PlayerDisplayName = params.PlayerDisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t* PlayerIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11829);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FString                                      MatchID;
			int32_t                                            PlayerIndex;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerIndex != nullptr)
			*PlayerIndex = params.PlayerIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsMyTurn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11828);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FString                                      MatchID;
			bool                                               bIsMyTurn;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsMyTurn != nullptr)
			*bIsMyTurn = params.bIsMyTurn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTurnBasedBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTurnBasedBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(67);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ATestBeaconClient::ServerPong()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11827);
		
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
	 * 		Name   -> Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ATestBeaconClient::ClientPing()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11826);
		
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
	 * 		Name   -> PredefinedFunction ATestBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ATestBeaconClient::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(65);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoipListenerSynthComponent::IsIdling()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11840);
		
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
	 * 		Name   -> PredefinedFunction UVoipListenerSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVoipListenerSynthComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(72);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIpConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UIpConnection::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(13);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIpNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UIpNetDriver::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(16);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AchievementID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoundID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, float* Progress)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11780);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FName                                        AchievementID;
			bool                                               bFoundID;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              Progress;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.AchievementID = AchievementID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundID != nullptr)
			*bFoundID = params.bFoundID;
		if (Progress != nullptr)
			*Progress = params.Progress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AchievementID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoundID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Title                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        LockedDescription                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        UnlockedDescription                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHidden                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UAchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11779);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FName                                        AchievementID;
			bool                                               bFoundID;
			unsigned char                                      UnknownData_0001[0x7];
			class FText                                        Title;
			class FText                                        LockedDescription;
			class FText                                        UnlockedDescription;
			bool                                               bHidden;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.AchievementID = AchievementID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundID != nullptr)
			*bFoundID = params.bFoundID;
		if (Title != nullptr)
			*Title = params.Title;
		if (LockedDescription != nullptr)
			*LockedDescription = params.LockedDescription;
		if (UnlockedDescription != nullptr)
			*UnlockedDescription = params.UnlockedDescription;
		if (bHidden != nullptr)
			*bHidden = params.bHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAchievementBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(22);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAchievementQueryCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11782);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UAchievementQueryCallbackProxy*              ReturnValue;
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
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAchievementQueryCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11781);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UAchievementQueryCallbackProxy*              ReturnValue;
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
	 * 		Name   -> PredefinedFunction UAchievementQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAchievementQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UConnectionCallbackProxy*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11784);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UConnectionCallbackProxy*                    ReturnValue;
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
	 * 		Name   -> PredefinedFunction UConnectionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UConnectionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AchievementName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAchievementWriteCallbackProxy*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementName, float Progress, int32_t UserTag)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11783);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FName                                        AchievementName;
			float                                              Progress;
			int32_t                                            UserTag;
			class UAchievementWriteCallbackProxy*              ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.AchievementName = AchievementName;
		params.Progress = Progress;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementWriteCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAchievementWriteCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(26);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCreateSessionCallbackProxy*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11785);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			int32_t                                            PublicConnections;
			bool                                               bUseLAN;
			unsigned char                                      UnknownData_0000[0x3];
			class UCreateSessionCallbackProxy*                 ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.PublicConnections = PublicConnections;
		params.bUseLAN = bUseLAN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCreateSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(28);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDestroySessionCallbackProxy*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11786);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class UDestroySessionCallbackProxy*                ReturnValue;
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
	 * 		Name   -> PredefinedFunction UDestroySessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDestroySessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(29);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TScriptInterface<class ITurnBasedMatchInterface>   MatchActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMPMatchOutcome                                    LocalPlayerOutcome                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMPMatchOutcome                                    OtherPlayersOutcome                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEndMatchCallbackProxy*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class ITurnBasedMatchInterface>& MatchActor, const class FString& MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11787);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			TScriptInterface<class ITurnBasedMatchInterface>   MatchActor;
			class FString                                      MatchID;
			EMPMatchOutcome                                    LocalPlayerOutcome;
			EMPMatchOutcome                                    OtherPlayersOutcome;
			unsigned char                                      UnknownData_0000[0x6];
			class UEndMatchCallbackProxy*                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchActor = MatchActor;
		params.MatchID = MatchID;
		params.LocalPlayerOutcome = LocalPlayerOutcome;
		params.OtherPlayersOutcome = OtherPlayersOutcome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndMatchCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEndMatchCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TScriptInterface<class ITurnBasedMatchInterface>   TurnBasedMatchInterface                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 * 		class UEndTurnCallbackProxy*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, const TScriptInterface<class ITurnBasedMatchInterface>& TurnBasedMatchInterface)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11788);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APlayerController*                           PlayerController;
			class FString                                      MatchID;
			TScriptInterface<class ITurnBasedMatchInterface>   TurnBasedMatchInterface;
			class UEndTurnCallbackProxy*                       ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		params.TurnBasedMatchInterface = TurnBasedMatchInterface;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndTurnCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEndTurnCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31);
		return ptr;
	}

}


