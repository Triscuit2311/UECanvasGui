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
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalInstance::UpdateDecal()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13544);
		
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
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinnedDecalSampler*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkinnedDecalSampler* USkinnedDecalInstance::GetSampler()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13543);
		
		struct
		{
			class USkinnedDecalSampler*                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinnedDecalInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USkinnedDecalInstance::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(436);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinnedDecalInstance*                       Instance                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalSampler::UpdateInstance(class USkinnedDecalInstance* Instance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13553);
		
		struct
		{
			class USkinnedDecalInstance*                       Instance;
		} params;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalSampler::UpdateAllDecals()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13552);
		
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
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct PCoreUObject_FQuat                          Rotation                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubUV                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USkinnedDecalSampler::SpawnDecal(const struct FVector& Location, const struct PCoreUObject_FQuat& Rotation, const class FName& BoneName, float Size, int32_t SubUV, int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13551);
		
		struct
		{
			struct FVector                        Location;
			unsigned char                                      UnknownData_0000[0x4];
			struct PCoreUObject_FQuat                          Rotation;
			class FName                                        BoneName;
			float                                              Size;
			int32_t                                            SubUV;
			int32_t                                            Index;
			int32_t                                            ReturnValue;
		} params;
		params.Location = Location;
		params.Rotation = Rotation;
		params.BoneName = BoneName;
		params.Size = Size;
		params.SubUV = SubUV;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalSampler::SetupMaterials()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13550);
		
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
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Child                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalSampler::SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13549);
		
		struct
		{
			class USkeletalMeshComponent*                      MeshComponent;
			bool                                               Child;
		} params;
		params.MeshComponent = MeshComponent;
		params.Child = Child;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalSampler::RemoveDecal(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13548);
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* USkinnedDecalSampler::GetDataTarget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13547);
		
		struct
		{
			class UTextureRenderTarget2D*                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinnedDecalSampler*                        Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalSampler::CloneDecals(class USkinnedDecalSampler* Source)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13546);
		
		struct
		{
			class USkinnedDecalSampler*                        Source;
		} params;
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USkinnedDecalSampler::ClearAllDecals()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13545);
		
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
	 * 		Name   -> PredefinedFunction USkinnedDecalSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USkinnedDecalSampler::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(437);
		return ptr;
	}

}


