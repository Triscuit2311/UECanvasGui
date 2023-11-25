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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::SetSelected(bool Selected)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31595);
		
		struct
		{
			bool                                               Selected;
		} params;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31594);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::FadeIn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31593);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::FadeOut()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31592);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31591);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31590);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.ExecuteUbergraph_W_PlanningMap_BreachPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::ExecuteUbergraph_W_PlanningMap_BreachPoint(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31589);
		
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
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PlanningMap_BreachPoint_C*                ClickedPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::OnBreachPointClicked__DelegateSignature(class UW_PlanningMap_BreachPoint_C* ClickedPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31588);
		
		struct
		{
			class UW_PlanningMap_BreachPoint_C*                ClickedPoint;
		} params;
		params.ClickedPoint = ClickedPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PlanningMap_BreachPoint_C*                HoveredPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlanningMap_BreachPoint_C::OnBreachPointHovered__DelegateSignature(class UW_PlanningMap_BreachPoint_C* HoveredPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31587);
		
		struct
		{
			class UW_PlanningMap_BreachPoint_C*                HoveredPoint;
		} params;
		params.HoveredPoint = HoveredPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlanningMap_BreachPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PlanningMap_BreachPoint_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31586);
		return ptr;
	}

}


