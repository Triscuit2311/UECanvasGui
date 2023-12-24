#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C
// (None)

class UClass* UW_WeaponWheel_MagazineSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WeaponWheel_MagazineSlot_C");

	return Clss;
}


// W_WeaponWheel_MagazineSlot_C W_WeaponWheel_MagazineSlot.Default__W_WeaponWheel_MagazineSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WeaponWheel_MagazineSlot_C* UW_WeaponWheel_MagazineSlot_C::GetDefaultObj()
{
	static class UW_WeaponWheel_MagazineSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WeaponWheel_MagazineSlot_C*>(UW_WeaponWheel_MagazineSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.GetMag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MagazineSlot_C::GetMag(int32 Index, class UImage** Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UImage* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MagazineSlot_C", "GetMag");

	Params::UW_WeaponWheel_MagazineSlot_C_GetMag_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.CreateMag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     MagOutlineIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    MagIconEmpty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    MagIconFull                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MagazineSlot_C::CreateMag(class UObject* MagOutlineIcon, class UTexture* MagIconEmpty, class UTexture* MagIconFull, float IconSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MagazineSlot_C", "CreateMag");

	Params::UW_WeaponWheel_MagazineSlot_C_CreateMag_Params Parms{};

	Parms.MagOutlineIcon = MagOutlineIcon;
	Parms.MagIconEmpty = MagIconEmpty;
	Parms.MagIconFull = MagIconFull;
	Parms.IconSize = IconSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.AddMagOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MagazineSlot_C::AddMagOutline(class UObject* Icon, float IconSize, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MagazineSlot_C", "AddMagOutline");

	Params::UW_WeaponWheel_MagazineSlot_C_AddMagOutline_Params Parms{};

	Parms.Icon = Icon;
	Parms.IconSize = IconSize;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.AddMag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    IconEmpty                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Icon_Full                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IconSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_MagazineSlot_C::AddMag(class UTexture* IconEmpty, class UTexture* Icon_Full, float IconSize, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_MagazineSlot_C", "AddMag");

	Params::UW_WeaponWheel_MagazineSlot_C_AddMag_Params Parms{};

	Parms.IconEmpty = IconEmpty;
	Parms.Icon_Full = Icon_Full;
	Parms.IconSize = IconSize;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


