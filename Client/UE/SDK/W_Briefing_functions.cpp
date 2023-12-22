#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing.W_Briefing_C
// (None)

class UClass* UW_Briefing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_C");

	return Clss;
}


// W_Briefing_C W_Briefing.Default__W_Briefing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_C* UW_Briefing_C::GetDefaultObj()
{
	static class UW_Briefing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_C*>(UW_Briefing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing.W_Briefing_C.GetObjectives
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TSoftClassPtr<class AObjective>>Objectives                                                       (Parm, OutParm)
// TArray<TSoftClassPtr<class UChallenge>>Challenges                                                       (Parm, OutParm)

void UW_Briefing_C::GetObjectives(TArray<TSoftClassPtr<class AObjective>>* Objectives, TArray<TSoftClassPtr<class UChallenge>>* Challenges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "GetObjectives");

	Params::UW_Briefing_C_GetObjectives_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Objectives != nullptr)
		*Objectives = std::move(Parms.Objectives);

	if (Challenges != nullptr)
		*Challenges = std::move(Parms.Challenges);

}


// Function W_Briefing.W_Briefing_C.GetBriefingAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMissionAudio>       Audio                                                            (Parm, OutParm)
// TArray<struct FTimelineEvent>      TimelineEvents                                                   (Parm, OutParm)

void UW_Briefing_C::GetBriefingAudio(TArray<struct FMissionAudio>* Audio, TArray<struct FTimelineEvent>* TimelineEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "GetBriefingAudio");

	Params::UW_Briefing_C_GetBriefingAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Audio != nullptr)
		*Audio = std::move(Parms.Audio);

	if (TimelineEvents != nullptr)
		*TimelineEvents = std::move(Parms.TimelineEvents);

}


// Function W_Briefing.W_Briefing_C.Original
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BriefingBio_ProfileLeft_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios                                         (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_BriefingTaskButton_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_BriefingBio_ProfileRight_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios_1                                       (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio               CallFunc_Array_Get_Item                                          (None)
// TArray<struct FCriminalRecord>     CallFunc_GetBioDetails_RapSheet                                  (ReferenceParm)
// class UTexture2D*                  CallFunc_GetBioDetails_ProfileImage                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutDescription                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutBioText                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BriefingTaskButton_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio               CallFunc_Array_Get_Item_2                                        (None)
// TArray<struct FCriminalRecord>     CallFunc_GetBioDetails_RapSheet_1                                (ReferenceParm)
// class UTexture2D*                  CallFunc_GetBioDetails_ProfileImage_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutDescription_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutBioText_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_C::Original(int32 Temp_int_Array_Index_Variable, class UW_BriefingBio_ProfileLeft_C* CallFunc_Create_ReturnValue, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UW_BriefingTaskButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_BriefingBio_ProfileRight_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_1, int32 Temp_int_Loop_Counter_Variable_2, const struct FCharacterBio& CallFunc_Array_Get_Item, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet, class UTexture2D* CallFunc_GetBioDetails_ProfileImage, const class FString& CallFunc_GetBioDetails_OutDescription, const class FString& CallFunc_GetBioDetails_OutBioText, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item_1, const struct FCharacterBio& CallFunc_Array_Get_Item_2, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet_1, class UTexture2D* CallFunc_GetBioDetails_ProfileImage_1, const class FString& CallFunc_GetBioDetails_OutDescription_1, const class FString& CallFunc_GetBioDetails_OutBioText_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "Original");

	Params::UW_Briefing_C_Original_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetBios_OutBios = CallFunc_GetBios_OutBios;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetBios_OutBios_1 = CallFunc_GetBios_OutBios_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetBioDetails_RapSheet = CallFunc_GetBioDetails_RapSheet;
	Parms.CallFunc_GetBioDetails_ProfileImage = CallFunc_GetBioDetails_ProfileImage;
	Parms.CallFunc_GetBioDetails_OutDescription = CallFunc_GetBioDetails_OutDescription;
	Parms.CallFunc_GetBioDetails_OutBioText = CallFunc_GetBioDetails_OutBioText;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetBioDetails_RapSheet_1 = CallFunc_GetBioDetails_RapSheet_1;
	Parms.CallFunc_GetBioDetails_ProfileImage_1 = CallFunc_GetBioDetails_ProfileImage_1;
	Parms.CallFunc_GetBioDetails_OutDescription_1 = CallFunc_GetBioDetails_OutDescription_1;
	Parms.CallFunc_GetBioDetails_OutBioText_1 = CallFunc_GetBioDetails_OutBioText_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio = CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing.W_Briefing_C.SetBriefingTaskButtonsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsActive                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BriefingTaskButton_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_C::SetBriefingTaskButtonsActive(bool Active, bool IsActive, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "SetBriefingTaskButtonsActive");

	Params::UW_Briefing_C_SetBriefingTaskButtonsActive_Params Parms{};

	Parms.Active = Active;
	Parms.IsActive = IsActive;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing.W_Briefing_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Briefing_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "OnMouseButtonDoubleClick");

	Params::UW_Briefing_C_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Briefing.W_Briefing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing.W_Briefing_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "PreConstruct");

	Params::UW_Briefing_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing.W_Briefing_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing.W_Briefing_C.Reveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_C::Reveal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "Reveal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing.W_Briefing_C.ExecuteUbergraph_W_Briefing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios                                         (ReferenceParm)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios_1                                       (ReferenceParm)
