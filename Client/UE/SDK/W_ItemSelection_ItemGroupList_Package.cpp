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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UpdateKeybinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroups                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::UpdateKeybinds(TArray<struct FItemSelectionGroup>* InItemGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31161);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.IsInsideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::IsInsideList(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31160);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x3];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SplitItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSplit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::SplitItemList(bool bSplit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31159);
		
		struct
		{
			bool                                               bSplit;
		} params;
		params.bSplit = bSplit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_UnfocusAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::Event_UnfocusAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31158);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_FocusAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::Event_FocusAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31157);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeOutOverview()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31156);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeInOverview()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31155);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutMagCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeOutMagCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31154);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInMagCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeInMagCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31153);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UnfocusAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::UnfocusAll(bool bForce)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31152);
		
		struct
		{
			bool                                               bForce;
			unsigned char                                      UnknownData_0001[0x3];
		} params;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutAllItemLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeOutAllItemLists()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31151);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInAllItemLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::FadeInAllItemLists()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31150);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInputReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::OnInputReleased()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31149);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FocusAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::FocusAll(bool bForce)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31148);
		
		struct
		{
			bool                                               bForce;
			unsigned char                                      UnknownData_0002[0x3];
		} params;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.GetListAtColumnIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSelection_ItemList_C*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::GetListAtColumnIndex(int32_t Index, class UW_ItemSelection_ItemList_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31147);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0003[0x4];
			class UW_ItemSelection_ItemList_C*                 ReturnValue;
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroupArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::Initialize(TArray<struct FItemSelectionGroup>* InItemGroupArray)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31146);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Previous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::Previous()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31145);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Next
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::Next()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31144);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.CreateNewItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSelection_ItemList_C*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::CreateNewItemList(TArray<class ABaseItem*>* Items, int32_t Index, class UW_ItemSelection_ItemList_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31143);
		
		struct
		{
			TArray<class ABaseItem*>                           Items;
			int32_t                                            Index;
			unsigned char                                      UnknownData_0004[0x4];
			class UW_ItemSelection_ItemList_C*                 ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SelectColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::SelectColumn(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31142);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31141);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnNightVisionGogglesToggled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNVGOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::OnNightVisionGogglesToggled_Event_1(bool bNVGOn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31140);
		
		struct
		{
			bool                                               bNVGOn;
		} params;
		params.bNVGOn = bNVGOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::OnInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31139);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.ExecuteUbergraph_W_ItemSelection_ItemGroupList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemGroupList_C::ExecuteUbergraph_W_ItemSelection_ItemGroupList(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31138);
		
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
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemGroupList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ItemSelection_ItemGroupList_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31137);
		return ptr;
	}

}


