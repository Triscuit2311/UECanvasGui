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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ResetAnimationFadeOutState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::ResetAnimationFadeOutState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39741);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindItemFromColumnIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ItemSelection_ItemList_C*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::FindItemFromColumnIndex(class UW_ItemSelection_ItemList_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39740);
		
		struct
		{
			class UW_ItemSelection_ItemList_C*                 ReturnValue;
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FadeOutSelectedColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::FadeOutSelectedColumn()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39739);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanQueueSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::CanQueueSelection(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39738);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.QueuedExecuteSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::QueuedExecuteSelection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39737);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindColumnIndexFromItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::FindColumnIndexFromItem(class ABaseItem* InItem, int32_t* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39736);
		
		struct
		{
			class ABaseItem*                                   InItem;
			int32_t                                            ReturnValue;
		} params;
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.IsOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::IsOpen(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39735);
		
		struct
		{
			bool                                               ReturnValue;
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.HideMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::HideMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39734);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.RemoveItemFromMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemToRemove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ListIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::RemoveItemFromMenu(class ABaseItem* ItemToRemove, int32_t ListIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39733);
		
		struct
		{
			class ABaseItem*                                   ItemToRemove;
			int32_t                                            ListIndex;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.ItemToRemove = ItemToRemove;
		params.ListIndex = ListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.UpdateDebugInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UW_ItemSelectionMenu_C::UpdateDebugInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39732);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanNavigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::CanNavigate(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39731);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0003[0x7];
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.SetMouseWheelDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMouseWheelDelta                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::SetMouseWheelDelta(float NewMouseWheelDelta)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39730);
		
		struct
		{
			float                                              NewMouseWheelDelta;
		} params;
		params.NewMouseWheelDelta = NewMouseWheelDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::ExecuteSelection(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39729);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CloseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::CloseMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39728);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        TriggerKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::OpenMenu(const struct FKey& TriggerKey)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39727);
		
		struct
		{
			struct FKey                                        TriggerKey;
		} params;
		params.TriggerKey = TriggerKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnWeaponMagCheck_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39726);
		
		struct
		{
			class ABaseMagazineWeapon*                         MagazineWeapon;
		} params;
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::OnInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39725);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnFadeOutFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::OnFadeOutFinished()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39724);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39723);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39722);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FItemSelectionGroup>                 InItemSelectionGroups                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::Initialize(bool bForce, TArray<struct FItemSelectionGroup> InItemSelectionGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39721);
		
		struct
		{
			bool                                               bForce;
			unsigned char                                      UnknownData_0004[0x7];
			TArray<struct FItemSelectionGroup>                 InItemSelectionGroups;
		} params;
		params.bForce = bForce;
		params.InItemSelectionGroups = InItemSelectionGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::CustomEvent_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39720);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteUbergraph_W_ItemSelectionMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::ExecuteUbergraph_W_ItemSelectionMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39719);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_C::OnMenuOpened__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39718);
		
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
	 * 		Name   -> PredefinedFunction UW_ItemSelectionMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ItemSelectionMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39717);
		return ptr;
	}

}


