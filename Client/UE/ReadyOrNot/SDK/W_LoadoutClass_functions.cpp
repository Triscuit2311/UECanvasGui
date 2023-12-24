#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutClass.W_LoadoutClass_C
// (None)

class UClass* UW_LoadoutClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutClass_C");

	return Clss;
}


// W_LoadoutClass_C W_LoadoutClass.Default__W_LoadoutClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutClass_C* UW_LoadoutClass_C::GetDefaultObj()
{
	static class UW_LoadoutClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutClass_C*>(UW_LoadoutClass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutClass.W_LoadoutClass_C.UpdateItemNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        K2Node_Select_Default                                            (None)

void UW_LoadoutClass_C::UpdateItemNameText(class FText InText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "UpdateItemNameText");

	Params::UW_LoadoutClass_C_UpdateItemNameText_Params Parms{};

	Parms.InText = InText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.GetCurrentMenuDirectory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Return_Value                                                     (Parm, OutParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_LoadoutClass_C::GetCurrentMenuDirectory(class FText* Return_Value, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "GetCurrentMenuDirectory");

	Params::UW_LoadoutClass_C_GetCurrentMenuDirectory_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutClass.W_LoadoutClass_C.EnterPresetsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::EnterPresetsMenu(class UW_LoadoutItem_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "EnterPresetsMenu");

	Params::UW_LoadoutClass_C_EnterPresetsMenu_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.ExitPresetsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::ExitPresetsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "ExitPresetsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.Escape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::Escape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "Escape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.UnselectUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::UnselectUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "UnselectUIElement");

	Params::UW_LoadoutClass_C_UnselectUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.SelectUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::SelectUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "SelectUIElement");

	Params::UW_LoadoutClass_C_SelectUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.UnhoverUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::UnhoverUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "UnhoverUIElement");

	Params::UW_LoadoutClass_C_UnhoverUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.HoverUIElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::HoverUIElement(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "HoverUIElement");

	Params::UW_LoadoutClass_C_HoverUIElement_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_HandleMenuWideMultiInput__Up__Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_LoadoutClass_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnKeyUp");

	Params::UW_LoadoutClass_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Up__Return_Value = CallFunc_HandleMenuWideMultiInput__Up__Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutClass.W_LoadoutClass_C.CanExit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnteringQuartermasterMenu_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::CanExit(bool* Return_Value, bool CallFunc_EnteringQuartermasterMenu_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "CanExit");

	Params::UW_LoadoutClass_C_CanExit_Params Parms{};

	Parms.CallFunc_EnteringQuartermasterMenu_ReturnValue = CallFunc_EnteringQuartermasterMenu_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutClass.W_LoadoutClass_C.GetAllUncollapsedLoadoutItemWidgets
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UW_LoadoutItem_C*>    Return_Value                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class UW_LoadoutItem_C*>    UncollapsedWidgets                                               (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::GetAllUncollapsedLoadoutItemWidgets(TArray<class UW_LoadoutItem_C*>* Return_Value, const TArray<class UW_LoadoutItem_C*>& UncollapsedWidgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_LoadoutItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "GetAllUncollapsedLoadoutItemWidgets");

	Params::UW_LoadoutClass_C_GetAllUncollapsedLoadoutItemWidgets_Params Parms{};

	Parms.UncollapsedWidgets = UncollapsedWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_LoadoutClass.W_LoadoutClass_C.Get_SelectedItemInfo_Container_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_LoadoutClass_C::Get_SelectedItemInfo_Container_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "Get_SelectedItemInfo_Container_Visibility");

	Params::UW_LoadoutClass_C_Get_SelectedItemInfo_Container_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutClass.W_LoadoutClass_C.GetAllTacticalDeviceClassesExpectGrenades
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>              Return_Value                                                     (Parm, OutParm)
// TArray<class UClass*>              TacticalDevices                                                  (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::GetAllTacticalDeviceClassesExpectGrenades(TArray<class UClass*>* Return_Value, const TArray<class UClass*>& TacticalDevices, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "GetAllTacticalDeviceClassesExpectGrenades");

	Params::UW_LoadoutClass_C_GetAllTacticalDeviceClassesExpectGrenades_Params Parms{};

	Parms.TacticalDevices = TacticalDevices;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_LoadoutClass.W_LoadoutClass_C.GetAllGrenadeClasses
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>              Return_Value                                                     (Parm, OutParm)
// TArray<class UClass*>              Grenades                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Grenade                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::GetAllGrenadeClasses(TArray<class UClass*>* Return_Value, const TArray<class UClass*>& Grenades, int32 Temp_int_Variable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Grenade, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "GetAllGrenadeClasses");

	Params::UW_LoadoutClass_C_GetAllGrenadeClasses_Params Parms{};

	Parms.Grenades = Grenades;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBase_Grenade = K2Node_ClassDynamicCast_AsBase_Grenade;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZero2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UW_LoadoutClass_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_IsZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnMouseMove");

	Params::UW_LoadoutClass_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_IsZero2D_ReturnValue = CallFunc_IsZero2D_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutClass.W_LoadoutClass_C.UnhoverLoadoutItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::UnhoverLoadoutItem(class UW_LoadoutItem_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "UnhoverLoadoutItem");

	Params::UW_LoadoutClass_C_UnhoverLoadoutItem_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.HoverLoadoutItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::HoverLoadoutItem(class UW_LoadoutItem_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "HoverLoadoutItem");

	Params::UW_LoadoutClass_C_HoverLoadoutItem_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.UnselectLoadoutItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanExit_Return_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::UnselectLoadoutItem(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_CanExit_Return_Value, class UW_LoadoutItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "UnselectLoadoutItem");

	Params::UW_LoadoutClass_C_UnselectLoadoutItem_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_CanExit_Return_Value = CallFunc_CanExit_Return_Value;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.SelectLoadoutItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_LoadoutItem_C*>    CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value        (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::SelectLoadoutItem(TArray<class UW_LoadoutItem_C*>& CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value, bool CallFunc_Greater_IntInt_ReturnValue, class UW_LoadoutItem_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "SelectLoadoutItem");

	Params::UW_LoadoutClass_C_SelectLoadoutItem_Params Parms{};

	Parms.CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value = CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.PreviousColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::PreviousColumn(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "PreviousColumn");

	Params::UW_LoadoutClass_C_PreviousColumn_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.NextColumn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_LoadoutItem_C*>    CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value        (ReferenceParm, ContainsInstancedReference)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::NextColumn(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, TArray<class UW_LoadoutItem_C*>& CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value, class UW_LoadoutItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "NextColumn");

	Params::UW_LoadoutClass_C_NextColumn_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value = CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.PreviousRow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_LoadoutItem_C*>    CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value        (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::PreviousRow(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UW_LoadoutItem_C*>& CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "PreviousRow");

	Params::UW_LoadoutClass_C_PreviousRow_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value = CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.NextRow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_LoadoutItem_C*>    CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value        (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::NextRow(TArray<class UW_LoadoutItem_C*>& CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "NextRow");

	Params::UW_LoadoutClass_C_NextRow_Params Parms{};

	Parms.CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value = CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMenuWideMultiInput__Down__Return_Value            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_3                                    (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue_4                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_5                                    (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue_6                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_7                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_8                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_24                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_25                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_26                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_27                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMenuWideInput_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_IsUIHidden_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_3                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_4                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_5                                   (None)

struct FEventReply UW_LoadoutClass_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, const struct FKey& CallFunc_GetKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, const struct FKey& CallFunc_GetKey_ReturnValue_3, const struct FKey& CallFunc_GetKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, const struct FKey& CallFunc_GetKey_ReturnValue_5, const struct FKey& CallFunc_GetKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, bool CallFunc_EqualEqual_KeyKey_ReturnValue_18, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_EqualEqual_KeyKey_ReturnValue_19, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, const struct FKey& CallFunc_GetKey_ReturnValue_7, bool CallFunc_EqualEqual_KeyKey_ReturnValue_20, bool CallFunc_EqualEqual_KeyKey_ReturnValue_21, bool CallFunc_EqualEqual_KeyKey_ReturnValue_22, bool CallFunc_EqualEqual_KeyKey_ReturnValue_23, const struct FKey& CallFunc_GetKey_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_EqualEqual_KeyKey_ReturnValue_24, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_25, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_EqualEqual_KeyKey_ReturnValue_26, bool CallFunc_EqualEqual_KeyKey_ReturnValue_27, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_18, bool CallFunc_HandleMenuWideInput_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUIHidden_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3, const struct FEventReply& CallFunc_Handled_ReturnValue_4, const struct FEventReply& CallFunc_Handled_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnKeyDown");

	Params::UW_LoadoutClass_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_HandleMenuWideMultiInput__Down__Return_Value = CallFunc_HandleMenuWideMultiInput__Down__Return_Value;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_GetKey_ReturnValue_1 = CallFunc_GetKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.CallFunc_GetKey_ReturnValue_2 = CallFunc_GetKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_8 = CallFunc_EqualEqual_KeyKey_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_9 = CallFunc_EqualEqual_KeyKey_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_GetKey_ReturnValue_3 = CallFunc_GetKey_ReturnValue_3;
	Parms.CallFunc_GetKey_ReturnValue_4 = CallFunc_GetKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_10 = CallFunc_EqualEqual_KeyKey_ReturnValue_10;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_11 = CallFunc_EqualEqual_KeyKey_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_12 = CallFunc_EqualEqual_KeyKey_ReturnValue_12;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_13 = CallFunc_EqualEqual_KeyKey_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_GetKey_ReturnValue_5 = CallFunc_GetKey_ReturnValue_5;
	Parms.CallFunc_GetKey_ReturnValue_6 = CallFunc_GetKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_14 = CallFunc_EqualEqual_KeyKey_ReturnValue_14;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_15 = CallFunc_EqualEqual_KeyKey_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_16 = CallFunc_EqualEqual_KeyKey_ReturnValue_16;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_17 = CallFunc_EqualEqual_KeyKey_ReturnValue_17;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_18 = CallFunc_EqualEqual_KeyKey_ReturnValue_18;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_19 = CallFunc_EqualEqual_KeyKey_ReturnValue_19;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_GetKey_ReturnValue_7 = CallFunc_GetKey_ReturnValue_7;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_20 = CallFunc_EqualEqual_KeyKey_ReturnValue_20;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_21 = CallFunc_EqualEqual_KeyKey_ReturnValue_21;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_22 = CallFunc_EqualEqual_KeyKey_ReturnValue_22;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_23 = CallFunc_EqualEqual_KeyKey_ReturnValue_23;
	Parms.CallFunc_GetKey_ReturnValue_8 = CallFunc_GetKey_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_24 = CallFunc_EqualEqual_KeyKey_ReturnValue_24;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_25 = CallFunc_EqualEqual_KeyKey_ReturnValue_25;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_26 = CallFunc_EqualEqual_KeyKey_ReturnValue_26;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_27 = CallFunc_EqualEqual_KeyKey_ReturnValue_27;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_BooleanOR_ReturnValue_18 = CallFunc_BooleanOR_ReturnValue_18;
	Parms.CallFunc_HandleMenuWideInput_Return_Value = CallFunc_HandleMenuWideInput_Return_Value;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsUIHidden_Return_Value = CallFunc_IsUIHidden_Return_Value;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue_3 = CallFunc_Handled_ReturnValue_3;
	Parms.CallFunc_Handled_ReturnValue_4 = CallFunc_Handled_ReturnValue_4;
	Parms.CallFunc_Handled_ReturnValue_5 = CallFunc_Handled_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutClass.W_LoadoutClass_C.SimulateClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::SimulateClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "SimulateClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.SelectActiveLoadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value  (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_GetAllGrenadeClasses_Return_Value                       (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::SelectActiveLoadout(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UClass*>& CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value, int32 CallFunc_Subtract_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, TArray<class UClass*>& CallFunc_GetAllGrenadeClasses_Return_Value, class UClass* CallFunc_Array_Get_Item_1, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "SelectActiveLoadout");

	Params::UW_LoadoutClass_C_SelectActiveLoadout_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value = CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllGrenadeClasses_Return_Value = CallFunc_GetAllGrenadeClasses_Return_Value;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_6 = CallFunc_EqualEqual_ClassClass_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.ShowSelectedItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::ShowSelectedItemInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "ShowSelectedItemInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.HideSelectedItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::HideSelectedItemInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "HideSelectedItemInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItemWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::OnLoadoutItemClicked(class UW_LoadoutItem_C* LoadoutItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnLoadoutItemClicked");

	Params::UW_LoadoutClass_C_OnLoadoutItemClicked_Params Parms{};

	Parms.LoadoutItemWidget = LoadoutItemWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.CreateLoadoutItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LoadoutItemName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemObjectClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsTactical                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TacticalSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMultipleTacticalSlots                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              MaxTacticalSlots                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartingTacticalSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::CreateLoadoutItemWidget(class FText LoadoutItemName, enum class EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32 TacticalSlot, bool bIsMultipleTacticalSlots, int32 MaxTacticalSlots, int32 StartingTacticalSlot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_LoadoutItem_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "CreateLoadoutItemWidget");

	Params::UW_LoadoutClass_C_CreateLoadoutItemWidget_Params Parms{};

	Parms.LoadoutItemName = LoadoutItemName;
	Parms.ItemClass = ItemClass;
	Parms.ItemObjectClass = ItemObjectClass;
	Parms.bIsTactical = bIsTactical;
	Parms.TacticalSlot = TacticalSlot;
	Parms.bIsMultipleTacticalSlots = bIsMultipleTacticalSlots;
	Parms.MaxTacticalSlots = MaxTacticalSlots;
	Parms.StartingTacticalSlot = StartingTacticalSlot;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.InitializeLoadoutItems
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeaponData>         WeaponArray                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponData                 CallFunc_Array_Get_Item                                          (None)
// struct FDeviceData                 CallFunc_Array_Get_Item_1                                        (None)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDeviceData                 CallFunc_Array_Get_Item_2                                        (None)
// struct FArmourData                 CallFunc_Array_Get_Item_3                                        (None)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourData                 CallFunc_Array_Get_Item_4                                        (None)
// struct FWeaponData                 CallFunc_Array_Get_Item_5                                        (None)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_4                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_5                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::InitializeLoadoutItems(const TArray<struct FWeaponData>& WeaponArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, const struct FWeaponData& CallFunc_Array_Get_Item, const struct FDeviceData& CallFunc_Array_Get_Item_1, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FDeviceData& CallFunc_Array_Get_Item_2, const struct FArmourData& CallFunc_Array_Get_Item_3, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FArmourData& CallFunc_Array_Get_Item_4, const struct FWeaponData& CallFunc_Array_Get_Item_5, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "InitializeLoadoutItems");

	Params::UW_LoadoutClass_C_InitializeLoadoutItems_Params Parms{};

	Parms.WeaponArray = WeaponArray;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.DeselectAllExcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            InLoadoutItemWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::DeselectAllExcept(class UW_LoadoutItem_C* InLoadoutItemWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "DeselectAllExcept");

	Params::UW_LoadoutClass_C_DeselectAllExcept_Params Parms{};

	Parms.InLoadoutItemWidget = InLoadoutItemWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.RemoveAllChildren
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::RemoveAllChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "RemoveAllChildren");

	Params::UW_LoadoutClass_C_RemoveAllChildren_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.ExpandChildren
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::ExpandChildren(int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "ExpandChildren");

	Params::UW_LoadoutClass_C_ExpandChildren_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.CollapseChildren
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResetPreviewAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::CollapseChildren(bool bResetPreviewAnim, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "CollapseChildren");

	Params::UW_LoadoutClass_C_CollapseChildren_Params Parms{};

	Parms.bResetPreviewAnim = bResetPreviewAnim;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "PreConstruct");

	Params::UW_LoadoutClass_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UW_LoadoutClass_C_BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutClass_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::OnLoadoutItemButtonHovered(class UW_LoadoutItem_C* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnLoadoutItemButtonHovered");

	Params::UW_LoadoutClass_C_OnLoadoutItemButtonHovered_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::OnLoadoutItemButtonUnhovered(class UW_LoadoutItem_C* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnLoadoutItemButtonUnhovered");

	Params::UW_LoadoutClass_C_OnLoadoutItemButtonUnhovered_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.ExecuteUbergraph_W_LoadoutClass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_GetAllGrenadeClasses_Return_Value                       (ReferenceParm)
// TArray<class UClass*>              CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value  (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            K2Node_CustomEvent_LoadoutItem_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            K2Node_CustomEvent_LoadoutItem                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutItem_C*            CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutClass_C::ExecuteUbergraph_W_LoadoutClass(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, int32 Temp_int_Array_Index_Variable_1, TArray<class UClass*>& CallFunc_GetAllGrenadeClasses_Return_Value, TArray<class UClass*>& CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value, int32 CallFunc_Subtract_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutItem_C* K2Node_CustomEvent_LoadoutItem_1, int32 CallFunc_Array_Find_ReturnValue, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_3, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UW_LoadoutItem_C* K2Node_CustomEvent_LoadoutItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_LastIndex_ReturnValue, class UW_LoadoutItem_C* CallFunc_Array_Get_Item_4, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "ExecuteUbergraph_W_LoadoutClass");

	Params::UW_LoadoutClass_C_ExecuteUbergraph_W_LoadoutClass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllGrenadeClasses_Return_Value = CallFunc_GetAllGrenadeClasses_Return_Value;
	Parms.CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value = CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_LoadoutItem_1 = K2Node_CustomEvent_LoadoutItem_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CustomEvent_LoadoutItem = K2Node_CustomEvent_LoadoutItem;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutClass_C*           LoadoutClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::OnButtonHovered__DelegateSignature(class UW_LoadoutClass_C* LoadoutClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnButtonHovered__DelegateSignature");

	Params::UW_LoadoutClass_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.LoadoutClass = LoadoutClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnChildButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItemWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::OnChildButtonClicked__DelegateSignature(class UW_LoadoutItem_C* LoadoutItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnChildButtonClicked__DelegateSignature");

	Params::UW_LoadoutClass_C_OnChildButtonClicked__DelegateSignature_Params Parms{};

	Parms.LoadoutItemWidget = LoadoutItemWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutClass.W_LoadoutClass_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutClass_C*           LoadoutClassWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutClass_C::OnButtonClicked__DelegateSignature(class UW_LoadoutClass_C* LoadoutClassWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutClass_C", "OnButtonClicked__DelegateSignature");

	Params::UW_LoadoutClass_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.LoadoutClassWidget = LoadoutClassWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


