#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_InformationTable.W_Loadout_InformationTable_C
// (None)

class UClass* UW_Loadout_InformationTable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_InformationTable_C");

	return Clss;
}


// W_Loadout_InformationTable_C W_Loadout_InformationTable.Default__W_Loadout_InformationTable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_InformationTable_C* UW_Loadout_InformationTable_C::GetDefaultObj()
{
	static class UW_Loadout_InformationTable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_InformationTable_C*>(UW_Loadout_InformationTable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_InformationTable_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "BackPage");

	Params::UW_Loadout_InformationTable_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "GetFocusTarget");

	Params::UW_Loadout_InformationTable_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateLoadoutPresetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_Overview_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UW_Loadout_InformationTable_C::UpdateLoadoutPresetInfo(class UW_Loadout_Overview_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateLoadoutPresetInfo");

	Params::UW_Loadout_InformationTable_C_UpdateLoadoutPresetInfo_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetAttachmentEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_ItemEffects>     Effects                                                          (Parm, OutParm)
// TArray<struct FST_ItemEffects>     AttachmentEffects                                                (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScrollDirection        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScrollDirection        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScrollDirection        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScrollDirection        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScrollDirection        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScrollDirection        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScrollDirection        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScrollDirection        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScrollDirection        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScrollDirection        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects                                 (HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// enum class EScrollDirection        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects_1                               (HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// enum class EScrollDirection        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects_2                               (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects_3                               (HasGetValueTypeHash)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects_4                               (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        K2Node_Select_Default_5                                          (None)
// enum class EScrollDirection        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects_5                               (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScrollDirection        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects_6                               (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_8                                          (None)
// enum class EScrollDirection        K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemEffects             K2Node_MakeStruct_ST_ItemEffects_7                               (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::SetAttachmentEffects(TArray<struct FST_ItemEffects>* Effects, const TArray<struct FST_ItemEffects>& AttachmentEffects, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class EScrollDirection Temp_byte_Variable, enum class EScrollDirection Temp_byte_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_3, enum class EScrollDirection Temp_byte_Variable_2, enum class EScrollDirection Temp_byte_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, bool Temp_bool_Variable_5, enum class EScrollDirection Temp_byte_Variable_4, enum class EScrollDirection Temp_byte_Variable_5, bool Temp_bool_Variable_6, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool Temp_bool_Variable_7, enum class EScrollDirection Temp_byte_Variable_6, enum class EScrollDirection Temp_byte_Variable_7, bool Temp_bool_Variable_8, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, bool Temp_bool_Variable_9, enum class EScrollDirection Temp_byte_Variable_8, enum class EScrollDirection Temp_byte_Variable_9, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText K2Node_Select_Default, enum class EScrollDirection K2Node_Select_Default_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class FText K2Node_Select_Default_2, enum class EScrollDirection K2Node_Select_Default_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_2, int32 CallFunc_Array_Add_ReturnValue_1, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_3, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_4, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, enum class EScrollDirection K2Node_Select_Default_6, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_5, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_3, enum class EScrollDirection K2Node_Select_Default_7, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_6, int32 CallFunc_Array_Add_ReturnValue_6, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_4, class FText K2Node_Select_Default_8, enum class EScrollDirection K2Node_Select_Default_9, const struct FST_ItemEffects& K2Node_MakeStruct_ST_ItemEffects_7, int32 CallFunc_Array_Add_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "SetAttachmentEffects");

	Params::UW_Loadout_InformationTable_C_SetAttachmentEffects_Params Parms{};

	Parms.AttachmentEffects = AttachmentEffects;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.K2Node_MakeStruct_ST_ItemEffects = K2Node_MakeStruct_ST_ItemEffects;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_ST_ItemEffects_1 = K2Node_MakeStruct_ST_ItemEffects_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_ST_ItemEffects_2 = K2Node_MakeStruct_ST_ItemEffects_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_ST_ItemEffects_3 = K2Node_MakeStruct_ST_ItemEffects_3;
	Parms.K2Node_MakeStruct_ST_ItemEffects_4 = K2Node_MakeStruct_ST_ItemEffects_4;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_2 = CallFunc_EqualEqual_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeStruct_ST_ItemEffects_5 = K2Node_MakeStruct_ST_ItemEffects_5;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_3 = CallFunc_EqualEqual_FloatFloat_ReturnValue_3;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_MakeStruct_ST_ItemEffects_6 = K2Node_MakeStruct_ST_ItemEffects_6;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_4 = CallFunc_EqualEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_4 = CallFunc_Less_FloatFloat_ReturnValue_4;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_MakeStruct_ST_ItemEffects_7 = K2Node_MakeStruct_ST_ItemEffects_7;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	if (Effects != nullptr)
		*Effects = std::move(Parms.Effects);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.QuickHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_InformationTable_C::QuickHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "QuickHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Play Refresh Anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::Play_Refresh_Anim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "Play Refresh Anim");

	Params::UW_Loadout_InformationTable_C_Play_Refresh_Anim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAttachmentInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutInfo_EffectsList_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_ItemEffects>     CallFunc_SetAttachmentEffects_Effects                            (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemEffects>     CallFunc_SetAttachmentEffects_Effects_1                          (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::UpdateAttachmentInfo(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetAttachmentSlotText_SlotText, bool CallFunc_IsValidClass_ReturnValue, bool Temp_bool_Variable, class UW_LoadoutInfo_EffectsList_C* CallFunc_Create_ReturnValue, TArray<struct FST_ItemEffects>& CallFunc_SetAttachmentEffects_Effects, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FST_ItemEffects>& CallFunc_SetAttachmentEffects_Effects_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateAttachmentInfo");

	Params::UW_Loadout_InformationTable_C_UpdateAttachmentInfo_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SetAttachmentEffects_Effects = CallFunc_SetAttachmentEffects_Effects;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetAttachmentEffects_Effects_1 = CallFunc_SetAttachmentEffects_Effects_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateArmourMaterialInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::UpdateArmourMaterialInfo(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateArmourMaterialInfo");

	Params::UW_Loadout_InformationTable_C_UpdateArmourMaterialInfo_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAmmoInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAmmoCategoryText_Text                                (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetAmmoLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAmmoTypeData               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_InformationTable_C::UpdateAmmoInfo(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetAmmoCategoryText_Text, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateAmmoInfo");

	Params::UW_Loadout_InformationTable_C_UpdateAmmoInfo_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetAmmoCategoryText_Text = CallFunc_GetAmmoCategoryText_Text;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAmmoLookupDataTable_ReturnValue = CallFunc_GetAmmoLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.GetWeaponClassText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        WeaponClass                                                      (Parm, OutParm)
// enum class EItemClass              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        K2Node_Select_Default                                            (None)

void UW_Loadout_InformationTable_C::GetWeaponClassText(class FText* WeaponClass, enum class EItemClass Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "GetWeaponClassText");

	Params::UW_Loadout_InformationTable_C_GetWeaponClassText_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponClass != nullptr)
		*WeaponClass = Parms.WeaponClass;

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutInfo_AttachmentList_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetLoadoutCategoryText_Category_Text                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWeaponClassText_WeaponClass                          (None)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::UpdateItemInfo(class UW_LoadoutInfo_AttachmentList_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_GetLoadoutCategoryText_Category_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_GetWeaponClassText_WeaponClass, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateItemInfo");

	Params::UW_Loadout_InformationTable_C_UpdateItemInfo_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLoadoutCategoryText_Category_Text = CallFunc_GetLoadoutCategoryText_Category_Text;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetWeaponClassText_WeaponClass = CallFunc_GetWeaponClassText_WeaponClass;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateCurrentSlot");

	Params::UW_Loadout_InformationTable_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_InformationTable_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_InformationTable_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "SetLoadoutWidget");

	Params::UW_Loadout_InformationTable_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_InformationTable_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_InformationTable_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "PreConstruct");

	Params::UW_Loadout_InformationTable_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "Tick");

	Params::UW_Loadout_InformationTable_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_InformationTable_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "SetInputMode");

	Params::UW_Loadout_InformationTable_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "ChangePage");

	Params::UW_Loadout_InformationTable_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_InformationTable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelItemInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Restricted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_InformationTable_C::RefreshPanelItemInfo(const struct FSavedLoadout& ActiveLoadout, class UClass* ItemClass, enum class EItemCategory LoadoutSlot, bool Restricted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "RefreshPanelItemInfo");

	Params::UW_Loadout_InformationTable_C_RefreshPanelItemInfo_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;
	Parms.ItemClass = ItemClass;
	Parms.LoadoutSlot = LoadoutSlot;
	Parms.Restricted = Restricted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ModifyWeaponClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::ModifyWeaponClicked(class UClass* ItemToModify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "ModifyWeaponClicked");

	Params::UW_Loadout_InformationTable_C_ModifyWeaponClicked_Params Parms{};

	Parms.ItemToModify = ItemToModify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.InitializePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_InformationTable_C::InitializePanel(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "InitializePanel");

	Params::UW_Loadout_InformationTable_C_InitializePanel_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_InformationTable_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "UpdateActiveLoadout");

	Params::UW_Loadout_InformationTable_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "Reveal");

	Params::UW_Loadout_InformationTable_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_InformationTable_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "Hide");

	Params::UW_Loadout_InformationTable_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.AttachmentItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutInfo_AttachmentListEntry_C*AttachmentListItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::AttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "AttachmentItemClicked");

	Params::UW_Loadout_InformationTable_C_AttachmentItemClicked_Params Parms{};

	Parms.AttachmentListItem = AttachmentListItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAmmoInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      WeaponData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::RefreshPanelAmmoInfo(class FName AmmoType, class UClass* WeaponData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "RefreshPanelAmmoInfo");

	Params::UW_Loadout_InformationTable_C_RefreshPanelAmmoInfo_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.WeaponData = WeaponData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelArmourMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::RefreshPanelArmourMaterial(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "RefreshPanelArmourMaterial");

	Params::UW_Loadout_InformationTable_C_RefreshPanelArmourMaterial_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAttachment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachingWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::RefreshPanelAttachment(class UClass* Attachment, class UClass* AttachingWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "RefreshPanelAttachment");

	Params::UW_Loadout_InformationTable_C_RefreshPanelAttachment_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachingWeapon = AttachingWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RemoveAttachmentItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutInfo_AttachmentListEntry_C*AttachmentListItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::RemoveAttachmentItemClicked(class UW_LoadoutInfo_AttachmentListEntry_C* AttachmentListItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "RemoveAttachmentItemClicked");

	Params::UW_Loadout_InformationTable_C_RemoveAttachmentItemClicked_Params Parms{};

	Parms.AttachmentListItem = AttachmentListItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelLoadoutPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLoadoutPreset              LoadoutPreset                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_InformationTable_C::RefreshPanelLoadoutPreset(const struct FLoadoutPreset& LoadoutPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "RefreshPanelLoadoutPreset");

	Params::UW_Loadout_InformationTable_C_RefreshPanelLoadoutPreset_Params Parms{};

	Parms.LoadoutPreset = LoadoutPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ExecuteUbergraph_W_Loadout_InformationTable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_CustomEvent_ActiveLoadout_1                               (None)
