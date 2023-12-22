#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C
// (None)

class UClass* UW_Briefing_Media_GalleryEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Media_GalleryEntry_C");

	return Clss;
}


// W_Briefing_Media_GalleryEntry_C W_Briefing_Media_GalleryEntry.Default__W_Briefing_Media_GalleryEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Media_GalleryEntry_C* UW_Briefing_Media_GalleryEntry_C::GetDefaultObj()
{
	static class UW_Briefing_Media_GalleryEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Media_GalleryEntry_C*>(UW_Briefing_Media_GalleryEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Media_GalleryEntry_C::SetHighlight(bool Highlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "SetHighlight");

	Params::UW_Briefing_Media_GalleryEntry_C_SetHighlight_Params Parms{};

	Parms.Highlighted = Highlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.UpdateVisualStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_GalleryEntry_C::UpdateVisualStyle(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "UpdateVisualStyle");

	Params::UW_Briefing_Media_GalleryEntry_C_UpdateVisualStyle_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Media_GalleryEntry_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "SetSelected");

	Params::UW_Briefing_Media_GalleryEntry_C_SetSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_GalleryEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.BndEvt__W_Briefing_Media_GalleryEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_GalleryEntry_C::BndEvt__W_Briefing_Media_GalleryEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "BndEvt__W_Briefing_Media_GalleryEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Briefing_Media_GalleryEntry_C_BndEvt__W_Briefing_Media_GalleryEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.ExecuteUbergraph_W_Briefing_Media_GalleryEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_GalleryEntry_C::ExecuteUbergraph_W_Briefing_Media_GalleryEntry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "ExecuteUbergraph_W_Briefing_Media_GalleryEntry");

	Params::UW_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_GalleryEntry_C*GalleryEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_GalleryEntry_C::OnClick__DelegateSignature(class UW_Briefing_Media_GalleryEntry_C* GalleryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_GalleryEntry_C", "OnClick__DelegateSignature");

	Params::UW_Briefing_Media_GalleryEntry_C_OnClick__DelegateSignature_Params Parms{};

	Parms.GalleryEntry = GalleryEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


