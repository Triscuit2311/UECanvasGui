#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CommandWheel.W_CommandWheel_C
// (None)

class UClass* UW_CommandWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CommandWheel_C");

	return Clss;
}


// W_CommandWheel_C W_CommandWheel.Default__W_CommandWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CommandWheel_C* UW_CommandWheel_C::GetDefaultObj()
{
	static class UW_CommandWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CommandWheel_C*>(UW_CommandWheel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CommandWheel.W_CommandWheel_C.UpdateWheelSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InVector                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CommandWheel_C::UpdateWheelSelection(class UObject* Object, const struct FVector& InVector, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "UpdateWheelSelection");

	Params::UW_CommandWheel_C_UpdateWheelSelection_Params Parms{};

	Parms.Object = Object;
	Parms.InVector = InVector;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.RedrawCommandWheel
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_CommandWheel_C::RedrawCommandWheel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "RedrawCommandWheel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommandWheel.W_CommandWheel_C.SetInnerSegments
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetInnerSegments(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetInnerSegments");

	Params::UW_CommandWheel_C_SetInnerSegments_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetOuterSegments
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetOuterSegments(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetOuterSegments");

	Params::UW_CommandWheel_C_SetOuterSegments_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetInnerWheelDirection
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetInnerWheelDirection(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetInnerWheelDirection");

	Params::UW_CommandWheel_C_SetInnerWheelDirection_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetOuterWheelDirection
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetOuterWheelDirection(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetOuterWheelDirection");

	Params::UW_CommandWheel_C_SetOuterWheelDirection_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetInnerwheelOpacity
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetInnerwheelOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetInnerwheelOpacity");

	Params::UW_CommandWheel_C_SetInnerwheelOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.ExecuteUbergraph_W_CommandWheel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamType               CallFunc_GetActiveTeamType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// int32                              K2Node_Event_num_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_num                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_direction_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_opacity                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::ExecuteUbergraph_W_CommandWheel(int32 EntryPoint, enum class ETeamType CallFunc_GetActiveTeamType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, int32 K2Node_Event_num_1, int32 K2Node_Event_num, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& K2Node_Event_direction_1, const struct FVector& K2Node_Event_direction, float K2Node_Event_opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "ExecuteUbergraph_W_CommandWheel");

	Params::UW_CommandWheel_C_ExecuteUbergraph_W_CommandWheel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveTeamType_ReturnValue = CallFunc_GetActiveTeamType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_Event_num_1 = K2Node_Event_num_1;
	Parms.K2Node_Event_num = K2Node_Event_num;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_1 = K2Node_DynamicCast_AsUMG_Radial_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_direction_1 = K2Node_Event_direction_1;
	Parms.K2Node_Event_direction = K2Node_Event_direction;
	Parms.K2Node_Event_opacity = K2Node_Event_opacity;

	UObject::ProcessEvent(Func, &Parms);

}

}