// class UClass*                      K2Node_CustomEvent_ItemClass                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           K2Node_CustomEvent_LoadoutSlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Restricted                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_ItemToModify                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_CustomEvent_ActiveLoadout                                 (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutInfo_AttachmentListEntry_C*K2Node_CustomEvent_AttachmentListItem_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AmmoType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_WeaponData                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UArmourMaterial*             K2Node_CustomEvent_ArmourMaterial                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Attachment                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_AttachingWeapon                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutInfo_AttachmentListEntry_C*K2Node_CustomEvent_AttachmentListItem                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutPreset              K2Node_CustomEvent_LoadoutPreset                                 (None)

void UW_Loadout_InformationTable_C::ExecuteUbergraph_W_Loadout_InformationTable(int32 EntryPoint, const struct FSavedLoadout& K2Node_CustomEvent_ActiveLoadout_1, class UClass* K2Node_CustomEvent_ItemClass, enum class EItemCategory K2Node_CustomEvent_LoadoutSlot, bool K2Node_CustomEvent_Restricted, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UClass* K2Node_CustomEvent_ItemToModify, const struct FSavedLoadout& K2Node_CustomEvent_ActiveLoadout, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, class UW_Loadout_C* K2Node_Event_LoadoutWidget, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_AttachmentListItem_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FName K2Node_CustomEvent_AmmoType, class UClass* K2Node_CustomEvent_WeaponData, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UArmourMaterial* K2Node_CustomEvent_ArmourMaterial, class UClass* K2Node_CustomEvent_Attachment, class UClass* K2Node_CustomEvent_AttachingWeapon, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class UW_LoadoutInfo_AttachmentListEntry_C* K2Node_CustomEvent_AttachmentListItem, const struct FLoadoutPreset& K2Node_CustomEvent_LoadoutPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "ExecuteUbergraph_W_Loadout_InformationTable");

	Params::UW_Loadout_InformationTable_C_ExecuteUbergraph_W_Loadout_InformationTable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ActiveLoadout_1 = K2Node_CustomEvent_ActiveLoadout_1;
	Parms.K2Node_CustomEvent_ItemClass = K2Node_CustomEvent_ItemClass;
	Parms.K2Node_CustomEvent_LoadoutSlot = K2Node_CustomEvent_LoadoutSlot;
	Parms.K2Node_CustomEvent_Restricted = K2Node_CustomEvent_Restricted;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_CustomEvent_ItemToModify = K2Node_CustomEvent_ItemToModify;
	Parms.K2Node_CustomEvent_ActiveLoadout = K2Node_CustomEvent_ActiveLoadout;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_AttachmentListItem_1 = K2Node_CustomEvent_AttachmentListItem_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_AmmoType = K2Node_CustomEvent_AmmoType;
	Parms.K2Node_CustomEvent_WeaponData = K2Node_CustomEvent_WeaponData;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_CustomEvent_ArmourMaterial = K2Node_CustomEvent_ArmourMaterial;
	Parms.K2Node_CustomEvent_Attachment = K2Node_CustomEvent_Attachment;
	Parms.K2Node_CustomEvent_AttachingWeapon = K2Node_CustomEvent_AttachingWeapon;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_CustomEvent_AttachmentListItem = K2Node_CustomEvent_AttachmentListItem;
	Parms.K2Node_CustomEvent_LoadoutPreset = K2Node_CustomEvent_LoadoutPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoveAttachmentClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::OnInfoPanelRemoveAttachmentClicked__DelegateSignature(enum class EWeaponAttachmentType Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "OnInfoPanelRemoveAttachmentClicked__DelegateSignature");

	Params::UW_Loadout_InformationTable_C_OnInfoPanelRemoveAttachmentClicked__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelAttachmentClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::OnInfoPanelAttachmentClicked__DelegateSignature(enum class EWeaponAttachmentType Slot, class UClass* AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "OnInfoPanelAttachmentClicked__DelegateSignature");

	Params::UW_Loadout_InformationTable_C_OnInfoPanelAttachmentClicked__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.AttachmentData = AttachmentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnCancelRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_InformationTable_C::OnCancelRefresh__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "OnCancelRefresh__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_InformationTable_C::OnInfoPanelRemoved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "OnInfoPanelRemoved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnModifyWeaponButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_InformationTable_C::OnModifyWeaponButtonClicked__DelegateSignature(class UClass* ItemToModify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_InformationTable_C", "OnModifyWeaponButtonClicked__DelegateSignature");

	Params::UW_Loadout_InformationTable_C_OnModifyWeaponButtonClicked__DelegateSignature_Params Parms{};

	Parms.ItemToModify = ItemToModify;

	UObject::ProcessEvent(Func, &Parms);

}

}


