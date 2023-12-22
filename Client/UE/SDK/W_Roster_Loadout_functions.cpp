#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Roster_Loadout.W_Roster_Loadout_C
// (None)

class UClass* UW_Roster_Loadout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Roster_Loadout_C");

	return Clss;
}


// W_Roster_Loadout_C W_Roster_Loadout.Default__W_Roster_Loadout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Roster_Loadout_C* UW_Roster_Loadout_C::GetDefaultObj()
{
	static class UW_Roster_Loadout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Roster_Loadout_C*>(UW_Roster_Loadout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Roster_Loadout.W_Roster_Loadout_C.GetDeployablesHorizBox
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBox*              K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UHorizontalBox* UW_Roster_Loadout_C::GetDeployablesHorizBox(bool Temp_bool_Variable, class UHorizontalBox* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "GetDeployablesHorizBox");

	Params::UW_Roster_Loadout_C_GetDeployablesHorizBox_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.GetLongTacticalText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonTextBlock*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonTextBlock*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonTextBlock* UW_Roster_Loadout_C::GetLongTacticalText(bool Temp_bool_Variable, class UCommonTextBlock* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "GetLongTacticalText");

	Params::UW_Roster_Loadout_C_GetLongTacticalText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.GetSidearmText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonTextBlock*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonTextBlock*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonTextBlock* UW_Roster_Loadout_C::GetSidearmText(bool Temp_bool_Variable, class UCommonTextBlock* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "GetSidearmText");

	Params::UW_Roster_Loadout_C_GetSidearmText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.GetPrimaryText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonTextBlock*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonTextBlock*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonTextBlock* UW_Roster_Loadout_C::GetPrimaryText(bool Temp_bool_Variable, class UCommonTextBlock* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "GetPrimaryText");

	Params::UW_Roster_Loadout_C_GetPrimaryText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.GetLongTacticalImage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UImage* UW_Roster_Loadout_C::GetLongTacticalImage(bool Temp_bool_Variable, class UImage* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "GetLongTacticalImage");

	Params::UW_Roster_Loadout_C_GetLongTacticalImage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.GetSidearmImage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UImage* UW_Roster_Loadout_C::GetSidearmImage(bool Temp_bool_Variable, class UImage* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "GetSidearmImage");

	Params::UW_Roster_Loadout_C_GetSidearmImage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.GetPrimaryImage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UImage* UW_Roster_Loadout_C::GetPrimaryImage(bool Temp_bool_Variable, class UImage* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "GetPrimaryImage");

	Params::UW_Roster_Loadout_C_GetPrimaryImage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.InitLayout
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Loadout_C::InitLayout(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "InitLayout");

	Params::UW_Roster_Loadout_C_InitLayout_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.BlankLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            CallFunc_GetLongTacticalText_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetSidearmText_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetPrimaryText_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_GetLongTacticalImage_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_GetSidearmImage_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_GetPrimaryImage_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Loadout_C::BlankLoadout(class UCommonTextBlock* CallFunc_GetLongTacticalText_ReturnValue, class UCommonTextBlock* CallFunc_GetSidearmText_ReturnValue, class UCommonTextBlock* CallFunc_GetPrimaryText_ReturnValue, class UImage* CallFunc_GetLongTacticalImage_ReturnValue, class UImage* CallFunc_GetSidearmImage_ReturnValue, class UImage* CallFunc_GetPrimaryImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "BlankLoadout");

	Params::UW_Roster_Loadout_C_BlankLoadout_Params Parms{};

	Parms.CallFunc_GetLongTacticalText_ReturnValue = CallFunc_GetLongTacticalText_ReturnValue;
	Parms.CallFunc_GetSidearmText_ReturnValue = CallFunc_GetSidearmText_ReturnValue;
	Parms.CallFunc_GetPrimaryText_ReturnValue = CallFunc_GetPrimaryText_ReturnValue;
	Parms.CallFunc_GetLongTacticalImage_ReturnValue = CallFunc_GetLongTacticalImage_ReturnValue;
	Parms.CallFunc_GetSidearmImage_ReturnValue = CallFunc_GetSidearmImage_ReturnValue;
	Parms.CallFunc_GetPrimaryImage_ReturnValue = CallFunc_GetPrimaryImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.Update Character Loadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRosterLoadout              NewLoadout                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class UClass*, int32>         DeployablesSorted                                                (Edit, BlueprintVisible)
// TArray<TSubclassOf<class ABaseItem>>Deployables                                                      (Edit, BlueprintVisible)

void UW_Roster_Loadout_C::Update_Character_Loadout(const struct FRosterLoadout& NewLoadout, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "Update Character Loadout");

	Params::UW_Roster_Loadout_C_Update_Character_Loadout_Params Parms{};

	Parms.NewLoadout = NewLoadout;
	Parms.DeployablesSorted = DeployablesSorted;
	Parms.Deployables = Deployables;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.UpdatePlayerLoadout
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               NewLoadout                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class UClass*, int32>         DeployablesSorted                                                (Edit, BlueprintVisible)
// TArray<TSubclassOf<class ABaseItem>>Deployables                                                      (Edit, BlueprintVisible)

void UW_Roster_Loadout_C::UpdatePlayerLoadout(struct FSavedLoadout& NewLoadout, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "UpdatePlayerLoadout");

	Params::UW_Roster_Loadout_C_UpdatePlayerLoadout_Params Parms{};

	Parms.NewLoadout = NewLoadout;
	Parms.DeployablesSorted = DeployablesSorted;
	Parms.Deployables = Deployables;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.SetDeployables
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              Grenades                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UClass*>              Tactical                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class UClass*, int32>         DeployablesSorted                                                (Edit, BlueprintVisible)
// TArray<TSubclassOf<class ABaseItem>>Deployables                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_1                               (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              CallFunc_GetDeployablesHorizBox_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              CallFunc_GetDeployablesHorizBox_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              CallFunc_GetDeployablesHorizBox_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_Munition_SummaryEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Loadout_C::SetDeployables(TArray<class UClass*>& Grenades, TArray<class UClass*>& Tactical, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables, int32 Temp_int_Array_Index_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UHorizontalBox* CallFunc_GetDeployablesHorizBox_ReturnValue, class UHorizontalBox* CallFunc_GetDeployablesHorizBox_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBox* CallFunc_GetDeployablesHorizBox_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_Loadout_Munition_SummaryEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "SetDeployables");

	Params::UW_Roster_Loadout_C_SetDeployables_Params Parms{};

	Parms.Grenades = Grenades;
	Parms.Tactical = Tactical;
	Parms.DeployablesSorted = DeployablesSorted;
	Parms.Deployables = Deployables;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_SlateChildSize_1 = K2Node_MakeStruct_SlateChildSize_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetDeployablesHorizBox_ReturnValue = CallFunc_GetDeployablesHorizBox_ReturnValue;
	Parms.CallFunc_GetDeployablesHorizBox_ReturnValue_1 = CallFunc_GetDeployablesHorizBox_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetDeployablesHorizBox_ReturnValue_2 = CallFunc_GetDeployablesHorizBox_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.SetSidearmInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SidearmItemClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_GetSidearmImage_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_GetSidearmImage_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetSidearmText_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetSidearmText_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Loadout_C::SetSidearmInfo(class UClass* SidearmItemClass, class UImage* CallFunc_GetSidearmImage_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UImage* CallFunc_GetSidearmImage_ReturnValue_1, class UCommonTextBlock* CallFunc_GetSidearmText_ReturnValue, class UCommonTextBlock* CallFunc_GetSidearmText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "SetSidearmInfo");

	Params::UW_Roster_Loadout_C_SetSidearmInfo_Params Parms{};

	Parms.SidearmItemClass = SidearmItemClass;
	Parms.CallFunc_GetSidearmImage_ReturnValue = CallFunc_GetSidearmImage_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetSidearmImage_ReturnValue_1 = CallFunc_GetSidearmImage_ReturnValue_1;
	Parms.CallFunc_GetSidearmText_ReturnValue = CallFunc_GetSidearmText_ReturnValue;
	Parms.CallFunc_GetSidearmText_ReturnValue_1 = CallFunc_GetSidearmText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.SetLongTacticalInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LongTacticalItemClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetLongTacticalText_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_GetLongTacticalImage_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_GetLongTacticalImage_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetLongTacticalText_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Loadout_C::SetLongTacticalInfo(class UClass* LongTacticalItemClass, class UCommonTextBlock* CallFunc_GetLongTacticalText_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UImage* CallFunc_GetLongTacticalImage_ReturnValue, class UImage* CallFunc_GetLongTacticalImage_ReturnValue_1, class UCommonTextBlock* CallFunc_GetLongTacticalText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "SetLongTacticalInfo");

	Params::UW_Roster_Loadout_C_SetLongTacticalInfo_Params Parms{};

	Parms.LongTacticalItemClass = LongTacticalItemClass;
	Parms.CallFunc_GetLongTacticalText_ReturnValue = CallFunc_GetLongTacticalText_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetLongTacticalImage_ReturnValue = CallFunc_GetLongTacticalImage_ReturnValue;
	Parms.CallFunc_GetLongTacticalImage_ReturnValue_1 = CallFunc_GetLongTacticalImage_ReturnValue_1;
	Parms.CallFunc_GetLongTacticalText_ReturnValue_1 = CallFunc_GetLongTacticalText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.SetPrimaryInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      PrimaryItemClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_GetPrimaryImage_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_GetPrimaryImage_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetPrimaryText_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_GetPrimaryText_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Loadout_C::SetPrimaryInfo(class UClass* PrimaryItemClass, class UImage* CallFunc_GetPrimaryImage_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UImage* CallFunc_GetPrimaryImage_ReturnValue_1, class UCommonTextBlock* CallFunc_GetPrimaryText_ReturnValue, class UCommonTextBlock* CallFunc_GetPrimaryText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "SetPrimaryInfo");

	Params::UW_Roster_Loadout_C_SetPrimaryInfo_Params Parms{};

	Parms.PrimaryItemClass = PrimaryItemClass;
	Parms.CallFunc_GetPrimaryImage_ReturnValue = CallFunc_GetPrimaryImage_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetPrimaryImage_ReturnValue_1 = CallFunc_GetPrimaryImage_ReturnValue_1;
	Parms.CallFunc_GetPrimaryText_ReturnValue = CallFunc_GetPrimaryText_ReturnValue;
	Parms.CallFunc_GetPrimaryText_ReturnValue_1 = CallFunc_GetPrimaryText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Roster_Loadout_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "PreConstruct");

	Params::UW_Roster_Loadout_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Roster_Loadout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_Loadout.W_Roster_Loadout_C.ExecuteUbergraph_W_Roster_Loadout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Loadout_C::ExecuteUbergraph_W_Roster_Loadout(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Loadout_C", "ExecuteUbergraph_W_Roster_Loadout");

	Params::UW_Roster_Loadout_C_ExecuteUbergraph_W_Roster_Loadout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


