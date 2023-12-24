#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CustomizationTest.W_CustomizationTest_C
// (None)

class UClass* UW_CustomizationTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CustomizationTest_C");

	return Clss;
}


// W_CustomizationTest_C W_CustomizationTest.Default__W_CustomizationTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CustomizationTest_C* UW_CustomizationTest_C::GetDefaultObj()
{
	static class UW_CustomizationTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CustomizationTest_C*>(UW_CustomizationTest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CustomizationTest.W_CustomizationTest_C.NewItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   Inold                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CustomizationTest_C::NewItem(class UClass* Class, class ABaseItem* Inold, class ABaseItem** Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "NewItem");

	Params::UW_CustomizationTest_C_NewItem_Params Parms{};

	Parms.Class = Class;
	Parms.Inold = Inold;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function W_CustomizationTest.W_CustomizationTest_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FEventReply UW_CustomizationTest_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "OnMouseMove");

	Params::UW_CustomizationTest_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_CustomizationTest.W_CustomizationTest_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_CustomizationTest_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "OnMouseButtonUp");

	Params::UW_CustomizationTest_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_CustomizationTest.W_CustomizationTest_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_CustomizationTest_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "OnMouseButtonDown_0");

	Params::UW_CustomizationTest_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_CustomizationTest.W_CustomizationTest_C.SetupEquippedList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CustomizationTest_C::SetupEquippedList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "SetupEquippedList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CustomizationTest.W_CustomizationTest_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_CustomizationTest_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_CustomizationTest_C::BndEvt__W_CustomizationTest_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "BndEvt__W_CustomizationTest_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CustomizationTest.W_CustomizationTest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_CustomizationTest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_DoneButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_CustomizationTest_C::BndEvt__W_CustomizationTest_DoneButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "BndEvt__W_CustomizationTest_DoneButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CustomizationTest.W_CustomizationTest_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_CustomizationTest_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "OnFocusLost");

	Params::UW_CustomizationTest_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CustomizationTest.W_CustomizationTest_C.EquippedItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CustomizationTest_C::EquippedItemClicked(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "EquippedItemClicked");

	Params::UW_CustomizationTest_C_EquippedItemClicked_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CustomizationTest.W_CustomizationTest_C.ListItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CustomizationTest_C::ListItemClicked(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "ListItemClicked");

	Params::UW_CustomizationTest_C_ListItemClicked_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_2_MLPrimarySet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CustomizationTest_C::BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_2_MLPrimarySet__DelegateSignature(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_2_MLPrimarySet__DelegateSignature");

	Params::UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_2_MLPrimarySet__DelegateSignature_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_3_MLSecondarySet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CustomizationTest_C::BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_3_MLSecondarySet__DelegateSignature(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_3_MLSecondarySet__DelegateSignature");

	Params::UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_3_MLSecondarySet__DelegateSignature_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_4_MLArmorSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CustomizationTest_C::BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_4_MLArmorSet__DelegateSignature(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_4_MLArmorSet__DelegateSignature");

	Params::UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_4_MLArmorSet__DelegateSignature_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_5_MLHelmetSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CustomizationTest_C::BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_5_MLHelmetSet__DelegateSignature(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_5_MLHelmetSet__DelegateSignature");

	Params::UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_5_MLHelmetSet__DelegateSignature_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CustomizationTest.W_CustomizationTest_C.ExecuteUbergraph_W_CustomizationTest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UW_NeoLoadout_Slot_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// enum class ECustomizationType      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutItem*                K2Node_CustomEvent_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_CustomEvent_Slot_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutItem*                K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        K2Node_CustomEvent_Slot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       K2Node_DynamicCast_AsLoadout_Customization                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>CallFunc_GetCustomizationItems_ReturnValue                       (ReferenceParm)
// class ULoadoutCustomization*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ComponentBoundEvent_Class_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_Class_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_Class_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ComponentBoundEvent_Class                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_newitem_out                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_newitem_out_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_newitem_out_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_newitem_out_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CustomizationTest_C::ExecuteUbergraph_W_CustomizationTest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_NeoLoadout_Slot_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_NeoLoadout_Slot_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class ECustomizationType CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ULoadoutItem* K2Node_CustomEvent_Item_1, class UW_NeoLoadout_Slot_C* K2Node_CustomEvent_Slot_1, class ULoadoutItem* K2Node_CustomEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_CustomEvent_Slot, class ULoadoutCustomization* K2Node_DynamicCast_AsLoadout_Customization, bool K2Node_DynamicCast_bSuccess, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue_1, TArray<class ULoadoutCustomization*>& CallFunc_GetCustomizationItems_ReturnValue, class ULoadoutCustomization* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* K2Node_ComponentBoundEvent_Class_3, class UClass* K2Node_ComponentBoundEvent_Class_2, class UClass* K2Node_ComponentBoundEvent_Class_1, class UClass* K2Node_ComponentBoundEvent_Class, class ABaseItem* CallFunc_newitem_out, class ABaseItem* CallFunc_newitem_out_1, class ABaseItem* CallFunc_newitem_out_2, class ABaseItem* CallFunc_newitem_out_3, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CustomizationTest_C", "ExecuteUbergraph_W_CustomizationTest");

	Params::UW_CustomizationTest_C_ExecuteUbergraph_W_CustomizationTest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue = CallFunc_GetEquippedCustomizationItem_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_Slot_1 = K2Node_CustomEvent_Slot_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.K2Node_DynamicCast_AsLoadout_Customization = K2Node_DynamicCast_AsLoadout_Customization;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue_1 = CallFunc_GetEquippedCustomizationItem_ReturnValue_1;
	Parms.CallFunc_GetCustomizationItems_ReturnValue = CallFunc_GetCustomizationItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Class_3 = K2Node_ComponentBoundEvent_Class_3;
	Parms.K2Node_ComponentBoundEvent_Class_2 = K2Node_ComponentBoundEvent_Class_2;
	Parms.K2Node_ComponentBoundEvent_Class_1 = K2Node_ComponentBoundEvent_Class_1;
	Parms.K2Node_ComponentBoundEvent_Class = K2Node_ComponentBoundEvent_Class;
	Parms.CallFunc_newitem_out = CallFunc_newitem_out;
	Parms.CallFunc_newitem_out_1 = CallFunc_newitem_out_1;
	Parms.CallFunc_newitem_out_2 = CallFunc_newitem_out_2;
	Parms.CallFunc_newitem_out_3 = CallFunc_newitem_out_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


