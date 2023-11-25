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
	 * 		Name   -> PredefinedFunction ADestructibleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ADestructibleActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(110);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructibleFractureSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDestructibleFractureSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(115);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDestructibleMesh*                           NewMesh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12279);
		
		struct
		{
			class UDestructibleMesh*                           NewMesh;
		} params;
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDestructibleMesh*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12278);
		
		struct
		{
			class UDestructibleMesh*                           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseDamage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HurtOrigin                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseStrength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12277);
		
		struct
		{
			float                                              BaseDamage;
			struct FVector                        HurtOrigin;
			float                                              DamageRadius;
			float                                              ImpulseStrength;
			bool                                               bFullDamage;
		} params;
		params.BaseDamage = BaseDamage;
		params.HurtOrigin = HurtOrigin;
		params.DamageRadius = DamageRadius;
		params.ImpulseStrength = ImpulseStrength;
		params.bFullDamage = bFullDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.ApplyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HitLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ImpulseDir                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseStrength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12276);
		
		struct
		{
			float                                              DamageAmount;
			struct FVector                        HitLocation;
			struct FVector                        ImpulseDir;
			float                                              ImpulseStrength;
		} params;
		params.DamageAmount = DamageAmount;
		params.HitLocation = HitLocation;
		params.ImpulseDir = ImpulseDir;
		params.ImpulseStrength = ImpulseStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructibleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDestructibleComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(114);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructibleMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDestructibleMesh::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(118);
		return ptr;
	}

}


