#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BulletImpactDebug.BulletImpactDebug_C
// (None)

class UClass* UBulletImpactDebug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletImpactDebug_C");

	return Clss;
}


// BulletImpactDebug_C BulletImpactDebug.Default__BulletImpactDebug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletImpactDebug_C* UBulletImpactDebug_C::GetDefaultObj()
{
	static class UBulletImpactDebug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletImpactDebug_C*>(UBulletImpactDebug_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BulletImpactDebug.BulletImpactDebug_C.AddDebugText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBulletImpactDebugText_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBulletImpactDebug_C::AddDebugText(const class FString& NewText, class UBulletImpactDebugText_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BulletImpactDebug_C", "AddDebugText");

	Params::UBulletImpactDebug_C_AddDebugText_Params Parms{};

	Parms.NewText = NewText;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BulletImpactDebug.BulletImpactDebug_C.SetDebugTitle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewTitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBulletImpactDebug_C::SetDebugTitle(const class FString& NewTitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BulletImpactDebug_C", "SetDebugTitle");

	Params::UBulletImpactDebug_C_SetDebugTitle_Params Parms{};

	Parms.NewTitle = NewTitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BulletImpactDebug.BulletImpactDebug_C.SetDebugText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBulletImpactDebug_C::SetDebugText(int32 ID, const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BulletImpactDebug_C", "SetDebugText");

	Params::UBulletImpactDebug_C_SetDebugText_Params Parms{};

	Parms.ID = ID;
	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BulletImpactDebug.BulletImpactDebug_C.ExecuteUbergraph_BulletImpactDebug
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_NewTitle                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              K2Node_Event_ID                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_NewText                                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// TArray<class UBulletImpactDebugText_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBulletImpactDebugText_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBulletImpactDebug_C::ExecuteUbergraph_BulletImpactDebug(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& K2Node_Event_NewTitle, class FText CallFunc_Conv_StringToText_ReturnValue, int32 K2Node_Event_ID, const class FString& K2Node_Event_NewText, class FText CallFunc_Conv_StringToText_ReturnValue_1, TArray<class UBulletImpactDebugText_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UBulletImpactDebugText_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BulletImpactDebug_C", "ExecuteUbergraph_BulletImpactDebug");

	Params::UBulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_NewTitle = K2Node_Event_NewTitle;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_Event_NewText = K2Node_Event_NewText;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


