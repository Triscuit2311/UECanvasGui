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
	 * 		Name   -> Function AC_DistanceToTarget.AC_DistanceToTarget_C.CalculateCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAC_DistanceToTarget_C::CalculateCurve(float X)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84290);
		
		struct
		{
			float                                              X;
			float                                              ReturnValue;
		} params;
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_DistanceToTarget.AC_DistanceToTarget_C.Score
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAC_DistanceToTarget_C::Score(const struct FAIActionDecisionContext& Context, bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84289);
		
		struct
		{
			struct FAIActionDecisionContext                    Context;
			bool                                               bSuccess;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              ReturnValue;
		} params;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAC_DistanceToTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAC_DistanceToTarget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84288);
		return ptr;
	}

}


