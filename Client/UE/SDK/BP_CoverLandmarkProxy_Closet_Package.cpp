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
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.CanInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_CoverLandmarkProxy_Closet_C::CanInteract()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120041);
		
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
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.CanInteractThroughHitActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_CoverLandmarkProxy_Closet_C::CanInteractThroughHitActors(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120042);
		
		struct
		{
			struct FHitResult                                  Hit;
			bool                                               ReturnValue;
		} params;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineActionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText ABP_CoverLandmarkProxy_Closet_C::DetermineActionText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120043);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineAnimatedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName ABP_CoverLandmarkProxy_Closet_C::DetermineAnimatedIcon()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120044);
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineCurrentProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_CoverLandmarkProxy_Closet_C::DetermineCurrentProgress()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120045);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputEvent                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInputEvent ABP_CoverLandmarkProxy_Closet_C::DetermineInputEvent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120046);
		
		struct
		{
			EInputEvent                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DetermineInteractionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_CoverLandmarkProxy_Closet_C::DetermineInteractionDistance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120047);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.GetInteractableComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractableComponent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UInteractableComponent* ABP_CoverLandmarkProxy_Closet_C::GetInteractableComponent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120048);
		
		struct
		{
			class UInteractableComponent*                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnRep_bOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::OnRep_bOpen()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120049);
		
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
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.MoveDoor_TImeline__FinishedFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::MoveDoor_TImeline__FinishedFunc()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120050);
		
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
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.MoveDoor_TImeline__UpdateFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::MoveDoor_TImeline__UpdateFunc()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120051);
		
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
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.DoubleTapInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120052);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.EndFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120053);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.EndInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120054);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120055);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.MeleeInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120056);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnFocusGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120057);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120058);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnProxyUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::OnProxyUse(bool bIsActive)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120059);
		
		struct
		{
			bool                                               bIsActive;
		} params;
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120060);
		
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
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.OnProxyEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::OnProxyEnd(bool bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120061);
		
		struct
		{
			bool                                               bSuccess;
		} params;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120062);
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120063);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ToggleDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::ToggleDoor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120064);
		
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
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.Server_Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::Server_Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120065);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InInteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InInteractableComponent = InInteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoverLandmarkProxy_Closet.BP_CoverLandmarkProxy_Closet_C.ExecuteUbergraph_BP_CoverLandmarkProxy_Closet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoverLandmarkProxy_Closet_C::ExecuteUbergraph_BP_CoverLandmarkProxy_Closet(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(120066);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CoverLandmarkProxy_Closet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_CoverLandmarkProxy_Closet_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(120067);
		return ptr;
	}

}


