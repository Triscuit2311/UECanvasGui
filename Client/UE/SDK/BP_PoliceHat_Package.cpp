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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.DetermineCurrentProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_PoliceHat_C::DetermineCurrentProgress()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125528);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.CanInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_PoliceHat_C::CanInteract()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125529);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.CanInteractThroughHitActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool ABP_PoliceHat_C::CanInteractThroughHitActors(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125530);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.DetermineActionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText ABP_PoliceHat_C::DetermineActionText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125531);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.DetermineAnimatedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName ABP_PoliceHat_C::DetermineAnimatedIcon()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125532);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.DetermineInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputEvent                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInputEvent ABP_PoliceHat_C::DetermineInputEvent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125533);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.DetermineInteractionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_PoliceHat_C::DetermineInteractionDistance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125534);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.GetInteractableComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractableComponent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UInteractableComponent* ABP_PoliceHat_C::GetInteractableComponent()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125535);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.DoubleTapInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125536);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.EndFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125537);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.EndInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125538);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125539);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.MeleeInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125540);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.OnFocusGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125541);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125542);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125543);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InInteractableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125544);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.Server_Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InteractInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::Server_Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InteractableComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125545);
		
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
	 * 		Name   -> Function BP_PoliceHat.BP_PoliceHat_C.ExecuteUbergraph_BP_PoliceHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_PoliceHat_C::ExecuteUbergraph_BP_PoliceHat(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(125546);
		
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
	 * 		Name   -> PredefinedFunction ABP_PoliceHat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_PoliceHat_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125547);
		return ptr;
	}

}


