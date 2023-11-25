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
	 * 		Name   -> Function DynamicCoverSystem.CoverGenOverrideVolume.GenerateCoverPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ACoverGenOverrideVolume::GenerateCoverPoints()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13077);
		
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
	 * 		Name   -> PredefinedFunction ACoverGenOverrideVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ACoverGenOverrideVolume::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(348);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.StopPreviewCoverAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ACoverPoint::StopPreviewCoverAnim()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13082);
		
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
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.SetStandCoverType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStandCoverType                                    NewCoverType                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ACoverPoint::SetStandCoverType(EStandCoverType NewCoverType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13081);
		
		struct
		{
			EStandCoverType                                    NewCoverType;
		} params;
		params.NewCoverType = NewCoverType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.SetCrouchCoverType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrouchCoverType                                   NewCoverType                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ACoverPoint::SetCrouchCoverType(ECrouchCoverType NewCoverType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13080);
		
		struct
		{
			ECrouchCoverType                                   NewCoverType;
		} params;
		params.NewCoverType = NewCoverType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.ResetCoverTypes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ACoverPoint::ResetCoverTypes()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13079);
		
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
	 * 		Name   -> Function DynamicCoverSystem.CoverPoint.PreviewCoverAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ACoverPoint::PreviewCoverAnim()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13078);
		
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
	 * 		Name   -> PredefinedFunction ACoverPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ACoverPoint::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(349);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.NotifyingRecastNavMesh.GenerateCoverPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ANotifyingRecastNavMesh::GenerateCoverPoints()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13088);
		
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
	 * 		Name   -> Function DynamicCoverSystem.NotifyingRecastNavMesh.DeleteAllCoverPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ANotifyingRecastNavMesh::DeleteAllCoverPoints()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13087);
		
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
	 * 		Name   -> PredefinedFunction ANotifyingRecastNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANotifyingRecastNavMesh::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(357);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverSystem.ReleaseCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        InCoverPoint                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoverSystem::ReleaseCover(const struct FVector& InCoverPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13085);
		
		struct
		{
			struct FVector                        InCoverPoint;
			bool                                               ReturnValue;
		} params;
		params.InCoverPoint = InCoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverSystem.OccupyCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        InCoverPoint                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoverSystem::OccupyCover(const struct FVector& InCoverPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13084);
		
		struct
		{
			struct FVector                        InCoverPoint;
			bool                                               ReturnValue;
		} params;
		params.InCoverPoint = InCoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamicCoverSystem.CoverSystem.IsCoverPointOccupied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        InCoverLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoverSystem::IsCoverPointOccupied(const struct FVector& InCoverLocation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13083);
		
		struct
		{
			struct FVector                        InCoverLocation;
			bool                                               ReturnValue;
		} params;
		params.InCoverLocation = InCoverLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCoverSystem::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(353);
		return ptr;
	}

}


