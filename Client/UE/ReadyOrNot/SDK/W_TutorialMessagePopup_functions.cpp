#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TutorialMessagePopup.W_TutorialMessagePopup_C
// (None)

class UClass* UW_TutorialMessagePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TutorialMessagePopup_C");

	return Clss;
}


// W_TutorialMessagePopup_C W_TutorialMessagePopup.Default__W_TutorialMessagePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TutorialMessagePopup_C* UW_TutorialMessagePopup_C::GetDefaultObj()
{
	static class UW_TutorialMessagePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TutorialMessagePopup_C*>(UW_TutorialMessagePopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TutorialMessagePopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessagePopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ShowMessagePrompt
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFirstShowing                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                Content                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_TutorialMessagePopup_C::ShowMessagePrompt(bool IsFirstShowing, class FText Title, TArray<class FText>& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessagePopup_C", "ShowMessagePrompt");

	Params::UW_TutorialMessagePopup_C_ShowMessagePrompt_Params Parms{};

	Parms.IsFirstShowing = IsFirstShowing;
	Parms.Title = Title;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.HideMessagePrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TutorialMessagePopup_C::HideMessagePrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessagePopup_C", "HideMessagePrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.UpdateMessageContent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Content                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_TutorialMessagePopup_C::UpdateMessageContent(TArray<class FText>& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessagePopup_C", "UpdateMessageContent");

	Params::UW_TutorialMessagePopup_C_UpdateMessageContent_Params Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ClearMessages
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_TutorialMessagePopup_C::ClearMessages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessagePopup_C", "ClearMessages");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TutorialMessagePopup.W_TutorialMessagePopup_C.ExecuteUbergraph_W_TutorialMessagePopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsFirstShowing                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Title                                         (None)
// TArray<class FText>                K2Node_CustomEvent_Content_1                                     (ConstParm, ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_TutorialMessageEntry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_CustomEvent_Content                                       (ConstParm, ReferenceParm)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TutorialMessagePopup_C::ExecuteUbergraph_W_TutorialMessagePopup(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_IsFirstShowing, class FText K2Node_CustomEvent_Title, TArray<class FText>& K2Node_CustomEvent_Content_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UW_TutorialMessageEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<class FText>& K2Node_CustomEvent_Content, class FText CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TutorialMessagePopup_C", "ExecuteUbergraph_W_TutorialMessagePopup");

	Params::UW_TutorialMessagePopup_C_ExecuteUbergraph_W_TutorialMessagePopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_IsFirstShowing = K2Node_CustomEvent_IsFirstShowing;
	Parms.K2Node_CustomEvent_Title = K2Node_CustomEvent_Title;
	Parms.K2Node_CustomEvent_Content_1 = K2Node_CustomEvent_Content_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CustomEvent_Content = K2Node_CustomEvent_Content;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


