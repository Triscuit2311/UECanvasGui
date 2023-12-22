#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayBrowser.W_ReplayBrowser_C
// (None)

class UClass* UW_ReplayBrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayBrowser_C");

	return Clss;
}


// W_ReplayBrowser_C W_ReplayBrowser.Default__W_ReplayBrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayBrowser_C* UW_ReplayBrowser_C::GetDefaultObj()
{
	static class UW_ReplayBrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayBrowser_C*>(UW_ReplayBrowser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReplayBrowser.W_ReplayBrowser_C.OpenReplayFolder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetProjectSavedDirectory_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UW_ReplayBrowser_C::OpenReplayFolder(const class FString& CallFunc_GetProjectSavedDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "OpenReplayFolder");

	Params::UW_ReplayBrowser_C_OpenReplayFolder_Params Parms{};

	Parms.CallFunc_GetProjectSavedDirectory_ReturnValue = CallFunc_GetProjectSavedDirectory_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.PlaySelectedReplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadyOrNotGameInstance*     GameInstance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFMODBus*>            CallFunc_GetAllFMODBusObjects_ReturnValue                        (ReferenceParm)
// class UFMODBus*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayBrowser_C::PlaySelectedReplay(class UReadyOrNotGameInstance* GameInstance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFMODBus*>& CallFunc_GetAllFMODBusObjects_ReturnValue, class UFMODBus* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "PlaySelectedReplay");

	Params::UW_ReplayBrowser_C_PlaySelectedReplay_Params Parms{};

	Parms.GameInstance = GameInstance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllFMODBusObjects_ReturnValue = CallFunc_GetAllFMODBusObjects_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.AddModalToCanvas
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Modal                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          PresetModal                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayBrowser_C::AddModalToCanvas(class UW_StandardModal_C* Modal, class UW_StandardModal_C** PresetModal, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "AddModalToCanvas");

	Params::UW_ReplayBrowser_C_AddModalToCanvas_Params Parms{};

	Parms.Modal = Modal;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PresetModal != nullptr)
		*PresetModal = Parms.PresetModal;

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.UpdateBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayBrowser_C::UpdateBackgroundImage(class UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "UpdateBackgroundImage");

	Params::UW_ReplayBrowser_C_UpdateBackgroundImage_Params Parms{};

	Parms.Texture = Texture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.CreateEntryWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReplayFileName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FReplayData                 ReplayData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplayEntry_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayBrowser_C::CreateEntryWidget(const class FString& ReplayFileName, const struct FReplayData& ReplayData, int32 Index, class UW_ReplayEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "CreateEntryWidget");

	Params::UW_ReplayBrowser_C_CreateEntryWidget_Params Parms{};

	Parms.ReplayFileName = ReplayFileName;
	Parms.ReplayData = ReplayData;
	Parms.Index = Index;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_SaveSettings_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Ctrl                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Shift                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Alt                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Cmd                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Match                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_ReplayBrowser_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool CallFunc_SaveSettings_ReturnValue, bool CallFunc_JoyIsKey_Ctrl, bool CallFunc_JoyIsKey_Shift, bool CallFunc_JoyIsKey_Alt, bool CallFunc_JoyIsKey_Cmd, bool CallFunc_JoyIsKey_Match, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "OnKeyDown");

	Params::UW_ReplayBrowser_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_SaveSettings_ReturnValue = CallFunc_SaveSettings_ReturnValue;
	Parms.CallFunc_JoyIsKey_Ctrl = CallFunc_JoyIsKey_Ctrl;
	Parms.CallFunc_JoyIsKey_Shift = CallFunc_JoyIsKey_Shift;
	Parms.CallFunc_JoyIsKey_Alt = CallFunc_JoyIsKey_Alt;
	Parms.CallFunc_JoyIsKey_Cmd = CallFunc_JoyIsKey_Cmd;
	Parms.CallFunc_JoyIsKey_Match = CallFunc_JoyIsKey_Match;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.Get_RenameButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_ReplayBrowser_C::Get_RenameButton_bIsEnabled_0(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "Get_RenameButton_bIsEnabled_0");

	Params::UW_ReplayBrowser_C_Get_RenameButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayBrowser_C::OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662");

	Params::UW_ReplayBrowser_C_OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.RefreshReplayList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayBrowser_C::RefreshReplayList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "RefreshReplayList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReplayBrowser_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.CreateRenameModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReplayName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReplayBrowser_C::CreateRenameModal(class FText ReplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "CreateRenameModal");

	Params::UW_ReplayBrowser_C_CreateRenameModal_Params Parms{};

	Parms.ReplayName = ReplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.RenameOkButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReplayBrowser_C::RenameOkButton(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "RenameOkButton");

	Params::UW_ReplayBrowser_C_RenameOkButton_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.EntrySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ReplayEntry_C*            ReplayEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayBrowser_C::EntrySelected(class UW_ReplayEntry_C* ReplayEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "EntrySelected");

	Params::UW_ReplayBrowser_C_EntrySelected_Params Parms{};

	Parms.ReplayEntry = ReplayEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.GetLevelPreviewImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayBrowser_C::GetLevelPreviewImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "GetLevelPreviewImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_0_OnRenameFileClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayBrowser_C::BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_0_OnRenameFileClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_0_OnRenameFileClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_1_OnDeleteReplayClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayBrowser_C::BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_1_OnDeleteReplayClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "BndEvt__W_ReplayBrowser_W_Replay_DetailPanel_K2Node_ComponentBoundEvent_1_OnDeleteReplayClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.CreateDeleteConfirmModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayBrowser_C::CreateDeleteConfirmModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "CreateDeleteConfirmModal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.DeleteReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReplayBrowser_C::DeleteReplay(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "DeleteReplay");

	Params::UW_ReplayBrowser_C_DeleteReplay_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ReplayBrowser_C::BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature");

	Params::UW_ReplayBrowser_C_BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.ModalCanceledButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReplayBrowser_C::ModalCanceledButton(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "ModalCanceledButton");

	Params::UW_ReplayBrowser_C_ModalCanceledButton_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayBrowser.W_ReplayBrowser_C.ExecuteUbergraph_W_ReplayBrowser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UW_StandardModal_C*          CallFunc_AddModalToCanvas_PresetModal                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FReplayData>CallFunc_FindReplays_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FReplayData                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        K2Node_CustomEvent_ReplayName                                    (None)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_2                                   (None)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ReplayEntry_C*            K2Node_CustomEvent_ReplayEntry                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetLevelLookupDataTable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// class FText                        Temp_text_Variable_5                                             (ConstParm)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_1                                   (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FText                        Temp_text_Variable_6                                             (ConstParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayBrowser_C::ExecuteUbergraph_W_ReplayBrowser(int32 EntryPoint, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UW_StandardModal_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_StandardModal_C* CallFunc_AddModalToCanvas_PresetModal, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, TMap<class FString, struct FReplayData> CallFunc_FindReplays_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const struct FReplayData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText Temp_text_Variable, class FText K2Node_CustomEvent_ReplayName, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UW_ReplayEntry_C* K2Node_CustomEvent_ReplayEntry, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FText Temp_text_Variable_6, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayBrowser_C", "ExecuteUbergraph_W_ReplayBrowser");

	Params::UW_ReplayBrowser_C_ExecuteUbergraph_W_ReplayBrowser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddModalToCanvas_PresetModal = CallFunc_AddModalToCanvas_PresetModal;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindReplays_ReturnValue = CallFunc_FindReplays_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CustomEvent_ReplayName = K2Node_CustomEvent_ReplayName;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.K2Node_CustomEvent_TextEntry_2 = K2Node_CustomEvent_TextEntry_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1 = K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_ReplayEntry = K2Node_CustomEvent_ReplayEntry;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetLevelLookupDataTable_ReturnValue = CallFunc_GetLevelLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.K2Node_CustomEvent_TextEntry_1 = K2Node_CustomEvent_TextEntry_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2 = K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


