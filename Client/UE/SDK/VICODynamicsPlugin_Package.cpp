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
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseExplicitCollision                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBaseVDComponent::SetUseExplicitRigidBodyCollision(bool UseExplicitCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13444);
		
		struct
		{
			bool                                               UseExplicitCollision;
		} params;
		params.UseExplicitCollision = UseExplicitCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAffected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UBaseVDComponent::SetAffectedByGlobalWind(bool IsAffected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13443);
		
		struct
		{
			bool                                               IsAffected;
		} params;
		params.IsAffected = IsAffected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.OnSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UBaseVDComponent::OnSync()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13442);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBaseVDComponent::GetTensionConstraintCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13441);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.GetParticleBuildInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVDParticleInfo>                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVDParticleInfo> UBaseVDComponent::GetParticleBuildInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13440);
		
		struct
		{
			TArray<struct FVDParticleInfo>                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TensionConstraintIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBaseVDComponent::GetLastAppliedForceFromTensionConstraint(int32_t TensionConstraintIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13439);
		
		struct
		{
			int32_t                                            TensionConstraintIndex;
			struct FVector                        ReturnValue;
		} params;
		params.TensionConstraintIndex = TensionConstraintIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UBaseVDComponent::AttachToOverlappingRigidBodies()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13438);
		
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
	 * 		Name   -> PredefinedFunction UBaseVDComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBaseVDComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(417);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ParticleIndexStart                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDRopeComponent::SetNewRestLengthStartingAtParticle(int32_t ParticleIndexStart, float NewLength)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13452);
		
		struct
		{
			int32_t                                            ParticleIndexStart;
			float                                              NewLength;
		} params;
		params.ParticleIndexStart = ParticleIndexStart;
		params.NewLength = NewLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PieceIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDRopeComponent::SetNewRestLength(float NewLength, int32_t PieceIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13451);
		
		struct
		{
			float                                              NewLength;
			int32_t                                            PieceIndex;
		} params;
		params.NewLength = NewLength;
		params.PieceIndex = PieceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.ResetRope
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVDRopeComponent::ResetRope()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13450);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PieceIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDRopeComponent::GetTrueLength(int32_t PieceIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13449);
		
		struct
		{
			int32_t                                            PieceIndex;
			float                                              ReturnValue;
		} params;
		params.PieceIndex = PieceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.GetPieces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRopePiece>                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRopePiece> UVDRopeComponent::GetPieces()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13448);
		
		struct
		{
			TArray<struct FRopePiece>                          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.CreateRopeGeometry_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVDRopeComponent::CreateRopeGeometry_BP()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13447);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SegmentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDRopeComponent::BreakAtSegment(int32_t SegmentIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13446);
		
		struct
		{
			int32_t                                            SegmentIndex;
		} params;
		params.SegmentIndex = SegmentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDRopeComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(420);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DistancePerSegment                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             StartAttachedTo                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSocket                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StartSimulateTension                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             EndAttachedTo                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        EndSocket                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               EndSimulateTension                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDDynamicRopeComponent::RebuildRopeAttached(float DistancePerSegment, class USceneComponent* StartAttachedTo, const class FName& StartSocket, bool StartSimulateTension, class USceneComponent* EndAttachedTo, const class FName& EndSocket, bool EndSimulateTension)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13455);
		
		struct
		{
			float                                              DistancePerSegment;
			unsigned char                                      UnknownData_0000[0x4];
			class USceneComponent*                             StartAttachedTo;
			class FName                                        StartSocket;
			bool                                               StartSimulateTension;
			unsigned char                                      UnknownData_0001[0x7];
			class USceneComponent*                             EndAttachedTo;
			class FName                                        EndSocket;
			bool                                               EndSimulateTension;
		} params;
		params.DistancePerSegment = DistancePerSegment;
		params.StartAttachedTo = StartAttachedTo;
		params.StartSocket = StartSocket;
		params.StartSimulateTension = StartSimulateTension;
		params.EndAttachedTo = EndAttachedTo;
		params.EndSocket = EndSocket;
		params.EndSimulateTension = EndSimulateTension;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DistancePerSegment                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        StartLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        EndLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRelativeLocations                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDDynamicRopeComponent::RebuildRopeAtPoints(float DistancePerSegment, const struct FVector& StartLocation, const struct FVector& EndLocation, bool bRelativeLocations)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13454);
		
		struct
		{
			float                                              DistancePerSegment;
			struct FVector                        StartLocation;
			struct FVector                        EndLocation;
			bool                                               bRelativeLocations;
		} params;
		params.DistancePerSegment = DistancePerSegment;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.bRelativeLocations = bRelativeLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVDDynamicRopeComponent::RebuildRope()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13453);
		
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
	 * 		Name   -> PredefinedFunction UVDDynamicRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDDynamicRopeComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(421);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDMeshVolumeConstraint*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDMeshVolumeConstraint* UVDMeshClothComponent::GetVolumeConstraint()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13458);
		
		struct
		{
			class UVDMeshVolumeConstraint*                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVDParticleSpringConstraint*>         ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class UVDParticleSpringConstraint*> UVDMeshClothComponent::GetStretchConstraintsArray()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13457);
		
		struct
		{
			TArray<class UVDParticleSpringConstraint*>         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVDParticleSpringConstraint*>         ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class UVDParticleSpringConstraint*> UVDMeshClothComponent::GetBendConstraintsArray()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13456);
		
		struct
		{
			TArray<class UVDParticleSpringConstraint*>         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDMeshClothComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDMeshClothComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(422);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDProceduralClothComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDProceduralClothComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(425);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDMeshVolumeConstraint::SetRestVolume(float NewVolume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13461);
		
		struct
		{
			float                                              NewVolume;
		} params;
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDMeshVolumeConstraint::GetRestVolume()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13460);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDMeshVolumeConstraint::GetCurrentVolume()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13459);
		
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
	 * 		Name   -> PredefinedFunction UVDMeshVolumeConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDMeshVolumeConstraint::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(423);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewStiffness                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDParticleSpringConstraint::SetStiffness(float NewStiffness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13468);
		
		struct
		{
			float                                              NewStiffness;
		} params;
		params.NewStiffness = NewStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRestDistance                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDParticleSpringConstraint::SetRestDistance(float NewRestDistance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13467);
		
		struct
		{
			float                                              NewRestDistance;
		} params;
		params.NewRestDistance = NewRestDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        Particle1                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVDSimulatedParticle*                        Particle2                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDParticleSpringConstraint::IsConstraining(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13466);
		
		struct
		{
			class UVDSimulatedParticle*                        Particle1;
			class UVDSimulatedParticle*                        Particle2;
			bool                                               ReturnValue;
		} params;
		params.Particle1 = Particle1;
		params.Particle2 = Particle2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDParticleSpringConstraint::GetStifffness()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13465);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDParticleSpringConstraint::GetRestDistance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13464);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13463);
		
		struct
		{
			class UVDSimulatedParticle*                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDSimulatedParticle* UVDParticleSpringConstraint::GetParticle1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13462);
		
		struct
		{
			class UVDSimulatedParticle*                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDParticleSpringConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDParticleSpringConstraint::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(424);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Skip                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetSkipRelativeVelocityCheckDuringCollision(bool Skip)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13490);
		
		struct
		{
			bool                                               Skip;
		} params;
		params.Skip = Skip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionChannel                                  ObjectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetObjectType(ECollisionChannel ObjectType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13489);
		
		struct
		{
			ECollisionChannel                                  ObjectType;
		} params;
		params.ObjectType = ObjectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetMinimumConstraintSatisfactionDistance(float MinDistance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13488);
		
		struct
		{
			float                                              MinDistance;
		} params;
		params.MinDistance = MinDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetGravityScale(float Scale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13487);
		
		struct
		{
			float                                              Scale;
		} params;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionChannel                                  ObjectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionResponse                                 Response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetCollisionResponseToObjectType(ECollisionChannel ObjectType, ECollisionResponse Response)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13486);
		
		struct
		{
			ECollisionChannel                                  ObjectType;
			ECollisionResponse                                 Response;
		} params;
		params.ObjectType = ObjectType;
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetCollisionEnabled(bool Enabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13485);
		
		struct
		{
			bool                                               Enabled;
		} params;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionChannel                                  Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetCollisionChannel(ECollisionChannel Channel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13484);
		
		struct
		{
			ECollisionChannel                                  Channel;
		} params;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        NewWindVector                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::SetAffectiveWindVector(const struct FVector& NewWindVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13483);
		
		struct
		{
			struct FVector                        NewWindVector;
		} params;
		params.NewWindVector = NewWindVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVDParticleSpringConstraint*>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class UVDParticleSpringConstraint*> UVDSimulatedObject::GetSpringConstraints()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13482);
		
		struct
		{
			TArray<class UVDParticleSpringConstraint*>         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedObject::GetSkipRelativeVelocityCheckDuringCollision()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13481);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetParticles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVDSimulatedParticle*>                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class UVDSimulatedParticle*> UVDSimulatedObject::GetParticles()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13480);
		
		struct
		{
			TArray<class UVDSimulatedParticle*>                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDSimulatedObject::GetMinimumConstraintSatisfactionDistance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13479);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDSimulatedObject::GetGravityScale()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13478);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDCollisionSettings                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FVDCollisionSettings UVDSimulatedObject::GetCollisionSettings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13477);
		
		struct
		{
			struct FVDCollisionSettings                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedObject::GetCollisionEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13476);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVDSimulatedObject::GetAffectiveWindVector()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13475);
		
		struct
		{
			struct FVector                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDMeshVolumeConstraint*                     Constraint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::DestroyVolumeConstraint(class UVDMeshVolumeConstraint* Constraint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13474);
		
		struct
		{
			class UVDMeshVolumeConstraint*                     Constraint;
		} params;
		params.Constraint = Constraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        Particle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::DestroyParticle(class UVDSimulatedParticle* Particle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13473);
		
		struct
		{
			class UVDSimulatedParticle*                        Particle;
		} params;
		params.Particle = Particle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDParticleSpringConstraint*                 Constraint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedObject::DestroyConstraint(class UVDParticleSpringConstraint* Constraint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13472);
		
		struct
		{
			class UVDParticleSpringConstraint*                 Constraint;
		} params;
		params.Constraint = Constraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IndexList                                                  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RestVolume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVDMeshVolumeConstraint*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDMeshVolumeConstraint* UVDSimulatedObject::CreateVolumeConstraint(TArray<int32_t> IndexList, float Alpha, float RestVolume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13471);
		
		struct
		{
			TArray<int32_t>                                    IndexList;
			float                                              Alpha;
			float                                              RestVolume;
			class UVDMeshVolumeConstraint*                     ReturnValue;
		} params;
		params.IndexList = IndexList;
		params.Alpha = Alpha;
		params.RestVolume = RestVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulatedParticle*                        Particle1                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVDSimulatedParticle*                        Particle2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RestDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Stiffness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVDParticleSpringConstraint*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDParticleSpringConstraint* UVDSimulatedObject::CreateSpringConstraint(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13470);
		
		struct
		{
			class UVDSimulatedParticle*                        Particle1;
			class UVDSimulatedParticle*                        Particle2;
			float                                              RestDistance;
			float                                              Stiffness;
			class UVDParticleSpringConstraint*                 ReturnValue;
		} params;
		params.Particle1 = Particle1;
		params.Particle2 = Particle2;
		params.RestDistance = RestDistance;
		params.Stiffness = Stiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDParticleInfo                             ParticleInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UVDSimulatedParticle*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDSimulatedParticle* UVDSimulatedObject::CreateParticle(const struct FVDParticleInfo& ParticleInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13469);
		
		struct
		{
			struct FVDParticleInfo                             ParticleInfo;
			unsigned char                                      UnknownData_0000[0x4];
			class UVDSimulatedParticle*                        ReturnValue;
		} params;
		params.ParticleInfo = ParticleInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSimulatedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDSimulatedObject::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(426);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        NewVelocity                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetVelocity(const struct FVector& NewVelocity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13519);
		
		struct
		{
			struct FVector                        NewVelocity;
		} params;
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRestitutionCoefficient                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetRestitutionCoefficient(float NewRestitutionCoefficient)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13518);
		
		struct
		{
			float                                              NewRestitutionCoefficient;
		} params;
		params.NewRestitutionCoefficient = NewRestitutionCoefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetRadius(float NewRadius)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13517);
		
		struct
		{
			float                                              NewRadius;
		} params;
		params.NewRadius = NewRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetMass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetMass(float NewMass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13516);
		
		struct
		{
			float                                              NewMass;
		} params;
		params.NewMass = NewMass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        NewLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetLocation(const struct FVector& NewLocation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13515);
		
		struct
		{
			struct FVector                        NewLocation;
		} params;
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOccluded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetIsWindOccluded(bool IsOccluded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13514);
		
		struct
		{
			bool                                               IsOccluded;
		} params;
		params.IsOccluded = IsOccluded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetIsRigidBodyCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13513);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetIsParticleCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13512);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFree                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetIsFree(bool IsFree)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13511);
		
		struct
		{
			bool                                               IsFree;
		} params;
		params.IsFree = IsFree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFrictionCoefficient                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetFrictionCoefficient(float NewFrictionCoefficient)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13510);
		
		struct
		{
			float                                              NewFrictionCoefficient;
		} params;
		params.NewFrictionCoefficient = NewFrictionCoefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewDragCoefficient                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::SetDragCoefficient(float NewDragCoefficient)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13509);
		
		struct
		{
			float                                              NewDragCoefficient;
		} params;
		params.NewDragCoefficient = NewDragCoefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVDSimulatedParticle::GetVelocity()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13508);
		
		struct
		{
			struct FVector                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDSimulatedParticle::GetRestitutionCoefficient()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13507);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDSimulatedParticle::GetRadius()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13506);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetMass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDSimulatedParticle::GetMass()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13505);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVDSimulatedParticle::GetLocation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13504);
		
		struct
		{
			struct FVector                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::GetIsWindOccluded()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13503);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::GetIsRigidBodyCollisionEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13502);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::GetIsParticleCollisionEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13501);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::GetIsFree()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13500);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDSimulatedParticle::GetFrictionCoefficient()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13499);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDSimulatedParticle::GetDragCoefficient()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13498);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDParticleAttachment                       OutAttachment                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::GetAttachment(struct FVDParticleAttachment* OutAttachment)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13497);
		
		struct
		{
			struct FVDParticleAttachment                       OutAttachment;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttachment != nullptr)
			*OutAttachment = params.OutAttachment;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.Detach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::Detach()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13496);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDParticleAttachment                       Attachment                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               UseCurrentMass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::CopyAttachment(const struct FVDParticleAttachment& Attachment, bool UseCurrentMass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13495);
		
		struct
		{
			struct FVDParticleAttachment                       Attachment;
			bool                                               UseCurrentMass;
		} params;
		params.Attachment = Attachment;
		params.UseCurrentMass = UseCurrentMass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsRelative                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::AttachToLocation(const struct FVector& Location, bool IsRelative)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13494);
		
		struct
		{
			struct FVector                        Location;
			bool                                               IsRelative;
			bool                                               ReturnValue;
		} params;
		params.Location = Location;
		params.IsRelative = IsRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SimulateTension                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::AttachToComponent(class UPrimitiveComponent* Component, const struct FVector& Location, bool SimulateTension, const class FName& Socket)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13493);
		
		struct
		{
			class UPrimitiveComponent*                         Component;
			struct FVector                        Location;
			bool                                               SimulateTension;
			unsigned char                                      UnknownData_0000[0x3];
			class FName                                        Socket;
			bool                                               ReturnValue;
		} params;
		params.Component = Component;
		params.Location = Location;
		params.SimulateTension = SimulateTension;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SimulateTension                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulatedParticle::AttachToActor(class AActor* Actor, const struct FVector& Location, bool SimulateTension, const class FName& Socket)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13492);
		
		struct
		{
			class AActor*                                      Actor;
			struct FVector                        Location;
			bool                                               SimulateTension;
			unsigned char                                      UnknownData_0001[0x3];
			class FName                                        Socket;
			bool                                               ReturnValue;
		} params;
		params.Actor = Actor;
		params.Location = Location;
		params.SimulateTension = SimulateTension;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulatedParticle.AddForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Force                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulatedParticle::AddForce(const struct FVector& Force)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13491);
		
		struct
		{
			struct FVector                        Force;
		} params;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSimulatedParticle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDSimulatedParticle::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(427);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVICODynamicsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVICODynamicsSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(434);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSkinnedRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDSkinnedRopeComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(430);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetSubstepCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SubstepCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetSubstepCount(int32_t SubstepCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13539);
		
		struct
		{
			int32_t                                            SubstepCount;
		} params;
		params.SubstepCount = SubstepCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetSelfCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13538);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetPhysXSceneCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13537);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetPerFrameCollisionCacheEnable(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13536);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetPerformExtraCollisionResolutionLoop(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13535);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13534);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetFrameRate(int32_t FrameRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13533);
		
		struct
		{
			int32_t                                            FrameRate;
		} params;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ConstraintIterationCount                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetConstraintIterationCount(int32_t ConstraintIterationCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13532);
		
		struct
		{
			int32_t                                            ConstraintIterationCount;
		} params;
		params.ConstraintIterationCount = ConstraintIterationCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetConstrainSimulationTo2DPlane(bool IsEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13531);
		
		struct
		{
			bool                                               IsEnabled;
		} params;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetConstrainPlaneOrigin(const struct FVector& Origin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13530);
		
		struct
		{
			struct FVector                        Origin;
		} params;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::SetConstrainPlaneNormal(const struct FVector& Normal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13529);
		
		struct
		{
			struct FVector                        Normal;
		} params;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Collider                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::RemoveExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13528);
		
		struct
		{
			class UBaseVDComponent*                            VDComponent;
			class UPrimitiveComponent*                         Collider;
		} params;
		params.VDComponent = VDComponent;
		params.Collider = Collider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::RemoveAllExplicitColliderMappings(class UBaseVDComponent* VDComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13527);
		
		struct
		{
			class UBaseVDComponent*                            VDComponent;
		} params;
		params.VDComponent = VDComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedParticle*>                Overlaps                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedObject*>                  SimObjectsToIgnore                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxOverlaps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulation::k2QuerySphereOverlaps(const struct FVector& Location, float Radius, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*> SimObjectsToIgnore, int32_t MaxOverlaps)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13526);
		
		struct
		{
			struct FVector                        Location;
			float                                              Radius;
			TArray<class UVDSimulatedParticle*>                Overlaps;
			TArray<class UVDSimulatedObject*>                  SimObjectsToIgnore;
			int32_t                                            MaxOverlaps;
			bool                                               ReturnValue;
		} params;
		params.Location = Location;
		params.Radius = Radius;
		params.SimObjectsToIgnore = SimObjectsToIgnore;
		params.MaxOverlaps = MaxOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overlaps != nullptr)
			*Overlaps = params.Overlaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HalfExtents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedParticle*>                Overlaps                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UVDSimulatedObject*>                  SimObjectsToIgnore                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxOverlaps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulation::k2QueryBoxOverlaps(const struct FVector& Location, const struct FVector& HalfExtents, TArray<class UVDSimulatedParticle*>* Overlaps, TArray<class UVDSimulatedObject*> SimObjectsToIgnore, int32_t MaxOverlaps)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13525);
		
		struct
		{
			struct FVector                        Location;
			struct FVector                        HalfExtents;
			TArray<class UVDSimulatedParticle*>                Overlaps;
			TArray<class UVDSimulatedObject*>                  SimObjectsToIgnore;
			int32_t                                            MaxOverlaps;
			bool                                               ReturnValue;
		} params;
		params.Location = Location;
		params.HalfExtents = HalfExtents;
		params.SimObjectsToIgnore = SimObjectsToIgnore;
		params.MaxOverlaps = MaxOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overlaps != nullptr)
			*Overlaps = params.Overlaps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDSettings                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVDSettings UVDSimulation::GetSettings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13524);
		
		struct
		{
			struct FVDSettings                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulation::GetIsRunningOnWorkerThread()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13523);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVDSimulation::GetIsExplicitRigidBodyCollisionEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13522);
		
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
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutGust                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::GetDirectionalWindParameters(class UBaseVDComponent* VDComponent, struct FVector* OutDirection, float* OutSpeed, float* OutGust)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13521);
		
		struct
		{
			class UBaseVDComponent*                            VDComponent;
			struct FVector                        OutDirection;
			float                                              OutSpeed;
			float                                              OutGust;
		} params;
		params.VDComponent = VDComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDirection != nullptr)
			*OutDirection = params.OutDirection;
		if (OutSpeed != nullptr)
			*OutSpeed = params.OutSpeed;
		if (OutGust != nullptr)
			*OutGust = params.OutGust;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseVDComponent*                            VDComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Collider                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IgnoreConvexShapes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDSimulation::AddExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider, bool IgnoreConvexShapes)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13520);
		
		struct
		{
			class UBaseVDComponent*                            VDComponent;
			class UPrimitiveComponent*                         Collider;
			bool                                               IgnoreConvexShapes;
		} params;
		params.VDComponent = VDComponent;
		params.Collider = Collider;
		params.IgnoreConvexShapes = IgnoreConvexShapes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSimulation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDSimulation::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(428);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVDSimulation*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVDSimulation* UVDBlueprintFunctionLibrary::GetVICODynamicsSimulationInstance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13445);
		
		struct
		{
			class UVDSimulation*                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(418);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVDSettings                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVDSettings AVDSimulationSettingsActor::GetSettings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13540);
		
		struct
		{
			struct FVDSettings                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVDSimulationSettingsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AVDSimulationSettingsActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(429);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDSplineRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDSplineRopeComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(431);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVDColliderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDColliderComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(419);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVDWindDirectionalSourceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AVDWindDirectionalSourceActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(432);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVDWindDirectionalSourceComponent::SetRadius(float InRadius)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13542);
		
		struct
		{
			float                                              InRadius;
		} params;
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVDWindDirectionalSourceComponent::GetCurrentGust()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13541);
		
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
	 * 		Name   -> PredefinedFunction UVDWindDirectionalSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVDWindDirectionalSourceComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(433);
		return ptr;
	}

}


