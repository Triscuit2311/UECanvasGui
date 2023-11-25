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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ConfirmSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::ConfirmSelection(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43989);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.SelectCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::SelectCategory(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43988);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Update Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemSelectionGroup>                 InItemGroups                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::UpdateMenu(TArray<struct FItemSelectionGroup>* InItemGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43987);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.CloseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::CloseMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43986);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::OpenMenu(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43985);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FItemSelectionGroup>                 InItemSelectionGroups                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::Initialize(bool bForce, TArray<struct FItemSelectionGroup> InItemSelectionGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43984);
		
		struct
		{
			bool                                               bForce;
			unsigned char                                      UnknownData_0001[0x7];
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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ExecuteUbergraph_W_ItemSelectionMenu_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::ExecuteUbergraph_W_ItemSelectionMenu_V2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43983);
		
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
	 * 		Name   -> Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OnMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ItemSelectionMenu_V2_C::OnMenuOpened__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43982);
		
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
	 * 		Name   -> PredefinedFunction UW_ItemSelectionMenu_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ItemSelectionMenu_V2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43981);
		return ptr;
	}

}


