#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C
// (None)

class UClass* UW_ItemSelection_ItemGroupList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemSelection_ItemGroupList_C");

	return Clss;
}


// W_ItemSelection_ItemGroupList_C W_ItemSelection_ItemGroupList.Default__W_ItemSelection_ItemGroupList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemSelection_ItemGroupList_C* UW_ItemSelection_ItemGroupList_C::GetDefaultObj()
{
	static class UW_ItemSelection_ItemGroupList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemSelection_ItemGroupList_C*>(UW_ItemSelection_ItemGroupList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UpdateKeybinds
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemSelectionGroup> InItemGroups                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemSelectionGroup         CallFunc_Array_Get_Item                                          (None)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::UpdateKeybinds(TArray<struct FItemSelectionGroup>& InItemGroups, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemSelectionGroup& CallFunc_Array_Get_Item, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "UpdateKeybinds");

	Params::UW_ItemSelection_ItemGroupList_C_UpdateKeybinds_Params Parms{};

	Parms.InItemGroups = InItemGroups;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.IsInsideList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInsideList_Return_Value                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::IsInsideList(bool* Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_IsInsideList_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "IsInsideList");

	Params::UW_ItemSelection_ItemGroupList_C_IsInsideList_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsInsideList_Return_Value = CallFunc_IsInsideList_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SplitItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSplit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::SplitItemList(bool bSplit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "SplitItemList");

	Params::UW_ItemSelection_ItemGroupList_C_SplitItemList_Params Parms{};

	Parms.bSplit = bSplit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_UnfocusAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroupList_C::Event_UnfocusAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "Event_UnfocusAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_FocusAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::Event_FocusAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "Event_FocusAll");

	Params::UW_ItemSelection_ItemGroupList_C_Event_FocusAll_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutOverview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::FadeOutOverview(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "FadeOutOverview");

	Params::UW_ItemSelection_ItemGroupList_C_FadeOutOverview_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInOverview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::FadeInOverview(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "FadeInOverview");

	Params::UW_ItemSelection_ItemGroupList_C_FadeInOverview_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutMagCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroupList_C::FadeOutMagCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "FadeOutMagCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInMagCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroupList_C::FadeInMagCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "FadeInMagCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UnfocusAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::UnfocusAll(bool bForce, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "UnfocusAll");

	Params::UW_ItemSelection_ItemGroupList_C_UnfocusAll_Params Parms{};

	Parms.bForce = bForce;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutAllItemLists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::FadeOutAllItemLists(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "FadeOutAllItemLists");

	Params::UW_ItemSelection_ItemGroupList_C_FadeOutAllItemLists_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInAllItemLists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::FadeInAllItemLists(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "FadeInAllItemLists");

	Params::UW_ItemSelection_ItemGroupList_C_FadeInAllItemLists_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInputReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::OnInputReleased(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "OnInputReleased");

	Params::UW_ItemSelection_ItemGroupList_C_OnInputReleased_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FocusAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::FocusAll(bool bForce, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "FocusAll");

	Params::UW_ItemSelection_ItemGroupList_C_FocusAll_Params Parms{};

	Parms.bForce = bForce;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.GetListAtColumnIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroupList_C::GetListAtColumnIndex(int32 Index, class UW_ItemSelection_ItemList_C** Return_Value, bool CallFunc_Less_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "GetListAtColumnIndex");

	Params::UW_ItemSelection_ItemGroupList_C_GetListAtColumnIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemSelectionGroup> InItemGroupArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ItemSelection_ItemGroupList_C::Initialize(TArray<struct FItemSelectionGroup>& InItemGroupArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "Initialize");

	Params::UW_ItemSelection_ItemGroupList_C_Initialize_Params Parms{};

	Parms.InItemGroupArray = InItemGroupArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Previous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroupList_C::Previous(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "Previous");

	Params::UW_ItemSelection_ItemGroupList_C_Previous_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroupList_C::Next(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "Next");

	Params::UW_ItemSelection_ItemGroupList_C_Next_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.CreateNewItemList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABaseItem*>           Items                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemSelectionGroup         CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UW_ItemSelection_ItemList_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ItemSelection_ItemGroupList_C::CreateNewItemList(TArray<class ABaseItem*>& Items, int32 Index, class UW_ItemSelection_ItemList_C** Return_Value, const struct FItemSelectionGroup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_ItemSelection_ItemList_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "CreateNewItemList");

	Params::UW_ItemSelection_ItemGroupList_C_CreateNewItemList_Params Parms{};

	Parms.Items = Items;
	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SelectColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::SelectColumn(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_ItemSelection_ItemList_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "SelectColumn");

	Params::UW_ItemSelection_ItemGroupList_C_SelectColumn_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroupList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnNightVisionGogglesToggled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNVGOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::OnNightVisionGogglesToggled_Event_0(bool bNVGOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "OnNightVisionGogglesToggled_Event_0");

	Params::UW_ItemSelection_ItemGroupList_C_OnNightVisionGogglesToggled_Event_0_Params Parms{};

	Parms.bNVGOn = bNVGOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ItemSelection_ItemGroupList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.ExecuteUbergraph_W_ItemSelection_ItemGroupList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNVGOn                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ItemSelection_ItemGroupList_C::ExecuteUbergraph_W_ItemSelection_ItemGroupList(int32 EntryPoint, bool K2Node_CustomEvent_bNVGOn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ItemSelection_ItemGroupList_C", "ExecuteUbergraph_W_ItemSelection_ItemGroupList");

	Params::UW_ItemSelection_ItemGroupList_C_ExecuteUbergraph_W_ItemSelection_ItemGroupList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bNVGOn = K2Node_CustomEvent_bNVGOn;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


