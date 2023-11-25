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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.UpdateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 InBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::UpdateIcon(int32_t SelectionIndex, const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90342);
		
		struct
		{
			int32_t                                            SelectionIndex;
			unsigned char                                      UnknownData_0000[0x4];
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::Select(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90341);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.Previous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::Previous(bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90340);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.Next
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::Next(bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90339);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteRadial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::ExecuteRadial()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90338);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnDeselected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::OnDeselected(bool PlayAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90337);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::OnSelected(bool PlayAnimation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90336);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90335);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.On Wheel Created
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::OnWheelCreated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90334);
		
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
	 * 		Name   -> Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteUbergraph_W_RadialSelectionBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_RadialSelectionBase_C::ExecuteUbergraph_W_RadialSelectionBase(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90333);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_RadialSelectionBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_RadialSelectionBase_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90332);
		return ptr;
	}

}


