#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CommonButtonFMOD.CommonButtonFMOD_C
// (None)

class UClass* UCommonButtonFMOD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonFMOD_C");

	return Clss;
}


// CommonButtonFMOD_C CommonButtonFMOD.Default__CommonButtonFMOD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonButtonFMOD_C* UCommonButtonFMOD_C::GetDefaultObj()
{
	static class UCommonButtonFMOD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonFMOD_C*>(UCommonButtonFMOD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonButtonFMOD.CommonButtonFMOD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonButtonFMOD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonFMOD_C", "PreConstruct");

	Params::UCommonButtonFMOD_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonButtonFMOD.CommonButtonFMOD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCommonButtonFMOD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonFMOD_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonButtonFMOD.CommonButtonFMOD_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonFMOD_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonFMOD_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonButtonFMOD.CommonButtonFMOD_C.ExecuteUbergraph_CommonButtonFMOD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCommonButtonFMOD_C::ExecuteUbergraph_CommonButtonFMOD(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonFMOD_C", "ExecuteUbergraph_CommonButtonFMOD");

	Params::UCommonButtonFMOD_C_ExecuteUbergraph_CommonButtonFMOD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


