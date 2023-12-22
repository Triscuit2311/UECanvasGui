#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_2DMap.W_2DMap_C
// (None)

class UClass* UW_2DMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_2DMap_C");

	return Clss;
}


// W_2DMap_C W_2DMap.Default__W_2DMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_2DMap_C* UW_2DMap_C::GetDefaultObj()
{
	static class UW_2DMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_2DMap_C*>(UW_2DMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_2DMap.W_2DMap_C.GetDynMat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    MapDynMat                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SetDynMat_MapDynMat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_2DMap_C::GetDynMat(class UMaterialInstanceDynamic** MapDynMat, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_SetDynMat_MapDynMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_2DMap_C", "GetDynMat");

	Params::UW_2DMap_C_GetDynMat_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_SetDynMat_MapDynMat = CallFunc_SetDynMat_MapDynMat;

	UObject::ProcessEvent(Func, &Parms);

	if (MapDynMat != nullptr)
		*MapDynMat = Parms.MapDynMat;

}


// Function W_2DMap.W_2DMap_C.SetDynMat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    MapDynMat                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_2DMap_C::SetDynMat(class UMaterialInstance* Material, class UMaterialInstanceDynamic** MapDynMat, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_2DMap_C", "SetDynMat");

	Params::UW_2DMap_C_SetDynMat_Params Parms{};

	Parms.Material = Material;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MapDynMat != nullptr)
		*MapDynMat = Parms.MapDynMat;

}


// Function W_2DMap.W_2DMap_C.SetFloorTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           MapMaterialInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  LayoutTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_2DMap_C::SetFloorTexture(class UMaterialInstance* MapMaterialInstance, class UTexture2D* LayoutTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_2DMap_C", "SetFloorTexture");

	Params::UW_2DMap_C_SetFloorTexture_Params Parms{};

	Parms.MapMaterialInstance = MapMaterialInstance;
	Parms.LayoutTexture = LayoutTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_2DMap.W_2DMap_C.ExecuteUbergraph_W_2DMap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynMat_MapDynMat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_CustomEvent_MapMaterialInstance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_LayoutTexture                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_SetDynMat_MapDynMat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_2DMap_C::ExecuteUbergraph_W_2DMap(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynMat_MapDynMat, class UMaterialInstance* K2Node_CustomEvent_MapMaterialInstance, class UTexture2D* K2Node_CustomEvent_LayoutTexture, class UMaterialInstanceDynamic* CallFunc_SetDynMat_MapDynMat, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_2DMap_C", "ExecuteUbergraph_W_2DMap");

	Params::UW_2DMap_C_ExecuteUbergraph_W_2DMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynMat_MapDynMat = CallFunc_GetDynMat_MapDynMat;
	Parms.K2Node_CustomEvent_MapMaterialInstance = K2Node_CustomEvent_MapMaterialInstance;
	Parms.K2Node_CustomEvent_LayoutTexture = K2Node_CustomEvent_LayoutTexture;
	Parms.CallFunc_SetDynMat_MapDynMat = CallFunc_SetDynMat_MapDynMat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


