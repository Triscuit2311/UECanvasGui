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
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetAmmoCategoryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::GetAmmoCategoryText(class UObject* ItemData, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28224);
		
		struct
		{
			class UObject*                                     ItemData;
			class UObject*                                     __WorldContext;
			class FText                                        Text;
		} params;
		params.ItemData = ItemData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.UpdateCurrent_LoadoutUI_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutSlot_C*                            CurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::UpdateCurrent_LoadoutUI_Slot(class UObject* WorldContextObject, class UW_LoadoutSlot_C* CurrentSlot, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28223);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UW_LoadoutSlot_C*                            CurrentSlot;
			class UObject*                                     __WorldContext;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CurrentSlot = CurrentSlot;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   BaseItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::GetItemType(class ABaseItem* BaseItemClass, class UObject* __WorldContext, EItemType* ItemType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28222);
		
		struct
		{
			class ABaseItem*                                   BaseItemClass;
			class UObject*                                     __WorldContext;
			EItemType                                          ItemType;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.BaseItemClass = BaseItemClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemType != nullptr)
			*ItemType = params.ItemType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetItemDataTableInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   BaseItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DataFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FItemLookupTable                            ItemLookupData                                             (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::GetItemDataTableInfo(class ABaseItem* BaseItemClass, class UObject* __WorldContext, bool* DataFound, struct FItemLookupTable* ItemLookupData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28221);
		
		struct
		{
			class ABaseItem*                                   BaseItemClass;
			class UObject*                                     __WorldContext;
			bool                                               DataFound;
			unsigned char                                      UnknownData_0001[0xF];
			struct FItemLookupTable                            ItemLookupData;
		} params;
		params.BaseItemClass = BaseItemClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataFound != nullptr)
			*DataFound = params.DataFound;
		if (ItemLookupData != nullptr)
			*ItemLookupData = params.ItemLookupData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetAttachmentSlotText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponAttachmentType                              AttachmentType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        SlotText                                                   (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::GetAttachmentSlotText(EWeaponAttachmentType AttachmentType, class UObject* __WorldContext, class FText* SlotText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28220);
		
		struct
		{
			EWeaponAttachmentType                              AttachmentType;
			unsigned char                                      UnknownData_0002[0x7];
			class UObject*                                     __WorldContext;
			class FText                                        SlotText;
		} params;
		params.AttachmentType = AttachmentType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotText != nullptr)
			*SlotText = params.SlotText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetItemClassText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemClass                                         ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryText                                               (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::GetItemClassText(EItemClass ItemCategory, class UObject* __WorldContext, class FText* CategoryText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28219);
		
		struct
		{
			EItemClass                                         ItemCategory;
			unsigned char                                      UnknownData_0003[0x7];
			class UObject*                                     __WorldContext;
			class FText                                        CategoryText;
		} params;
		params.ItemCategory = ItemCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryText != nullptr)
			*CategoryText = params.CategoryText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.GetLoadoutCategoryText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryText                                               (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::GetLoadoutCategoryText(EItemCategory ItemCategory, class UObject* __WorldContext, class FText* CategoryText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28218);
		
		struct
		{
			EItemCategory                                      ItemCategory;
			unsigned char                                      UnknownData_0004[0x7];
			class UObject*                                     __WorldContext;
			class FText                                        CategoryText;
		} params;
		params.ItemCategory = ItemCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryText != nullptr)
			*CategoryText = params.CategoryText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPF_UI.BPF_UI_C.RemoveSpacesFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ReturnString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        ReturnText                                                 (Parm, OutParm)
	 * 		class FName                                        ReturnName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBPF_UI_C::RemoveSpacesFromString(const class FString& String, class UObject* __WorldContext, class FString* ReturnString, class FText* ReturnText, class FName* ReturnName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(28217);
		
		struct
		{
			class FString                                      String;
			class UObject*                                     __WorldContext;
			class FString                                      ReturnString;
			class FText                                        ReturnText;
			class FName                                        ReturnName;
		} params;
		params.String = String;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnString != nullptr)
			*ReturnString = params.ReturnString;
		if (ReturnText != nullptr)
			*ReturnText = params.ReturnText;
		if (ReturnName != nullptr)
			*ReturnName = params.ReturnName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPF_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBPF_UI_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(28216);
		return ptr;
	}

}


