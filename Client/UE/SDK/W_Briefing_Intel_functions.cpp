#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Intel.W_Briefing_Intel_C
// (None)

class UClass* UW_Briefing_Intel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Intel_C");

	return Clss;
}


// W_Briefing_Intel_C W_Briefing_Intel.Default__W_Briefing_Intel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Intel_C* UW_Briefing_Intel_C::GetDefaultObj()
{
	static class UW_Briefing_Intel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Intel_C*>(UW_Briefing_Intel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Briefing_Evidence>MediaIntel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_Briefing_Intel_C::InitMedia(TArray<struct FST_Briefing_Evidence>& MediaIntel, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitMedia");

	Params::UW_Briefing_Intel_C_InitMedia_Params Parms{};

	Parms.MediaIntel = MediaIntel;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterBio>       CivilianBios                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_Briefing_Intel_C::InitCivilians(TArray<struct FCharacterBio>& CivilianBios, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitCivilians");

	Params::UW_Briefing_Intel_C_InitCivilians_Params Parms{};

	Parms.CivilianBios = CivilianBios;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterBio>       SuspectBios                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_Briefing_Intel_C::InitSuspects(TArray<struct FCharacterBio>& SuspectBios, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "InitSuspects");

	Params::UW_Briefing_Intel_C_InitSuspects_Params Parms{};

	Parms.SuspectBios = SuspectBios;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterBio               Bio                                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::UpdateBioIntel(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "UpdateBioIntel");

	Params::UW_Briefing_Intel_C_UpdateBioIntel_Params Parms{};

	Parms.Bio = Bio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Briefing_Evidence       Media                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_Intel_C::UpdateMediaIntel(const struct FST_Briefing_Evidence& Media)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "UpdateMediaIntel");

	Params::UW_Briefing_Intel_C_UpdateMediaIntel_Params Parms{};

	Parms.Media = Media;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_C::AddToList(class UWidget* Content, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "AddToList");

	Params::UW_Briefing_Intel_C_AddToList_Params Parms{};

	Parms.Content = Content;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UW_Briefing_IntelList_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Briefing_IntelList_Entry_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UW_Briefing_IntelList_Entry_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_C::CreateLists(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "CreateLists");

	Params::UW_Briefing_Intel_C_CreateLists_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Intel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "PreConstruct");

	Params::UW_Briefing_Intel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Intel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Briefing_Intel          Intel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_Intel_C::Initialize(const struct FST_Briefing_Intel& Intel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "Initialize");

	Params::UW_Briefing_Intel_C_Initialize_Params Parms{};

	Parms.Intel = Intel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FCharacterBio               Bio                                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature");

	Params::UW_Briefing_Intel_C_BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature_Params Parms{};

	Parms.Bio = Bio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FCharacterBio               Bio                                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_C::BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature");

	Params::UW_Briefing_Intel_C_BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature_Params Parms{};

	Parms.Bio = Bio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Briefing_Intel          K2Node_CustomEvent_Intel                                         (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterBio               K2Node_ComponentBoundEvent_Bio_1                                 (None)
// struct FCharacterBio               K2Node_ComponentBoundEvent_Bio                                   (None)

void UW_Briefing_Intel_C::ExecuteUbergraph_W_Briefing_Intel(int32 EntryPoint, const struct FST_Briefing_Intel& K2Node_CustomEvent_Intel, bool K2Node_Event_IsDesignTime, const struct FCharacterBio& K2Node_ComponentBoundEvent_Bio_1, const struct FCharacterBio& K2Node_ComponentBoundEvent_Bio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_C", "ExecuteUbergraph_W_Briefing_Intel");

	Params::UW_Briefing_Intel_C_ExecuteUbergraph_W_Briefing_Intel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Intel = K2Node_CustomEvent_Intel;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Bio_1 = K2Node_ComponentBoundEvent_Bio_1;
	Parms.K2Node_ComponentBoundEvent_Bio = K2Node_ComponentBoundEvent_Bio;

	UObject::ProcessEvent(Func, &Parms);

}

}


