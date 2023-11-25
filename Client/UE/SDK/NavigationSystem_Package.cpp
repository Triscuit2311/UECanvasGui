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
	 * 		Name   -> PredefinedFunction ANavigationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANavigationData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(355);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        Bounds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UNavArea*                                    OldArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavArea*                                    NewArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReplaceLinks                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UNavArea* OldArea, class UNavArea* NewArea, bool ReplaceLinks)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13086);
		
		struct
		{
			struct FBox                                        Bounds;
			unsigned char                                      UnknownData_0000[0x4];
			class UNavArea*                                    OldArea;
			class UNavArea*                                    NewArea;
			bool                                               ReplaceLinks;
			bool                                               ReturnValue;
		} params;
		params.Bounds = Bounds;
		params.OldArea = OldArea;
		params.NewArea = NewArea;
		params.ReplaceLinks = ReplaceLinks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARecastNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ARecastNavMesh::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(356);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRelevant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(15223);
		
		struct
		{
			bool                                               bRelevant;
		} params;
		params.bRelevant = bRelevant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavRelevantComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavRelevantComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1074);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkCustomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavLinkCustomComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1075);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdManagerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCrowdManagerBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1354);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavArea::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1369);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16377);
		
		struct
		{
			class AActor*                                      Invoker;
		} params;
		params.Invoker = Invoker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Goal                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16376);
		
		struct
		{
			class AController*                                 Controller;
			struct FVector                        Goal;
		} params;
		params.Controller = Controller;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Goal                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::SimpleMoveToActor(class AController* Controller, class AActor* Goal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16375);
		
		struct
		{
			class AController*                                 Controller;
			class AActor*                                      Goal;
		} params;
		params.Controller = Controller;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxNumberOfJobs                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16374);
		
		struct
		{
			int32_t                                            MaxNumberOfJobs;
		} params;
		params.MaxNumberOfJobs = MaxNumberOfJobs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavDataGatheringModeConfig                        NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16373);
		
		struct
		{
			ENavDataGatheringModeConfig                        NewMode;
		} params;
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16372);
		
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
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TileGenerationRadius                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TileRemovalRadius                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16371);
		
		struct
		{
			class AActor*                                      Invoker;
			float                                              TileGenerationRadius;
			float                                              TileRemovalRadius;
		} params;
		params.Invoker = Invoker;
		params.TileGenerationRadius = TileGenerationRadius;
		params.TileRemovalRadius = TileRemovalRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNavigationSystemV1::ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, const struct FVector& QueryExtent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16370);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Point;
			unsigned char                                      UnknownData_0000[0x4];
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			struct FVector                        QueryExtent;
			struct FVector                        ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Point = Point;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		params.QueryExtent = QueryExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANavMeshBoundsVolume*                        NavVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16369);
		
		struct
		{
			class ANavMeshBoundsVolume*                        NavVolume;
		} params;
		params.NavVolume = NavVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.NavigationRaycast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        RayStart                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        RayEnd                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HitLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Querier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UNavigationQueryFilter* FilterClass, class AController* Querier)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16368);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        RayStart;
			struct FVector                        RayEnd;
			struct FVector                        HitLocation;
			unsigned char                                      UnknownData_0001[0x4];
			class UNavigationQueryFilter*                      FilterClass;
			class AController*                                 Querier;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.RayStart = RayStart;
		params.RayEnd = RayEnd;
		params.FilterClass = FilterClass;
		params.Querier = Querier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitLocation != nullptr)
			*HitLocation = params.HitLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavArea*                                    OldArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavArea*                                    NewArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject* Object, class UNavArea* OldArea, class UNavArea* NewArea)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16367);
		
		struct
		{
			class UObject*                                     Object;
			class UNavArea*                                    OldArea;
			class UNavArea*                                    NewArea;
			bool                                               ReturnValue;
		} params;
		params.Object = Object;
		params.OldArea = OldArea;
		params.NewArea = NewArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ProjectedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, const struct FVector& QueryExtent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16366);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Point;
			struct FVector                        ProjectedLocation;
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			struct FVector                        QueryExtent;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Point = Point;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		params.QueryExtent = QueryExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectedLocation != nullptr)
			*ProjectedLocation = params.ProjectedLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16365);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Origin;
			struct FVector                        RandomLocation;
			float                                              Radius;
			unsigned char                                      UnknownData_0002[0x4];
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomLocation != nullptr)
			*RandomLocation = params.RandomLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16364);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Origin;
			struct FVector                        RandomLocation;
			float                                              Radius;
			unsigned char                                      UnknownData_0003[0x4];
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomLocation != nullptr)
			*RandomLocation = params.RandomLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16363);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Origin;
			struct FVector                        RandomLocation;
			float                                              Radius;
			unsigned char                                      UnknownData_0004[0x4];
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomLocation != nullptr)
			*RandomLocation = params.RandomLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16362);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::IsNavigationBeingBuilt(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16361);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNavigationSystemV1::GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16360);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Origin;
			float                                              Radius;
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			struct FVector                        ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16359);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Origin;
			float                                              Radius;
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			struct FVector                        ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetPathLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PathLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENavigationQueryResult                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ENavigationQueryResult UNavigationSystemV1::GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16358);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        PathStart;
			struct FVector                        PathEnd;
			float                                              PathLength;
			unsigned char                                      UnknownData_0005[0x4];
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			ENavigationQueryResult                             ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PathStart = PathStart;
		params.PathEnd = PathEnd;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PathLength != nullptr)
			*PathLength = params.PathLength;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetPathCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PathCost                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENavigationQueryResult                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ENavigationQueryResult UNavigationSystemV1::GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16357);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        PathStart;
			struct FVector                        PathEnd;
			float                                              PathCost;
			unsigned char                                      UnknownData_0006[0x4];
			class ANavigationData*                             NavData;
			class UNavigationQueryFilter*                      FilterClass;
			ENavigationQueryResult                             ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PathStart = PathStart;
		params.PathEnd = PathEnd;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PathCost != nullptr)
			*PathCost = params.PathCost;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationSystemV1*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16356);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UNavigationSystemV1*                         ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      PathfindingContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationPath*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16355);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        PathStart;
			struct FVector                        PathEnd;
			class AActor*                                      PathfindingContext;
			class UNavigationQueryFilter*                      FilterClass;
			class UNavigationPath*                             ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PathStart = PathStart;
		params.PathEnd = PathEnd;
		params.PathfindingContext = PathfindingContext;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      GoalActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TetherDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      PathfindingContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationPath*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(16354);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        PathStart;
			unsigned char                                      UnknownData_0007[0x4];
			class AActor*                                      GoalActor;
			float                                              TetherDistance;
			unsigned char                                      UnknownData_0008[0x4];
			class AActor*                                      PathfindingContext;
			class UNavigationQueryFilter*                      FilterClass;
			class UNavigationPath*                             ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PathStart = PathStart;
		params.GoalActor = GoalActor;
		params.TetherDistance = TetherDistance;
		params.PathfindingContext = PathfindingContext;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationSystemV1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavigationSystemV1::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1391);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavigationQueryFilter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1393);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Default.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavArea_Default::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3109);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavigationGraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANavigationGraphNode::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3117);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_LowHeight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavArea_LowHeight::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3110);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationGraphNodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavigationGraphNodeComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3118);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Null.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavArea_Null::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3111);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationInvokerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavigationInvokerComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3119);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Obstacle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavArea_Obstacle::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3112);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationPath.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationPath::IsValid()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20084);
		
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
	 * 		Name   -> Function NavigationSystem.NavigationPath.IsStringPulled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationPath::IsStringPulled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20083);
		
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
	 * 		Name   -> Function NavigationSystem.NavigationPath.IsPartial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationPath::IsPartial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20082);
		
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
	 * 		Name   -> Function NavigationSystem.NavigationPath.GetPathLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UNavigationPath::GetPathLength()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20081);
		
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
	 * 		Name   -> Function NavigationSystem.NavigationPath.GetPathCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UNavigationPath::GetPathCost()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20080);
		
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
	 * 		Name   -> Function NavigationSystem.NavigationPath.GetDebugString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UNavigationPath::GetDebugString()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20079);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavigationOptionFlag                              DoRecalculation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationPath::EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20078);
		
		struct
		{
			ENavigationOptionFlag                              DoRecalculation;
		} params;
		params.DoRecalculation = DoRecalculation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavigationPath.EnableDebugDrawing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldDrawDebugData                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                PathColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20077);
		
		struct
		{
			bool                                               bShouldDrawDebugData;
			unsigned char                                      UnknownData_0000[0x3];
			struct FLinearColor                                PathColor;
		} params;
		params.bShouldDrawDebugData = bShouldDrawDebugData;
		params.PathColor = PathColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavigationPath::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3120);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavAreaMeta.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavAreaMeta::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3113);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction INavigationPathGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* INavigationPathGenerator::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3121);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbstractNavData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AAbstractNavData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3108);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavAreaMeta_SwitchByAgent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavAreaMeta_SwitchByAgent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3114);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationSystemModuleConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavigationSystemModuleConfig::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3122);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavCollision.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavCollision::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3115);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavigationTestingActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANavigationTestingActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3123);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction INavLinkCustomInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* INavLinkCustomInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3125);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavLinkComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3124);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavigationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANavigationGraph::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3116);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction INavLinkHostInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* INavLinkHostInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3126);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavLinkRenderingComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3127);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkTrivial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavLinkTrivial::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3128);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavMeshBoundsVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANavMeshBoundsVolume::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3129);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavMeshRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavMeshRenderingComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3130);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavModifierComponent.SetAreaClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNavArea*                                    NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UNavModifierComponent::SetAreaClass(class UNavArea* NewAreaClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20085);
		
		struct
		{
			class UNavArea*                                    NewAreaClass;
		} params;
		params.NewAreaClass = NewAreaClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavModifierComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavModifierComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3131);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavigationSystem.NavModifierVolume.SetAreaClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNavArea*                                    NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ANavModifierVolume::SetAreaClass(class UNavArea* NewAreaClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20086);
		
		struct
		{
			class UNavArea*                                    NewAreaClass;
		} params;
		params.NewAreaClass = NewAreaClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavModifierVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANavModifierVolume::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3132);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction INavNodeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* INavNodeInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3133);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavSystemConfigOverride.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ANavSystemConfigOverride::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3134);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavTestRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNavTestRenderingComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3135);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecastFilter_UseDefaultArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URecastFilter_UseDefaultArea::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3136);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecastNavMeshDataChunk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URecastNavMeshDataChunk::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3137);
		return ptr;
	}

}


