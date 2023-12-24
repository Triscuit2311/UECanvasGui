#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu_V3.W_MainMenu_V3_C
// (None)

class UClass* UW_MainMenu_V3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_V3_C");

	return Clss;
}


// W_MainMenu_V3_C W_MainMenu_V3.Default__W_MainMenu_V3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_V3_C* UW_MainMenu_V3_C::GetDefaultObj()
{
	static class UW_MainMenu_V3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_V3_C*>(UW_MainMenu_V3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Initialize Mod Installing Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Initialize_Mod_Installing_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Initialize Mod Installing Modal");

	Params::UW_MainMenu_V3_C_Initialize_Mod_Installing_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Set Safe Mode Text Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetRONGameInstance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSafeMode_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetWidgetsFromViewport_ReturnValue                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PermanentOverlay_C*       K2Node_DynamicCast_AsW_Permanent_Overlay                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::Set_Safe_Mode_Text_Visibility(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetRONGameInstance_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsSafeMode_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetWidgetsFromViewport_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_PermanentOverlay_C* K2Node_DynamicCast_AsW_Permanent_Overlay, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Set Safe Mode Text Visibility");

	Params::UW_MainMenu_V3_C_Set_Safe_Mode_Text_Visibility_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRONGameInstance_ReturnValue = CallFunc_GetRONGameInstance_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsSafeMode_ReturnValue = CallFunc_IsSafeMode_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetWidgetsFromViewport_ReturnValue = CallFunc_GetWidgetsFromViewport_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Permanent_Overlay = K2Node_DynamicCast_AsW_Permanent_Overlay;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.On Cancel Icon Mouse Button Down 0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_MainMenu_V3_C::On_Cancel_Icon_Mouse_Button_Down_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "On Cancel Icon Mouse Button Down 0");

	Params::UW_MainMenu_V3_C_On_Cancel_Icon_Mouse_Button_Down_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Initialize Restart Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Initialize_Restart_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Initialize Restart Modal");

	Params::UW_MainMenu_V3_C_Initialize_Restart_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Initialize Tutorial Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Initialize_Tutorial_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Initialize Tutorial Modal");

	Params::UW_MainMenu_V3_C_Initialize_Tutorial_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.ContinueButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TutorialMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContinueCommanderMode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::ContinueButtonClicked(bool TutorialMode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanContinueCommanderMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "ContinueButtonClicked");

	Params::UW_MainMenu_V3_C_ContinueButtonClicked_Params Parms{};

	Parms.TutorialMode = TutorialMode;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanContinueCommanderMode_ReturnValue = CallFunc_CanContinueCommanderMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.SetupContinueButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContinueCommanderMode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::SetupContinueButton(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanContinueCommanderMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "SetupContinueButton");

	Params::UW_MainMenu_V3_C_SetupContinueButton_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanContinueCommanderMode_ReturnValue = CallFunc_CanContinueCommanderMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UW_MainMenu_V3_C::BP_GetDesiredFocusTarget(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BP_GetDesiredFocusTarget");

	Params::UW_MainMenu_V3_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Get_Replay_Btn_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReplaySystemEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_MainMenu_V3_C::Get_Replay_Btn_Visibility_0(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReplaySystemEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Get_Replay_Btn_Visibility_0");

	Params::UW_MainMenu_V3_C_Get_Replay_Btn_Visibility_0_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsReplaySystemEnabled_ReturnValue = CallFunc_IsReplaySystemEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.FadeInMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::FadeInMenu(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "FadeInMenu");

	Params::UW_MainMenu_V3_C_FadeInMenu_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnMouseButtonDown_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FEventReply UW_MainMenu_V3_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnMouseButtonDown_0");

	Params::UW_MainMenu_V3_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnUpdateSessionSearch_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bComplete                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        OutMessage                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bPVPSearch                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::OnUpdateSessionSearch_Event_0(bool bComplete, class FText OutMessage, bool bPVPSearch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnUpdateSessionSearch_Event_0");

	Params::UW_MainMenu_V3_C_OnUpdateSessionSearch_Event_0_Params Parms{};

	Parms.bComplete = bComplete;
	Parms.OutMessage = OutMessage;
	Parms.bPVPSearch = bPVPSearch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.RetryLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::RetryLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "RetryLogin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.RegainFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::RegainFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "RegainFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "PreConstruct");

	Params::UW_MainMenu_V3_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnModMenuClosed
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::OnModMenuClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnModMenuClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Clear Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Clear_Focus(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Clear Focus");

	Params::UW_MainMenu_V3_C_Clear_Focus_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.No
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::No(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "No");

	Params::UW_MainMenu_V3_C_No_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Cancel(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Cancel");

	Params::UW_MainMenu_V3_C_Cancel_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Yes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Yes(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Yes");

	Params::UW_MainMenu_V3_C_Yes_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Restart Game
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Restart_Game(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Restart Game");

	Params::UW_MainMenu_V3_C_Restart_Game_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Cancel Restart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Cancel_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Cancel Restart");

	Params::UW_MainMenu_V3_C_Cancel_Restart_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.ExecuteUbergraph_W_MainMenu_V3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bComplete                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_OutMessage                                    (None)
// bool                               K2Node_CustomEvent_bPVPSearch                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UW_SettingsMenuGamepad_C*    CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ReplayBrowser_C*          CallFunc_BP_AddWidget_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenModMenu_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowModsButton_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_CommanderProfileSelect_C* CallFunc_BP_AddWidget_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_4                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_3                                   (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_2                                   (None)
// class UW_StandardModal_C*          CallFunc_Initialize_Tutorial_Modal_OutPopup                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedTraining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContinueCommanderMode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Credits_C*                CallFunc_BP_AddWidget_ReturnValue_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          CallFunc_Initialize_Restart_Modal_OutPopup                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_1                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_ComponentBoundEvent_InVisibility                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowRestartDialog_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_V3_C::ExecuteUbergraph_W_MainMenu_V3(int32 EntryPoint, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool K2Node_CustomEvent_bComplete, class FText K2Node_CustomEvent_OutMessage, bool K2Node_CustomEvent_bPVPSearch, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_1, bool K2Node_DynamicCast_bSuccess_1, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_3, bool K2Node_DynamicCast_bSuccess_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_4, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UW_SettingsMenuGamepad_C* CallFunc_BP_AddWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_14, bool K2Node_ComponentBoundEvent_Selected_2, class UW_ReplayBrowser_C* CallFunc_BP_AddWidget_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_13, bool K2Node_ComponentBoundEvent_Selected_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_12, bool K2Node_ComponentBoundEvent_Selected, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_OpenModMenu_ReturnValue, bool CallFunc_ShouldShowModsButton_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UW_CommanderProfileSelect_C* CallFunc_BP_AddWidget_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_4, class FText K2Node_CustomEvent_TextEntry_3, class UStandardModal* K2Node_CustomEvent_CallingModal_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_2, class UW_StandardModal_C* CallFunc_Initialize_Tutorial_Modal_OutPopup, bool CallFunc_HasCompletedTraining_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_6, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_CanContinueCommanderMode_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UW_Credits_C* CallFunc_BP_AddWidget_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UW_StandardModal_C* CallFunc_Initialize_Restart_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility K2Node_ComponentBoundEvent_InVisibility, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_ShouldShowRestartDialog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "ExecuteUbergraph_W_MainMenu_V3");

	Params::UW_MainMenu_V3_C_ExecuteUbergraph_W_MainMenu_V3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_CustomEvent_bComplete = K2Node_CustomEvent_bComplete;
	Parms.K2Node_CustomEvent_OutMessage = K2Node_CustomEvent_OutMessage;
	Parms.K2Node_CustomEvent_bPVPSearch = K2Node_CustomEvent_bPVPSearch;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_1 = K2Node_DynamicCast_AsMain_Menu_GM_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_2 = K2Node_DynamicCast_AsMain_Menu_GM_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_3 = CallFunc_GetGameMode_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_3 = K2Node_DynamicCast_AsMain_Menu_GM_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameMode_ReturnValue_4 = CallFunc_GetGameMode_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_4 = K2Node_DynamicCast_AsMain_Menu_GM_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Selected_2 = K2Node_ComponentBoundEvent_Selected_2;
	Parms.CallFunc_BP_AddWidget_ReturnValue_1 = CallFunc_BP_AddWidget_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_Selected_1 = K2Node_ComponentBoundEvent_Selected_1;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetGameMode_ReturnValue_5 = CallFunc_GetGameMode_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_5 = K2Node_DynamicCast_AsMain_Menu_GM_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_OpenModMenu_ReturnValue = CallFunc_OpenModMenu_ReturnValue;
	Parms.CallFunc_ShouldShowModsButton_ReturnValue = CallFunc_ShouldShowModsButton_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_BP_AddWidget_ReturnValue_2 = CallFunc_BP_AddWidget_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal_4 = K2Node_CustomEvent_CallingModal_4;
	Parms.K2Node_CustomEvent_TextEntry_3 = K2Node_CustomEvent_TextEntry_3;
	Parms.K2Node_CustomEvent_CallingModal_3 = K2Node_CustomEvent_CallingModal_3;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.K2Node_CustomEvent_TextEntry_2 = K2Node_CustomEvent_TextEntry_2;
	Parms.CallFunc_Initialize_Tutorial_Modal_OutPopup = CallFunc_Initialize_Tutorial_Modal_OutPopup;
	Parms.CallFunc_HasCompletedTraining_ReturnValue = CallFunc_HasCompletedTraining_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_6 = CallFunc_GetGameMode_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_6 = K2Node_DynamicCast_AsMain_Menu_GM_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_CanContinueCommanderMode_ReturnValue = CallFunc_CanContinueCommanderMode_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_BP_AddWidget_ReturnValue_3 = CallFunc_BP_AddWidget_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Initialize_Restart_Modal_OutPopup = CallFunc_Initialize_Restart_Modal_OutPopup;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.K2Node_CustomEvent_TextEntry_1 = K2Node_CustomEvent_TextEntry_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InVisibility = K2Node_ComponentBoundEvent_InVisibility;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_ShouldShowRestartDialog_ReturnValue = CallFunc_ShouldShowRestartDialog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.ModioClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::ModioClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "ModioClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


