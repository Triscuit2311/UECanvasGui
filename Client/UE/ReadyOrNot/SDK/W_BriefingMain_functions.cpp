#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BriefingMain.W_BriefingMain_C
// (None)

class UClass* UW_BriefingMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BriefingMain_C");

	return Clss;
}


// W_BriefingMain_C W_BriefingMain.Default__W_BriefingMain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BriefingMain_C* UW_BriefingMain_C::GetDefaultObj()
{
	static class UW_BriefingMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BriefingMain_C*>(UW_BriefingMain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BriefingMain.W_BriefingMain_C.SetBriefingTaskButtonsActive
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

void UW_BriefingMain_C::SetBriefingTaskButtonsActive(bool Active, bool IsActive, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingMain_C", "SetBriefingTaskButtonsActive");

	Params::UW_BriefingMain_C_SetBriefingTaskButtonsActive_Params Parms{};

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


// Function W_BriefingMain.W_BriefingMain_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_BriefingMain_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingMain_C", "OnMouseButtonDoubleClick");

	Params::UW_BriefingMain_C_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BriefingMain.W_BriefingMain_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_BriefingMain_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingMain_C", "PreConstruct");

	Params::UW_BriefingMain_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BriefingMain.W_BriefingMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_BriefingMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingMain_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BriefingMain.W_BriefingMain_C.ExecuteUbergraph_W_BriefingMain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BriefingBio_ProfileRight_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BriefingTaskButton_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetWhiteboardObjectiveText_OutString                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_GetLevelNickname_OutNickname                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios                                         (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FCharacterBio               CallFunc_Array_Get_Item_1                                        (None)
// TArray<struct FCriminalRecord>     CallFunc_GetBioDetails_RapSheet                                  (ReferenceParm)
// class UTexture2D*                  CallFunc_GetBioDetails_ProfileImage                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutDescription                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutBioText                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCharacterBio>       CallFunc_GetBios_OutBios_1                                       (ReferenceParm)
// struct FCharacterBio               CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCriminalRecord>     CallFunc_GetBioDetails_RapSheet_1                                (ReferenceParm)
// class UTexture2D*                  CallFunc_GetBioDetails_ProfileImage_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutDescription_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBioDetails_OutBioText_1                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetWhiteboardTimelineAsString_OutString                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// TArray<class UW_BriefingTaskButton_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_BriefingBio_ProfileLeft_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BriefingMain_C::ExecuteUbergraph_W_BriefingMain(int32 EntryPoint, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, class UW_BriefingBio_ProfileRight_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetWhiteboardObjectiveText_OutString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetLevelNickname_OutNickname, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FCharacterBio& CallFunc_Array_Get_Item_1, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet, class UTexture2D* CallFunc_GetBioDetails_ProfileImage, const class FString& CallFunc_GetBioDetails_OutDescription, const class FString& CallFunc_GetBioDetails_OutBioText, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_1, const struct FCharacterBio& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet_1, class UTexture2D* CallFunc_GetBioDetails_ProfileImage_1, const class FString& CallFunc_GetBioDetails_OutDescription_1, const class FString& CallFunc_GetBioDetails_OutBioText_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const class FString& CallFunc_GetWhiteboardTimelineAsString_OutString, class FText CallFunc_Conv_StringToText_ReturnValue_7, TArray<class UW_BriefingTaskButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_BriefingBio_ProfileLeft_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BriefingMain_C", "ExecuteUbergraph_W_BriefingMain");

	Params::UW_BriefingMain_C_ExecuteUbergraph_W_BriefingMain_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPremissionPlanning_ReturnValue = CallFunc_GetPremissionPlanning_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio = CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetWhiteboardObjectiveText_OutString = CallFunc_GetWhiteboardObjectiveText_OutString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetLevelNickname_OutNickname = CallFunc_GetLevelNickname_OutNickname;
	Parms.CallFunc_GetBios_OutBios = CallFunc_GetBios_OutBios;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetBioDetails_RapSheet = CallFunc_GetBioDetails_RapSheet;
	Parms.CallFunc_GetBioDetails_ProfileImage = CallFunc_GetBioDetails_ProfileImage;
	Parms.CallFunc_GetBioDetails_OutDescription = CallFunc_GetBioDetails_OutDescription;
	Parms.CallFunc_GetBioDetails_OutBioText = CallFunc_GetBioDetails_OutBioText;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetBios_OutBios_1 = CallFunc_GetBios_OutBios_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetBioDetails_RapSheet_1 = CallFunc_GetBioDetails_RapSheet_1;
	Parms.CallFunc_GetBioDetails_ProfileImage_1 = CallFunc_GetBioDetails_ProfileImage_1;
	Parms.CallFunc_GetBioDetails_OutDescription_1 = CallFunc_GetBioDetails_OutDescription_1;
	Parms.CallFunc_GetBioDetails_OutBioText_1 = CallFunc_GetBioDetails_OutBioText_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetWhiteboardTimelineAsString_OutString = CallFunc_GetWhiteboardTimelineAsString_OutString;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


