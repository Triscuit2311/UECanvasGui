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
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetVisibility_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SwatCommandEntry_C::GetVisibility_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89074);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetTeamColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                TeamColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SwatCommandEntry_C::GetTeamColor(struct FLinearColor* TeamColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89073);
		
		struct
		{
			struct FLinearColor                                TeamColor;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamColor != nullptr)
			*TeamColor = params.TeamColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.GetBrushColor_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UW_SwatCommandEntry_C::GetBrushColor_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89072);
		
		struct
		{
			struct FLinearColor                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.SetCommandText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_SwatCommandEntry_C::SetCommandText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89071);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SwatCommandEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89070);
		
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
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.UpdateCommandEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSwatCommand                                SwatCommand                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETeamType                                          ActiveTeamType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SwatCommandEntry_C::UpdateCommandEntry(const struct FSwatCommand& SwatCommand, ETeamType ActiveTeamType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89069);
		
		struct
		{
			struct FSwatCommand                                SwatCommand;
			ETeamType                                          ActiveTeamType;
		} params;
		params.SwatCommand = SwatCommand;
		params.ActiveTeamType = ActiveTeamType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SwatCommandEntry.W_SwatCommandEntry_C.ExecuteUbergraph_W_SwatCommandEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SwatCommandEntry_C::ExecuteUbergraph_W_SwatCommandEntry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89068);
		
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
	 * 		Name   -> PredefinedFunction UW_SwatCommandEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_SwatCommandEntry_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89067);
		return ptr;
	}

}


