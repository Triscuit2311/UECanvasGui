#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C
// (None)

class UClass* UW_PreMission_Tablet_MessengerMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_MessengerMessage_C");

	return Clss;
}


// W_PreMission_Tablet_MessengerMessage_C W_PreMission_Tablet_MessengerMessage.Default__W_PreMission_Tablet_MessengerMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_MessengerMessage_C* UW_PreMission_Tablet_MessengerMessage_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_MessengerMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_MessengerMessage_C*>(UW_PreMission_Tablet_MessengerMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.GetIsSelf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSelf                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_MessengerMessage_C::GetIsSelf(bool* IsSelf, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_MessengerMessage_C", "GetIsSelf");

	Params::UW_PreMission_Tablet_MessengerMessage_C_GetIsSelf_Params Parms{};

	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelf != nullptr)
		*IsSelf = Parms.IsSelf;

}


// Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_MessengerMessage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_MessengerMessage_C", "PreConstruct");

	Params::UW_PreMission_Tablet_MessengerMessage_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_MessengerMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_MessengerMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_MessengerMessage.W_PreMission_Tablet_MessengerMessage_C.ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_GetIsSelf_IsSelf                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_MessengerMessage_C::ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_GetIsSelf_IsSelf, class FText CallFunc_Conv_StringToText_ReturnValue_2, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_MessengerMessage_C", "ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage");

	Params::UW_PreMission_Tablet_MessengerMessage_C_ExecuteUbergraph_W_PreMission_Tablet_MessengerMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetIsSelf_IsSelf = CallFunc_GetIsSelf_IsSelf;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


