#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MunitionsOverviewSlot_Element.W_MunitionsOverviewSlot_Element_C
// (None)

class UClass* UW_MunitionsOverviewSlot_Element_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MunitionsOverviewSlot_Element_C");

	return Clss;
}


// W_MunitionsOverviewSlot_Element_C W_MunitionsOverviewSlot_Element.Default__W_MunitionsOverviewSlot_Element_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MunitionsOverviewSlot_Element_C* UW_MunitionsOverviewSlot_Element_C::GetDefaultObj()
{
	static class UW_MunitionsOverviewSlot_Element_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MunitionsOverviewSlot_Element_C*>(UW_MunitionsOverviewSlot_Element_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MunitionsOverviewSlot_Element.W_MunitionsOverviewSlot_Element_C.AddNewImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MunitionsOverviewSlot_Element_C::AddNewImage(class UTexture2D* Texture, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MunitionsOverviewSlot_Element_C", "AddNewImage");

	Params::UW_MunitionsOverviewSlot_Element_C_AddNewImage_Params Parms{};

	Parms.Texture = Texture;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


