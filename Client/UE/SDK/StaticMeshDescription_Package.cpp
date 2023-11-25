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
	 * 		Name   -> Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      UV                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UStaticMeshDescription::SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32_t UVIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17988);
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			struct FVector2D                      UV;
			int32_t                                            UVIndex;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		params.UV = UV;
		params.UVIndex = UVIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SlotName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const class FName& SlotName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17987);
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			class FName                                        SlotName;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UVIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32_t UVIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17986);
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			int32_t                                            UVIndex;
			struct FVector2D                      ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		params.UVIndex = UVIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaticMeshDescription.StaticMeshDescription.CreateCube
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HalfExtents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             PolygonGroup                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID_PlusX                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID_MinusX                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID_PlusY                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID_MinusY                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID_PlusZ                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  PolygonID_MinusZ                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UStaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17985);
		
		struct
		{
			struct FVector                        Center;
			struct FVector                        HalfExtents;
			struct FPolygonGroupID                             PolygonGroup;
			struct FPolygonID                                  PolygonID_PlusX;
			struct FPolygonID                                  PolygonID_MinusX;
			struct FPolygonID                                  PolygonID_PlusY;
			struct FPolygonID                                  PolygonID_MinusY;
			struct FPolygonID                                  PolygonID_PlusZ;
			struct FPolygonID                                  PolygonID_MinusZ;
		} params;
		params.Center = Center;
		params.HalfExtents = HalfExtents;
		params.PolygonGroup = PolygonGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolygonID_PlusX != nullptr)
			*PolygonID_PlusX = params.PolygonID_PlusX;
		if (PolygonID_MinusX != nullptr)
			*PolygonID_MinusX = params.PolygonID_MinusX;
		if (PolygonID_PlusY != nullptr)
			*PolygonID_PlusY = params.PolygonID_PlusY;
		if (PolygonID_MinusY != nullptr)
			*PolygonID_MinusY = params.PolygonID_MinusY;
		if (PolygonID_PlusZ != nullptr)
			*PolygonID_PlusZ = params.PolygonID_PlusZ;
		if (PolygonID_MinusZ != nullptr)
			*PolygonID_MinusZ = params.PolygonID_MinusZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshDescription.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UStaticMeshDescription::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2124);
		return ptr;
	}

}


