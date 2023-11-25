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
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.ConvexConcave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviousPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NextPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::ConvexConcave(int32_t PreviousPoint, int32_t Point, int32_t NextPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170612);
		
		struct
		{
			int32_t                                            PreviousPoint;
			int32_t                                            Point;
			int32_t                                            NextPoint;
		} params;
		params.PreviousPoint = PreviousPoint;
		params.Point = Point;
		params.NextPoint = NextPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.Apply Presets Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::ApplyPresetsFunction()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170611);
		
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
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.MergeSectionByMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           MaterialOfSection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::MergeSectionByMaterial(class UMaterialInstance* MaterialOfSection)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170610);
		
		struct
		{
			class UMaterialInstance*                           MaterialOfSection;
		} params;
		params.MaterialOfSection = MaterialOfSection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.DebugArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::DebugArray(TArray<struct FVector>* Array)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170609);
		
		struct
		{
			TArray<struct FVector>                Array;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.SectionFloor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           MaterialSection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HeightOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               VerticesforRoof                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NoMeshGenerated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LateralOffsetUV                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UVStrectchedHeight                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UVBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::SectionFloor(class UMaterialInstance* MaterialSection, int32_t Height, int32_t HeightOffset, bool VerticesforRoof, bool NoMeshGenerated, float LateralOffsetUV, bool UVStrectchedHeight, bool UVBorder)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170608);
		
		struct
		{
			class UMaterialInstance*                           MaterialSection;
			int32_t                                            Height;
			int32_t                                            HeightOffset;
			bool                                               VerticesforRoof;
			bool                                               NoMeshGenerated;
			unsigned char                                      UnknownData_0000[0x2];
			float                                              LateralOffsetUV;
			bool                                               UVStrectchedHeight;
			bool                                               UVBorder;
			unsigned char                                      UnknownData_0001[0x6];
		} params;
		params.MaterialSection = MaterialSection;
		params.Height = Height;
		params.HeightOffset = HeightOffset;
		params.VerticesforRoof = VerticesforRoof;
		params.NoMeshGenerated = NoMeshGenerated;
		params.LateralOffsetUV = LateralOffsetUV;
		params.UVStrectchedHeight = UVStrectchedHeight;
		params.UVBorder = UVBorder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.CreateFacadeCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IndexPoint1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IndexPoint2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HeightOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               VerticesForRoof                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NoMeshGenerated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UVBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UVStretchedHeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LateralOffsetUV                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::CreateFacadeCurve(int32_t SectionIndex, int32_t IndexPoint1, int32_t IndexPoint2, int32_t Height, int32_t HeightOffset, bool VerticesForRoof, bool NoMeshGenerated, bool UVBorder, bool UVStretchedHeight, float LateralOffsetUV)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170607);
		
		struct
		{
			int32_t                                            SectionIndex;
			int32_t                                            IndexPoint1;
			int32_t                                            IndexPoint2;
			int32_t                                            Height;
			int32_t                                            HeightOffset;
			bool                                               VerticesForRoof;
			bool                                               NoMeshGenerated;
			bool                                               UVBorder;
			bool                                               UVStretchedHeight;
			float                                              LateralOffsetUV;
		} params;
		params.SectionIndex = SectionIndex;
		params.IndexPoint1 = IndexPoint1;
		params.IndexPoint2 = IndexPoint2;
		params.Height = Height;
		params.HeightOffset = HeightOffset;
		params.VerticesForRoof = VerticesForRoof;
		params.NoMeshGenerated = NoMeshGenerated;
		params.UVBorder = UVBorder;
		params.UVStretchedHeight = UVStretchedHeight;
		params.LateralOffsetUV = LateralOffsetUV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.CreateFacade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Point2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HeightOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               VerticesRoof                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NoMeshGenerated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UVBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UVStretchedHeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LateralOffsetUV                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::CreateFacade(int32_t SectionIndex, int32_t Point1, int32_t Point2, int32_t Height, int32_t HeightOffset, bool VerticesRoof, bool NoMeshGenerated, bool UVBorder, bool UVStretchedHeight, float LateralOffsetUV)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170606);
		
		struct
		{
			int32_t                                            SectionIndex;
			int32_t                                            Point1;
			int32_t                                            Point2;
			int32_t                                            Height;
			int32_t                                            HeightOffset;
			bool                                               VerticesRoof;
			bool                                               NoMeshGenerated;
			bool                                               UVBorder;
			bool                                               UVStretchedHeight;
			float                                              LateralOffsetUV;
		} params;
		params.SectionIndex = SectionIndex;
		params.Point1 = Point1;
		params.Point2 = Point2;
		params.Height = Height;
		params.HeightOffset = HeightOffset;
		params.VerticesRoof = VerticesRoof;
		params.NoMeshGenerated = NoMeshGenerated;
		params.UVBorder = UVBorder;
		params.UVStretchedHeight = UVStretchedHeight;
		params.LateralOffsetUV = LateralOffsetUV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.Search Material
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Types                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Variations                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInstance*>                   ArrayMaterial                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UMaterialInstance*                           FinalMaterial                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::SearchMaterial(int32_t Types, int32_t Variations, TArray<class UMaterialInstance*>* ArrayMaterial, class UMaterialInstance** FinalMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(170605);
		
		struct
		{
			int32_t                                            Types;
			int32_t                                            Variations;
			TArray<class UMaterialInstance*>                   ArrayMaterial;
			class UMaterialInstance*                           FinalMaterial;
		} params;
		params.Types = Types;
		params.Variations = Variations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayMaterial != nullptr)
			*ArrayMaterial = params.ArrayMaterial;
		if (FinalMaterial != nullptr)
			*FinalMaterial = params.FinalMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C.UserConstructionScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AB_BackgroundProceduralBuilding_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(129934);
		
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
	 * 		Name   -> PredefinedFunction AB_BackgroundProceduralBuilding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AB_BackgroundProceduralBuilding_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(129935);
		return ptr;
	}

}


