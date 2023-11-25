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
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Dossier_Rapsheet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31261);
		
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
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCriminalRecord>                     CriminalRecord                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Dossier_Rapsheet_C::Initialize(TArray<struct FCriminalRecord> CriminalRecord)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31260);
		
		struct
		{
			TArray<struct FCriminalRecord>                     CriminalRecord;
		} params;
		params.CriminalRecord = CriminalRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Dossier_Rapsheet_C::ExecuteUbergraph_W_Briefing_Dossier_Rapsheet(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31259);
		
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
	 * 		Name   -> PredefinedFunction UW_Briefing_Dossier_Rapsheet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_Dossier_Rapsheet_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31258);
		return ptr;
	}

}


