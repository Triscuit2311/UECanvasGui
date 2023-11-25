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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.DetermineCurrentProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_PumpkinHead_C::DetermineCurrentProgress()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125552);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.CanInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_PumpkinHead_C::CanInteract()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125553);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.CanInteractThroughHitActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_PumpkinHead_C::CanInteractThroughHitActors(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125554);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.DetermineActionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText ABP_PumpkinHead_C::DetermineActionText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125555);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.DetermineAnimatedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName ABP_PumpkinHead_C::DetermineAnimatedIcon()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125556);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.DetermineInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputEvent                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInputEvent ABP_PumpkinHead_C::DetermineInputEvent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125557);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.DetermineInteractionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_PumpkinHead_C::DetermineInteractionDistance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125558);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.GetInteractableComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractableComponent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UInteractableComponent* ABP_PumpkinHead_C::GetInteractableComponent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125559);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.GetWearable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PumpkinHead_C*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::GetWearable(class AReadyOrNotCharacter* Character, class ABP_PumpkinHead_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125560);
		
		struct
		{
			class AReadyOrNotCharacter*                        Character;
			class ABP_PumpkinHead_C*                           ReturnValue;
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.IsWearing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::IsWearing(class AReadyOrNotCharacter* Character, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125561);
		
		struct
		{
			class AReadyOrNotCharacter*                        Character;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.UserConstructionScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125562);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.DoubleTapInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125563);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.EndFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125564);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.EndInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125565);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125566);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.MeleeInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125567);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.OnFocusGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125568);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125569);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125570);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125571);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.Server_Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::Server_Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125572);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125573);
		
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
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.UpdatePaperdollOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::UpdatePaperdollOverride(class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125574);
		
		struct
		{
			class APlayerCharacter*                            PlayerCharacter;
		} params;
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PumpkinHead.BP_PumpkinHead_C.ExecuteUbergraph_BP_PumpkinHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PumpkinHead_C::ExecuteUbergraph_BP_PumpkinHead(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125575);
		
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
	 * 		Name   -> PredefinedFunction ABP_PumpkinHead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_PumpkinHead_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125576);
		return ptr;
	}

}


