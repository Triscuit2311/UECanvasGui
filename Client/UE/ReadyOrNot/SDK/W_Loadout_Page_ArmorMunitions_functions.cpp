#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C
// (None)

class UClass* UW_Loadout_Page_ArmorMunitions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Page_ArmorMunitions_C");

	return Clss;
}


// W_Loadout_Page_ArmorMunitions_C W_Loadout_Page_ArmorMunitions.Default__W_Loadout_Page_ArmorMunitions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Page_ArmorMunitions_C* UW_Loadout_Page_ArmorMunitions_C::GetDefaultObj()
{
	static class UW_Loadout_Page_ArmorMunitions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Page_ArmorMunitions_C*>(UW_Loadout_Page_ArmorMunitions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ArmorMunitions_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "BackPage");

	Params::UW_Loadout_Page_ArmorMunitions_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "GetFocusTarget");

	Params::UW_Loadout_Page_ArmorMunitions_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateActiveMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             CurrentMaterial                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UArmourMaterial*>     CallFunc_Map_Values_Values                                       (ReferenceParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmourMaterial*             CallFunc_GetActiveArmorMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ArmorMunitions_C::UpdateActiveMaterial(class UArmourMaterial* CurrentMaterial, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, TArray<class UArmourMaterial*>& CallFunc_Map_Values_Values, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UArmourMaterial* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UArmourMaterial* CallFunc_GetActiveArmorMaterial_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "UpdateActiveMaterial");

	Params::UW_Loadout_Page_ArmorMunitions_C_UpdateActiveMaterial_Params Parms{};

	Parms.CurrentMaterial = CurrentMaterial;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetActiveArmorMaterial_ReturnValue = CallFunc_GetActiveArmorMaterial_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateActiveCoverage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmourCoverage         CurrentCoverage                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<enum class EArmourCoverage> CallFunc_Map_Values_Values                                       (ReferenceParm)
// enum class EArmourCoverage         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmourCoverage         CallFunc_GetArmorCoverage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::UpdateActiveCoverage(enum class EArmourCoverage CurrentCoverage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, TArray<enum class EArmourCoverage>& CallFunc_Map_Values_Values, enum class EArmourCoverage CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EArmourCoverage CallFunc_GetArmorCoverage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "UpdateActiveCoverage");

	Params::UW_Loadout_Page_ArmorMunitions_C_UpdateActiveCoverage_Params Parms{};

	Parms.CurrentCoverage = CurrentCoverage;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetArmorCoverage_ReturnValue = CallFunc_GetArmorCoverage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_Page_ArmorMunitions_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_Page_ArmorMunitions_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.PopulateMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   ButtonOptions                                                    (Edit, BlueprintVisible)
// class FString                      ButtonID                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UArmourMaterial*             ArmorMaterial                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UArmourMaterial*>     CallFunc_GetArmorMaterials_ReturnValue                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ArmorMunitions_C::PopulateMaterials(TMap<class FString, class FText> ButtonOptions, const class FString& ButtonID, class UArmourMaterial* ArmorMaterial, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class UArmourMaterial*>& CallFunc_GetArmorMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UArmourMaterial* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "PopulateMaterials");

	Params::UW_Loadout_Page_ArmorMunitions_C_PopulateMaterials_Params Parms{};

	Parms.ButtonOptions = ButtonOptions;
	Parms.ButtonID = ButtonID;
	Parms.ArmorMaterial = ArmorMaterial;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetArmorMaterials_ReturnValue = CallFunc_GetArmorMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.PopulateCoverage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   ButtonOptions                                                    (Edit, BlueprintVisible)
// enum class EArmourCoverage         CoverageValue                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ButtonID                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetArmorCoverageText_CoverageText                       (None)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UW_Loadout_Page_ArmorMunitions_C::PopulateCoverage(TMap<class FString, class FText> ButtonOptions, enum class EArmourCoverage CoverageValue, const class FString& ButtonID, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Variable, const class FString& CallFunc_SelectString_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_GetArmorCoverageText_CoverageText, int32 CallFunc_MakeLiteralInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "PopulateCoverage");

	Params::UW_Loadout_Page_ArmorMunitions_C_PopulateCoverage_Params Parms{};

	Parms.ButtonOptions = ButtonOptions;
	Parms.CoverageValue = CoverageValue;
	Parms.ButtonID = ButtonID;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetArmorCoverageText_CoverageText = CallFunc_GetArmorCoverageText_CoverageText;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.PopulateArmor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         NewWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   Item                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveBodyArmor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetClassFromObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABaseItem*>           CallFunc_GetBodyArmors_ReturnValue                               (ReferenceParm)
// class ABaseItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ArmorMunitions_C::PopulateArmor(class UW_LoadoutSlot_v2_C* NewWidget, class ABaseItem* Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveBodyArmor_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class UClass* CallFunc_GetClassFromObject_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetBodyArmors_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "PopulateArmor");

	Params::UW_Loadout_Page_ArmorMunitions_C_PopulateArmor_Params Parms{};

	Parms.NewWidget = NewWidget;
	Parms.Item = Item;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveBodyArmor_ReturnValue = CallFunc_GetActiveBodyArmor_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetClassFromObject_ReturnValue = CallFunc_GetClassFromObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetBodyArmors_ReturnValue = CallFunc_GetBodyArmors_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ArmorMunitions_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.OnArmorClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::OnArmorClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "OnArmorClicked");

	Params::UW_Loadout_Page_ArmorMunitions_C_OnArmorClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.OnArmorHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::OnArmorHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "OnArmorHovered");

	Params::UW_Loadout_Page_ArmorMunitions_C_OnArmorHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.ItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ArmorMunitions_C::ItemUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "ItemUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.CoverageOptionClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::CoverageOptionClicked(const class FString& ButtonID, class UW_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "CoverageOptionClicked");

	Params::UW_Loadout_Page_ArmorMunitions_C_CoverageOptionClicked_Params Parms{};

	Parms.ButtonID = ButtonID;
	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.CoverageOptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::CoverageOptionHovered(const class FString& ButtonID, class UW_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "CoverageOptionHovered");

	Params::UW_Loadout_Page_ArmorMunitions_C_CoverageOptionHovered_Params Parms{};

	Parms.ButtonID = ButtonID;
	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "SetLoadoutWidget");

	Params::UW_Loadout_Page_ArmorMunitions_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.MaterialClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::MaterialClicked(const class FString& ButtonID, class UW_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "MaterialClicked");

	Params::UW_Loadout_Page_ArmorMunitions_C_MaterialClicked_Params Parms{};

	Parms.ButtonID = ButtonID;
	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.MaterialHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::MaterialHovered(const class FString& ButtonID, class UW_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "MaterialHovered");

	Params::UW_Loadout_Page_ArmorMunitions_C_MaterialHovered_Params Parms{};

	Parms.ButtonID = ButtonID;
	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BndEvt__W_Loadout_Page_ArmorMunitions_Carousel_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::BndEvt__W_Loadout_Page_ArmorMunitions_Carousel_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "BndEvt__W_Loadout_Page_ArmorMunitions_Carousel_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UW_Loadout_Page_ArmorMunitions_C_BndEvt__W_Loadout_Page_ArmorMunitions_Carousel_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "ChangePage");

	Params::UW_Loadout_Page_ArmorMunitions_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BndEvt__W_Loadout_Page_ArmorMunitions_Ammo_K2Node_ComponentBoundEvent_1_OnMunitionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Loadout_Munitions_C*      TriggeringList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::BndEvt__W_Loadout_Page_ArmorMunitions_Ammo_K2Node_ComponentBoundEvent_1_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "BndEvt__W_Loadout_Page_ArmorMunitions_Ammo_K2Node_ComponentBoundEvent_1_OnMunitionHovered__DelegateSignature");

	Params::UW_Loadout_Page_ArmorMunitions_C_BndEvt__W_Loadout_Page_ArmorMunitions_Ammo_K2Node_ComponentBoundEvent_1_OnMunitionHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringList = TriggeringList;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_ArmorMunitions_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Page_ArmorMunitions_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "UpdateCurrentSlot");

	Params::UW_Loadout_Page_ArmorMunitions_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BndEvt__W_Loadout_Page_ArmorMunitions_Deployables_K2Node_ComponentBoundEvent_2_OnMunitionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Loadout_Munitions_C*      TriggeringList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::BndEvt__W_Loadout_Page_ArmorMunitions_Deployables_K2Node_ComponentBoundEvent_2_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "BndEvt__W_Loadout_Page_ArmorMunitions_Deployables_K2Node_ComponentBoundEvent_2_OnMunitionHovered__DelegateSignature");

	Params::UW_Loadout_Page_ArmorMunitions_C_BndEvt__W_Loadout_Page_ArmorMunitions_Deployables_K2Node_ComponentBoundEvent_2_OnMunitionHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringList = TriggeringList;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_ArmorMunitions_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Page_ArmorMunitions_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ArmorMunitions_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "SetInputMode");

	Params::UW_Loadout_Page_ArmorMunitions_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ArmorMunitions_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "Hide");

	Params::UW_Loadout_Page_ArmorMunitions_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "Reveal");

	Params::UW_Loadout_Page_ArmorMunitions_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ArmorMunitions_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ArmorMunitions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Page_ArmorMunitions_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.ExecuteUbergraph_W_Loadout_Page_ArmorMunitions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID_3                                    (ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_TriggeringButton_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID_2                                    (ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_TriggeringButton_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmourCoverage         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID_1                                    (ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_TriggeringButton_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID                                      (ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_CustomEvent_TriggeringButton                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Munitions_C*      K2Node_ComponentBoundEvent_TriggeringList_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Munitions_C*      K2Node_ComponentBoundEvent_TriggeringList                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ArmorMunitions_C::ExecuteUbergraph_W_Loadout_Page_ArmorMunitions(int32 EntryPoint, class FName K2Node_Event_OptionNameID, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, const class FString& K2Node_CustomEvent_ButtonID_3, class UW_Button_C* K2Node_CustomEvent_TriggeringButton_3, const class FString& K2Node_CustomEvent_ButtonID_2, class UW_Button_C* K2Node_CustomEvent_TriggeringButton_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EArmourCoverage CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& K2Node_CustomEvent_ButtonID_1, class UW_Button_C* K2Node_CustomEvent_TriggeringButton_1, const class FString& K2Node_CustomEvent_ButtonID, class UW_Button_C* K2Node_CustomEvent_TriggeringButton, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UArmourMaterial* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, class UArmourMaterial* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class FName K2Node_ComponentBoundEvent_TabId, class FName K2Node_Event_PageName, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ArmorMunitions_C", "ExecuteUbergraph_W_Loadout_Page_ArmorMunitions");

	Params::UW_Loadout_Page_ArmorMunitions_C_ExecuteUbergraph_W_Loadout_Page_ArmorMunitions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2;
	Parms.K2Node_CustomEvent_ButtonID_3 = K2Node_CustomEvent_ButtonID_3;
	Parms.K2Node_CustomEvent_TriggeringButton_3 = K2Node_CustomEvent_TriggeringButton_3;
	Parms.K2Node_CustomEvent_ButtonID_2 = K2Node_CustomEvent_ButtonID_2;
	Parms.K2Node_CustomEvent_TriggeringButton_2 = K2Node_CustomEvent_TriggeringButton_2;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_CustomEvent_ButtonID_1 = K2Node_CustomEvent_ButtonID_1;
	Parms.K2Node_CustomEvent_TriggeringButton_1 = K2Node_CustomEvent_TriggeringButton_1;
	Parms.K2Node_CustomEvent_ButtonID = K2Node_CustomEvent_ButtonID;
	Parms.K2Node_CustomEvent_TriggeringButton = K2Node_CustomEvent_TriggeringButton;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_ComponentBoundEvent_TriggeringList_1 = K2Node_ComponentBoundEvent_TriggeringList_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_1 = K2Node_ComponentBoundEvent_TriggeringSlot_1;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_ComponentBoundEvent_TriggeringList = K2Node_ComponentBoundEvent_TriggeringList;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot = K2Node_ComponentBoundEvent_TriggeringSlot;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

}

}


