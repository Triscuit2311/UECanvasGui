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
	 * 		Name   -> Function W_PreMission_PlanningMap.W_PreMission_PlanningMap_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_PlanningMap_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30976);
		
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
	 * 		Name   -> Function W_PreMission_PlanningMap.W_PreMission_PlanningMap_C.OnMarkerAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlanningMarker                             Marker                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_PlanningMap_C::OnMarkerAdded(int32_t ID, const struct FPlanningMarker& Marker)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30975);
		
		struct
		{
			int32_t                                            ID;
			unsigned char                                      UnknownData_0000[0x4];
			struct FPlanningMarker                             Marker;
		} params;
		params.ID = ID;
		params.Marker = Marker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_PlanningMap.W_PreMission_PlanningMap_C.OnMarkerRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_PlanningMap_C::OnMarkerRemoved(int32_t ID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30974);
		
		struct
		{
			int32_t                                            ID;
		} params;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_PlanningMap.W_PreMission_PlanningMap_C.OnLineAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlanningLine                               Line                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_PlanningMap_C::OnLineAdded(int32_t ID, const struct FPlanningLine& Line)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30973);
		
		struct
		{
			int32_t                                            ID;
			unsigned char                                      UnknownData_0001[0x4];
			struct FPlanningLine                               Line;
		} params;
		params.ID = ID;
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_PlanningMap.W_PreMission_PlanningMap_C.OnLineRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_PlanningMap_C::OnLineRemoved(int32_t ID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30972);
		
		struct
		{
			int32_t                                            ID;
		} params;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PreMission_PlanningMap.W_PreMission_PlanningMap_C.ExecuteUbergraph_W_PreMission_PlanningMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PreMission_PlanningMap_C::ExecuteUbergraph_W_PreMission_PlanningMap(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30971);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PreMission_PlanningMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PreMission_PlanningMap_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30970);
		return ptr;
	}

}


