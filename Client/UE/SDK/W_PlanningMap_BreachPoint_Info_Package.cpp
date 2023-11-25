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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.SetRecommendedDeployables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::SetRecommendedDeployables()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31562);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.SetDesignationText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SpawnIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::SetDesignationText(int32_t SpawnIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31561);
		
		struct
		{
			int32_t                                            SpawnIndex;
		} params;
		params.SpawnIndex = SpawnIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.Finished_B45778B942FC16674AB7A3BD06E9C36E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::Finished_B45778B942FC16674AB7A3BD06E9C36E()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31560);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.Finished_186E628046C415504DDD34A0079F53C5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::Finished_186E628046C415504DDD34A0079F53C5()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31559);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31558);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.BndEvt__btn_SelectPoint_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::BndEvt__btn_SelectPoint_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31557);
		
		struct
		{
			class UW_Button_C*                                 Button;
		} params;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.SetActiveSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSpawnPoints                                SpawnInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::SetActiveSpawn(const struct FSpawnPoints& SpawnInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31556);
		
		struct
		{
			struct FSpawnPoints                                SpawnInfo;
		} params;
		params.SpawnInfo = SpawnInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.UpdateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSpawnPoints                                SpawnInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            SpawnIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::UpdateInfo(const struct FSpawnPoints& SpawnInfo, int32_t SpawnIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31555);
		
		struct
		{
			struct FSpawnPoints                                SpawnInfo;
			int32_t                                            SpawnIndex;
		} params;
		params.SpawnInfo = SpawnInfo;
		params.SpawnIndex = SpawnIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.RevealPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::RevealPanel()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31554);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.HidePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::HidePanel()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31553);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.ExecuteUbergraph_W_PlanningMap_BreachPoint_Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::ExecuteUbergraph_W_PlanningMap_BreachPoint_Info(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31552);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.OnDetailPanelHide__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::OnDetailPanelHide__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31551);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C.OnSetSpawnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_Info_C::OnSetSpawnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31550);
		
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
	 * 		Name   -> PredefinedFunction UW_PlanningMap_BreachPoint_Info_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PlanningMap_BreachPoint_Info_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31549);
		return ptr;
	}

}


