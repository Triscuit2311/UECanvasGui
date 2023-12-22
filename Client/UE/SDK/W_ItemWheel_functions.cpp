#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemWheel.W_ItemWheel_C
// (None)

class UClass* UW_ItemWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemWheel_C");

	return Clss;
}


// W_ItemWheel_C W_ItemWheel.Default__W_ItemWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemWheel_C* UW_ItemWheel_C::GetDefaultObj()
{
	static class UW_ItemWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemWheel_C*>(UW_ItemWheel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemWheel.W_ItemWheel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemWheel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemWheel_C", "Tick");

	Params::UW_ItemWheel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemWheel.W_ItemWheel_C.OnNumberOfSegmentsChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumSegments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemWheel_C::OnNumberOfSegmentsChange(int32 NumSegments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemWheel_C", "OnNumberOfSegmentsChange");

	Params::UW_ItemWheel_C_OnNumberOfSegmentsChange_Params Parms{};

	Parms.NumSegments = NumSegments;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemWheel.W_ItemWheel_C.ExecuteUbergraph_W_ItemWheel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetInnerWheelPosition_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetOuterWheelPosition_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NumSegments                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemWheel_C::ExecuteUbergraph_W_ItemWheel(int32 EntryPoint, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector& CallFunc_GetInnerWheelPosition_ReturnValue, const struct FVector& CallFunc_GetOuterWheelPosition_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_Event_NumSegments, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemWheel_C", "ExecuteUbergraph_W_ItemWheel");

	Params::UW_ItemWheel_C_ExecuteUbergraph_W_ItemWheel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetInnerWheelPosition_ReturnValue = CallFunc_GetInnerWheelPosition_ReturnValue;
	Parms.CallFunc_GetOuterWheelPosition_ReturnValue = CallFunc_GetOuterWheelPosition_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_1 = CallFunc_Conv_VectorToVector2D_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_1 = K2Node_DynamicCast_AsUMG_Radial_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_NumSegments = K2Node_Event_NumSegments;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_2 = K2Node_DynamicCast_AsUMG_Radial_Menu_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


