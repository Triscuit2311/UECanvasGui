#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioCollectionViewWidget.ModioCollectionViewWidget_C
// (None)

class UClass* UModioCollectionViewWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCollectionViewWidget_C");

	return Clss;
}


// ModioCollectionViewWidget_C ModioCollectionViewWidget.Default__ModioCollectionViewWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioCollectionViewWidget_C* UModioCollectionViewWidget_C::GetDefaultObj()
{
	static class UModioCollectionViewWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCollectionViewWidget_C*>(UModioCollectionViewWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioCollectionViewWidget.ModioCollectionViewWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UModioCollectionViewWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionViewWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModioCollectionViewWidget.ModioCollectionViewWidget_C.ExecuteUbergraph_ModioCollectionViewWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModioCollectionViewWidget_C::ExecuteUbergraph_ModioCollectionViewWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionViewWidget_C", "ExecuteUbergraph_ModioCollectionViewWidget");

	Params::UModioCollectionViewWidget_C_ExecuteUbergraph_ModioCollectionViewWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


