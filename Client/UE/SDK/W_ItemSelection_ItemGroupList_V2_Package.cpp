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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Get List At Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSelection_ItemList_V2_C*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::GetListAtIndex(int32_t Index, class UW_ItemSelection_ItemList_V2_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43538);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
			class UW_ItemSelection_ItemList_V2_C*              ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.ResetAnimationState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::ResetAnimationState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43537);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.FadeOutAllExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::FadeOutAllExcept(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43536);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.UpdateKeybinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroups                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::UpdateKeybinds(TArray<struct FItemSelectionGroup>* InItemGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43535);
		
		struct
		{
			TArray<struct FItemSelectionGroup>                 InItemGroups;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemGroups != nullptr)
			*InItemGroups = params.InItemGroups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::SelectCategory(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43534);
		
		struct
		{
			int32_t                                            GroupIndex;
			int32_t                                            CategoryIndex;
		} params;
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.SelectList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::SelectList(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43533);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList_V2.W_ItemSelection_ItemGroupList_V2_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroupArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_V2_C::Initialize(TArray<struct FItemSelectionGroup>* InItemGroupArray)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43532);
		
		struct
		{
			TArray<struct FItemSelectionGroup>                 InItemGroupArray;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InItemGroupArray != nullptr)
			*InItemGroupArray = params.InItemGroupArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemGroupList_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ItemSelection_ItemGroupList_V2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43531);
		return ptr;
	}

}


