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
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        LinearVelocityScale                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngularVelocityScale                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FictitiousAngularScale                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13971);
		
		struct
		{
			struct FVector                        LinearVelocityScale;
			float                                              AngularVelocityScale;
			float                                              FictitiousAngularScale;
		} params;
		params.LinearVelocityScale = LinearVelocityScale;
		params.AngularVelocityScale = AngularVelocityScale;
		params.FictitiousAngularScale = FictitiousAngularScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EdgeStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BendingStiffness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AreaStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13970);
		
		struct
		{
			float                                              EdgeStiffness;
			float                                              BendingStiffness;
			float                                              AreaStiffness;
		} params;
		params.EdgeStiffness = EdgeStiffness;
		params.BendingStiffness = BendingStiffness;
		params.AreaStiffness = AreaStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TetherStiffness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13969);
		
		struct
		{
			float                                              TetherStiffness;
		} params;
		params.TetherStiffness = TetherStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      TetherStiffness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetLongRangeAttachment(const struct FVector2D& TetherStiffness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13968);
		
		struct
		{
			struct FVector2D                      TetherStiffness;
		} params;
		params.TetherStiffness = TetherStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetGravity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GravityScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsGravityOverridden                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        GravityOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13967);
		
		struct
		{
			float                                              GravityScale;
			bool                                               bIsGravityOverridden;
			unsigned char                                      UnknownData_0000[0x3];
			struct FVector                        GravityOverride;
		} params;
		params.GravityScale = GravityScale;
		params.bIsGravityOverridden = bIsGravityOverridden;
		params.GravityOverride = GravityOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DampingCoefficient                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetDamping(float DampingCoefficient)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13966);
		
		struct
		{
			float                                              DampingCoefficient;
		} params;
		params.DampingCoefficient = DampingCoefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CollisionThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrictionCoefficient                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseCCD                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SelfCollisionThickness                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13965);
		
		struct
		{
			float                                              CollisionThickness;
			float                                              FrictionCoefficient;
			bool                                               bUseCCD;
			unsigned char                                      UnknownData_0001[0x3];
			float                                              SelfCollisionThickness;
		} params;
		params.CollisionThickness = CollisionThickness;
		params.FrictionCoefficient = FrictionCoefficient;
		params.bUseCCD = bUseCCD;
		params.SelfCollisionThickness = SelfCollisionThickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AnimDriveStiffness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13964);
		
		struct
		{
			float                                              AnimDriveStiffness;
		} params;
		params.AnimDriveStiffness = AnimDriveStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      AnimDriveStiffness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      AnimDriveDamping                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13963);
		
		struct
		{
			struct FVector2D                      AnimDriveStiffness;
			struct FVector2D                      AnimDriveDamping;
		} params;
		params.AnimDriveStiffness = AnimDriveStiffness;
		params.AnimDriveDamping = AnimDriveDamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DragCoefficient                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LiftCoefficient                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        WindVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13962);
		
		struct
		{
			float                                              DragCoefficient;
			float                                              LiftCoefficient;
			struct FVector                        WindVelocity;
		} params;
		params.DragCoefficient = DragCoefficient;
		params.LiftCoefficient = LiftCoefficient;
		params.WindVelocity = WindVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13961);
		
		struct
		{
			bool                                               bReset;
			bool                                               bTeleport;
		} params;
		params.bReset = bReset;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosClothingInteractor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(561);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingSimulationFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosClothingSimulationFactory::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(559);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosClothConfig::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(555);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothSharedSimConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosClothSharedSimConfig::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(557);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingSimulationInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChaosClothingSimulationInteractor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(563);
		return ptr;
	}

}


