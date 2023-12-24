#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Customization_VariantCarousel.W_Customization_VariantCarousel_C
// (None)

class UClass* UW_Customization_VariantCarousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Customization_VariantCarousel_C");

	return Clss;
}


// W_Customization_VariantCarousel_C W_Customization_VariantCarousel.Default__W_Customization_VariantCarousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Customization_VariantCarousel_C* UW_Customization_VariantCarousel_C::GetDefaultObj()
{
	static class UW_Customization_VariantCarousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Customization_VariantCarousel_C*>(UW_Customization_VariantCarousel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "GetFocusTarget");

	Params::UW_Customization_VariantCarousel_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "BackPage");

	Params::UW_Customization_VariantCarousel_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.HighlightSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     NewHighlight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::HighlightSlot(class UW_Customization_Slot_C* NewHighlight, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "HighlightSlot");

	Params::UW_Customization_VariantCarousel_C_HighlightSlot_Params Parms{};

	Parms.NewHighlight = NewHighlight;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.ClearVariants
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_VariantCarousel_C::ClearVariants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "ClearVariants");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.AddVariantToMaps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::AddVariantToMaps(class UW_Customization_Slot_C* Slot, class FName Temp_name_Variable, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "AddVariantToMaps");

	Params::UW_Customization_VariantCarousel_C_AddVariantToMaps_Params Parms{};

	Parms.Slot = Slot;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.CreateSlotWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutCustomization*       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     NewSlot                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     NewSlotWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UW_Customization_VariantCarousel_C::CreateSlotWidget(class ULoadoutCustomization* Item, class UW_Customization_Slot_C** NewSlot, class UW_Customization_Slot_C* NewSlotWidget, class UW_Customization_Slot_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "CreateSlotWidget");

	Params::UW_Customization_VariantCarousel_C_CreateSlotWidget_Params Parms{};

	Parms.Item = Item;
	Parms.NewSlotWidget = NewSlotWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

	if (NewSlot != nullptr)
		*NewSlot = Parms.NewSlot;

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.GetInputIconVisibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::GetInputIconVisibility(enum class ESlateVisibility* Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "GetInputIconVisibility");

	Params::UW_Customization_VariantCarousel_C_GetInputIconVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.SetIconSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::SetIconSize(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "SetIconSize");

	Params::UW_Customization_VariantCarousel_C_SetIconSize_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.GetActionIconSizeRatio
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonActionWidget*         CommonActionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconRatio                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetIcon_ReturnValue                                     (None)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::GetActionIconSizeRatio(class UCommonActionWidget* CommonActionWidget, float* IconRatio, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "GetActionIconSizeRatio");

	Params::UW_Customization_VariantCarousel_C_GetActionIconSizeRatio_Params Parms{};

	Parms.CommonActionWidget = CommonActionWidget;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IconRatio != nullptr)
		*IconRatio = Parms.IconRatio;

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.UpdateVariantListEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     NewEquippedSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::UpdateVariantListEquipped(class UW_Customization_Slot_C* NewEquippedSlot, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "UpdateVariantListEquipped");

	Params::UW_Customization_VariantCarousel_C_UpdateVariantListEquipped_Params Parms{};

	Parms.NewEquippedSlot = NewEquippedSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.PopulateVariants
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutCustomization*       ParentItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationType      Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       EquippedVariant                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     DefaultWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     NewWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>Variants                                                         (Edit, BlueprintVisible)
// class UW_Customization_Slot_C*     NewSlot                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       NewItem                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Slot_C*     CallFunc_CreateSlotWidget_NewSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     CallFunc_CreateSlotWidget_NewSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::PopulateVariants(class ULoadoutCustomization* ParentItem, enum class ECustomizationType Category, class ULoadoutCustomization* EquippedVariant, class UW_Customization_Slot_C* DefaultWidget, class UW_Customization_Slot_C* NewWidget, const TArray<class ULoadoutCustomization*>& Variants, class UW_Customization_Slot_C* NewSlot, class ULoadoutCustomization* NewItem, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_Customization_Slot_C* CallFunc_CreateSlotWidget_NewSlot, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UW_Customization_Slot_C* CallFunc_CreateSlotWidget_NewSlot_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class ULoadoutCustomization* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "PopulateVariants");

	Params::UW_Customization_VariantCarousel_C_PopulateVariants_Params Parms{};

	Parms.ParentItem = ParentItem;
	Parms.Category = Category;
	Parms.EquippedVariant = EquippedVariant;
	Parms.DefaultWidget = DefaultWidget;
	Parms.NewWidget = NewWidget;
	Parms.Variants = Variants;
	Parms.NewSlot = NewSlot;
	Parms.NewItem = NewItem;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_CreateSlotWidget_NewSlot = CallFunc_CreateSlotWidget_NewSlot;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_CreateSlotWidget_NewSlot_1 = CallFunc_CreateSlotWidget_NewSlot_1;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.Finished_CBDC193A483107451E79AFB7D86600BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_VariantCarousel_C::Finished_CBDC193A483107451E79AFB7D86600BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "Finished_CBDC193A483107451E79AFB7D86600BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.Finished_5D3A15DF41AE559F28640EA8D797D0E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_VariantCarousel_C::Finished_5D3A15DF41AE559F28640EA8D797D0E7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "Finished_5D3A15DF41AE559F28640EA8D797D0E7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_VariantCarousel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "InputMethodChanged");

	Params::UW_Customization_VariantCarousel_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.NextNavigated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::NextNavigated(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "NextNavigated");

	Params::UW_Customization_VariantCarousel_C_NextNavigated_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.VariantUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_VariantCarousel_C::VariantUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "VariantUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.PrevNavigated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::PrevNavigated(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "PrevNavigated");

	Params::UW_Customization_VariantCarousel_C_PrevNavigated_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.VariantHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::VariantHovered(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "VariantHovered");

	Params::UW_Customization_VariantCarousel_C_VariantHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::OptionSelected(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OptionSelected");

	Params::UW_Customization_VariantCarousel_C_OptionSelected_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.VariantClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::VariantClicked(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "VariantClicked");

	Params::UW_Customization_VariantCarousel_C_VariantClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "Reveal");

	Params::UW_Customization_VariantCarousel_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "Hide");

	Params::UW_Customization_VariantCarousel_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "ChangePage");

	Params::UW_Customization_VariantCarousel_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "SetInputMode");

	Params::UW_Customization_VariantCarousel_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.HideList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RefreshList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::HideList(bool RefreshList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "HideList");

	Params::UW_Customization_VariantCarousel_C_HideList_Params Parms{};

	Parms.RefreshList = RefreshList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.NavigateNextTerminated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Terminated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::NavigateNextTerminated(bool Terminated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "NavigateNextTerminated");

	Params::UW_Customization_VariantCarousel_C_NavigateNextTerminated_Params Parms{};

	Parms.Terminated = Terminated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.NavigatePrevTerminated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Terminated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::NavigatePrevTerminated(bool Terminated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "NavigatePrevTerminated");

	Params::UW_Customization_VariantCarousel_C_NavigatePrevTerminated_Params Parms{};

	Parms.Terminated = Terminated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.ExecuteUbergraph_W_Customization_VariantCarousel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetActionIconSizeRatio_IconRatio                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActionIconSizeRatio_IconRatio_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetInputIconVisibility_Visibility                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_OptionID_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_OptionID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Slot_C*     CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_RefreshList                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_Terminated_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Terminated                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::ExecuteUbergraph_W_Customization_VariantCarousel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetActionIconSizeRatio_IconRatio, float CallFunc_GetActionIconSizeRatio_IconRatio_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetInputIconVisibility_Visibility, bool CallFunc_IsVisible_ReturnValue, class FName K2Node_CustomEvent_OptionID_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName K2Node_CustomEvent_OptionID, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_Customization_Slot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Customization_Slot_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName K2Node_Event_OptionNameID, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot, class UW_Customization_Slot_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_RefreshList, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_Terminated_1, bool K2Node_Event_Terminated, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "ExecuteUbergraph_W_Customization_VariantCarousel");

	Params::UW_Customization_VariantCarousel_C_ExecuteUbergraph_W_Customization_VariantCarousel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionIconSizeRatio_IconRatio = CallFunc_GetActionIconSizeRatio_IconRatio;
	Parms.CallFunc_GetActionIconSizeRatio_IconRatio_1 = CallFunc_GetActionIconSizeRatio_IconRatio_1;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetInputIconVisibility_Visibility = CallFunc_GetInputIconVisibility_Visibility;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CustomEvent_OptionID_1 = K2Node_CustomEvent_OptionID_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_CustomEvent_OptionID = K2Node_CustomEvent_OptionID;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_RefreshList = K2Node_CustomEvent_RefreshList;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_Terminated_1 = K2Node_Event_Terminated_1;
	Parms.K2Node_Event_Terminated = K2Node_Event_Terminated;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OnVariantHighlighted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::OnVariantHighlighted__DelegateSignature(class UW_Customization_Slot_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OnVariantHighlighted__DelegateSignature");

	Params::UW_Customization_VariantCarousel_C_OnVariantHighlighted__DelegateSignature_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OnVariantSlotEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     EquippedSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::OnVariantSlotEquipped__DelegateSignature(class UW_Customization_Slot_C* EquippedSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OnVariantSlotEquipped__DelegateSignature");

	Params::UW_Customization_VariantCarousel_C_OnVariantSlotEquipped__DelegateSignature_Params Parms{};

	Parms.EquippedSlot = EquippedSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OnVariantUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_VariantCarousel_C::OnVariantUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OnVariantUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OnVariantHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::OnVariantHovered__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OnVariantHovered__DelegateSignature");

	Params::UW_Customization_VariantCarousel_C_OnVariantHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OnVariantClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_VariantCarousel_C::OnVariantClicked__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OnVariantClicked__DelegateSignature");

	Params::UW_Customization_VariantCarousel_C_OnVariantClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_VariantCarousel.W_Customization_VariantCarousel_C.OnVariantListPopulated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasVariants                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_VariantCarousel_C::OnVariantListPopulated__DelegateSignature(bool HasVariants)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_VariantCarousel_C", "OnVariantListPopulated__DelegateSignature");

	Params::UW_Customization_VariantCarousel_C_OnVariantListPopulated__DelegateSignature_Params Parms{};

	Parms.HasVariants = HasVariants;

	UObject::ProcessEvent(Func, &Parms);

}

}


