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
	 * 		Name   -> PredefinedFunction UFieldSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldSystem::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3405);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldSystemMetaData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3407);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldNodeBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3411);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldNodeVector::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3414);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.UniformVector.SetUniformVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUniformVector*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20310);
		
		struct
		{
			float                                              Magnitude;
			struct FVector                        Direction;
			class UUniformVector*                              ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUniformVector::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3423);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaDataIteration*               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20299);
		
		struct
		{
			int32_t                                            Iterations;
			unsigned char                                      UnknownData_0000[0x4];
			class UFieldSystemMetaDataIteration*               ReturnValue;
		} params;
		params.Iterations = Iterations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemMetaDataIteration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldSystemMetaDataIteration::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3408);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ResetFieldSystem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20298);
		
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
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::RemovePersistentFields()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20297);
		
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
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20296);
		
		struct
		{
			bool                                               Enabled;
			unsigned char                                      UnknownData_0000[0x3];
			struct FVector                        Position;
			struct FVector                        Direction;
			float                                              Radius;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Direction = Direction;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32_t Iterations)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20295);
		
		struct
		{
			bool                                               Enabled;
			unsigned char                                      UnknownData_0001[0x3];
			struct FVector                        Position;
			float                                              Radius;
			float                                              Magnitude;
			int32_t                                            Iterations;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		params.Iterations = Iterations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20294);
		
		struct
		{
			bool                                               Enabled;
			unsigned char                                      UnknownData_0002[0x3];
			struct FVector                        Position;
			float                                              Radius;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20293);
		
		struct
		{
			bool                                               Enabled;
			unsigned char                                      UnknownData_0003[0x3];
			struct FVector                        Position;
			float                                              Radius;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20292);
		
		struct
		{
			bool                                               Enabled;
			unsigned char                                      UnknownData_0004[0x3];
			struct FVector                        Position;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Position = Position;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldPhysicsType                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20291);
		
		struct
		{
			bool                                               Enabled;
			EFieldPhysicsType                                  Target;
			unsigned char                                      UnknownData_0005[0x6];
			class UFieldSystemMetaData*                        MetaData;
			class UFieldNodeBase*                              Field;
		} params;
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20290);
		
		struct
		{
			bool                                               Enabled;
			unsigned char                                      UnknownData_0006[0x3];
			struct FVector                        Direction;
			float                                              Magnitude;
		} params;
		params.Enabled = Enabled;
		params.Direction = Direction;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldPhysicsType                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::AddPersistentField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20289);
		
		struct
		{
			bool                                               Enabled;
			EFieldPhysicsType                                  Target;
			unsigned char                                      UnknownData_0007[0x6];
			class UFieldSystemMetaData*                        MetaData;
			class UFieldNodeBase*                              Field;
		} params;
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldPhysicsType                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFieldSystemComponent::AddFieldCommand(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20288);
		
		struct
		{
			bool                                               Enabled;
			EFieldPhysicsType                                  Target;
			unsigned char                                      UnknownData_0008[0x6];
			class UFieldSystemMetaData*                        MetaData;
			class UFieldNodeBase*                              Field;
		} params;
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldSystemComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3406);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFieldResolutionType                               ResolutionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaDataProcessingResolution*    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20300);
		
		struct
		{
			EFieldResolutionType                               ResolutionType;
			unsigned char                                      UnknownData_0000[0x7];
			class UFieldSystemMetaDataProcessingResolution*    ReturnValue;
		} params;
		params.ResolutionType = ResolutionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemMetaDataProcessingResolution.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldSystemMetaDataProcessingResolution::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3409);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RadialVector.SetRadialVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URadialVector*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct FVector& Position)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20311);
		
		struct
		{
			float                                              Magnitude;
			struct FVector                        Position;
			class URadialVector*                               ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URadialVector::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3424);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFieldFilterType                                   FilterType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaDataFilter*                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(EFieldFilterType FilterType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20301);
		
		struct
		{
			EFieldFilterType                                   FilterType;
			unsigned char                                      UnknownData_0000[0x7];
			class UFieldSystemMetaDataFilter*                  ReturnValue;
		} params;
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemMetaDataFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldSystemMetaDataFilter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3410);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFieldSystemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AFieldSystemActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3404);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RandomVector.SetRandomVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URandomVector*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URandomVector* URandomVector::SetRandomVector(float Magnitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20312);
		
		struct
		{
			float                                              Magnitude;
			unsigned char                                      UnknownData_0000[0x4];
			class URandomVector*                               ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URandomVector::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3425);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldNodeInt::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3412);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.OperatorField.SetOperatorField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              LeftField                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              RightField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldOperationType                                Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOperatorField*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, EFieldOperationType Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20313);
		
		struct
		{
			float                                              Magnitude;
			unsigned char                                      UnknownData_0000[0x4];
			class UFieldNodeBase*                              LeftField;
			class UFieldNodeBase*                              RightField;
			EFieldOperationType                                Operation;
			unsigned char                                      UnknownData_0001[0x7];
			class UOperatorField*                              ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		params.LeftField = LeftField;
		params.RightField = RightField;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOperatorField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UOperatorField::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3426);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFieldNodeFloat::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3413);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.ToIntegerField.SetToIntegerField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFieldNodeFloat*                             FloatField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UToIntegerField*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20314);
		
		struct
		{
			class UFieldNodeFloat*                             FloatField;
			class UToIntegerField*                             ReturnValue;
		} params;
		params.FloatField = FloatField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToIntegerField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UToIntegerField::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3427);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.ToFloatField.SetToFloatField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFieldNodeInt*                               IntegerField                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UToFloatField*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20315);
		
		struct
		{
			class UFieldNodeInt*                               IntegerField;
			class UToFloatField*                               ReturnValue;
		} params;
		params.IntegerField = IntegerField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToFloatField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UToFloatField::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3428);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.UniformInteger.SetUniformInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUniformInteger*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformInteger* UUniformInteger::SetUniformInteger(int32_t Magnitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20302);
		
		struct
		{
			int32_t                                            Magnitude;
			unsigned char                                      UnknownData_0000[0x4];
			class UUniformInteger*                             ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformInteger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUniformInteger::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3415);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.CullingField.SetCullingField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFieldNodeBase*                              Culling                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldCullingOperationType                         Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCullingField*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, EFieldCullingOperationType Operation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20316);
		
		struct
		{
			class UFieldNodeBase*                              Culling;
			class UFieldNodeBase*                              Field;
			EFieldCullingOperationType                         Operation;
			unsigned char                                      UnknownData_0000[0x7];
			class UCullingField*                               ReturnValue;
		} params;
		params.Culling = Culling;
		params.Field = Field;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCullingField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCullingField::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3429);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReturnResultsTerminal*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20317);
		
		struct
		{
			class UReturnResultsTerminal*                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReturnResultsTerminal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UReturnResultsTerminal::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3430);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ExteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetMaskConditionType                              SetMaskConditionIn                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URadialIntMask*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& Position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20303);
		
		struct
		{
			float                                              Radius;
			struct FVector                        Position;
			int32_t                                            InteriorValue;
			int32_t                                            ExteriorValue;
			ESetMaskConditionType                              SetMaskConditionIn;
			unsigned char                                      UnknownData_0000[0x7];
			class URadialIntMask*                              ReturnValue;
		} params;
		params.Radius = Radius;
		params.Position = Position;
		params.InteriorValue = InteriorValue;
		params.ExteriorValue = ExteriorValue;
		params.SetMaskConditionIn = SetMaskConditionIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialIntMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URadialIntMask::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3416);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.UniformScalar.SetUniformScalar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUniformScalar*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20304);
		
		struct
		{
			float                                              Magnitude;
			unsigned char                                      UnknownData_0000[0x4];
			class UUniformScalar*                              ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformScalar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUniformScalar::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3417);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.WaveScalar.SetWaveScalar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Wavelength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Period                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWaveFunctionType                                  Function                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWaveScalar*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWaveScalar* UWaveScalar::SetWaveScalar(float Magnitude, const struct FVector& Position, float Wavelength, float Period, float Time, EWaveFunctionType Function, EFieldFalloffType Falloff)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20305);
		
		struct
		{
			float                                              Magnitude;
			struct FVector                        Position;
			float                                              Wavelength;
			float                                              Period;
			float                                              Time;
			EWaveFunctionType                                  Function;
			EFieldFalloffType                                  Falloff;
			unsigned char                                      UnknownData_0000[0x2];
			class UWaveScalar*                                 ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		params.Position = Position;
		params.Wavelength = Wavelength;
		params.Period = Period;
		params.Time = Time;
		params.Function = Function;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaveScalar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWaveScalar::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3418);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URadialFalloff*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, EFieldFalloffType Falloff)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20306);
		
		struct
		{
			float                                              Magnitude;
			float                                              MinRange;
			float                                              MaxRange;
			float                                              Default;
			float                                              Radius;
			struct FVector                        Position;
			EFieldFalloffType                                  Falloff;
			unsigned char                                      UnknownData_0000[0x7];
			class URadialFalloff*                              ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Radius = Radius;
		params.Position = Position;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URadialFalloff::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3419);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPlaneFalloff*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, EFieldFalloffType Falloff)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20307);
		
		struct
		{
			float                                              Magnitude;
			float                                              MinRange;
			float                                              MaxRange;
			float                                              Default;
			float                                              Distance;
			struct FVector                        Position;
			struct FVector                        Normal;
			EFieldFalloffType                                  Falloff;
			unsigned char                                      UnknownData_0000[0x3];
			class UPlaneFalloff*                               ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Distance = Distance;
		params.Position = Position;
		params.Normal = Normal;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPlaneFalloff::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3420);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxFalloff*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, EFieldFalloffType Falloff)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20308);
		
		struct
		{
			float                                              Magnitude;
			float                                              MinRange;
			float                                              MaxRange;
			float                                              Default;
			struct FTransform                     Transform;
			EFieldFalloffType                                  Falloff;
			unsigned char                                      UnknownData_0000[0x7];
			class UBoxFalloff*                                 ReturnValue;
		} params;
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Transform = Transform;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBoxFalloff::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3421);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FieldSystemEngine.NoiseField.SetNoiseField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UNoiseField*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20309);
		
		struct
		{
			float                                              MinRange;
			float                                              MaxRange;
			unsigned char                                      UnknownData_0000[0x8];
			struct FTransform                     Transform;
			class UNoiseField*                                 ReturnValue;
		} params;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoiseField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNoiseField::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3422);
		return ptr;
	}

}


