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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.CreateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UImage*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UImage* UW_WeaponWheel_RadialSelection_C::CreateIcon(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90369);
		
		struct
		{
			struct FSlateBrush                                 InBrush;
			class UImage*                                      ReturnValue;
		} params;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems (Internal)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             ItemArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveNullItemsInternal(TArray<class UObject*>* ItemArray)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90368);
		
		struct
		{
			TArray<class UObject*>                             ItemArray;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemArray != nullptr)
			*ItemArray = params.ItemArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveNullItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90367);
		
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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsInExecutablesArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::IsInExecutablesArray(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90366);
		
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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveExecutableItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponWheelScript*                          WeaponWheelScript                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveExecutableItemFromCategory(class UWeaponWheelScript* WeaponWheelScript)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90365);
		
		struct
		{
			class UWeaponWheelScript*                          WeaponWheelScript;
		} params;
		params.WeaponWheelScript = WeaponWheelScript;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddExecutableItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponWheelScript*                          WeaponWheelScript                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::AddExecutableItemToCategory(class UWeaponWheelScript* WeaponWheelScript, int32_t AtIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90364);
		
		struct
		{
			class UWeaponWheelScript*                          WeaponWheelScript;
			int32_t                                            AtIndex;
		} params;
		params.WeaponWheelScript = WeaponWheelScript;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShuffleItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::ShuffleItems()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90363);
		
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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShiftItemToNewSpot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::ShiftItemToNewSpot(class ABaseItem* Item, int32_t NewIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90362);
		
		struct
		{
			class ABaseItem*                                   Item;
			int32_t                                            NewIndex;
		} params;
		params.Item = Item;
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::MoveToBack(class ABaseItem* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90361);
		
		struct
		{
			class ABaseItem*                                   Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::MoveToFront(class ABaseItem* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90360);
		
		struct
		{
			class ABaseItem*                                   Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.UpdateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 InBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::UpdateIcon(int32_t SelectionIndex, const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90359);
		
		struct
		{
			int32_t                                            SelectionIndex;
			unsigned char                                      UnknownData_0001[0x4];
			struct FSlateBrush                                 InBrush;
		} params;
		params.SelectionIndex = SelectionIndex;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::Select(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90358);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0002[0x4];
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteRadial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::ExecuteRadial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90357);
		
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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::OnDeselected(bool PlayAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90356);
		
		struct
		{
			bool                                               PlayAnimation;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		params.PlayAnimation = PlayAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::OnSelected(bool PlayAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90355);
		
		struct
		{
			bool                                               PlayAnimation;
			unsigned char                                      UnknownData_0004[0x7];
		} params;
		params.PlayAnimation = PlayAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Previous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::Previous(bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90354);
		
		struct
		{
			bool                                               bSuccess;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Next
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::Next(bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90353);
		
		struct
		{
			bool                                               bSuccess;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::RemoveItemFromCategory(class ABaseItem* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90352);
		
		struct
		{
			class ABaseItem*                                   Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::AddItemToCategory(class ABaseItem* NewItem, int32_t AtIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90351);
		
		struct
		{
			class ABaseItem*                                   NewItem;
			int32_t                                            AtIndex;
		} params;
		params.NewItem = NewItem;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsEquipping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipping                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::IsEquipping(bool* IsEquipping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90350);
		
		struct
		{
			bool                                               IsEquipping;
			unsigned char                                      UnknownData_0005[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquipping != nullptr)
			*IsEquipping = params.IsEquipping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::GetItemName(class FName* ItemName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90349);
		
		struct
		{
			class FName                                        ItemName;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemName != nullptr)
			*ItemName = params.ItemName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Category                                                   (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::GetCategory(class FText* Category)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90348);
		
		struct
		{
			class FText                                        Category;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90347);
		
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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.On Wheel Created
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::OnWheelCreated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90346);
		
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
	 * 		Name   -> Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteUbergraph_W_WeaponWheel_RadialSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_RadialSelection_C::ExecuteUbergraph_W_WeaponWheel_RadialSelection(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90345);
		
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
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_RadialSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_WeaponWheel_RadialSelection_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90344);
		return ptr;
	}

}


