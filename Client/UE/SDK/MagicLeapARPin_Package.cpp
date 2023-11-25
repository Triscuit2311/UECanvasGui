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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14168);
		
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
	 * 		Name   -> PredefinedFunction AMagicLeapARPinInfoActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AMagicLeapARPinInfoActorBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(696);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinComponent::UnPin()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5397);
		
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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMagicLeapARPinSaveGame*                     InPinDataClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutPinDataValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMagicLeapARPinSaveGame*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(class UMagicLeapARPinSaveGame* InPinDataClass, bool* OutPinDataValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5396);
		
		struct
		{
			class UMagicLeapARPinSaveGame*                     InPinDataClass;
			bool                                               OutPinDataValid;
			unsigned char                                      UnknownData_0000[0x7];
			class UMagicLeapARPinSaveGame*                     ReturnValue;
		} params;
		params.InPinDataClass = InPinDataClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPinDataValid != nullptr)
			*OutPinDataValid = params.OutPinDataValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5395);
		
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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinToID(const struct FGuid& PinId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5394);
		
		struct
		{
			struct FGuid                                       PinId;
			bool                                               ReturnValue;
		} params;
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinComponent::PinToBestFit()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5393);
		
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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5392);
		
		struct
		{
			class USceneComponent*                             ComponentToPin;
			bool                                               ReturnValue;
		} params;
		params.ComponentToPin = ComponentToPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinRestoredOrSynced()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5391);
		
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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToPin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5390);
		
		struct
		{
			class AActor*                                      ActorToPin;
			bool                                               ReturnValue;
		} params;
		params.ActorToPin = ActorToPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRestoredOrSynced                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5389);
		
		struct
		{
			bool                                               bRestoredOrSynced;
		} params;
		params.bRestoredOrSynced = bRestoredOrSynced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5388);
		
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
	 * 		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDataRestored                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinComponent::MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5387);
		
		struct
		{
			bool                                               bDataRestored;
		} params;
		params.bDataRestored = bDataRestored;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::IsPinned()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5386);
		
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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinState                        State                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5383);
		
		struct
		{
			struct FMagicLeapARPinState                        State;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5382);
		
		struct
		{
			struct FGuid                                       PinId;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PinId != nullptr)
			*PinId = params.PinId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMagicLeapARPinSaveGame*                     PinDataClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMagicLeapARPinSaveGame*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UMagicLeapARPinSaveGame* PinDataClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5381);
		
		struct
		{
			class UMagicLeapARPinSaveGame*                     PinDataClass;
			class UMagicLeapARPinSaveGame*                     ReturnValue;
		} params;
		params.PinDataClass = PinDataClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5380);
		
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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::AttemptPinDataRestoration()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5379);
		
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
	 * 		Name   -> PredefinedFunction UMagicLeapARPinComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapARPinComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(694);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinContentBindings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapARPinContentBindings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(700);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisibilityOverride                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14169);
		
		struct
		{
			bool                                               InVisibilityOverride;
		} params;
		params.InVisibilityOverride = InVisibilityOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagicLeapARPinRenderer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AMagicLeapARPinRenderer::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(697);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapARPinSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(698);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapARPinSaveGame::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(699);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14167);
		
		struct
		{
			class FScriptDelegate                              Delegate;
		} params;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14166);
		
		struct
		{
			class FScriptDelegate                              Delegate;
		} params;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinQuery                        InGlobalFilter                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14165);
		
		struct
		{
			struct FMagicLeapARPinQuery                        InGlobalFilter;
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		params.InGlobalFilter = InGlobalFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int32_t UserIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14164);
		
		struct
		{
			int32_t                                            UserIndex;
		} params;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinQuery                        Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               Pins                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14163);
		
		struct
		{
			struct FMagicLeapARPinQuery                        Query;
			TArray<struct FGuid>                               Pins;
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		params.Query = Query;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pins != nullptr)
			*Pins = params.Pins;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PinIdString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       ARPinId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinFunctionLibrary::ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14162);
		
		struct
		{
			class FString                                      PinIdString;
			struct FGuid                                       ARPinId;
			bool                                               ReturnValue;
		} params;
		params.PinIdString = PinIdString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ARPinId != nullptr)
			*ARPinId = params.ARPinId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinFunctionLibrary::IsTrackerValid()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14161);
		
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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int32_t* Count)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14160);
		
		struct
		{
			int32_t                                            Count;
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinQuery                        CurrentGlobalFilter                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14159);
		
		struct
		{
			struct FMagicLeapARPinQuery                        CurrentGlobalFilter;
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentGlobalFilter != nullptr)
			*CurrentGlobalFilter = params.CurrentGlobalFilter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14158);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        SearchPoint                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       PinId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14157);
		
		struct
		{
			struct FVector                        SearchPoint;
			struct FGuid                                       PinId;
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		params.SearchPoint = SearchPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PinId != nullptr)
			*PinId = params.PinId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumRequested                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               Pins                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int32_t NumRequested, TArray<struct FGuid>* Pins)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14156);
		
		struct
		{
			int32_t                                            NumRequested;
			unsigned char                                      UnknownData_0000[0x4];
			TArray<struct FGuid>                               Pins;
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		params.NumRequested = NumRequested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pins != nullptr)
			*Pins = params.Pins;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinState                        State                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(const struct FMagicLeapARPinState& State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14155);
		
		struct
		{
			struct FMagicLeapARPinState                        State;
			unsigned char                                      UnknownData_0001[0x4];
			class FString                                      ReturnValue;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMagicLeapARPinState                        State                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14154);
		
		struct
		{
			struct FGuid                                       PinId;
			struct FMagicLeapARPinState                        State;
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               PinFoundInEnvironment                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14153);
		
		struct
		{
			struct FGuid                                       PinId;
			struct FVector                        Position;
			struct FRotator                       Orientation;
			bool                                               PinFoundInEnvironment;
			bool                                               ReturnValue;
		} params;
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (PinFoundInEnvironment != nullptr)
			*PinFoundInEnvironment = params.PinFoundInEnvironment;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               PinFoundInEnvironment                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14152);
		
		struct
		{
			struct FGuid                                       PinId;
			struct FVector                        Position;
			struct FRotator                       Orientation;
			bool                                               PinFoundInEnvironment;
			bool                                               ReturnValue;
		} params;
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (PinFoundInEnvironment != nullptr)
			*PinFoundInEnvironment = params.PinFoundInEnvironment;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14151);
		
		struct
		{
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapPassableWorldError                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14150);
		
		struct
		{
			EMagicLeapPassableWorldError                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14149);
		
		struct
		{
			class FScriptDelegate                              Delegate;
		} params;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14148);
		
		struct
		{
			class FScriptDelegate                              Delegate;
		} params;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ARPinId                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMagicLeapARPinFunctionLibrary::ARPinIdToString(const struct FGuid& ARPinId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14147);
		
		struct
		{
			struct FGuid                                       ARPinId;
			class FString                                      ReturnValue;
		} params;
		params.ARPinId = ARPinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapARPinFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(695);
		return ptr;
	}

}


