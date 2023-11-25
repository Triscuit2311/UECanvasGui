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
	 * 		Name   -> Function AC_Ammo.AC_Ammo_C.CalculateCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAC_Ammo_C::CalculateCurve(float X)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84300);
		
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
	 * 		Name   -> Function AC_Ammo.AC_Ammo_C.ReloadCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAC_Ammo_C::ReloadCurve(float X, float* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84299);
		
		struct
		{
			float                                              X;
			float                                              ReturnValue;
		} params;
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Ammo.AC_Ammo_C.Score
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAC_Ammo_C::Score(const struct FAIActionDecisionContext& Context, bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84298);
		
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
	 * 		Name   -> PredefinedFunction UAC_Ammo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAC_Ammo_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84297);
		return ptr;
	}

}


