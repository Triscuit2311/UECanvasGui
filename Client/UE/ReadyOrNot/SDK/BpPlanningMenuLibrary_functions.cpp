#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BpPlanningMenuLibrary.BpPlanningMenuLibrary_C
// (None)

class UClass* UBpPlanningMenuLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BpPlanningMenuLibrary_C");

	return Clss;
}


// BpPlanningMenuLibrary_C BpPlanningMenuLibrary.Default__BpPlanningMenuLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBpPlanningMenuLibrary_C* UBpPlanningMenuLibrary_C::GetDefaultObj()
{
	static class UBpPlanningMenuLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBpPlanningMenuLibrary_C*>(UBpPlanningMenuLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FindIconFromItemClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*           Player_Controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourData                 CallFunc_Array_Get_Item                                          (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeviceData                 CallFunc_Array_Get_Item_1                                        (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeviceData                 CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponData                 CallFunc_Array_Get_Item_3                                        (None)
// struct FArmourData                 CallFunc_Array_Get_Item_4                                        (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponData                 CallFunc_Array_Get_Item_5                                        (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBpPlanningMenuLibrary_C::FindIconFromItemClass(class APlayerController* Player_Controller, class UClass* ItemClass, class UObject* __WorldContext, class UTexture2D** Return_Value, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue_5, const struct FArmourData& CallFunc_Array_Get_Item, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FDeviceData& CallFunc_Array_Get_Item_1, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, const struct FDeviceData& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, const struct FWeaponData& CallFunc_Array_Get_Item_3, const struct FArmourData& CallFunc_Array_Get_Item_4, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue_3, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, const struct FWeaponData& CallFunc_Array_Get_Item_5, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "FindIconFromItemClass");

	Params::UBpPlanningMenuLibrary_C_FindIconFromItemClass_Params Parms{};

	Parms.Player_Controller = Player_Controller;
	Parms.ItemClass = ItemClass;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue_1 = CallFunc_GetLazyLoadedImage_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue_2 = CallFunc_GetLazyLoadedImage_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue_3 = CallFunc_GetLazyLoadedImage_ReturnValue_3;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue_4 = CallFunc_GetLazyLoadedImage_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue_5 = CallFunc_GetLazyLoadedImage_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.IsFactorySkin
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                      SkinClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::IsFactorySkin(class UClass* SkinClass, class UObject* __WorldContext, bool* Return_Value, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "IsFactorySkin");

	Params::UBpPlanningMenuLibrary_C_IsFactorySkin_Params Parms{};

	Parms.SkinClass = SkinClass;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCharacterDataFromHandle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterData              Data                                                             (Parm, OutParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterData              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::GetCharacterDataFromHandle(class FName Handle, class UObject* __WorldContext, struct FCharacterData* Data, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetCharacterDataFromHandle");

	Params::UBpPlanningMenuLibrary_C_GetCharacterDataFromHandle_Params Parms{};

	Parms.Handle = Handle;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.PlayerStatusToText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayerStatus           Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        StatusText                                                       (Parm, OutParm)
// class FText                        Status_NotAvailable                                              (Edit, BlueprintVisible)
// class FText                        Status_Dead                                                      (Edit, BlueprintVisible)
// class FText                        Status_Injured                                                   (Edit, BlueprintVisible)
// class FText                        Status_Healthy                                                   (Edit, BlueprintVisible)
// class FText                        Status_Ready                                                     (Edit, BlueprintVisible)
// class FText                        Status_NotReady                                                  (Edit, BlueprintVisible)
// class FText                        Status_None                                                      (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerHealthStatus     CallFunc_GetHealthStatus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::PlayerStatusToText(enum class EPlayerStatus Status, class APlayerCharacter* PlayerState, class UObject* __WorldContext, class FText* StatusText, class FText Status_NotAvailable, class FText Status_Dead, class FText Status_Injured, class FText Status_Healthy, class FText Status_Ready, class FText Status_NotReady, class FText Status_None, bool K2Node_SwitchEnum_CmpSuccess, enum class EPlayerHealthStatus CallFunc_GetHealthStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "PlayerStatusToText");

	Params::UBpPlanningMenuLibrary_C_PlayerStatusToText_Params Parms{};

	Parms.Status = Status;
	Parms.PlayerState = PlayerState;
	Parms.__WorldContext = __WorldContext;
	Parms.Status_NotAvailable = Status_NotAvailable;
	Parms.Status_Dead = Status_Dead;
	Parms.Status_Injured = Status_Injured;
	Parms.Status_Healthy = Status_Healthy;
	Parms.Status_Ready = Status_Ready;
	Parms.Status_NotReady = Status_NotReady;
	Parms.Status_None = Status_None;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetHealthStatus_ReturnValue = CallFunc_GetHealthStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (StatusText != nullptr)
		*StatusText = Parms.StatusText;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoDescriptionForWeaponAndAmmo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        TaserDescription                                                 (Edit, BlueprintVisible)
// class FText                        BeanbagDescription                                               (Edit, BlueprintVisible)
// class FText                        PepperballDescription                                            (Edit, BlueprintVisible)
// class FText                        SlugDescription                                                  (Edit, BlueprintVisible)
// class FText                        BuckshotDescription                                              (Edit, BlueprintVisible)
// class FText                        FMJDescription                                                   (Edit, BlueprintVisible)
// class FText                        JHPDescription                                                   (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::GetAmmoDescriptionForWeaponAndAmmo(class UClass* Weapon, uint8 AmmoType, class UObject* __WorldContext, class FText* Text, class FText TaserDescription, class FText BeanbagDescription, class FText PepperballDescription, class FText SlugDescription, class FText BuckshotDescription, class FText FMJDescription, class FText JHPDescription, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetAmmoDescriptionForWeaponAndAmmo");

	Params::UBpPlanningMenuLibrary_C_GetAmmoDescriptionForWeaponAndAmmo_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.AmmoType = AmmoType;
	Parms.__WorldContext = __WorldContext;
	Parms.TaserDescription = TaserDescription;
	Parms.BeanbagDescription = BeanbagDescription;
	Parms.PepperballDescription = PepperballDescription;
	Parms.SlugDescription = SlugDescription;
	Parms.BuckshotDescription = BuckshotDescription;
	Parms.FMJDescription = FMJDescription;
	Parms.JHPDescription = JHPDescription;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAmmoTypeNameForWeaponAndAmmo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      WeaponClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        TaserName                                                        (Edit, BlueprintVisible)
// class FText                        BeanbagName                                                      (Edit, BlueprintVisible)
// class FText                        PepperballName                                                   (Edit, BlueprintVisible)
// class FText                        SlugName                                                         (Edit, BlueprintVisible)
// class FText                        BuckshotName                                                     (Edit, BlueprintVisible)
// class FText                        FMJName                                                          (Edit, BlueprintVisible)
// class FText                        JHPName                                                          (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::GetAmmoTypeNameForWeaponAndAmmo(class UClass* WeaponClass, uint8 AmmoType, class UObject* __WorldContext, class FText* Text, class FText TaserName, class FText BeanbagName, class FText PepperballName, class FText SlugName, class FText BuckshotName, class FText FMJName, class FText JHPName, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetAmmoTypeNameForWeaponAndAmmo");

	Params::UBpPlanningMenuLibrary_C_GetAmmoTypeNameForWeaponAndAmmo_Params Parms{};

	Parms.WeaponClass = WeaponClass;
	Parms.AmmoType = AmmoType;
	Parms.__WorldContext = __WorldContext;
	Parms.TaserName = TaserName;
	Parms.BeanbagName = BeanbagName;
	Parms.PepperballName = PepperballName;
	Parms.SlugName = SlugName;
	Parms.BuckshotName = BuckshotName;
	Parms.FMJName = FMJName;
	Parms.JHPName = JHPName;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetNonDefaultLoadouts
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Loadouts                                                         (Parm, OutParm)
// TArray<class FString>              LoadoutNames                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetLoadoutNames_LoadoutNames                            (ReferenceParm)
// bool                               CallFunc_GetLoadoutNames_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::GetNonDefaultLoadouts(class UObject* __WorldContext, TArray<class FString>* Loadouts, const TArray<class FString>& LoadoutNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_GetLoadoutNames_LoadoutNames, bool CallFunc_GetLoadoutNames_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue_2, bool CallFunc_NotEqual_StriStri_ReturnValue_3, bool CallFunc_NotEqual_StriStri_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetNonDefaultLoadouts");

	Params::UBpPlanningMenuLibrary_C_GetNonDefaultLoadouts_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.LoadoutNames = LoadoutNames;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLoadoutNames_LoadoutNames = CallFunc_GetLoadoutNames_LoadoutNames;
	Parms.CallFunc_GetLoadoutNames_ReturnValue = CallFunc_GetLoadoutNames_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue_1 = CallFunc_NotEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue_2 = CallFunc_NotEqual_StriStri_ReturnValue_2;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue_3 = CallFunc_NotEqual_StriStri_ReturnValue_3;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue_4 = CallFunc_NotEqual_StriStri_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Loadouts != nullptr)
		*Loadouts = std::move(Parms.Loadouts);

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWeaponData                 WeaponClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanCustomize                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::CanCustomizeWeaponData(const struct FWeaponData& WeaponClass, class UObject* __WorldContext, bool* CanCustomize, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "CanCustomizeWeaponData");

	Params::UBpPlanningMenuLibrary_C_CanCustomizeWeaponData_Params Parms{};

	Parms.WeaponClass = WeaponClass;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CanCustomize != nullptr)
		*CanCustomize = Parms.CanCustomize;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CanCustomizeWeaponClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      WeaponClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanCustomize                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::CanCustomizeWeaponClass(class UClass* WeaponClass, class UObject* __WorldContext, bool* CanCustomize, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "CanCustomizeWeaponClass");

	Params::UBpPlanningMenuLibrary_C_CanCustomizeWeaponClass_Params Parms{};

	Parms.WeaponClass = WeaponClass;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanCustomize != nullptr)
		*CanCustomize = Parms.CanCustomize;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetArmorCoverageText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmourCoverage         Coverage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        Text_Format                                                      (Edit, BlueprintVisible)
// class FText                        Text_Level3                                                      (Edit, BlueprintVisible)
// class FText                        Text_Level2                                                      (Edit, BlueprintVisible)
// class FText                        Text_Level1                                                      (Edit, BlueprintVisible)
// class FText                        Text_FrontBackSides                                              (Edit, BlueprintVisible)
// class FText                        Text_Back                                                        (Edit, BlueprintVisible)
// class FText                        Text_Front                                                       (Edit, BlueprintVisible)
// enum class EArmourCoverage         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// uint8                              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBpPlanningMenuLibrary_C::GetArmorCoverageText(enum class EArmourCoverage Coverage, uint8 Level, class UObject* __WorldContext, class FText* Text, class FText Text_Format, class FText Text_Level3, class FText Text_Level2, class FText Text_Level1, class FText Text_FrontBackSides, class FText Text_Back, class FText Text_Front, enum class EArmourCoverage Temp_byte_Variable, class FText Temp_text_Variable, uint8 Temp_byte_Variable_1, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetArmorCoverageText");

	Params::UBpPlanningMenuLibrary_C_GetArmorCoverageText_Params Parms{};

	Parms.Coverage = Coverage;
	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;
	Parms.Text_Format = Text_Format;
	Parms.Text_Level3 = Text_Level3;
	Parms.Text_Level2 = Text_Level2;
	Parms.Text_Level1 = Text_Level1;
	Parms.Text_FrontBackSides = Text_FrontBackSides;
	Parms.Text_Back = Text_Back;
	Parms.Text_Front = Text_Front;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetAttachmentTextData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::GetAttachmentTextData(class UClass* Attachment, class UObject* __WorldContext, enum class ESlateVisibility* Visibility, class FText* Text, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetAttachmentTextData");

	Params::UBpPlanningMenuLibrary_C_GetAttachmentTextData_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ConstructEquipmentOverviewAmmoString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MagazineCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        NoneFormat                                                       (Edit, BlueprintVisible)
// class FText                        SlugFormat                                                       (Edit, BlueprintVisible)
// class FText                        BuckshotFormat                                                   (Edit, BlueprintVisible)
// class FText                        HPFormat                                                         (Edit, BlueprintVisible)
// class FText                        FMJFormat                                                        (Edit, BlueprintVisible)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBpPlanningMenuLibrary_C::ConstructEquipmentOverviewAmmoString(uint8 AmmoType, int32 MagazineCount, class UObject* __WorldContext, class FText* Text, class FText NoneFormat, class FText SlugFormat, class FText BuckshotFormat, class FText HPFormat, class FText FMJFormat, uint8 Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "ConstructEquipmentOverviewAmmoString");

	Params::UBpPlanningMenuLibrary_C_ConstructEquipmentOverviewAmmoString_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.MagazineCount = MagazineCount;
	Parms.__WorldContext = __WorldContext;
	Parms.NoneFormat = NoneFormat;
	Parms.SlugFormat = SlugFormat;
	Parms.BuckshotFormat = BuckshotFormat;
	Parms.HPFormat = HPFormat;
	Parms.FMJFormat = FMJFormat;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.ItemWeightToText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Weight                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fractional                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        GramsTextFormat                                                  (Edit, BlueprintVisible)
// class FText                        TextFormat                                                       (Edit, BlueprintVisible)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_1                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_2                          (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UBpPlanningMenuLibrary_C::ItemWeightToText(float Weight, bool Fractional, class UObject* __WorldContext, class FText* Text, class FText GramsTextFormat, class FText TextFormat, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_FloatToText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "ItemWeightToText");

	Params::UBpPlanningMenuLibrary_C_ItemWeightToText_Params Parms{};

	Parms.Weight = Weight;
	Parms.Fractional = Fractional;
	Parms.__WorldContext = __WorldContext;
	Parms.GramsTextFormat = GramsTextFormat;
	Parms.TextFormat = TextFormat;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_1 = CallFunc_Conv_FloatToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_2 = CallFunc_Conv_FloatToText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.MuzzleVelocityToText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              MuzzleVelocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        MuzzleVelocityFormat                                             (Edit, BlueprintVisible)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBpPlanningMenuLibrary_C::MuzzleVelocityToText(float MuzzleVelocity, class UObject* __WorldContext, class FText* Text, class FText MuzzleVelocityFormat, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "MuzzleVelocityToText");

	Params::UBpPlanningMenuLibrary_C_MuzzleVelocityToText_Params Parms{};

	Parms.MuzzleVelocity = MuzzleVelocity;
	Parms.__WorldContext = __WorldContext;
	Parms.MuzzleVelocityFormat = MuzzleVelocityFormat;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetCaliberFromBlueprint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftClassPtr<class ABaseItem>     WeaponBlueprint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CaliberText                                                      (Parm, OutParm)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Item                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Magazine_Weapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UBpPlanningMenuLibrary_C::GetCaliberFromBlueprint(TSoftClassPtr<class ABaseItem> WeaponBlueprint, class UObject* __WorldContext, class FText* CaliberText, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Item, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsBase_Magazine_Weapon, bool K2Node_ClassDynamicCast_bSuccess_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetCaliberFromBlueprint");

	Params::UBpPlanningMenuLibrary_C_GetCaliberFromBlueprint_Params Parms{};

	Parms.WeaponBlueprint = WeaponBlueprint;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBase_Item = K2Node_ClassDynamicCast_AsBase_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsBase_Magazine_Weapon = K2Node_ClassDynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CaliberText != nullptr)
		*CaliberText = Parms.CaliberText;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetWeaponTypeLocalizedName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWeaponType             WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalizedName                                                    (Parm, OutParm)
// class FText                        UnarmedWeaponType                                                (Edit, BlueprintVisible)
// class FText                        SpecialWeaponType                                                (Edit, BlueprintVisible)
// class FText                        LessLethalPrimaryWeaponType                                      (Edit, BlueprintVisible)
// class FText                        LessLethalPistolWeaponType                                       (Edit, BlueprintVisible)
// class FText                        LethalPistolWeaponType                                           (Edit, BlueprintVisible)
// class FText                        ShotgunWeaponType                                                (Edit, BlueprintVisible)
// class FText                        SubmachineWeaponType                                             (Edit, BlueprintVisible)
// class FText                        RifleWeaponType                                                  (Edit, BlueprintVisible)
// class FText                        NoWeaponType                                                     (Edit, BlueprintVisible)
// enum class EWeaponType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBpPlanningMenuLibrary_C::GetWeaponTypeLocalizedName(enum class EWeaponType WeaponType, class UObject* __WorldContext, class FText* LocalizedName, class FText UnarmedWeaponType, class FText SpecialWeaponType, class FText LessLethalPrimaryWeaponType, class FText LessLethalPistolWeaponType, class FText LethalPistolWeaponType, class FText ShotgunWeaponType, class FText SubmachineWeaponType, class FText RifleWeaponType, class FText NoWeaponType, enum class EWeaponType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetWeaponTypeLocalizedName");

	Params::UBpPlanningMenuLibrary_C_GetWeaponTypeLocalizedName_Params Parms{};

	Parms.WeaponType = WeaponType;
	Parms.__WorldContext = __WorldContext;
	Parms.UnarmedWeaponType = UnarmedWeaponType;
	Parms.SpecialWeaponType = SpecialWeaponType;
	Parms.LessLethalPrimaryWeaponType = LessLethalPrimaryWeaponType;
	Parms.LessLethalPistolWeaponType = LessLethalPistolWeaponType;
	Parms.LethalPistolWeaponType = LethalPistolWeaponType;
	Parms.ShotgunWeaponType = ShotgunWeaponType;
	Parms.SubmachineWeaponType = SubmachineWeaponType;
	Parms.RifleWeaponType = RifleWeaponType;
	Parms.NoWeaponType = NoWeaponType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalizedName != nullptr)
		*LocalizedName = Parms.LocalizedName;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetFirstWeaponType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<enum class EWeaponType>     WeaponTypes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponType             WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponType             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::GetFirstWeaponType(TArray<enum class EWeaponType>& WeaponTypes, class UObject* __WorldContext, enum class EWeaponType* WeaponType, enum class EWeaponType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetFirstWeaponType");

	Params::UBpPlanningMenuLibrary_C_GetFirstWeaponType_Params Parms{};

	Parms.WeaponTypes = WeaponTypes;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.FormatSpawnPoint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        SpawnPointFormat                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSpawnPoints                Spawn                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               DoubleCost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// int32                              EffectivePointsCost                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        PointPlural                                                      (Edit, BlueprintVisible)
// class FText                        PointSingular                                                    (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBpPlanningMenuLibrary_C::FormatSpawnPoint(class FText SpawnPointFormat, const struct FSpawnPoints& Spawn, bool DoubleCost, class UObject* __WorldContext, class FText* Text, int32 EffectivePointsCost, class FText PointPlural, class FText PointSingular, bool Temp_bool_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool Temp_bool_Variable_1, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "FormatSpawnPoint");

	Params::UBpPlanningMenuLibrary_C_FormatSpawnPoint_Params Parms{};

	Parms.SpawnPointFormat = SpawnPointFormat;
	Parms.Spawn = Spawn;
	Parms.DoubleCost = DoubleCost;
	Parms.__WorldContext = __WorldContext;
	Parms.EffectivePointsCost = EffectivePointsCost;
	Parms.PointPlural = PointPlural;
	Parms.PointSingular = PointSingular;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActiveDeployablesText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetEnabledDeployables_ReturnValue                       (ReferenceParm)
// class FText                        CallFunc_CreateOverviewDeployableListText_Text                   (None)

void UBpPlanningMenuLibrary_C::GetActiveDeployablesText(class UObject* __WorldContext, class FText* Text, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_GetEnabledDeployables_ReturnValue, class FText CallFunc_CreateOverviewDeployableListText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetActiveDeployablesText");

	Params::UBpPlanningMenuLibrary_C_GetActiveDeployablesText_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnabledDeployables_ReturnValue = CallFunc_GetEnabledDeployables_ReturnValue;
	Parms.CallFunc_CreateOverviewDeployableListText_Text = CallFunc_CreateOverviewDeployableListText_Text;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewDeployableListText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Deployables                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        DeployableItemFormat                                             (Edit, BlueprintVisible)
// class FText                        ReturnText                                                       (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetLevelData_ReturnValue                                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UBpPlanningMenuLibrary_C::CreateOverviewDeployableListText(TArray<int32>& Deployables, class UObject* __WorldContext, class FText* Text, class FText DeployableItemFormat, class FText ReturnText, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetLevelData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "CreateOverviewDeployableListText");

	Params::UBpPlanningMenuLibrary_C_CreateOverviewDeployableListText_Params Parms{};

	Parms.Deployables = Deployables;
	Parms.__WorldContext = __WorldContext;
	Parms.DeployableItemFormat = DeployableItemFormat;
	Parms.ReturnText = ReturnText;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetLevelData_ReturnValue = CallFunc_GetLevelData_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetActivePersonnelText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetEnabledPersonnel_ReturnValue                         (ReferenceParm)
// class FText                        CallFunc_CreateOverviewPersonnelListText_Text                    (None)

void UBpPlanningMenuLibrary_C::GetActivePersonnelText(class UObject* __WorldContext, class FText* Text, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_GetEnabledPersonnel_ReturnValue, class FText CallFunc_CreateOverviewPersonnelListText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetActivePersonnelText");

	Params::UBpPlanningMenuLibrary_C_GetActivePersonnelText_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEnabledPersonnel_ReturnValue = CallFunc_GetEnabledPersonnel_ReturnValue;
	Parms.CallFunc_CreateOverviewPersonnelListText_Text = CallFunc_CreateOverviewPersonnelListText_Text;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.CreateOverviewPersonnelListText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      PersonnelList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        PersonnelItemFormat                                              (Edit, BlueprintVisible)
// class FText                        PersonnelType_Negotiator                                         (Edit, BlueprintVisible)
// class FText                        PersonnelType_PowerCrew                                          (Edit, BlueprintVisible)
// class FText                        PersonnelType_Floodlight                                         (Edit, BlueprintVisible)
// class FText                        PersonnelType_Sniper                                             (Edit, BlueprintVisible)
// class FText                        PersonnelType_Marksman                                           (Edit, BlueprintVisible)
// class FText                        PersonnelType_Spotter                                            (Edit, BlueprintVisible)
// class FText                        PersonnelType_VentilationExpert                                  (Edit, BlueprintVisible)
// class FText                        PersonnelType_Noisemaker                                         (Edit, BlueprintVisible)
// class FText                        PersonnelType_TruckDriver                                        (Edit, BlueprintVisible)
// class FText                        PersonnelType_None                                               (Edit, BlueprintVisible)
// class FText                        PersonnelTypeText                                                (Edit, BlueprintVisible)
// class FText                        PersonnelText                                                    (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetLevelData_ReturnValue                                (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBpPlanningMenuLibrary_C::CreateOverviewPersonnelListText(TArray<int32>& PersonnelList, class UObject* __WorldContext, class FText* Text, class FText PersonnelItemFormat, class FText PersonnelType_Negotiator, class FText PersonnelType_PowerCrew, class FText PersonnelType_Floodlight, class FText PersonnelType_Sniper, class FText PersonnelType_Marksman, class FText PersonnelType_Spotter, class FText PersonnelType_VentilationExpert, class FText PersonnelType_Noisemaker, class FText PersonnelType_TruckDriver, class FText PersonnelType_None, class FText PersonnelTypeText, class FText PersonnelText, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FLevelDataLookupTable& CallFunc_GetLevelData_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "CreateOverviewPersonnelListText");

	Params::UBpPlanningMenuLibrary_C_CreateOverviewPersonnelListText_Params Parms{};

	Parms.PersonnelList = PersonnelList;
	Parms.__WorldContext = __WorldContext;
	Parms.PersonnelItemFormat = PersonnelItemFormat;
	Parms.PersonnelType_Negotiator = PersonnelType_Negotiator;
	Parms.PersonnelType_PowerCrew = PersonnelType_PowerCrew;
	Parms.PersonnelType_Floodlight = PersonnelType_Floodlight;
	Parms.PersonnelType_Sniper = PersonnelType_Sniper;
	Parms.PersonnelType_Marksman = PersonnelType_Marksman;
	Parms.PersonnelType_Spotter = PersonnelType_Spotter;
	Parms.PersonnelType_VentilationExpert = PersonnelType_VentilationExpert;
	Parms.PersonnelType_Noisemaker = PersonnelType_Noisemaker;
	Parms.PersonnelType_TruckDriver = PersonnelType_TruckDriver;
	Parms.PersonnelType_None = PersonnelType_None;
	Parms.PersonnelTypeText = PersonnelTypeText;
	Parms.PersonnelText = PersonnelText;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetLevelData_ReturnValue = CallFunc_GetLevelData_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BpPlanningMenuLibrary.BpPlanningMenuLibrary_C.GetSpawnForEntryNum
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              Spawn_Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPoints                Out_Spawn                                                        (Parm, OutParm)
// struct FLevelDataLookupTable       CallFunc_GetLevelData_ReturnValue                                (None)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBpPlanningMenuLibrary_C::GetSpawnForEntryNum(uint8 Spawn_Num, class UObject* __WorldContext, struct FSpawnPoints* Out_Spawn, const struct FLevelDataLookupTable& CallFunc_GetLevelData_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BpPlanningMenuLibrary_C", "GetSpawnForEntryNum");

	Params::UBpPlanningMenuLibrary_C_GetSpawnForEntryNum_Params Parms{};

	Parms.Spawn_Num = Spawn_Num;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLevelData_ReturnValue = CallFunc_GetLevelData_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Spawn != nullptr)
		*Out_Spawn = std::move(Parms.Out_Spawn);

}

}


