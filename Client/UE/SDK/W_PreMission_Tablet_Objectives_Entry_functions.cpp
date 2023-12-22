#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C
// (None)

class UClass* UW_PreMission_Tablet_Objectives_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Objectives_Entry_C");

	return Clss;
}


// W_PreMission_Tablet_Objectives_Entry_C W_PreMission_Tablet_Objectives_Entry.Default__W_PreMission_Tablet_Objectives_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Objectives_Entry_C* UW_PreMission_Tablet_Objectives_Entry_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Objectives_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Objectives_Entry_C*>(UW_PreMission_Tablet_Objectives_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.UpdateObjectiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EObjectiveStatus        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EObjectiveStatus        CallFunc_GetObjectiveStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EObjectiveStatus        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Objectives_Entry_C::UpdateObjectiveState(enum class EObjectiveStatus Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool CallFunc_IsValid_ReturnValue, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, enum class EObjectiveStatus Temp_byte_Variable_1, enum class ECheckBoxState Temp_byte_Variable_2, enum class ECheckBoxState Temp_byte_Variable_3, enum class ECheckBoxState Temp_byte_Variable_4, enum class ECheckBoxState K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Objectives_Entry_C", "UpdateObjectiveState");

	Params::UW_PreMission_Tablet_Objectives_Entry_C_UpdateObjectiveState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectiveStatus_ReturnValue = CallFunc_GetObjectiveStatus_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.UpdateObjectiveInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Objectives_Entry_C::UpdateObjectiveInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Objectives_Entry_C", "UpdateObjectiveInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Objectives_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Objectives_Entry_C", "PreConstruct");

	Params::UW_PreMission_Tablet_Objectives_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Objectives_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Objectives_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Objectives_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Objectives_Entry_C", "Tick");

	Params::UW_PreMission_Tablet_Objectives_Entry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.OnObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AObjective*                  Objective                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Objectives_Entry_C::OnObjectiveUpdated(class AObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Objectives_Entry_C", "OnObjectiveUpdated");

	Params::UW_PreMission_Tablet_Objectives_Entry_C_OnObjectiveUpdated_Params Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EObjectiveStatus        CallFunc_GetObjectiveStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AObjective*                  CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedDescription_ReturnValue                     (None)
// class FText                        CallFunc_GetFormattedName_ReturnValue                            (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetFormattedDescription_ReturnValue_1                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetFormattedName_ReturnValue_1                          (None)
// class AObjective*                  K2Node_CustomEvent_Objective                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ADefuseBombThreats*          K2Node_DynamicCast_AsDefuse_Bomb_Threats                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Objectives_Entry_C::ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, class AObjective* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedDescription_ReturnValue, class FText CallFunc_GetFormattedName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class FText CallFunc_GetFormattedDescription_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetFormattedName_ReturnValue_1, class AObjective* K2Node_CustomEvent_Objective, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ADefuseBombThreats* K2Node_DynamicCast_AsDefuse_Bomb_Threats, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Objectives_Entry_C", "ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry");

	Params::UW_PreMission_Tablet_Objectives_Entry_C_ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetObjectiveStatus_ReturnValue = CallFunc_GetObjectiveStatus_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetFormattedDescription_ReturnValue = CallFunc_GetFormattedDescription_ReturnValue;
	Parms.CallFunc_GetFormattedName_ReturnValue = CallFunc_GetFormattedName_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetFormattedDescription_ReturnValue_1 = CallFunc_GetFormattedDescription_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFormattedName_ReturnValue_1 = CallFunc_GetFormattedName_ReturnValue_1;
	Parms.K2Node_CustomEvent_Objective = K2Node_CustomEvent_Objective;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsDefuse_Bomb_Threats = K2Node_DynamicCast_AsDefuse_Bomb_Threats;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


