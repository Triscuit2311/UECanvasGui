#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WasShotInHead.PPR_WasShotInHead_C
// (None)

class UClass* UPPR_WasShotInHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WasShotInHead_C");

	return Clss;
}


// PPR_WasShotInHead_C PPR_WasShotInHead.Default__PPR_WasShotInHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WasShotInHead_C* UPPR_WasShotInHead_C::GetDefaultObj()
{
	static class UPPR_WasShotInHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WasShotInHead_C*>(UPPR_WasShotInHead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WasShotInHead.PPR_WasShotInHead_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLimbHit_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WasShotInHead_C::EnablePostProcessEffect(bool CallFunc_IsLimbHit_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WasShotInHead_C", "EnablePostProcessEffect");

	Params::UPPR_WasShotInHead_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_IsLimbHit_ReturnValue = CallFunc_IsLimbHit_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


