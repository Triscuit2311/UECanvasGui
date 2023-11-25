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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.IsInsideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::IsInsideList(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31132);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.UpdateItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::UpdateItemList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31131);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItemWithGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::SwapItemWithGroup(int32_t ItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31130);
		
		struct
		{
			int32_t                                            ItemIndex;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnGrenadeThrown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseGrenade*                                ThrownGrenade                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::OnGrenadeThrown(class ABaseGrenade* ThrownGrenade)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31129);
		
		struct
		{
			class ABaseGrenade*                                ThrownGrenade;
		} params;
		params.ThrownGrenade = ThrownGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::HideArrow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31128);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::ShowArrow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31127);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::RemoveItemIndex(int32_t ItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31126);
		
		struct
		{
			int32_t                                            ItemIndex;
			unsigned char                                      UnknownData_0002[0x4];
		} params;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToRemove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRemoveFromItems                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::RemoveItem(class ABaseItem* ItemToRemove, bool bRemoveFromItems)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31125);
		
		struct
		{
			class ABaseItem*                                   ItemToRemove;
			bool                                               bRemoveFromItems;
		} params;
		params.ItemToRemove = ItemToRemove;
		params.bRemoveFromItems = bRemoveFromItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FindDuplicateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABaseItem*>                           ReturnValue                                                (Parm, OutParm)
	 * 		TArray<class FString>                              Names                                                      (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::FindDuplicateItems(class ABaseItem* InItem, TArray<class ABaseItem*>* ReturnValue, TArray<class FString>* Names)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31124);
		
		struct
		{
			class ABaseItem*                                   InItem;
			TArray<class ABaseItem*>                           ReturnValue;
			TArray<class FString>                              Names;
		} params;
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (Names != nullptr)
			*Names = params.Names;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ShowList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::ShowList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31123);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.HideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::HideList(bool bPlaySound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31122);
		
		struct
		{
			bool                                               bPlaySound;
			unsigned char                                      UnknownData_0003[0x3];
		} params;
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSwapping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::CreateItem(class ABaseItem* Item, int32_t Index, bool bSwapping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31121);
		
		struct
		{
			class ABaseItem*                                   Item;
			int32_t                                            Index;
			bool                                               bSwapping;
		} params;
		params.Item = Item;
		params.Index = Index;
		params.bSwapping = bSwapping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.SwapItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FromIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ToIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::SwapItem(int32_t FromIndex, int32_t ToIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31120);
		
		struct
		{
			int32_t                                            FromIndex;
			int32_t                                            ToIndex;
		} params;
		params.FromIndex = FromIndex;
		params.ToIndex = ToIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimFadeOutFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::OnAnimFadeOutFinished()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31119);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnAnimSelectFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::OnAnimSelectFinished()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31118);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Focus(bool bForce)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31117);
		
		struct
		{
			bool                                               bForce;
		} params;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Unfocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Unfocus(bool bForce)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31116);
		
		struct
		{
			bool                                               bForce;
			unsigned char                                      UnknownData_0004[0x7];
		} params;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.EquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ItemEquipped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::EquipItem(bool* ItemEquipped)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31115);
		
		struct
		{
			bool                                               ItemEquipped;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemEquipped != nullptr)
			*ItemEquipped = params.ItemEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSoftSelection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::ExecuteSelection(bool bSoftSelection)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31114);
		
		struct
		{
			bool                                               bSoftSelection;
			unsigned char                                      UnknownData_0005[0x3];
		} params;
		params.bSoftSelection = bSoftSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.GetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::GetSelectedItem(class ABaseItem** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31113);
		
		struct
		{
			class ABaseItem*                                   ReturnValue;
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusRequired                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::FadeIn(bool bFocusRequired)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31112);
		
		struct
		{
			bool                                               bFocusRequired;
			unsigned char                                      UnknownData_0006[0x3];
		} params;
		params.bFocusRequired = bFocusRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusRequired                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::FadeOut(bool bFocusRequired)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31111);
		
		struct
		{
			bool                                               bFocusRequired;
		} params;
		params.bFocusRequired = bFocusRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Deselect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Deselect()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31110);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Select()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31109);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Previous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Previous()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31108);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Next
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Next()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31107);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PopulateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::PopulateList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31106);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Initialize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31105);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31104);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.OnInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::OnInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31103);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::CustomEvent_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31102);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31101);
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::CustomEvent_2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31100);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList.W_ItemSelection_ItemList_C.ExecuteUbergraph_W_ItemSelection_ItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_C::ExecuteUbergraph_W_ItemSelection_ItemList(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31099);
		
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
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ItemSelection_ItemList_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31098);
		return ptr;
	}

}


