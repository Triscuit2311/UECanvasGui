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
	 * 		Name   -> Function W_2DMap.W_2DMap_C.GetDynMat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MapDynMat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_2DMap_C::GetDynMat(class UMaterialInstanceDynamic** MapDynMat)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55115);
		
		struct
		{
			class UMaterialInstanceDynamic*                    MapDynMat;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapDynMat != nullptr)
			*MapDynMat = params.MapDynMat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_2DMap.W_2DMap_C.SetDynMat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    MapDynMat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_2DMap_C::SetDynMat(class UMaterialInstance* Material, class UMaterialInstanceDynamic** MapDynMat)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55114);
		
		struct
		{
			class UMaterialInstance*                           Material;
			class UMaterialInstanceDynamic*                    MapDynMat;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapDynMat != nullptr)
			*MapDynMat = params.MapDynMat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_2DMap.W_2DMap_C.SetFloorTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           MapMaterialInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  LayoutTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_2DMap_C::SetFloorTexture(class UMaterialInstance* MapMaterialInstance, class UTexture2D* LayoutTexture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55113);
		
		struct
		{
			class UMaterialInstance*                           MapMaterialInstance;
			class UTexture2D*                                  LayoutTexture;
		} params;
		params.MapMaterialInstance = MapMaterialInstance;
		params.LayoutTexture = LayoutTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_2DMap.W_2DMap_C.ExecuteUbergraph_W_2DMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_2DMap_C::ExecuteUbergraph_W_2DMap(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55112);
		
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
	 * 		Name   -> PredefinedFunction UW_2DMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_2DMap_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55111);
		return ptr;
	}

}


