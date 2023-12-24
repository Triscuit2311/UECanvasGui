#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Customization_Slot.W_Customization_Slot_C
// (None)

class UClass* UW_Customization_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Customization_Slot_C");

	return Clss;
}


// W_Customization_Slot_C W_Customization_Slot.Default__W_Customization_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Customization_Slot_C* UW_Customization_Slot_C::GetDefaultObj()
{
	static class UW_Customization_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Customization_Slot_C*>(UW_Customization_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Customization_Slot.W_Customization_Slot_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "GetFocusTarget");

	Params::UW_Customization_Slot_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Customization_Slot.W_Customization_Slot_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BackPage");

	Params::UW_Customization_Slot_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetHoveredState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::SetHoveredState(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetHoveredState");

	Params::UW_Customization_Slot_C_SetHoveredState_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.GetTagColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UW_Customization_Slot_C::GetTagColor(const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "GetTagColor");

	Params::UW_Customization_Slot_C_GetTagColor_Params Parms{};

	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization_Slot.W_Customization_Slot_C.UpdateNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TextIsNotEmpty_NotEmpty                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::UpdateNameText(bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "UpdateNameText");

	Params::UW_Customization_Slot_C_UpdateNameText_Params Parms{};

	Parms.CallFunc_TextIsNotEmpty_NotEmpty = CallFunc_TextIsNotEmpty_NotEmpty;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.UpdateVariantCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UW_Customization_Slot_C::UpdateVariantCount(bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "UpdateVariantCount");

	Params::UW_Customization_Slot_C_UpdateVariantCount_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetCustomIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  IconTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MatchSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CustomSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ColorAndOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::SetCustomIconTexture(class UTexture2D* IconTexture, bool MatchSize, const struct FVector2D& CustomSize, const struct FLinearColor& ColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetCustomIconTexture");

	Params::UW_Customization_Slot_C_SetCustomIconTexture_Params Parms{};

	Parms.IconTexture = IconTexture;
	Parms.MatchSize = MatchSize;
	Parms.CustomSize = CustomSize;
	Parms.ColorAndOpacity = ColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.ShowMissingData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoData                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LineThickness                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWidthByShape_Width                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHeightByShape_Height                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWidthByShape_Width_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHeightByShape_Height_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::ShowMissingData(bool NoData, float LineThickness, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_GetWidthByShape_Width, float CallFunc_GetHeightByShape_Height, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWidthByShape_Width_1, float CallFunc_GetHeightByShape_Height_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "ShowMissingData");

	Params::UW_Customization_Slot_C_ShowMissingData_Params Parms{};

	Parms.NoData = NoData;
	Parms.LineThickness = LineThickness;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWidthByShape_Width = CallFunc_GetWidthByShape_Width;
	Parms.CallFunc_GetHeightByShape_Height = CallFunc_GetHeightByShape_Height;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWidthByShape_Width_1 = CallFunc_GetWidthByShape_Width_1;
	Parms.CallFunc_GetHeightByShape_Height_1 = CallFunc_GetHeightByShape_Height_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::SetLocked(bool IsLocked, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetLocked");

	Params::UW_Customization_Slot_C_SetLocked_Params Parms{};

	Parms.IsLocked = IsLocked;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEquipped                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::SetEquipped(bool bEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetEquipped");

	Params::UW_Customization_Slot_C_SetEquipped_Params Parms{};

	Parms.bEquipped = bEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   IconTexture                                                      (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// bool                               CallFunc_NotEqual_SoftObjectReference_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_SoftObjectReference_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::UpdateIcon(TSoftObjectPtr<class UTexture2D> IconTexture, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "UpdateIcon");

	Params::UW_Customization_Slot_C_UpdateIcon_Params Parms{};

	Parms.IconTexture = IconTexture;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_NotEqual_SoftObjectReference_ReturnValue = CallFunc_NotEqual_SoftObjectReference_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_NotEqual_SoftObjectReference_ReturnValue_1 = CallFunc_NotEqual_SoftObjectReference_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetupColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_2                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_3                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_4                             (None)

void UW_Customization_Slot_C::SetupColors(const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetupColors");

	Params::UW_Customization_Slot_C_SetupColors_Params Parms{};

	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_GetColorByName_LinearColor_2 = CallFunc_GetColorByName_LinearColor_2;
	Parms.CallFunc_GetColorByName_SlateColor_2 = CallFunc_GetColorByName_SlateColor_2;
	Parms.CallFunc_GetColorByName_LinearColor_3 = CallFunc_GetColorByName_LinearColor_3;
	Parms.CallFunc_GetColorByName_SlateColor_3 = CallFunc_GetColorByName_SlateColor_3;
	Parms.CallFunc_GetColorByName_LinearColor_4 = CallFunc_GetColorByName_LinearColor_4;
	Parms.CallFunc_GetColorByName_SlateColor_4 = CallFunc_GetColorByName_SlateColor_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "UpdateStyle");

	Params::UW_Customization_Slot_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetTagColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (ConstParm)

void UW_Customization_Slot_C::SetVisualState(bool Hovered, bool Pressed, bool Equipped, bool Highlighted, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& CallFunc_GetTagColor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable_2, const struct FSlateBrush& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetVisualState");

	Params::UW_Customization_Slot_C_SetVisualState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Equipped = Equipped;
	Parms.Highlighted = Highlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTagColor_ReturnValue = CallFunc_GetTagColor_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BindDoubleClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::BindDoubleClick(class UW_Button_C* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BindDoubleClick");

	Params::UW_Customization_Slot_C_BindDoubleClick_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BindClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::BindClick(class UW_Button_C* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BindClick");

	Params::UW_Customization_Slot_C_BindClick_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BindUnhovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::BindUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BindUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BindPressedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::BindPressedState(bool CallFunc_IsPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BindPressedState");

	Params::UW_Customization_Slot_C_BindPressedState_Params Parms{};

	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BindSelectedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BindSelectedState");

	Params::UW_Customization_Slot_C_BindSelectedState_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BindHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::BindHovered(class UW_Button_C* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BindHovered");

	Params::UW_Customization_Slot_C_BindHovered_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.UnbindFromButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UW_Customization_Slot_C::UnbindFromButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "UnbindFromButton");

	Params::UW_Customization_Slot_C_UnbindFromButton_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BindToButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BindClicks                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UW_Customization_Slot_C::BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BindToButton");

	Params::UW_Customization_Slot_C_BindToButton_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.BindClicks = BindClicks;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetLabelText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Customization_Slot_C::SetLabelText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetLabelText");

	Params::UW_Customization_Slot_C_SetLabelText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.GetWidthByShape
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::GetWidthByShape(float* Width, enum class E_BoxShape Temp_byte_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "GetWidthByShape");

	Params::UW_Customization_Slot_C_GetWidthByShape_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Width != nullptr)
		*Width = Parms.Width;

}


// Function W_Customization_Slot.W_Customization_Slot_C.GetHeightByShape
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::GetHeightByShape(float* Height, enum class E_BoxShape Temp_byte_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "GetHeightByShape");

	Params::UW_Customization_Slot_C_GetHeightByShape_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function W_Customization_Slot.W_Customization_Slot_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "Reveal");

	Params::UW_Customization_Slot_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "Hide");

	Params::UW_Customization_Slot_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetInputMode");

	Params::UW_Customization_Slot_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "ChangePage");

	Params::UW_Customization_Slot_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "PreConstruct");

	Params::UW_Customization_Slot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutCustomization*       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::SetItem(class ULoadoutCustomization* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetItem");

	Params::UW_Customization_Slot_C_SetItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UW_Customization_Slot_C_BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_Customization_Slot_C_BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "InputMethodChanged");

	Params::UW_Customization_Slot_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetToggleable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggleable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::SetToggleable(bool Toggleable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetToggleable");

	Params::UW_Customization_Slot_C_SetToggleable_Params Parms{};

	Parms.Toggleable = Toggleable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.SetHighlighted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Slot_C::SetHighlighted(bool Highlight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "SetHighlighted");

	Params::UW_Customization_Slot_C_SetHighlighted_Params Parms{};

	Parms.Highlight = Highlight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_5_OnRightMousePressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_5_OnRightMousePressed__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_5_OnRightMousePressed__DelegateSignature");

	Params::UW_Customization_Slot_C_BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_5_OnRightMousePressed__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_6_OnRightMouseReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_6_OnRightMouseReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_6_OnRightMouseReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.ExecuteUbergraph_W_Customization_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutCustomization*       K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWidthByShape_Width                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHeightByShape_Height                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomizationCategoryText_Category_Text              (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Toggleable                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Highlight                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::ExecuteUbergraph_W_Customization_Slot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class ULoadoutCustomization* K2Node_CustomEvent_Item, float CallFunc_GetWidthByShape_Width, float CallFunc_GetHeightByShape_Height, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetCustomizationCategoryText_Category_Text, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Toggleable, bool K2Node_CustomEvent_Highlight, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "ExecuteUbergraph_W_Customization_Slot");

	Params::UW_Customization_Slot_C_ExecuteUbergraph_W_Customization_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_GetWidthByShape_Width = CallFunc_GetWidthByShape_Width;
	Parms.CallFunc_GetHeightByShape_Height = CallFunc_GetHeightByShape_Height;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetCustomizationCategoryText_Category_Text = CallFunc_GetCustomizationCategoryText_Category_Text;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Toggleable = K2Node_CustomEvent_Toggleable;
	Parms.K2Node_CustomEvent_Highlight = K2Node_CustomEvent_Highlight;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotRightClickReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::OnSlotRightClickReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "OnSlotRightClickReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotRightClickPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::OnSlotRightClickPressed__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "OnSlotRightClickPressed__DelegateSignature");

	Params::UW_Customization_Slot_C_OnSlotRightClickPressed__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::OnSlotClicked__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "OnSlotClicked__DelegateSignature");

	Params::UW_Customization_Slot_C_OnSlotClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Slot_C::OnSlotUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "OnSlotUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Slot.W_Customization_Slot_C.OnSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Slot_C::OnSlotHovered__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Slot_C", "OnSlotHovered__DelegateSignature");

	Params::UW_Customization_Slot_C_OnSlotHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


