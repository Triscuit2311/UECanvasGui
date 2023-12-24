#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PauseMenu.W_PauseMenu_C
// (None)

class UClass* UW_PauseMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PauseMenu_C");

	return Clss;
}


// W_PauseMenu_C W_PauseMenu.Default__W_PauseMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PauseMenu_C* UW_PauseMenu_C::GetDefaultObj()
{
	static class UW_PauseMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PauseMenu_C*>(UW_PauseMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PauseMenu.W_PauseMenu_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_PauseMenu_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BP_GetDesiredFocusTarget");

	Params::UW_PauseMenu_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.Get_btn_Lobby_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGS*                    K2Node_DynamicCast_AsLobby_GS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_PauseMenu_C::Get_btn_Lobby_Visibility_0(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobbyGS* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "Get_btn_Lobby_Visibility_0");

	Params::UW_PauseMenu_C_Get_btn_Lobby_Visibility_0_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GS = K2Node_DynamicCast_AsLobby_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.Get_btn_Invite_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGS*                    K2Node_DynamicCast_AsLobby_GS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_PauseMenu_C::Get_btn_Invite_Visibility_0(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobbyGS* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "Get_btn_Invite_Visibility_0");

	Params::UW_PauseMenu_C_Get_btn_Invite_Visibility_0_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GS = K2Node_DynamicCast_AsLobby_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_JoyIsKey_Ctrl                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Shift                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Alt                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Cmd                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Match                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_PauseMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_JoyIsKey_Ctrl, bool CallFunc_JoyIsKey_Shift, bool CallFunc_JoyIsKey_Alt, bool CallFunc_JoyIsKey_Cmd, bool CallFunc_JoyIsKey_Match, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "OnKeyDown");

	Params::UW_PauseMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_JoyIsKey_Ctrl = CallFunc_JoyIsKey_Ctrl;
	Parms.CallFunc_JoyIsKey_Shift = CallFunc_JoyIsKey_Shift;
	Parms.CallFunc_JoyIsKey_Alt = CallFunc_JoyIsKey_Alt;
	Parms.CallFunc_JoyIsKey_Cmd = CallFunc_JoyIsKey_Cmd;
	Parms.CallFunc_JoyIsKey_Match = CallFunc_JoyIsKey_Match;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.GetCallVoteEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_PauseMenu_C::GetCallVoteEnabled(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "GetCallVoteEnabled");

	Params::UW_PauseMenu_C_GetCallVoteEnabled_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.GetMissionBoxVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_PauseMenu_C::GetMissionBoxVisibility(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "GetMissionBoxVisibility");

	Params::UW_PauseMenu_C_GetMissionBoxVisibility_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.Get_HorizontalBox_25_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_PauseMenu_C::Get_HorizontalBox_25_Visibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "Get_HorizontalBox_25_Visibility_0");

	Params::UW_PauseMenu_C_Get_HorizontalBox_25_Visibility_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.Get_Version_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_PauseMenu_C::Get_Version_Text_0(const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "Get_Version_Text_0");

	Params::UW_PauseMenu_C_Get_Version_Text_0_Params Parms{};

	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PauseMenu.W_PauseMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PauseMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu.W_PauseMenu_C.Resume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PauseMenu_C::Resume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "Resume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_Resume_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_Invite_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_Options_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_Admin_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_Bug_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_Quit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_Vote_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "PreConstruct");

	Params::UW_PauseMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__btn_ConfirmAdminPassword_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PauseMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_Lobby_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_Replay_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__W_PauseMenu_btn_Quit_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PauseMenu.W_PauseMenu_C.BndEvt__W_PauseMenu_btn_LobbyManager_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PauseMenu_C::BndEvt__W_PauseMenu_btn_LobbyManager_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "BndEvt__W_PauseMenu_btn_LobbyManager_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	Params::UW_PauseMenu_C_BndEvt__W_PauseMenu_btn_LobbyManager_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PauseMenu.W_PauseMenu_C.ExecuteUbergraph_W_PauseMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBlueprintResultSwitch  CallFunc_ShowInviteUI_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAdminPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_MessageDisplayBox_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAdminPlayerController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_SettingsMenu_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_BugReporterMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_StreamInLevel_OutStreamedLevel                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StreamInLevel_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameMode*         K2Node_DynamicCast_AsReady_or_Not_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPublicMissionInProgress_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPublicMissionInProgress_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPublicLobbyCooldown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACommanderGM*                K2Node_DynamicCast_AsCommander_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PauseMenu_C::ExecuteUbergraph_W_PauseMenu(int32 EntryPoint, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class EBlueprintResultSwitch CallFunc_ShowInviteUI_Result, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_IsAdminPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class UBP_MessageDisplayBox_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsAdminPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, TArray<class UW_SettingsMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable_1, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UW_BugReporterMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_4, bool K2Node_DynamicCast_bSuccess_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_5, bool K2Node_DynamicCast_bSuccess_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_11, class UW_Button_C* K2Node_ComponentBoundEvent_Button_10, class UW_Button_C* K2Node_ComponentBoundEvent_Button_9, class UW_Button_C* K2Node_ComponentBoundEvent_Button_8, class UW_Button_C* K2Node_ComponentBoundEvent_Button_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_6, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_8, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_6, bool K2Node_DynamicCast_bSuccess_10, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class ULevelStreaming* CallFunc_StreamInLevel_OutStreamedLevel, bool CallFunc_StreamInLevel_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess_11, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_1, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_2, bool CallFunc_IsPublicMissionInProgress_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SetPublicLobbyCooldown_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_12, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PauseMenu_C", "ExecuteUbergraph_W_PauseMenu");

	Params::UW_PauseMenu_C_ExecuteUbergraph_W_PauseMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_ShowInviteUI_Result = CallFunc_ShowInviteUI_Result;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_IsAdminPlayerController_ReturnValue = CallFunc_IsAdminPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State_1 = K2Node_DynamicCast_AsReady_or_Not_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsAdminPlayerController_ReturnValue_1 = CallFunc_IsAdminPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_2 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_3 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_4 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_5 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1 = K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_6 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_6;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_StreamInLevel_OutStreamedLevel = CallFunc_StreamInLevel_OutStreamedLevel;
	Parms.CallFunc_StreamInLevel_ReturnValue = CallFunc_StreamInLevel_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Mode = K2Node_DynamicCast_AsReady_or_Not_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue_1 = CallFunc_GetReadyOrNotGameInstance_ReturnValue_1;
	Parms.CallFunc_IsPublicMissionInProgress_ReturnValue = CallFunc_IsPublicMissionInProgress_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue_2 = CallFunc_GetReadyOrNotGameInstance_ReturnValue_2;
	Parms.CallFunc_IsPublicMissionInProgress_ReturnValue_1 = CallFunc_IsPublicMissionInProgress_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetPublicLobbyCooldown_ReturnValue = CallFunc_SetPublicLobbyCooldown_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2 = K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_2 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_2;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCommander_GM = K2Node_DynamicCast_AsCommander_GM;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;

	UObject::ProcessEvent(Func, &Parms);

}

}


