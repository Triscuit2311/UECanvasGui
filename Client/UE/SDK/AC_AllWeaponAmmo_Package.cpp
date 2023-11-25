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
	 * 		Name   -> Function AC_AllWeaponAmmo.AC_AllWeaponAmmo_C.GetTotalRemainingAmmoFromAllMags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UAC_AllWeaponAmmo_C::GetTotalRemainingAmmoFromAllMags(class ABaseMagazineWeapon* Weapon, float* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84303);
		
		struct
		{
			class ABaseMagazineWeapon*                         Weapon;
			float                                              ReturnValue;
		} params;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_AllWeaponAmmo.AC_AllWeaponAmmo_C.Score
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIActionDecisionContext                    Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAC_AllWeaponAmmo_C::Score(const struct FAIActionDecisionContext& Context, bool* bSuccess)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(84302);
		
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
	 * 		Name   -> PredefinedFunction UAC_AllWeaponAmmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAC_AllWeaponAmmo_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84301);
		return ptr;
	}

}


