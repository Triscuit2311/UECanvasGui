#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C
// (None)

class UClass* UW_LoadoutInfo_EffectsListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutInfo_EffectsListEntry_C");

	return Clss;
}


// W_LoadoutInfo_EffectsListEntry_C W_LoadoutInfo_EffectsListEntry.Default__W_LoadoutInfo_EffectsListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutInfo_EffectsListEntry_C* UW_LoadoutInfo_EffectsListEntry_C::GetDefaultObj()
{
	static class UW_LoadoutInfo_EffectsListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutInfo_EffectsListEntry_C*>(UW_LoadoutInfo_EffectsListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_EffectsListEntry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "BackPage");

	Params::UW_LoadoutInfo_EffectsListEntry_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_EffectsListEntry_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "GetFocusTarget");

	Params::UW_LoadoutInfo_EffectsListEntry_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemEffects             Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EScrollDirection        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScrollDirection        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)

void UW_LoadoutInfo_EffectsListEntry_C::SetInfo(const struct FST_ItemEffects& Effect, enum class EScrollDirection Temp_byte_Variable, enum class EScrollDirection Temp_byte_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "SetInfo");

	Params::UW_LoadoutInfo_EffectsListEntry_C_SetInfo_Params Parms{};

	Parms.Effect = Effect;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_EffectsListEntry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "SetInputMode");

	Params::UW_LoadoutInfo_EffectsListEntry_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_EffectsListEntry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "ChangePage");

	Params::UW_LoadoutInfo_EffectsListEntry_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInfo_EffectsListEntry_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "UpdateActiveLoadout");

	Params::UW_LoadoutInfo_EffectsListEntry_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_EffectsListEntry_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "UpdateCurrentSlot");

	Params::UW_LoadoutInfo_EffectsListEntry_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInfo_EffectsListEntry_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "UpdateCurrentItemMap");

	Params::UW_LoadoutInfo_EffectsListEntry_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_EffectsListEntry_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "SetLoadoutWidget");

	Params::UW_LoadoutInfo_EffectsListEntry_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_EffectsListEntry_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "HeaderSubpageNavigation");

	Params::UW_LoadoutInfo_EffectsListEntry_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_EffectsListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "PreConstruct");

	Params::UW_LoadoutInfo_EffectsListEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadoutInfo_EffectsListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_EffectsListEntry_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "Reveal");

	Params::UW_LoadoutInfo_EffectsListEntry_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutInfo_EffectsListEntry_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "Hide");

	Params::UW_LoadoutInfo_EffectsListEntry_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C.ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutInfo_EffectsListEntry_C::ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry(int32 EntryPoint, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInfo_EffectsListEntry_C", "ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry");

	Params::UW_LoadoutInfo_EffectsListEntry_C_ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


