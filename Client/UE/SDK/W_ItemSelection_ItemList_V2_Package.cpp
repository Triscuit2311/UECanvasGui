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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::FadeOut()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43529);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::FadeOutAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43528);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.FadeOutAllExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::FadeOutAllExcept(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43527);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Unfocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::Unfocus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43526);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::Focus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43525);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.HideList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::HideList(bool bPlaySound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43524);
		
		struct
		{
			bool                                               bPlaySound;
			unsigned char                                      UnknownData_0000[0x3];
		} params;
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ShowList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlaySound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::ShowList(bool bPlaySound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43523);
		
		struct
		{
			bool                                               bPlaySound;
			unsigned char                                      UnknownData_0001[0x3];
		} params;
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.OnAnimSelectFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::OnAnimSelectFinished()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43522);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ConfirmSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::ConfirmSelection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43521);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::Select(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43520);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemCategory                                      InItemCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::CreateItem(EItemCategory InItemCategory, class ABaseItem* InItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43519);
		
		struct
		{
			EItemCategory                                      InItemCategory;
			unsigned char                                      UnknownData_0002[0x7];
			class ABaseItem*                                   InItem;
		} params;
		params.InItemCategory = InItemCategory;
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PopulateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::PopulateList()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43518);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::Initialize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43517);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43516);
		
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
	 * 		Name   -> Function W_ItemSelection_ItemList_V2.W_ItemSelection_ItemList_V2_C.ExecuteUbergraph_W_ItemSelection_ItemList_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelection_ItemList_V2_C::ExecuteUbergraph_W_ItemSelection_ItemList_V2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43515);
		
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
	 * 		Name   -> PredefinedFunction UW_ItemSelection_ItemList_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ItemSelection_ItemList_V2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43514);
		return ptr;
	}

}


