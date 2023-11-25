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
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Objectives_List_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49198);
		
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
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitObjectives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AObjective*>                          Objectives                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Objectives_List_C::InitObjectives(TArray<class AObjective*> Objectives)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49197);
		
		struct
		{
			TArray<class AObjective*>                          Objectives;
		} params;
		params.Objectives = Objectives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitChallenges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_SubObjective_Entry>              Challenges                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Objectives_List_C::InitChallenges(TArray<struct FST_SubObjective_Entry> Challenges)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49196);
		
		struct
		{
			TArray<struct FST_SubObjective_Entry>              Challenges;
		} params;
		params.Challenges = Challenges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.ExecuteUbergraph_W_Briefing_Objectives_List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Objectives_List_C::ExecuteUbergraph_W_Briefing_Objectives_List(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49195);
		
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
	 * 		Name   -> PredefinedFunction UW_Briefing_Objectives_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_Objectives_List_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(49194);
		return ptr;
	}

}


