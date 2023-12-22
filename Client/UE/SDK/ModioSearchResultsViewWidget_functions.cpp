#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioSearchResultsViewWidget.ModioSearchResultsViewWidget_C
// (None)

class UClass* UModioSearchResultsViewWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSearchResultsViewWidget_C");

	return Clss;
}


// ModioSearchResultsViewWidget_C ModioSearchResultsViewWidget.Default__ModioSearchResultsViewWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioSearchResultsViewWidget_C* UModioSearchResultsViewWidget_C::GetDefaultObj()
{
	static class UModioSearchResultsViewWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSearchResultsViewWidget_C*>(UModioSearchResultsViewWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioSearchResultsViewWidget.ModioSearchResultsViewWidget_C.BndEvt__ModioSearchResultsViewWidget_ResultsTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModioSearchResultsViewWidget_C::BndEvt__ModioSearchResultsViewWidget_ResultsTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsViewWidget_C", "BndEvt__ModioSearchResultsViewWidget_ResultsTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature");

	Params::UModioSearchResultsViewWidget_C_BndEvt__ModioSearchResultsViewWidget_ResultsTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioSearchResultsViewWidget.ModioSearchResultsViewWidget_C.ExecuteUbergraph_ModioSearchResultsViewWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModioSearchResultsViewWidget_C::ExecuteUbergraph_ModioSearchResultsViewWidget(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsViewWidget_C", "ExecuteUbergraph_ModioSearchResultsViewWidget");

	Params::UModioSearchResultsViewWidget_C_ExecuteUbergraph_ModioSearchResultsViewWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


