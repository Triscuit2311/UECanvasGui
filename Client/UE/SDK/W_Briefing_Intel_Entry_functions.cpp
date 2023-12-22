#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C
// (None)

class UClass* UW_Briefing_Intel_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Intel_Entry_C");

	return Clss;
}


// W_Briefing_Intel_Entry_C W_Briefing_Intel_Entry.Default__W_Briefing_Intel_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Intel_Entry_C* UW_Briefing_Intel_Entry_C::GetDefaultObj()
{
	static class UW_Briefing_Intel_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Intel_Entry_C*>(UW_Briefing_Intel_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default                                            (ConstParm)

void UW_Briefing_Intel_Entry_C::SetActive(bool Active, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "SetActive");

	Params::UW_Briefing_Intel_Entry_C_SetActive_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_Entry_C::SetHovered(bool IsHovered, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "SetHovered");

	Params::UW_Briefing_Intel_Entry_C_SetHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_Entry_C::BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Intel_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Intel_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "PreConstruct");

	Params::UW_Briefing_Intel_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_Entry_C::BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Intel_Entry_C::BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.ExecuteUbergraph_W_Briefing_Intel_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Intel_Entry_C::ExecuteUbergraph_W_Briefing_Intel_Entry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "ExecuteUbergraph_W_Briefing_Intel_Entry");

	Params::UW_Briefing_Intel_Entry_C_ExecuteUbergraph_W_Briefing_Intel_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.MediaIntelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Intel_Entry_C*   ClickedEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Briefing_Evidence       Media                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Briefing_Intel_Entry_C::MediaIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "MediaIntelClicked__DelegateSignature");

	Params::UW_Briefing_Intel_Entry_C_MediaIntelClicked__DelegateSignature_Params Parms{};

	Parms.ClickedEntry = ClickedEntry;
	Parms.Media = Media;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BioIntelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Intel_Entry_C*   ClickedEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterBio               Bio                                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Intel_Entry_C::BioIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Intel_Entry_C", "BioIntelClicked__DelegateSignature");

	Params::UW_Briefing_Intel_Entry_C_BioIntelClicked__DelegateSignature_Params Parms{};

	Parms.ClickedEntry = ClickedEntry;
	Parms.Bio = Bio;

	UObject::ProcessEvent(Func, &Parms);

}

}


