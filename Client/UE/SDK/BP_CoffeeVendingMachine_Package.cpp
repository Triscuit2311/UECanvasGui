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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineCurrentProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_CoffeeVendingMachine_C::DetermineCurrentProgress()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125482);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.CanInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_CoffeeVendingMachine_C::CanInteract()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125483);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.CanInteractThroughHitActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_CoffeeVendingMachine_C::CanInteractThroughHitActors(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125484);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineActionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText ABP_CoffeeVendingMachine_C::DetermineActionText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125485);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineAnimatedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName ABP_CoffeeVendingMachine_C::DetermineAnimatedIcon()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125486);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputEvent                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInputEvent ABP_CoffeeVendingMachine_C::DetermineInputEvent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125487);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DetermineInteractionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_CoffeeVendingMachine_C::DetermineInteractionDistance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125488);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.GetInteractableComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractableComponent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UInteractableComponent* ABP_CoffeeVendingMachine_C::GetInteractableComponent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125489);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.OnRep_bIsJammed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::OnRep_bIsJammed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125490);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.IsMachineInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Stage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::IsMachineInteraction(int32_t Stage, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125491);
		
		struct
		{
			int32_t                                            Stage;
			bool                                               ReturnValue;
		} params;
		params.Stage = Stage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.InteractableToStageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::InteractableToStageNumber(class UInteractableComponent* InteractableComponent, int32_t* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125492);
		
		struct
		{
			class UInteractableComponent*                      InteractableComponent;
			int32_t                                            ReturnValue;
		} params;
		params.InteractableComponent = InteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.SetInUseBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::SetInUseBy(class AReadyOrNotCharacter* Player)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125493);
		
		struct
		{
			class AReadyOrNotCharacter*                        Player;
		} params;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.IsDispensingLiquid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::IsDispensingLiquid(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125494);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.FillCup__FinishedFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::FillCup__FinishedFunc()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125495);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.FillCup__UpdateFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::FillCup__UpdateFunc()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125496);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.DoubleTapInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125497);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.EndFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125498);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.EndInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125499);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125500);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.MeleeInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125501);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.OnFocusGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125502);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125503);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125504);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125505);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.ResetMachine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::ResetMachine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125506);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125507);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Server_Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::Server_Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125508);
		
		struct
		{
			class AReadyOrNotCharacter*                        InteractInstigator;
			class UInteractableComponent*                      InteractableComponent;
		} params;
		params.InteractInstigator = InteractInstigator;
		params.InteractableComponent = InteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Multicast_PlaySFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Stage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                        Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::Multicast_PlaySFX(class AReadyOrNotCharacter* Instigator, int32_t Stage, const struct FVector& Location)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125509);
		
		struct
		{
			class AReadyOrNotCharacter*                        Instigator;
			int32_t                                            Stage;
			struct FVector                        Location;
		} params;
		params.Instigator = Instigator;
		params.Stage = Stage;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Multicast_SetDispenseLiquid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::Multicast_SetDispenseLiquid(bool bOn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125510);
		
		struct
		{
			bool                                               bOn;
		} params;
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::CustomEvent_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125511);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::CustomEvent_2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125512);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.KickMachine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        Kicker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::KickMachine(class AReadyOrNotCharacter* Kicker)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125513);
		
		struct
		{
			class AReadyOrNotCharacter*                        Kicker;
		} params;
		params.Kicker = Kicker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.Multicast_KickMachine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::Multicast_KickMachine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125514);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::CustomEvent_3()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125515);
		
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
	 * 		Name   -> Function BP_CoffeeVendingMachine.BP_CoffeeVendingMachine_C.ExecuteUbergraph_BP_CoffeeVendingMachine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_CoffeeVendingMachine_C::ExecuteUbergraph_BP_CoffeeVendingMachine(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125516);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CoffeeVendingMachine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_CoffeeVendingMachine_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125517);
		return ptr;
	}

}


