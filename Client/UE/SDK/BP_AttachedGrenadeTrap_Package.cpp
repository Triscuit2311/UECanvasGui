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
	 * 		Name   -> Function BP_AttachedGrenadeTrap.BP_AttachedGrenadeTrap_C.CanApplyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDamageType*                                 InDamageType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_AttachedGrenadeTrap_C::CanApplyDamage(class UDamageType* InDamageType, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88222);
		
		struct
		{
			class UDamageType*                                 InDamageType;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.InDamageType = InDamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedGrenadeTrap.BP_AttachedGrenadeTrap_C.Explode Trap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_AttachedGrenadeTrap_C::ExplodeTrap()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88221);
		
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
	 * 		Name   -> Function BP_AttachedGrenadeTrap.BP_AttachedGrenadeTrap_C.Server_ApplyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InTriggeredBy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_AttachedGrenadeTrap_C::Server_ApplyDamage(class AReadyOrNotCharacter* InTriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88220);
		
		struct
		{
			class AReadyOrNotCharacter*                        InTriggeredBy;
		} params;
		params.InTriggeredBy = InTriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedGrenadeTrap.BP_AttachedGrenadeTrap_C.OnTrapTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        TriggeredBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_AttachedGrenadeTrap_C::OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88219);
		
		struct
		{
			class AReadyOrNotCharacter*                        TriggeredBy;
		} params;
		params.TriggeredBy = TriggeredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedGrenadeTrap.BP_AttachedGrenadeTrap_C.ReceivePointDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                        HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                        HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                        ShotFromDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		void                                               ReturnValue
	 */
	void ABP_AttachedGrenadeTrap_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88218);
		
		struct
		{
			float                                              Damage;
			unsigned char                                      UnknownData_0001[0x4];
			class UDamageType*                                 DamageType;
			struct FVector                        HitLocation;
			struct FVector                        HitNormal;
			class UPrimitiveComponent*                         HitComponent;
			class FName                                        BoneName;
			struct FVector                        ShotFromDirection;
			unsigned char                                      UnknownData_0002[0x4];
			class AController*                                 InstigatedBy;
			class AActor*                                      DamageCauser;
			struct FHitResult                                  HitInfo;
		} params;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.HitComponent = HitComponent;
		params.BoneName = BoneName;
		params.ShotFromDirection = ShotFromDirection;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedGrenadeTrap.BP_AttachedGrenadeTrap_C.ReceiveRadialDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageReceived                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                        Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_AttachedGrenadeTrap_C::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88217);
		
		struct
		{
			float                                              DamageReceived;
			unsigned char                                      UnknownData_0003[0x4];
			class UDamageType*                                 DamageType;
			struct FVector                        Origin;
			struct FHitResult                                  HitInfo;
			unsigned char                                      UnknownData_0004[0x4];
			class AController*                                 InstigatedBy;
			class AActor*                                      DamageCauser;
		} params;
		params.DamageReceived = DamageReceived;
		params.DamageType = DamageType;
		params.Origin = Origin;
		params.HitInfo = HitInfo;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedGrenadeTrap.BP_AttachedGrenadeTrap_C.ExecuteUbergraph_BP_AttachedGrenadeTrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_AttachedGrenadeTrap_C::ExecuteUbergraph_BP_AttachedGrenadeTrap(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88216);
		
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
	 * 		Name   -> PredefinedFunction ABP_AttachedGrenadeTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_AttachedGrenadeTrap_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88215);
		return ptr;
	}

}


