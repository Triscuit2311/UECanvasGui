#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C
// (None)

class UClass* UW_ItemSelection_ItemGroup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemSelection_ItemGroup_C");

	return Clss;
}


// W_ItemSelection_ItemGroup_C W_ItemSelection_ItemGroup.Default__W_ItemSelection_ItemGroup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemSelection_ItemGroup_C* UW_ItemSelection_ItemGroup_C::GetDefaultObj()
{
	static class UW_ItemSelection_ItemGroup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemSelection_ItemGroup_C*>(UW_ItemSelection_ItemGroup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.SetKeybindText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue                   (HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

void UW_ItemSelection_ItemGroup_C::SetKeybindText(class FName& ActionName, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "SetKeybindText");

	Params::UW_ItemSelection_ItemGroup_C_SetKeybindText_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue = CallFunc_GetKeyFromInputActionName_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ResetFadeOutAnimationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::ResetFadeOutAnimationState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "ResetFadeOutAnimationState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFadeOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_C::PlayFadeOutAnim(bool bSelected, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "PlayFadeOutAnim");

	Params::UW_ItemSelection_ItemGroup_C_PlayFadeOutAnim_Params Parms{};

	Parms.bSelected = bSelected;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowDivider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::ShowDivider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "ShowDivider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideDivider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::HideDivider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "HideDivider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.UpdateIconImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UW_ItemSelection_ItemGroup_C::UpdateIconImage(class UTexture2D* Icon, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "UpdateIconImage");

	Params::UW_ItemSelection_ItemGroup_C_UpdateIconImage_Params Parms{};

	Parms.Icon = Icon;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlaySelectFailedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_C::PlaySelectFailedAnim(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "PlaySelectFailedAnim");

	Params::UW_ItemSelection_ItemGroup_C_PlaySelectFailedAnim_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HasAnyItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanEquip_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_C::HasAnyItems(bool* Return_Value, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanEquip_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "HasAnyItems");

	Params::UW_ItemSelection_ItemGroup_C_HasAnyItems_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanEquip_ReturnValue = CallFunc_CanEquip_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.HideHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::HideHint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "HideHint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ShowHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_C::ShowHint(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "ShowHint");

	Params::UW_ItemSelection_ItemGroup_C_ShowHint_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayUnfocusAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_C::PlayUnfocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "PlayUnfocusAnim");

	Params::UW_ItemSelection_ItemGroup_C_PlayUnfocusAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.PlayFocusAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_C::PlayFocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "PlayFocusAnim");

	Params::UW_ItemSelection_ItemGroup_C_PlayFocusAnim_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.EquipItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ItemEquipped                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PutItemInHands_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetInventoryItemOfType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADetonator*                  K2Node_DynamicCast_AsDetonator                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PutItemInHands_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetInventoryItemOfType_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADetonator*                  K2Node_DynamicCast_AsDetonator_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PutItemInHands_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_C::EquipItem(bool* ItemEquipped, bool CallFunc_PutItemInHands_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue, class ADetonator* K2Node_DynamicCast_AsDetonator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PutItemInHands_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue_1, class ADetonator* K2Node_DynamicCast_AsDetonator_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PutItemInHands_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "EquipItem");

	Params::UW_ItemSelection_ItemGroup_C_EquipItem_Params Parms{};

	Parms.CallFunc_PutItemInHands_ReturnValue = CallFunc_PutItemInHands_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetInventoryItemOfType_ReturnValue = CallFunc_GetInventoryItemOfType_ReturnValue;
	Parms.K2Node_DynamicCast_AsDetonator = K2Node_DynamicCast_AsDetonator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PutItemInHands_ReturnValue_1 = CallFunc_PutItemInHands_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_GetInventoryItemOfType_ReturnValue_1 = CallFunc_GetInventoryItemOfType_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDetonator_1 = K2Node_DynamicCast_AsDetonator_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PutItemInHands_ReturnValue_2 = CallFunc_PutItemInHands_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemEquipped != nullptr)
		*ItemEquipped = Parms.ItemEquipped;

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   InItem                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemSelectionGroup         ItemGroupSetting                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bLastGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_C::Initialize(class ABaseItem* InItem, const struct FItemSelectionGroup& ItemGroupSetting, bool bLastGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "Initialize");

	Params::UW_ItemSelection_ItemGroup_C_Initialize_Params Parms{};

	Parms.InItem = InItem;
	Parms.ItemGroupSetting = ItemGroupSetting;
	Parms.bLastGroup = bLastGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::OnFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "OnFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnUnfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::OnUnfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "OnUnfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "Tick");

	Params::UW_ItemSelection_ItemGroup_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.ExecuteUbergraph_W_ItemSelection_ItemGroup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABasePlayer_C*               K2Node_DynamicCast_AsBase_Player                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyItems_Return_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_HasAnyItems_Return_Value_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyItems_Return_Value_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_C::ExecuteUbergraph_W_ItemSelection_ItemGroup(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_HasAnyItems_Return_Value, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_HasAnyItems_Return_Value_1, bool CallFunc_HasAnyItems_Return_Value_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "ExecuteUbergraph_W_ItemSelection_ItemGroup");

	Params::UW_ItemSelection_ItemGroup_C_ExecuteUbergraph_W_ItemSelection_ItemGroup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Player = K2Node_DynamicCast_AsBase_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_HasAnyItems_Return_Value = CallFunc_HasAnyItems_Return_Value;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_HasAnyItems_Return_Value_1 = CallFunc_HasAnyItems_Return_Value_1;
	Parms.CallFunc_HasAnyItems_Return_Value_2 = CallFunc_HasAnyItems_Return_Value_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::OnFadeOutFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "OnFadeOutFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup.W_ItemSelection_ItemGroup_C.OnFadeOutSelectedFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_C::OnFadeOutSelectedFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_C", "OnFadeOutSelectedFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


