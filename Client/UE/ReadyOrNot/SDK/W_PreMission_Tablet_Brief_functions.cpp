#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C
// (None)

class UClass* UW_PreMission_Tablet_Brief_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Brief_C");

	return Clss;
}


// W_PreMission_Tablet_Brief_C W_PreMission_Tablet_Brief.Default__W_PreMission_Tablet_Brief_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Brief_C* UW_PreMission_Tablet_Brief_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Brief_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Brief_C*>(UW_PreMission_Tablet_Brief_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "GetFocusTarget");

	Params::UW_PreMission_Tablet_Brief_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BackPage");

	Params::UW_PreMission_Tablet_Brief_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.DispatchPlayingNotPaused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingAudio_Playing                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_PreMission_Tablet_Brief_C::DispatchPlayingNotPaused(bool CallFunc_IsPlayingAudio_Playing, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "DispatchPlayingNotPaused");

	Params::UW_PreMission_Tablet_Brief_C_DispatchPlayingNotPaused_Params Parms{};

	Parms.CallFunc_IsPlayingAudio_Playing = CallFunc_IsPlayingAudio_Playing;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.AutoPlayDispatchAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::AutoPlayDispatchAudio(bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "AutoPlayDispatchAudio");

	Params::UW_PreMission_Tablet_Brief_C_AutoPlayDispatchAudio_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.AutoPauseDispatchAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_DispatchPlayingNotPaused_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::AutoPauseDispatchAudio(bool CallFunc_DispatchPlayingNotPaused_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "AutoPauseDispatchAudio");

	Params::UW_PreMission_Tablet_Brief_C_AutoPauseDispatchAudio_Params Parms{};

	Parms.CallFunc_DispatchPlayingNotPaused_ReturnValue = CallFunc_DispatchPlayingNotPaused_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.SetupNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_C::SetupNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "SetupNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.SelectAudioEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_AudioEntry_C*AudioEntry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATablet*                     CallFunc_GetPlayerTablet_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::SelectAudioEntry(class UW_Briefing_Media_AudioEntry_C* AudioEntry, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ATablet* CallFunc_GetPlayerTablet_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "SelectAudioEntry");

	Params::UW_PreMission_Tablet_Brief_C_SelectAudioEntry_Params Parms{};

	Parms.AudioEntry = AudioEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetPlayerTablet_ReturnValue = CallFunc_GetPlayerTablet_ReturnValue;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.SelectGalleryImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_GalleryEntry_C*GalleryEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::SelectGalleryImage(class UW_Briefing_Media_GalleryEntry_C* GalleryEntry, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "SelectGalleryImage");

	Params::UW_PreMission_Tablet_Brief_C_SelectGalleryImage_Params Parms{};

	Parms.GalleryEntry = GalleryEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.SetGalleryImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionPhoto               MissionPhotoData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::SetGalleryImage(const struct FMissionPhoto& MissionPhotoData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "SetGalleryImage");

	Params::UW_PreMission_Tablet_Brief_C_SetGalleryImage_Params Parms{};

	Parms.MissionPhotoData = MissionPhotoData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_3 = CallFunc_IsVisible_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.PopulateGallery
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_GalleryEntry_C*NewWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionPhoto               PhotoData                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Media_GalleryEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionPhoto               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_PreMission_Tablet_Brief_C::PopulateGallery(class UW_Briefing_Media_GalleryEntry_C* NewWidget, int32 CurrentIndex, const struct FMissionPhoto& PhotoData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Briefing_Media_GalleryEntry_C* CallFunc_Create_ReturnValue, const struct FMissionPhoto& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "PopulateGallery");

	Params::UW_PreMission_Tablet_Brief_C_PopulateGallery_Params Parms{};

	Parms.NewWidget = NewWidget;
	Parms.CurrentIndex = CurrentIndex;
	Parms.PhotoData = PhotoData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.PopulateAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_AudioEntry_C*NewWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Media_AudioEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionAudio               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::PopulateAudio(class UW_Briefing_Media_AudioEntry_C* NewWidget, class UW_Briefing_Media_AudioEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMissionAudio& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "PopulateAudio");

	Params::UW_PreMission_Tablet_Brief_C_PopulateAudio_Params Parms{};

	Parms.NewWidget = NewWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.PopulateCivilians
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PreMission_Tablet_Brief_SubjectListItem_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::PopulateCivilians(class UW_PreMission_Tablet_Brief_SubjectListItem_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FCharacterBio& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "PopulateCivilians");

	Params::UW_PreMission_Tablet_Brief_C_PopulateCivilians_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.PopulateSuspects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PreMission_Tablet_Brief_SubjectListItem_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio               CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::PopulateSuspects(class UW_PreMission_Tablet_Brief_SubjectListItem_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterBio& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "PopulateSuspects");

	Params::UW_PreMission_Tablet_Brief_C_PopulateSuspects_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.NavigatePage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ClickedButton                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::NavigatePage(class UW_Button_C*& ClickedButton, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "NavigatePage");

	Params::UW_PreMission_Tablet_Brief_C_NavigatePage_Params Parms{};

	Parms.ClickedButton = ClickedButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.UpdateMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MissionURL                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       MissionData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_GetSelectedModeName_OutName                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedModeName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::UpdateMission(const class FString& MissionURL, const struct FLevelDataLookupTable& MissionData, const class FString& CallFunc_GetSelectedModeName_OutName, bool CallFunc_GetSelectedModeName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "UpdateMission");

	Params::UW_PreMission_Tablet_Brief_C_UpdateMission_Params Parms{};

	Parms.MissionURL = MissionURL;
	Parms.MissionData = MissionData;
	Parms.CallFunc_GetSelectedModeName_OutName = CallFunc_GetSelectedModeName_OutName;
	Parms.CallFunc_GetSelectedModeName_ReturnValue = CallFunc_GetSelectedModeName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.SetVisualTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDarkTheme                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::SetVisualTheme(bool UseDarkTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "SetVisualTheme");

	Params::UW_PreMission_Tablet_Brief_C_SetVisualTheme_Params Parms{};

	Parms.UseDarkTheme = UseDarkTheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.AudioPlayerVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AudioPlayer_C*            PlayerWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "AudioPlayerVisible");

	Params::UW_PreMission_Tablet_Brief_C_AudioPlayerVisible_Params Parms{};

	Parms.PlayerWidget = PlayerWidget;
	Parms.PlayerVisible = PlayerVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "SetInputMode");

	Params::UW_PreMission_Tablet_Brief_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "ChangePage");

	Params::UW_PreMission_Tablet_Brief_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "PreConstruct");

	Params::UW_PreMission_Tablet_Brief_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "Tick");

	Params::UW_PreMission_Tablet_Brief_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.MissionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MissionURL                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PreMission_Tablet_Brief_C::MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "MissionChanged");

	Params::UW_PreMission_Tablet_Brief_C_MissionChanged_Params Parms{};

	Parms.MissionURL = MissionURL;
	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BndEvt__W_PreMission_Tablet_Brief_btn_Overview_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::BndEvt__W_PreMission_Tablet_Brief_btn_Overview_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BndEvt__W_PreMission_Tablet_Brief_btn_Overview_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Brief_C_BndEvt__W_PreMission_Tablet_Brief_btn_Overview_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BndEvt__W_PreMission_Tablet_Brief_btn_Suspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::BndEvt__W_PreMission_Tablet_Brief_btn_Suspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BndEvt__W_PreMission_Tablet_Brief_btn_Suspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Brief_C_BndEvt__W_PreMission_Tablet_Brief_btn_Suspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BndEvt__W_PreMission_Tablet_Brief_btn_Media_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::BndEvt__W_PreMission_Tablet_Brief_btn_Media_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BndEvt__W_PreMission_Tablet_Brief_btn_Media_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Brief_C_BndEvt__W_PreMission_Tablet_Brief_btn_Media_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.OnInputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::OnInputChange(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "OnInputChange");

	Params::UW_PreMission_Tablet_Brief_C_OnInputChange_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.GalleryItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_GalleryEntry_C*GalleryEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::GalleryItemClicked(class UW_Briefing_Media_GalleryEntry_C* GalleryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "GalleryItemClicked");

	Params::UW_PreMission_Tablet_Brief_C_GalleryItemClicked_Params Parms{};

	Parms.GalleryEntry = GalleryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.AudioItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_AudioEntry_C*AudioEntry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::AudioItemClicked(class UW_Briefing_Media_AudioEntry_C* AudioEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "AudioItemClicked");

	Params::UW_PreMission_Tablet_Brief_C_AudioItemClicked_Params Parms{};

	Parms.AudioEntry = AudioEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_4_OnStop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_C::BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_4_OnStop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_4_OnStop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_5_OnPlay__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_C::BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_5_OnPlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_5_OnPlay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_3_OnAudioCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_C::BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_3_OnAudioCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BndEvt__W_PreMission_Tablet_Brief_MediaAudioPlayer_K2Node_ComponentBoundEvent_3_OnAudioCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.SetTabletState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAwake                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::SetTabletState(bool IsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "SetTabletState");

	Params::UW_PreMission_Tablet_Brief_C_SetTabletState_Params Parms{};

	Parms.IsAwake = IsAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "Reveal");

	Params::UW_PreMission_Tablet_Brief_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "Hide");

	Params::UW_PreMission_Tablet_Brief_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.BndEvt__W_PreMission_Tablet_Brief_btn_Civilians_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_C::BndEvt__W_PreMission_Tablet_Brief_btn_Civilians_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "BndEvt__W_PreMission_Tablet_Brief_btn_Civilians_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Brief_C_BndEvt__W_PreMission_Tablet_Brief_btn_Civilians_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Brief.W_PreMission_Tablet_Brief_C.ExecuteUbergraph_W_PreMission_Tablet_Brief
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_UseDarkTheme                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AudioPlayer_C*            K2Node_Event_PlayerWidget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayerVisible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_MissionURL                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       K2Node_Event_LevelData                                           (None)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_UpdateGamepadButtonNavigation_SelectedButton            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateGamepadButtonNavigation_IsNewButton               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_DynamicCast_AsW_Button                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Briefing_Media_GalleryEntry_C*K2Node_CustomEvent_GalleryEntry                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_Media_AudioEntry_C*K2Node_CustomEvent_AudioEntry                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DispatchPlayingNotPaused_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsAwake                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Brief_C::ExecuteUbergraph_W_PreMission_Tablet_Brief(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_UseDarkTheme, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& K2Node_Event_MissionURL, const struct FLevelDataLookupTable& K2Node_Event_LevelData, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_UpdateGamepadButtonNavigation_SelectedButton, bool CallFunc_UpdateGamepadButtonNavigation_IsNewButton, class UW_Button_C* K2Node_DynamicCast_AsW_Button, bool K2Node_DynamicCast_bSuccess, class UW_Briefing_Media_GalleryEntry_C* K2Node_CustomEvent_GalleryEntry, class UW_Briefing_Media_AudioEntry_C* K2Node_CustomEvent_AudioEntry, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_DispatchPlayingNotPaused_ReturnValue, bool K2Node_Event_IsAwake, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_C", "ExecuteUbergraph_W_PreMission_Tablet_Brief");

	Params::UW_PreMission_Tablet_Brief_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_UseDarkTheme = K2Node_Event_UseDarkTheme;
	Parms.K2Node_Event_PlayerWidget = K2Node_Event_PlayerWidget;
	Parms.K2Node_Event_PlayerVisible = K2Node_Event_PlayerVisible;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_MissionURL = K2Node_Event_MissionURL;
	Parms.K2Node_Event_LevelData = K2Node_Event_LevelData;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_UpdateGamepadButtonNavigation_SelectedButton = CallFunc_UpdateGamepadButtonNavigation_SelectedButton;
	Parms.CallFunc_UpdateGamepadButtonNavigation_IsNewButton = CallFunc_UpdateGamepadButtonNavigation_IsNewButton;
	Parms.K2Node_DynamicCast_AsW_Button = K2Node_DynamicCast_AsW_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_GalleryEntry = K2Node_CustomEvent_GalleryEntry;
	Parms.K2Node_CustomEvent_AudioEntry = K2Node_CustomEvent_AudioEntry;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_DispatchPlayingNotPaused_ReturnValue = CallFunc_DispatchPlayingNotPaused_ReturnValue;
	Parms.K2Node_Event_IsAwake = K2Node_Event_IsAwake;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;

	UObject::ProcessEvent(Func, &Parms);

}

}


