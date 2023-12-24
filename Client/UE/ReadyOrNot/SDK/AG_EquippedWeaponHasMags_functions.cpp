#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_EquippedWeaponHasMags.AG_EquippedWeaponHasMags_C
// (None)

class UClass* UAG_EquippedWeaponHasMags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_EquippedWeaponHasMags_C");

	return Clss;
}


// AG_EquippedWeaponHasMags_C AG_EquippedWeaponHasMags.Default__AG_EquippedWeaponHasMags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_EquippedWeaponHasMags_C* UAG_EquippedWeaponHasMags_C::GetDefaultObj()
{
	static class UAG_EquippedWeaponHasMags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_EquippedWeaponHasMags_C*>(UAG_EquippedWeaponHasMags_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_EquippedWeaponHasMags.AG_EquippedWeaponHasMags_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_EquippedWeaponHasMags_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ABaseMagazineWeapon* CallFunc_GetEquippedWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_EquippedWeaponHasMags_C", "CanOpen");

	Params::UAG_EquippedWeaponHasMags_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


