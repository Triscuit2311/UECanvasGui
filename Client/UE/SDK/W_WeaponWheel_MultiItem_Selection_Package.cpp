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
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.DetermineIconColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      NextIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IndexToCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::DetermineIconColor(class UImage* NextIcon, int32_t IndexToCheck)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90319);
		
		struct
		{
			class UImage*                                      NextIcon;
			int32_t                                            IndexToCheck;
		} params;
		params.NextIcon = NextIcon;
		params.IndexToCheck = IndexToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.UnhighlightIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Arrow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::UnhighlightIcon(class UImage* Arrow)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90318);
		
		struct
		{
			class UImage*                                      Arrow;
		} params;
		params.Arrow = Arrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.HighlightIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Arrow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::HighlightIcon(class UImage* Arrow)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90317);
		
		struct
		{
			class UImage*                                      Arrow;
		} params;
		params.Arrow = Arrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Deselect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::Deselect(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90316);
		
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
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::Select(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90315);
		
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
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartingItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::Refresh(int32_t NewAmount, int32_t StartingItemIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90314);
		
		struct
		{
			int32_t                                            NewAmount;
			int32_t                                            StartingItemIndex;
		} params;
		params.NewAmount = NewAmount;
		params.StartingItemIndex = StartingItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.PreviousItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::PreviousItem(bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90313);
		
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
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.NextItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::NextItem(bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90312);
		
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
	 * 		Name   -> Function W_WeaponWheel_MultiItem_Selection.W_WeaponWheel_MultiItem_Selection_C.CreateIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MultiItem_Selection_C::CreateIndex()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90311);
		
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
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_MultiItem_Selection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_WeaponWheel_MultiItem_Selection_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90310);
		return ptr;
	}

}


