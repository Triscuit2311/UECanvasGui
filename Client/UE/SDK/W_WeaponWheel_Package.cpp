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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromAllCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::RemoveNullItemsFromAllCategories()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94908);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WeaponWheelCategoryName                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::RemoveNullItemsFromCategory(const class FName& WeaponWheelCategoryName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94907);
		
		struct
		{
			class FName                                        WeaponWheelCategoryName;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.WeaponWheelCategoryName = WeaponWheelCategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::IsItemAtBack(class ABaseItem* Item, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94906);
		
		struct
		{
			class ABaseItem*                                   Item;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::IsItemAtFront(class ABaseItem* Item, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94905);
		
		struct
		{
			class ABaseItem*                                   Item;
			bool                                               ReturnValue;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::IsItemAtIndex(class ABaseItem* Item, int32_t Index, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94904);
		
		struct
		{
			class ABaseItem*                                   Item;
			int32_t                                            Index;
			bool                                               ReturnValue;
		} params;
		params.Item = Item;
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ClearStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::ClearStats()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94903);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateDebugInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::UpdateDebugInformation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94902);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveExecutableItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponWheelScript*                          NewWeaponWheelScript                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemoveExecutableItemFromCategory(class UWeaponWheelScript* NewWeaponWheelScript, int32_t AtIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94901);
		
		struct
		{
			class UWeaponWheelScript*                          NewWeaponWheelScript;
			int32_t                                            AtIndex;
			unsigned char                                      UnknownData_0002[0x4];
		} params;
		params.NewWeaponWheelScript = NewWeaponWheelScript;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddExecutableItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponWheelScript*                          NewWeaponWheelScript                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AtIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddExecutableItemToCategory(class UWeaponWheelScript* NewWeaponWheelScript, int32_t AtIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94900);
		
		struct
		{
			class UWeaponWheelScript*                          NewWeaponWheelScript;
			int32_t                                            AtIndex;
		} params;
		params.NewWeaponWheelScript = NewWeaponWheelScript;
		params.AtIndex = AtIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ShuffleItemsInCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CategoryName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::ShuffleItemsInCategory(const class FName& CategoryName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94899);
		
		struct
		{
			class FName                                        CategoryName;
		} params;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentICategorytemCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::GetCurrentICategorytemCount(int32_t* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94898);
		
		struct
		{
			int32_t                                            ReturnValue;
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentItemSelectionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::GetCurrentItemSelectionIndex(int32_t* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94897);
		
		struct
		{
			int32_t                                            ReturnValue;
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        FromCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ToCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndexInCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToAnotherCategoryIndex(int32_t ItemIndex, const class FName& FromCategory, const class FName& ToCategory, int32_t NewIndexInCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94896);
		
		struct
		{
			int32_t                                            ItemIndex;
			class FName                                        FromCategory;
			class FName                                        ToCategory;
			int32_t                                            NewIndexInCategory;
		} params;
		params.ItemIndex = ItemIndex;
		params.FromCategory = FromCategory;
		params.ToCategory = ToCategory;
		params.NewIndexInCategory = NewIndexInCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ToCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndexInCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToAnotherCategory(class ABaseItem* Item, const class FName& ToCategory, int32_t NewIndexInCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94895);
		
		struct
		{
			class ABaseItem*                                   Item;
			class FName                                        ToCategory;
			int32_t                                            NewIndexInCategory;
			unsigned char                                      UnknownData_0003[0x4];
		} params;
		params.Item = Item;
		params.ToCategory = ToCategory;
		params.NewIndexInCategory = NewIndexInCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToNewSpotIndex(int32_t ItemIndex, const class FName& CategoryName, int32_t NewIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94894);
		
		struct
		{
			int32_t                                            ItemIndex;
			class FName                                        CategoryName;
			int32_t                                            NewIndex;
		} params;
		params.ItemIndex = ItemIndex;
		params.CategoryName = CategoryName;
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToNewSpot(class ABaseItem* Item, int32_t NewIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94893);
		
		struct
		{
			class ABaseItem*                                   Item;
			int32_t                                            NewIndex;
			unsigned char                                      UnknownData_0004[0x4];
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToBack(class ABaseItem* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94892);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToFront(class ABaseItem* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94891);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToBackIndex(int32_t ItemIndex, const class FName& CategoryName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94890);
		
		struct
		{
			int32_t                                            ItemIndex;
			class FName                                        CategoryName;
			unsigned char                                      UnknownData_0005[0x4];
		} params;
		params.ItemIndex = ItemIndex;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront (Index)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::MoveItemToFrontIndex(int32_t ItemIndex, const class FName& CategoryName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94889);
		
		struct
		{
			int32_t                                            ItemIndex;
			class FName                                        CategoryName;
			unsigned char                                      UnknownData_0006[0x4];
		} params;
		params.ItemIndex = ItemIndex;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveAssistant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   AssistantItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemoveAssistant(class ABaseItem* AssistantItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94888);
		
		struct
		{
			class ABaseItem*                                   AssistantItem;
		} params;
		params.AssistantItem = AssistantItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveTabletDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   TabletDeviceItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemoveTabletDevice(class ABaseItem* TabletDeviceItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94887);
		
		struct
		{
			class ABaseItem*                                   TabletDeviceItem;
		} params;
		params.TabletDeviceItem = TabletDeviceItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveTactical Devices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   DoorDeviceItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemoveTacticalDevices(class ABaseItem* DoorDeviceItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94886);
		
		struct
		{
			class ABaseItem*                                   DoorDeviceItem;
		} params;
		params.DoorDeviceItem = DoorDeviceItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   GrenadeItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemoveGrenade(class ABaseItem* GrenadeItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94885);
		
		struct
		{
			class ABaseItem*                                   GrenadeItem;
		} params;
		params.GrenadeItem = GrenadeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveSecondaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   SecondaryWeaponItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemoveSecondaryWeapon(class ABaseItem* SecondaryWeaponItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94884);
		
		struct
		{
			class ABaseItem*                                   SecondaryWeaponItem;
		} params;
		params.SecondaryWeaponItem = SecondaryWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemovePrimaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   PrimaryWeaponItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemovePrimaryWeapon(class ABaseItem* PrimaryWeaponItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94883);
		
		struct
		{
			class ABaseItem*                                   PrimaryWeaponItem;
		} params;
		params.PrimaryWeaponItem = PrimaryWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RemoveItemFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        WheelCategory                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RemoveItemFromCategory(class ABaseItem* Item, const class FName& WheelCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94882);
		
		struct
		{
			class ABaseItem*                                   Item;
			class FName                                        WheelCategory;
		} params;
		params.Item = Item;
		params.WheelCategory = WheelCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddItemToCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        WheelCategory                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddItemToCategory(class ABaseItem* Item, const class FName& WheelCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94881);
		
		struct
		{
			class ABaseItem*                                   Item;
			class FName                                        WheelCategory;
		} params;
		params.Item = Item;
		params.WheelCategory = WheelCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddTabletDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   TabletDeviceItem                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddTabletDevice(class ABaseItem* TabletDeviceItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94880);
		
		struct
		{
			class ABaseItem*                                   TabletDeviceItem;
		} params;
		params.TabletDeviceItem = TabletDeviceItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddTactical Device
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   TacticalDeviceItem                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddTacticalDevice(class ABaseItem* TacticalDeviceItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94879);
		
		struct
		{
			class ABaseItem*                                   TacticalDeviceItem;
		} params;
		params.TacticalDeviceItem = TacticalDeviceItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddAssistants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Assistants                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddAssistants(class ABaseItem* Assistants)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94878);
		
		struct
		{
			class ABaseItem*                                   Assistants;
		} params;
		params.Assistants = Assistants;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   GrenadeItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddGrenade(class ABaseItem* GrenadeItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94877);
		
		struct
		{
			class ABaseItem*                                   GrenadeItem;
		} params;
		params.GrenadeItem = GrenadeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddSecondaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   SecondayWeaponItem                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddSecondaryWeapon(class ABaseItem* SecondayWeaponItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94876);
		
		struct
		{
			class ABaseItem*                                   SecondayWeaponItem;
		} params;
		params.SecondayWeaponItem = SecondayWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.AddPrimaryWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   PrimaryWeaponItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::AddPrimaryWeapon(class ABaseItem* PrimaryWeaponItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94875);
		
		struct
		{
			class ABaseItem*                                   PrimaryWeaponItem;
		} params;
		params.PrimaryWeaponItem = PrimaryWeaponItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RefreshMultiItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RefreshMultiItemWidget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94874);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.IsWheelCursorVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::IsWheelCursorVisible()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94873);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::OnRadialMenuInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94872);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0007[0x3];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnRadialSectorCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAngle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::OnRadialSectorCreated(int32_t Index, float InAngle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94871);
		
		struct
		{
			int32_t                                            Index;
			float                                              InAngle;
			bool                                               ReturnValue;
		} params;
		params.Index = Index;
		params.InAngle = InAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ExecuteRadial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::ExecuteRadial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94870);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ShowWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::ShowWheel()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94869);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.HideWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_WeaponWheel_C::HideWheel()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94868);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllStatsOnWheelCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::NotifyAllStatsOnWheelCreated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94867);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllCategoriesOnWheelCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::NotifyAllCategoriesOnWheelCreated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94866);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.FindDataTableRowNameFromItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::FindDataTableRowNameFromItemName(const class FName& ItemName, class FName* RowName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94865);
		
		struct
		{
			class FName                                        ItemName;
			class FName                                        RowName;
		} params;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowName != nullptr)
			*RowName = params.RowName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.StatEnumToName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint8_t                                            ItemStat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        StatName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::StatEnumToName(uint8_t ItemStat, class FName* StatName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94864);
		
		struct
		{
			uint8_t                                            ItemStat;
			unsigned char                                      UnknownData_0008[0x3];
			class FName                                        StatName;
		} params;
		params.ItemStat = ItemStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatName != nullptr)
			*StatName = params.StatName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RefreshStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         ItemStats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FItemLookupTable                            ItemDataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RefreshStats(TArray<class UUserWidget*>* ItemStats, const struct FItemLookupTable& ItemDataTable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94863);
		
		struct
		{
			TArray<class UUserWidget*>                         ItemStats;
			struct FItemLookupTable                            ItemDataTable;
		} params;
		params.ItemDataTable = ItemDataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemStats != nullptr)
			*ItemStats = params.ItemStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.RefreshCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewCategoryItems                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UWeaponWheelScript*>                  NewWeaponWheelScripts                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::RefreshCategory(TArray<class ABaseItem*>* NewCategoryItems, TArray<class UWeaponWheelScript*>* NewWeaponWheelScripts, const class FName& CategoryName, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94862);
		
		struct
		{
			TArray<class ABaseItem*>                           NewCategoryItems;
			TArray<class UWeaponWheelScript*>                  NewWeaponWheelScripts;
			class FName                                        CategoryName;
			int32_t                                            StartingItemIndex;
		} params;
		params.CategoryName = CategoryName;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewCategoryItems != nullptr)
			*NewCategoryItems = params.NewCategoryItems;
		if (NewWeaponWheelScripts != nullptr)
			*NewWeaponWheelScripts = params.NewWeaponWheelScripts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateTabletDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewTabletDevices                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::UpdateTabletDevices(TArray<class ABaseItem*>* NewTabletDevices, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94861);
		
		struct
		{
			TArray<class ABaseItem*>                           NewTabletDevices;
			int32_t                                            StartingItemIndex;
		} params;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewTabletDevices != nullptr)
			*NewTabletDevices = params.NewTabletDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateTacticalDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewDoorDevices                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::UpdateTacticalDevices(TArray<class ABaseItem*>* NewDoorDevices, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(94860);
		
		struct
		{
			TArray<class ABaseItem*>                           NewDoorDevices;
			int32_t                                            StartingItemIndex;
		} params;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewDoorDevices != nullptr)
			*NewDoorDevices = params.NewDoorDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateAssistants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewAssistants                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::UpdateAssistants(TArray<class ABaseItem*>* NewAssistants, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92973);
		
		struct
		{
			TArray<class ABaseItem*>                           NewAssistants;
			int32_t                                            StartingItemIndex;
		} params;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewAssistants != nullptr)
			*NewAssistants = params.NewAssistants;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateGrenades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewGrenades                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::UpdateGrenades(TArray<class ABaseItem*>* NewGrenades, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92972);
		
		struct
		{
			TArray<class ABaseItem*>                           NewGrenades;
			int32_t                                            StartingItemIndex;
		} params;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewGrenades != nullptr)
			*NewGrenades = params.NewGrenades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdateSecondaryWeapons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewSecondaryWeapons                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::UpdateSecondaryWeapons(TArray<class ABaseItem*>* NewSecondaryWeapons, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92971);
		
		struct
		{
			TArray<class ABaseItem*>                           NewSecondaryWeapons;
			int32_t                                            StartingItemIndex;
		} params;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSecondaryWeapons != nullptr)
			*NewSecondaryWeapons = params.NewSecondaryWeapons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.UpdatePrimaryWeapons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           NewPrimaryWeapons                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::UpdatePrimaryWeapons(TArray<class ABaseItem*>* NewPrimaryWeapons, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92970);
		
		struct
		{
			TArray<class ABaseItem*>                           NewPrimaryWeapons;
			int32_t                                            StartingItemIndex;
		} params;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewPrimaryWeapons != nullptr)
			*NewPrimaryWeapons = params.NewPrimaryWeapons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PreviousItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::PreviousItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92969);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.NextItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::NextItem()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92968);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PopulateAllCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::PopulateAllCategories()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92967);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PopulateCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABaseItem*>                           Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::PopulateCategory(TArray<class ABaseItem*>* Items, const class FName& CategoryName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92966);
		
		struct
		{
			TArray<class ABaseItem*>                           Items;
			class FName                                        CategoryName;
		} params;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PlaceWidgetInWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanelSlot*                            CanvasSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      Positionn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::PlaceWidgetInWheel(class UCanvasPanelSlot** CanvasSlot, const struct FVector2D& Positionn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92965);
		
		struct
		{
			class UCanvasPanelSlot*                            CanvasSlot;
			struct FVector2D                      Positionn;
		} params;
		params.Positionn = Positionn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanvasSlot != nullptr)
			*CanvasSlot = params.CanvasSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.SelectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_RadialSelection_C*            ItemToSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RefreshStats                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::SelectItem(class UW_WeaponWheel_RadialSelection_C* ItemToSelect, bool PlayAnimation, bool PlaySound, bool RefreshStats, bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92964);
		
		struct
		{
			class UW_WeaponWheel_RadialSelection_C*            ItemToSelect;
			bool                                               PlayAnimation;
			bool                                               PlaySound;
			bool                                               RefreshStats;
			bool                                               bSuccess;
			unsigned char                                      UnknownData_0009[0x4];
		} params;
		params.ItemToSelect = ItemToSelect;
		params.PlayAnimation = PlayAnimation;
		params.PlaySound = PlaySound;
		params.RefreshStats = RefreshStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_WeaponWheel_ItemStat_C*                   ItemStatClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FillSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEasingFunc                                        EasingFunction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemLookupTable                            LookupTable                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UW_WeaponWheel_ItemStat_C*                   ItemStatWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::CreateWheelStat(class UW_WeaponWheel_ItemStat_C* ItemStatClass, float FillSpeed, EEasingFunc EasingFunction, const struct FItemLookupTable& LookupTable, class UW_WeaponWheel_ItemStat_C** ItemStatWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92963);
		
		struct
		{
			class UW_WeaponWheel_ItemStat_C*                   ItemStatClass;
			float                                              FillSpeed;
			EEasingFunc                                        EasingFunction;
			unsigned char                                      UnknownData_0010[0x3];
			struct FItemLookupTable                            LookupTable;
			class UW_WeaponWheel_ItemStat_C*                   ItemStatWidget;
		} params;
		params.ItemStatClass = ItemStatClass;
		params.FillSpeed = FillSpeed;
		params.EasingFunction = EasingFunction;
		params.LookupTable = LookupTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemStatWidget != nullptr)
			*ItemStatWidget = params.ItemStatWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanelSlot*                            CanvasPanelSlot                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::CreateWheelCategory(int32_t Index, const class FName& CategoryName, class UCanvasPanelSlot** CanvasPanelSlot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92962);
		
		struct
		{
			int32_t                                            Index;
			class FName                                        CategoryName;
			unsigned char                                      UnknownData_0011[0x4];
			class UCanvasPanelSlot*                            CanvasPanelSlot;
		} params;
		params.Index = Index;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanvasPanelSlot != nullptr)
			*CanvasPanelSlot = params.CanvasPanelSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92961);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92960);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnItemSelcted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::OnItemSelcted(bool PlayAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92959);
		
		struct
		{
			bool                                               PlayAnimation;
		} params;
		params.PlayAnimation = PlayAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnItemDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::OnItemDeselected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92958);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnSectorSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::OnSectorSelected(int32_t SelectedIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92957);
		
		struct
		{
			int32_t                                            SelectedIndex;
		} params;
		params.SelectedIndex = SelectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnSectorDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeselectedIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::OnSectorDeselected(int32_t DeselectedIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92956);
		
		struct
		{
			int32_t                                            DeselectedIndex;
		} params;
		params.DeselectedIndex = DeselectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::OnRadialMenuCreated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92955);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92954);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ExecuteUbergraph_W_WeaponWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::ExecuteUbergraph_W_WeaponWheel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92953);
		
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
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ItemDeselected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::ItemDeselected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName, int32_t ItemIndex, const class FName& ItemName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92952);
		
		struct
		{
			int32_t                                            CategoryIndex;
			class FName                                        CategoryName;
			int32_t                                            ItemIndex;
			class FName                                        ItemName;
		} params;
		params.CategoryIndex = CategoryIndex;
		params.CategoryName = CategoryName;
		params.ItemIndex = ItemIndex;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.ItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::ItemSelected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName, int32_t ItemIndex, const class FName& ItemName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92951);
		
		struct
		{
			int32_t                                            CategoryIndex;
			class FName                                        CategoryName;
			int32_t                                            ItemIndex;
			class FName                                        ItemName;
		} params;
		params.CategoryIndex = CategoryIndex;
		params.CategoryName = CategoryName;
		params.ItemIndex = ItemIndex;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CategorySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::CategorySelected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92950);
		
		struct
		{
			int32_t                                            CategoryIndex;
			class FName                                        CategoryName;
		} params;
		params.CategoryIndex = CategoryIndex;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel.W_WeaponWheel_C.CategoryDeselected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_C::CategoryDeselected__DelegateSignature(int32_t CategoryIndex, const class FName& CategoryName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(92949);
		
		struct
		{
			int32_t                                            CategoryIndex;
			class FName                                        CategoryName;
		} params;
		params.CategoryIndex = CategoryIndex;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_WeaponWheel_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(92948);
		return ptr;
	}

}


