#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C
// (None)

class UClass* UW_ItemSelection_ItemGroup_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemSelection_ItemGroup_V2_C");

	return Clss;
}


// W_ItemSelection_ItemGroup_V2_C W_ItemSelection_ItemGroup_V2.Default__W_ItemSelection_ItemGroup_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemSelection_ItemGroup_V2_C* UW_ItemSelection_ItemGroup_V2_C::GetDefaultObj()
{
	static class UW_ItemSelection_ItemGroup_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemSelection_ItemGroup_V2_C*>(UW_ItemSelection_ItemGroup_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                      InItemClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetInventoryItemOfClass_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_V2_C::GetIconImageFromClass(class UClass* InItemClass, class UTexture2D** Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetInventoryItemOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "GetIconImageFromClass");

	Params::UW_ItemSelection_ItemGroup_V2_C_GetIconImageFromClass_Params Parms{};

	Parms.InItemClass = InItemClass;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryItemOfClass_ReturnValue = CallFunc_GetInventoryItemOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EItemCategory           InItemCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetInventoryItemOfType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_V2_C::GetIconImageFromCategory(enum class EItemCategory InItemCategory, class UTexture2D** Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "GetIconImageFromCategory");

	Params::UW_ItemSelection_ItemGroup_V2_C_GetIconImageFromCategory_Params Parms{};

	Parms.InItemCategory = InItemCategory;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryItemOfType_ReturnValue = CallFunc_GetInventoryItemOfType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HasAnyItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABasePlayer_C*               K2Node_DynamicCast_AsBase_Player                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyInventoryItemsOfType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_V2_C::HasAnyItems(bool* Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyInventoryItemsOfType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "HasAnyItems");

	Params::UW_ItemSelection_ItemGroup_V2_C_HasAnyItems_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Player = K2Node_DynamicCast_AsBase_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyInventoryItemsOfType_ReturnValue = CallFunc_HasAnyInventoryItemsOfType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowKeybindText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::ShowKeybindText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "ShowKeybindText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideKeybindText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::HideKeybindText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "HideKeybindText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.SetKeybindText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue                   (HasGetValueTypeHash)
// struct FRonKey                     CallFunc_ConvertUnrealKeyToRonKey_ReturnValue                    (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_ItemSelection_ItemGroup_V2_C::SetKeybindText(class FName& ActionName, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, const struct FRonKey& CallFunc_ConvertUnrealKeyToRonKey_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "SetKeybindText");

	Params::UW_ItemSelection_ItemGroup_V2_C_SetKeybindText_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue = CallFunc_GetKeyFromInputActionName_ReturnValue;
	Parms.CallFunc_ConvertUnrealKeyToRonKey_ReturnValue = CallFunc_ConvertUnrealKeyToRonKey_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ResetFadeOutAnimationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::ResetFadeOutAnimationState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "ResetFadeOutAnimationState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFadeOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_V2_C::PlayFadeOutAnim(bool bSelected, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "PlayFadeOutAnim");

	Params::UW_ItemSelection_ItemGroup_V2_C_PlayFadeOutAnim_Params Parms{};

	Parms.bSelected = bSelected;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowDivider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::ShowDivider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "ShowDivider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideDivider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::HideDivider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "HideDivider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Set Icon Image
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UW_ItemSelection_ItemGroup_V2_C::Set_Icon_Image(class UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "Set Icon Image");

	Params::UW_ItemSelection_ItemGroup_V2_C_Set_Icon_Image_Params Parms{};

	Parms.Icon = Icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlaySelectFailedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPlaySound                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_V2_C::PlaySelectFailedAnim(bool bPlaySound, bool CallFunc_IsVisible_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "PlaySelectFailedAnim");

	Params::UW_ItemSelection_ItemGroup_V2_C_PlaySelectFailedAnim_Params Parms{};

	Parms.bPlaySound = bPlaySound;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HideScrollHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::HideScrollHint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "HideScrollHint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowScrollHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_V2_C::ShowScrollHint(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "ShowScrollHint");

	Params::UW_ItemSelection_ItemGroup_V2_C_ShowScrollHint_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayUnfocusAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_V2_C::PlayUnfocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "PlayUnfocusAnim");

	Params::UW_ItemSelection_ItemGroup_V2_C_PlayUnfocusAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFocusAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_V2_C::PlayFocusAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "PlayFocusAnim");

	Params::UW_ItemSelection_ItemGroup_V2_C_PlayFocusAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemSelectionGroup         ItemGroupSetting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bLastGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_V2_C::Initialize(struct FItemSelectionGroup& ItemGroupSetting, bool bLastGroup, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "Initialize");

	Params::UW_ItemSelection_ItemGroup_V2_C_Initialize_Params Parms{};

	Parms.ItemGroupSetting = ItemGroupSetting;
	Parms.bLastGroup = bLastGroup;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.OnFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::OnFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "OnFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.OnUnfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::OnUnfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "OnUnfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroup_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "Tick");

	Params::UW_ItemSelection_ItemGroup_V2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroup_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ExecuteUbergraph_W_ItemSelection_ItemGroup_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyItems_Return_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_HasAnyItems_Return_Value_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyItems_Return_Value_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroup_V2_C::ExecuteUbergraph_W_ItemSelection_ItemGroup_V2(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_HasAnyItems_Return_Value, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_HasAnyItems_Return_Value_1, bool CallFunc_HasAnyItems_Return_Value_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroup_V2_C", "ExecuteUbergraph_W_ItemSelection_ItemGroup_V2");

	Params::UW_ItemSelection_ItemGroup_V2_C_ExecuteUbergraph_W_ItemSelection_ItemGroup_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_HasAnyItems_Return_Value = CallFunc_HasAnyItems_Return_Value;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_HasAnyItems_Return_Value_1 = CallFunc_HasAnyItems_Return_Value_1;
	Parms.CallFunc_HasAnyItems_Return_Value_2 = CallFunc_HasAnyItems_Return_Value_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


