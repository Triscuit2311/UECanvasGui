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
	 * 		Name   -> Function AC_SuppressionNearBone.AC_SuppressionNearBone_C.IsBoneSuppressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              SuppressionAmount                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAC_SuppressionNearBone_C::IsBoneSuppressed(class AReadyOrNotCharacter* Character, bool* ReturnValue, float* SuppressionAmount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84263);
		
		struct
		{
			class AReadyOrNotCharacter*                        Character;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              SuppressionAmount;
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (SuppressionAmount != nullptr)
			*SuppressionAmount = params.SuppressionAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_SuppressionNearBone.AC_SuppressionNearBone_C.Score
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAC_SuppressionNearBone_C::Score(const struct FAIActionDecisionContext& Context, bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84262);
		
		struct
		{
			struct FAIActionDecisionContext                    Context;
			bool                                               bSuccess;
			unsigned char                                      UnknownData_0001[0x3];
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
	 * 		Name   -> PredefinedFunction UAC_SuppressionNearBone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAC_SuppressionNearBone_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84261);
		return ptr;
	}

}


