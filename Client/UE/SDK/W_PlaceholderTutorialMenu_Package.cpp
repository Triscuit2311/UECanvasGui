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
	 * 		Name   -> Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.MoveToLoadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_StandardButton_C*                         CallingButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlaceholderTutorialMenu_C::MoveToLoadout(class UW_StandardButton_C* CallingButton)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89120);
		
		struct
		{
			class UW_StandardButton_C*                         CallingButton;
		} params;
		params.CallingButton = CallingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PlaceholderTutorialMenu_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89119);
		
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
	 * 		Name   -> Function W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C.ExecuteUbergraph_W_PlaceholderTutorialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PlaceholderTutorialMenu_C::ExecuteUbergraph_W_PlaceholderTutorialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89118);
		
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
	 * 		Name   -> PredefinedFunction UW_PlaceholderTutorialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PlaceholderTutorialMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89117);
		return ptr;
	}

}