// struct FST_Briefing_Intel          K2Node_MakeStruct_ST_Briefing_Intel                              (HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetLevelLookupDataTable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMissionAudio>       CallFunc_GetBriefingAudio_Audio                                  (ReferenceParm)
// TArray<struct FTimelineEvent>      CallFunc_GetBriefingAudio_TimelineEvents                         (ReferenceParm)
// struct FLevelDataLookupTable       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetLevelLookupDataTable_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios_2                                       (ReferenceParm)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios_3                                       (ReferenceParm)
// struct FST_Briefing_Intel          K2Node_MakeStruct_ST_Briefing_Intel_1                            (HasGetValueTypeHash)
// TArray<struct FMissionAudio>       CallFunc_GetBriefingAudio_Audio_1                                (ReferenceParm)
// TArray<struct FTimelineEvent>      CallFunc_GetBriefingAudio_TimelineEvents_1                       (ReferenceParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMissionAudio               CallFunc_GetBriefing_OutBriefing                                 (None)
// struct FMissionAudio               CallFunc_GetBriefing_OutBriefing_1                               (None)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_C::ExecuteUbergraph_W_Briefing(int32 EntryPoint, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_1, const struct FST_Briefing_Intel& K2Node_MakeStruct_ST_Briefing_Intel, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, TArray<struct FMissionAudio>& CallFunc_GetBriefingAudio_Audio, TArray<struct FTimelineEvent>& CallFunc_GetBriefingAudio_TimelineEvents, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue_1, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_2, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_3, const struct FST_Briefing_Intel& K2Node_MakeStruct_ST_Briefing_Intel_1, TArray<struct FMissionAudio>& CallFunc_GetBriefingAudio_Audio_1, TArray<struct FTimelineEvent>& CallFunc_GetBriefingAudio_TimelineEvents_1, bool K2Node_Event_IsDesignTime, const struct FMissionAudio& CallFunc_GetBriefing_OutBriefing, const struct FMissionAudio& CallFunc_GetBriefing_OutBriefing_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_C", "ExecuteUbergraph_W_Briefing");

	Params::UW_Briefing_C_ExecuteUbergraph_W_Briefing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBios_OutBios = CallFunc_GetBios_OutBios;
	Parms.CallFunc_GetBios_OutBios_1 = CallFunc_GetBios_OutBios_1;
	Parms.K2Node_MakeStruct_ST_Briefing_Intel = K2Node_MakeStruct_ST_Briefing_Intel;
	Parms.CallFunc_GetLevelLookupDataTable_ReturnValue = CallFunc_GetLevelLookupDataTable_ReturnValue;
	Parms.CallFunc_GetBriefingAudio_Audio = CallFunc_GetBriefingAudio_Audio;
	Parms.CallFunc_GetBriefingAudio_TimelineEvents = CallFunc_GetBriefingAudio_TimelineEvents;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetLevelLookupDataTable_ReturnValue_1 = CallFunc_GetLevelLookupDataTable_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetBios_OutBios_2 = CallFunc_GetBios_OutBios_2;
	Parms.CallFunc_GetBios_OutBios_3 = CallFunc_GetBios_OutBios_3;
	Parms.K2Node_MakeStruct_ST_Briefing_Intel_1 = K2Node_MakeStruct_ST_Briefing_Intel_1;
	Parms.CallFunc_GetBriefingAudio_Audio_1 = CallFunc_GetBriefingAudio_Audio_1;
	Parms.CallFunc_GetBriefingAudio_TimelineEvents_1 = CallFunc_GetBriefingAudio_TimelineEvents_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetBriefing_OutBriefing = CallFunc_GetBriefing_OutBriefing;
	Parms.CallFunc_GetBriefing_OutBriefing_1 = CallFunc_GetBriefing_OutBriefing_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


