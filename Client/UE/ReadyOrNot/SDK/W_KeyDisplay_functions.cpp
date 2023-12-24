#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_KeyDisplay.W_KeyDisplay_C
// (None)

class UClass* UW_KeyDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_KeyDisplay_C");

	return Clss;
}


// W_KeyDisplay_C W_KeyDisplay.Default__W_KeyDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_KeyDisplay_C* UW_KeyDisplay_C::GetDefaultObj()
{
	static class UW_KeyDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_KeyDisplay_C*>(UW_KeyDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_KeyDisplay.W_KeyDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_KeyDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_KeyDisplay_C", "PreConstruct");

	Params::UW_KeyDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_KeyDisplay.W_KeyDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_KeyDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_KeyDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_KeyDisplay.W_KeyDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_KeyDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_KeyDisplay_C", "Tick");

	Params::UW_KeyDisplay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_KeyDisplay.W_KeyDisplay_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_KeyDisplay_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_KeyDisplay_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_KeyDisplay.W_KeyDisplay_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_KeyDisplay_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_KeyDisplay_C", "Reconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_KeyDisplay.W_KeyDisplay_C.ExecuteUbergraph_W_KeyDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EActionMappingFilter>K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<enum class EAxisMappingFilter>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionMappingStruct        K2Node_MakeStruct_ActionMappingStruct                            (None)
// struct FAxisMappingStruct          K2Node_MakeStruct_AxisMappingStruct                              (None)
// bool                               CallFunc_GetAllActionMappings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FActionMappingStruct>CallFunc_GetAllActionMappings_ActionMappings                     (ReferenceParm)
// bool                               CallFunc_GetAllAxisMappings_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAxisMappingStruct>  CallFunc_GetAllAxisMappings_AxisMappings                         (ReferenceParm)
// struct FActionMappingStruct        CallFunc_Array_Get_Item                                          (None)
// struct FAxisMappingStruct          CallFunc_Array_Get_Item_1                                        (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_1                        (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_KeyDisplay_C::ExecuteUbergraph_W_KeyDisplay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<enum class EActionMappingFilter>& K2Node_MakeArray_Array, TArray<enum class EAxisMappingFilter>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct, bool CallFunc_GetAllActionMappings_ReturnValue, TArray<struct FActionMappingStruct>& CallFunc_GetAllActionMappings_ActionMappings, bool CallFunc_GetAllAxisMappings_ReturnValue, TArray<struct FAxisMappingStruct>& CallFunc_GetAllAxisMappings_AxisMappings, const struct FActionMappingStruct& CallFunc_Array_Get_Item, const struct FAxisMappingStruct& CallFunc_Array_Get_Item_1, class FText CallFunc_Key_GetDisplayName_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_KeyDisplay_C", "ExecuteUbergraph_W_KeyDisplay");

	Params::UW_KeyDisplay_C_ExecuteUbergraph_W_KeyDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_MakeStruct_ActionMappingStruct = K2Node_MakeStruct_ActionMappingStruct;
	Parms.K2Node_MakeStruct_AxisMappingStruct = K2Node_MakeStruct_AxisMappingStruct;
	Parms.CallFunc_GetAllActionMappings_ReturnValue = CallFunc_GetAllActionMappings_ReturnValue;
	Parms.CallFunc_GetAllActionMappings_ActionMappings = CallFunc_GetAllActionMappings_ActionMappings;
	Parms.CallFunc_GetAllAxisMappings_ReturnValue = CallFunc_GetAllAxisMappings_ReturnValue;
	Parms.CallFunc_GetAllAxisMappings_AxisMappings = CallFunc_GetAllAxisMappings_AxisMappings;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue_1 = CallFunc_Key_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


