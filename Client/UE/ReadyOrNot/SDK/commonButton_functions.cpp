#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass commonButton.CommonButton_C
// (None)

class UClass* UCommonButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButton_C");

	return Clss;
}


// CommonButton_C commonButton.Default__CommonButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonButton_C* UCommonButton_C::GetDefaultObj()
{
	static class UCommonButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButton_C*>(UCommonButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function commonButton.CommonButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButton_C", "PreConstruct");

	Params::UCommonButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function commonButton.CommonButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCommonButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function commonButton.CommonButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButton_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function commonButton.CommonButton_C.ExecuteUbergraph_CommonButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonTextStyle>CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCommonButton_C::ExecuteUbergraph_CommonButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButton_C", "ExecuteUbergraph_CommonButton");

	Params::UCommonButton_C_ExecuteUbergraph_CommonButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


