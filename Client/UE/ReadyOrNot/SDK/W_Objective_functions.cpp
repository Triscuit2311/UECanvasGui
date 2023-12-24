#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Objective.W_Objective_C
// (None)

class UClass* UW_Objective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Objective_C");

	return Clss;
}


// W_Objective_C W_Objective.Default__W_Objective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Objective_C* UW_Objective_C::GetDefaultObj()
{
	static class UW_Objective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Objective_C*>(UW_Objective_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Objective.W_Objective_C.UpdateDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SubObjective_Entry_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SubObjective_Entry_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SubObjective_Entry_C*     CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EObjectiveStatus        CallFunc_GetObjectiveStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Objective_C::UpdateDescription(class UW_SubObjective_Entry_C* CallFunc_Create_ReturnValue, class UW_SubObjective_Entry_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UW_SubObjective_Entry_C* CallFunc_Create_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Objective_C", "UpdateDescription");

	Params::UW_Objective_C_UpdateDescription_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_2 = CallFunc_AddChildToVerticalBox_ReturnValue_2;
	Parms.CallFunc_GetObjectiveStatus_ReturnValue = CallFunc_GetObjectiveStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Objective.W_Objective_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Objective_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Objective_C", "PreConstruct");

	Params::UW_Objective_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Objective.W_Objective_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Objective_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Objective_C", "Tick");

	Params::UW_Objective_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Objective.W_Objective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Objective_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Objective_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Objective.W_Objective_C.ExecuteUbergraph_W_Objective
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EObjectiveStatus        CallFunc_GetObjectiveStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Objective_C::ExecuteUbergraph_W_Objective(int32 EntryPoint, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Objective_C", "ExecuteUbergraph_W_Objective");

	Params::UW_Objective_C_ExecuteUbergraph_W_Objective_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetObjectiveStatus_ReturnValue = CallFunc_GetObjectiveStatus_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


