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
	 * 		Name   -> Function W_COOPScorePopUp.W_COOPScorePopUp_C.AddScorePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InScoreText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InCalculatedScore                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bGive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_COOPScorePopUp_C::AddScorePopup(const class FText& InScoreText, int32_t InCalculatedScore, bool bGive)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49286);
		
		struct
		{
			class FText                                        InScoreText;
			int32_t                                            InCalculatedScore;
			bool                                               bGive;
		} params;
		params.InScoreText = InScoreText;
		params.InCalculatedScore = InCalculatedScore;
		params.bGive = bGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_COOPScorePopUp.W_COOPScorePopUp_C.ExecuteUbergraph_W_COOPScorePopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_COOPScorePopUp_C::ExecuteUbergraph_W_COOPScorePopUp(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49285);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_COOPScorePopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_COOPScorePopUp_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(49284);
		return ptr;
	}

}


