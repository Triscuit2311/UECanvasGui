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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_4()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89944);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89943);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89942);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89941);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTaglineText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetWinningTaglineText(class FText* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89940);
		
		struct
		{
			class FText                                        ReturnValue;
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetMLOScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetMLOScore(int32_t* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89939);
		
		struct
		{
			int32_t                                            ReturnValue;
			unsigned char                                      UnknownData_0000[0x4];
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetSWATScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetSWATScore(int32_t* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89938);
		
		struct
		{
			int32_t                                            ReturnValue;
			unsigned char                                      UnknownData_0001[0x4];
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetRoundWinningTeamText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetRoundWinningTeamText(class FText* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89937);
		
		struct
		{
			class FText                                        ReturnValue;
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetLosingTeamRibbonColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetLosingTeamRibbonColor(struct FLinearColor* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89936);
		
		struct
		{
			struct FLinearColor                                ReturnValue;
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetLosingTeamTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetLosingTeamTextColor(struct FSlateColor* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89935);
		
		struct
		{
			struct FSlateColor                                 ReturnValue;
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTeamRibbonColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetWinningTeamRibbonColor(struct FLinearColor* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89934);
		
		struct
		{
			struct FLinearColor                                ReturnValue;
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.GetWinningTeamTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::GetWinningTeamTextColor(struct FSlateColor* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89933);
		
		struct
		{
			struct FSlateColor                                 ReturnValue;
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateRoundColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::UpdateRoundColors()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89932);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateSWATScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::UpdateSWATScore()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89931);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateMLOScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::UpdateMLOScore()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89930);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.UpdateRoundTagline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::UpdateRoundTagline()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89929);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89928);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.OnWinsUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::OnWinsUpdated_Event_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89927);
		
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
	 * 		Name   -> Function W_PVP_RoundEnd.W_PVP_RoundEnd_C.ExecuteUbergraph_W_PVP_RoundEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_RoundEnd_C::ExecuteUbergraph_W_PVP_RoundEnd(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89926);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0002[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PVP_RoundEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PVP_RoundEnd_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89925);
		return ptr;
	}

}


