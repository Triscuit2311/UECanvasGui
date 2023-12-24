#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass W_RadioContainer.W_RadioContainer_C
// (None)

class UClass* UW_RadioContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RadioContainer_C");

	return Clss;
}


// W_RadioContainer_C W_RadioContainer.Default__W_RadioContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RadioContainer_C* UW_RadioContainer_C::GetDefaultObj()
{
	static class UW_RadioContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RadioContainer_C*>(UW_RadioContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RadioContainer.W_RadioContainer_C.OnNewChildSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IIRadioWidget_C>NewSelectedChild                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Equals_Result                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RadioContainer_C::OnNewChildSelected(TScriptInterface<class IIRadioWidget_C> NewSelectedChild, bool CallFunc_Equals_Result, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadioContainer_C", "OnNewChildSelected");

	Params::UW_RadioContainer_C_OnNewChildSelected_Params Parms{};

	Parms.NewSelectedChild = NewSelectedChild;
	Parms.CallFunc_Equals_Result = CallFunc_Equals_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RadioContainer.W_RadioContainer_C.RegisterRadioChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IIRadioWidget_C>NewChild                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RadioContainer_C::RegisterRadioChild(TScriptInterface<class IIRadioWidget_C> NewChild, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadioContainer_C", "RegisterRadioChild");

	Params::UW_RadioContainer_C_RegisterRadioChild_Params Parms{};

	Parms.NewChild = NewChild;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


