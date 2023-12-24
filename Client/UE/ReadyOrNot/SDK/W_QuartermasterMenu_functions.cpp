#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_QuartermasterMenu.W_QuartermasterMenu_C
// (None)

class UClass* UW_QuartermasterMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_QuartermasterMenu_C");

	return Clss;
}


// W_QuartermasterMenu_C W_QuartermasterMenu.Default__W_QuartermasterMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_QuartermasterMenu_C* UW_QuartermasterMenu_C::GetDefaultObj()
{
	static class UW_QuartermasterMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_QuartermasterMenu_C*>(UW_QuartermasterMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategories
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           K2Node_DynamicCast_AsW_Skin_Category                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_DynamicCast_AsW_Attachment_Category                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::UnhoverAllCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinCategory_C* K2Node_DynamicCast_AsW_Skin_Category, bool K2Node_DynamicCast_bSuccess, class UW_AttachmentCategory_C* K2Node_DynamicCast_AsW_Attachment_Category, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "UnhoverAllCategories");

	Params::UW_QuartermasterMenu_C_UnhoverAllCategories_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Skin_Category = K2Node_DynamicCast_AsW_Skin_Category;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Attachment_Category = K2Node_DynamicCast_AsW_Attachment_Category;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategoriesExcept
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategoryWIdget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinCategory_C*           SkinCategoryWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           K2Node_DynamicCast_AsW_Skin_Category                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_DynamicCast_AsW_Attachment_Category                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::UnhoverAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinCategory_C* K2Node_DynamicCast_AsW_Skin_Category, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_AttachmentCategory_C* K2Node_DynamicCast_AsW_Attachment_Category, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "UnhoverAllCategoriesExcept");

	Params::UW_QuartermasterMenu_C_UnhoverAllCategoriesExcept_Params Parms{};

	Parms.AttachmentCategoryWIdget = AttachmentCategoryWIdget;
	Parms.SkinCategoryWidget = SkinCategoryWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Skin_Category = K2Node_DynamicCast_AsW_Skin_Category;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Attachment_Category = K2Node_DynamicCast_AsW_Attachment_Category;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategories
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           K2Node_DynamicCast_AsW_Skin_Category                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_DynamicCast_AsW_Attachment_Category                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::CollapseAllCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinCategory_C* K2Node_DynamicCast_AsW_Skin_Category, bool K2Node_DynamicCast_bSuccess, class UW_AttachmentCategory_C* K2Node_DynamicCast_AsW_Attachment_Category, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "CollapseAllCategories");

	Params::UW_QuartermasterMenu_C_CollapseAllCategories_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Skin_Category = K2Node_DynamicCast_AsW_Skin_Category;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Attachment_Category = K2Node_DynamicCast_AsW_Attachment_Category;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategoriesExcept
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategoryWIdget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinCategory_C*           SkinCategoryWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           K2Node_DynamicCast_AsW_Skin_Category                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_DynamicCast_AsW_Attachment_Category                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::CollapseAllCategoriesExcept(class UW_AttachmentCategory_C* AttachmentCategoryWIdget, class UW_SkinCategory_C* SkinCategoryWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinCategory_C* K2Node_DynamicCast_AsW_Skin_Category, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UW_AttachmentCategory_C* K2Node_DynamicCast_AsW_Attachment_Category, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "CollapseAllCategoriesExcept");

	Params::UW_QuartermasterMenu_C_CollapseAllCategoriesExcept_Params Parms{};

	Parms.AttachmentCategoryWIdget = AttachmentCategoryWIdget;
	Parms.SkinCategoryWidget = SkinCategoryWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Skin_Category = K2Node_DynamicCast_AsW_Skin_Category;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Attachment_Category = K2Node_DynamicCast_AsW_Attachment_Category;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnGunCleaned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinCategory_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::OnGunCleaned(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UW_SkinCategory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UW_AttachmentCategory_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnGunCleaned");

	Params::UW_QuartermasterMenu_C_OnGunCleaned_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.CanCleanGun
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanReset_Return_Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::CanCleanGun(bool* Return_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanReset_Return_Value, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "CanCleanGun");

	Params::UW_QuartermasterMenu_C_CanCleanGun_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CanReset_Return_Value = CallFunc_CanReset_Return_Value;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Get_CleanGun_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCleanGun_Return_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_QuartermasterMenu_C::Get_CleanGun_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_CanCleanGun_Return_Value, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "Get_CleanGun_Visibility");

	Params::UW_QuartermasterMenu_C_Get_CleanGun_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_CanCleanGun_Return_Value = CallFunc_CanCleanGun_Return_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.AttemptCreateSkinCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeaponData>         WeaponDataArray                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponData                 CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UW_SkinCategory_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::AttemptCreateSkinCategory(TArray<struct FWeaponData>& WeaponDataArray, bool* Return_Value, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FWeaponData& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText Temp_text_Variable, class UW_SkinCategory_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "AttemptCreateSkinCategory");

	Params::UW_QuartermasterMenu_C_AttemptCreateSkinCategory_Params Parms{};

	Parms.WeaponDataArray = WeaponDataArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.ScrollIntoView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WidgetToFind                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::ScrollIntoView(class UWidget* WidgetToFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "ScrollIntoView");

	Params::UW_QuartermasterMenu_C_ScrollIntoView_Params Parms{};

	Parms.WidgetToFind = WidgetToFind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_HandleMenuWideMultiInput__Up__Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_QuartermasterMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Up__Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnKeyUp");

	Params::UW_QuartermasterMenu_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Up__Return_Value = CallFunc_HandleMenuWideMultiInput__Up__Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.AnyAttachmentCategoryWidgetHovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnyHovered                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinCategory_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::AnyAttachmentCategoryWidgetHovered(bool* Return_Value, bool bAnyHovered, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UW_SkinCategory_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UW_AttachmentCategory_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "AnyAttachmentCategoryWidgetHovered");

	Params::UW_QuartermasterMenu_C_AnyAttachmentCategoryWidgetHovered_Params Parms{};

	Parms.bAnyHovered = bAnyHovered;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.GetCurrentlyFocusedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::GetCurrentlyFocusedWidget(class UWidget** Return_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "GetCurrentlyFocusedWidget");

	Params::UW_QuartermasterMenu_C_GetCurrentlyFocusedWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.PopulateAttachmentCategory
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAllowAttachmentCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAttachmentCategory> AttachmentCategories                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAttachmentCategory         AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::PopulateAttachmentCategory(bool bAllowAttachmentCategory, TArray<struct FAttachmentCategory>& AttachmentCategories, const struct FAttachmentCategory& AttachmentCategory, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "PopulateAttachmentCategory");

	Params::UW_QuartermasterMenu_C_PopulateAttachmentCategory_Params Parms{};

	Parms.bAllowAttachmentCategory = bAllowAttachmentCategory;
	Parms.AttachmentCategories = AttachmentCategories;
	Parms.AttachmentCategory = AttachmentCategory;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinCategory_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::UnhoverAll(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UW_SkinCategory_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UW_AttachmentCategory_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "UnhoverAll");

	Params::UW_QuartermasterMenu_C_UnhoverAll_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.FocusOnWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InWidgetToFocus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::FocusOnWidget(class UWidget* InWidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "FocusOnWidget");

	Params::UW_QuartermasterMenu_C_FocusOnWidget_Params Parms{};

	Parms.InWidgetToFocus = InWidgetToFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Escape
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_AnyAttachmentCategoryWidgetHovered_Return_Value         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::Escape(bool CallFunc_AnyAttachmentCategoryWidgetHovered_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "Escape");

	Params::UW_QuartermasterMenu_C_Escape_Params Parms{};

	Parms.CallFunc_AnyAttachmentCategoryWidgetHovered_Return_Value = CallFunc_AnyAttachmentCategoryWidgetHovered_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnselectAttachmentCategory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_QuartermasterMenu_C::UnselectAttachmentCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "UnselectAttachmentCategory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.SelectAttachmentCategory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanCleanGun_Return_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinCategory_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::SelectAttachmentCategory(bool CallFunc_CanCleanGun_Return_Value, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UW_SkinCategory_C* CallFunc_Array_Get_Item, class UW_AttachmentCategory_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "SelectAttachmentCategory");

	Params::UW_QuartermasterMenu_C_SelectAttachmentCategory_Params Parms{};

	Parms.CallFunc_CanCleanGun_Return_Value = CallFunc_CanCleanGun_Return_Value;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAttachmentCategory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::UnhoverAttachmentCategory(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinCategory_C* CallFunc_Array_Get_Item, class UW_AttachmentCategory_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "UnhoverAttachmentCategory");

	Params::UW_QuartermasterMenu_C_UnhoverAttachmentCategory_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.HoverAttachmentCategory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::HoverAttachmentCategory(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_SkinCategory_C* CallFunc_Array_Get_Item, class UW_AttachmentCategory_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "HoverAttachmentCategory");

	Params::UW_QuartermasterMenu_C_HoverAttachmentCategory_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.PreviousRow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCleanGun_Return_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::PreviousRow(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_CanCleanGun_Return_Value, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "PreviousRow");

	Params::UW_QuartermasterMenu_C_PreviousRow_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_CanCleanGun_Return_Value = CallFunc_CanCleanGun_Return_Value;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.NextRow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCleanGun_Return_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_QuartermasterMenu_C::NextRow(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_CanCleanGun_Return_Value, int32 K2Node_Select_Default, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "NextRow");

	Params::UW_QuartermasterMenu_C_NextRow_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_CanCleanGun_Return_Value = CallFunc_CanCleanGun_Return_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_HandleMenuWideMultiInput__Down__Return_Value            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_3                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue_4                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_IsUIHidden_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_3                                   (None)

struct FEventReply UW_QuartermasterMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_HandleMenuWideMultiInput__Down__Return_Value, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FKey& CallFunc_GetKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, const struct FKey& CallFunc_GetKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, const struct FKey& CallFunc_GetKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, const struct FKey& CallFunc_GetKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUIHidden_Return_Value, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnKeyDown");

	Params::UW_QuartermasterMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_HandleMenuWideMultiInput__Down__Return_Value = CallFunc_HandleMenuWideMultiInput__Down__Return_Value;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_GetKey_ReturnValue_1 = CallFunc_GetKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_GetKey_ReturnValue_2 = CallFunc_GetKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_8 = CallFunc_EqualEqual_KeyKey_ReturnValue_8;
	Parms.CallFunc_GetKey_ReturnValue_3 = CallFunc_GetKey_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_9 = CallFunc_EqualEqual_KeyKey_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_10 = CallFunc_EqualEqual_KeyKey_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_11 = CallFunc_EqualEqual_KeyKey_ReturnValue_11;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_12 = CallFunc_EqualEqual_KeyKey_ReturnValue_12;
	Parms.CallFunc_GetKey_ReturnValue_4 = CallFunc_GetKey_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_13 = CallFunc_EqualEqual_KeyKey_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_14 = CallFunc_EqualEqual_KeyKey_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_15 = CallFunc_EqualEqual_KeyKey_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsUIHidden_Return_Value = CallFunc_IsUIHidden_Return_Value;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue_3 = CallFunc_Handled_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EnteringQuartermasterMenu_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutItem_Preset_C*     CallFunc_GetSelectedPresetWidget_Return_Value                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::Exit(bool CallFunc_EnteringQuartermasterMenu_ReturnValue, class UW_LoadoutItem_Preset_C* CallFunc_GetSelectedPresetWidget_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "Exit");

	Params::UW_QuartermasterMenu_C_Exit_Params Parms{};

	Parms.CallFunc_EnteringQuartermasterMenu_ReturnValue = CallFunc_EnteringQuartermasterMenu_ReturnValue;
	Parms.CallFunc_GetSelectedPresetWidget_Return_Value = CallFunc_GetSelectedPresetWidget_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Enter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LoadoutItemClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponData>         Weapons                                                          (Edit, BlueprintVisible)
// class UDataTable*                  ItemDataTable                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAttachmentCategory> AttachmentCategories                                             (Edit, BlueprintVisible)

void UW_QuartermasterMenu_C::Enter(class UClass* LoadoutItemClass, const TArray<struct FWeaponData>& Weapons, class UDataTable* ItemDataTable, const TArray<struct FAttachmentCategory>& AttachmentCategories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "Enter");

	Params::UW_QuartermasterMenu_C_Enter_Params Parms{};

	Parms.LoadoutItemClass = LoadoutItemClass;
	Parms.Weapons = Weapons;
	Parms.ItemDataTable = ItemDataTable;
	Parms.AttachmentCategories = AttachmentCategories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonClicked(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnAttachmentCategoryButtonClicked");

	Params::UW_QuartermasterMenu_C_OnAttachmentCategoryButtonClicked_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentItemButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachmentClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnAttachmentItemButtonClicked(class UClass* AttachmentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnAttachmentItemButtonClicked");

	Params::UW_QuartermasterMenu_C_OnAttachmentItemButtonClicked_Params Parms{};

	Parms.AttachmentClass = AttachmentClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonHovered(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnAttachmentCategoryButtonHovered");

	Params::UW_QuartermasterMenu_C_OnAttachmentCategoryButtonHovered_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnAttachmentCategoryButtonUnhovered(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnAttachmentCategoryButtonUnhovered");

	Params::UW_QuartermasterMenu_C_OnAttachmentCategoryButtonUnhovered_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinCategory_C*           SkinCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnSkinCategoryButtonClicked(class UW_SkinCategory_C* SkinCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnSkinCategoryButtonClicked");

	Params::UW_QuartermasterMenu_C_OnSkinCategoryButtonClicked_Params Parms{};

	Parms.SkinCategory = SkinCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinCategory_C*           SkinCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnSkinCategoryButtonHovered(class UW_SkinCategory_C* SkinCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnSkinCategoryButtonHovered");

	Params::UW_QuartermasterMenu_C_OnSkinCategoryButtonHovered_Params Parms{};

	Parms.SkinCategory = SkinCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinCategory_C*           SkinCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnSkinCategoryButtonUnhovered(class UW_SkinCategory_C* SkinCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnSkinCategoryButtonUnhovered");

	Params::UW_QuartermasterMenu_C_OnSkinCategoryButtonUnhovered_Params Parms{};

	Parms.SkinCategory = SkinCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinItemButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SkinClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::OnSkinItemButtonClicked(class UClass* SkinClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "OnSkinItemButtonClicked");

	Params::UW_QuartermasterMenu_C_OnSkinItemButtonClicked_Params Parms{};

	Parms.SkinClass = SkinClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UW_QuartermasterMenu_C_BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	Params::UW_QuartermasterMenu_C_BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_AttachmentCategory_C*     AttachmentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(class UW_AttachmentCategory_C* AttachmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	Params::UW_QuartermasterMenu_C_BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentCategory = AttachmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuartermasterMenu.W_QuartermasterMenu_C.ExecuteUbergraph_W_QuartermasterMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     K2Node_ComponentBoundEvent_AttachmentCategory                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_CustomEvent_AttachmentCategory_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_AttachmentClass                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_CustomEvent_AttachmentCategory_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_CustomEvent_AttachmentCategory                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemCategory>   Temp_byte_Variable_1                                             (ReferenceParm)
// TArray<enum class EWeaponAttachmentType>Temp_byte_Variable_2                                             (ReferenceParm)
// TArray<enum class EWeaponAttachmentType>Temp_byte_Variable_3                                             (ReferenceParm)
// enum class EWeaponAttachmentType   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemCategory>   Temp_byte_Variable_5                                             (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           K2Node_CustomEvent_SkinCategory_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SkinCategory_C*           K2Node_CustomEvent_SkinCategory_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SkinCategory_C*           K2Node_CustomEvent_SkinCategory                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_SkinClass                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AttachmentCategory_C*     K2Node_ComponentBoundEvent_AttachmentCategory_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AttachmentCategory_C*     K2Node_ComponentBoundEvent_AttachmentCategory_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuartermasterMenu_C::ExecuteUbergraph_W_QuartermasterMenu(int32 EntryPoint, class UW_AttachmentCategory_C* K2Node_ComponentBoundEvent_AttachmentCategory, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UW_AttachmentCategory_C* K2Node_CustomEvent_AttachmentCategory_2, class UClass* K2Node_CustomEvent_AttachmentClass, bool CallFunc_Not_PreBool_ReturnValue_1, class UW_AttachmentCategory_C* K2Node_CustomEvent_AttachmentCategory_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_AttachmentCategory_C* K2Node_CustomEvent_AttachmentCategory, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EItemCategory Temp_byte_Variable, TArray<enum class EItemCategory>& Temp_byte_Variable_1, TArray<enum class EWeaponAttachmentType>& Temp_byte_Variable_2, TArray<enum class EWeaponAttachmentType>& Temp_byte_Variable_3, enum class EWeaponAttachmentType CallFunc_Array_Get_Item, enum class EWeaponAttachmentType CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, enum class EItemCategory Temp_byte_Variable_4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<enum class EItemCategory>& Temp_byte_Variable_5, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UW_SkinCategory_C* K2Node_CustomEvent_SkinCategory_2, class UW_SkinCategory_C* K2Node_CustomEvent_SkinCategory_1, bool CallFunc_Not_PreBool_ReturnValue_3, class UW_SkinCategory_C* K2Node_CustomEvent_SkinCategory, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, class UClass* K2Node_CustomEvent_SkinClass, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, class UW_AttachmentCategory_C* K2Node_ComponentBoundEvent_AttachmentCategory_2, class UW_AttachmentCategory_C* K2Node_ComponentBoundEvent_AttachmentCategory_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuartermasterMenu_C", "ExecuteUbergraph_W_QuartermasterMenu");

	Params::UW_QuartermasterMenu_C_ExecuteUbergraph_W_QuartermasterMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_AttachmentCategory = K2Node_ComponentBoundEvent_AttachmentCategory;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_AttachmentCategory_2 = K2Node_CustomEvent_AttachmentCategory_2;
	Parms.K2Node_CustomEvent_AttachmentClass = K2Node_CustomEvent_AttachmentClass;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_AttachmentCategory_1 = K2Node_CustomEvent_AttachmentCategory_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_AttachmentCategory = K2Node_CustomEvent_AttachmentCategory;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_SkinCategory_2 = K2Node_CustomEvent_SkinCategory_2;
	Parms.K2Node_CustomEvent_SkinCategory_1 = K2Node_CustomEvent_SkinCategory_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CustomEvent_SkinCategory = K2Node_CustomEvent_SkinCategory;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_SkinClass = K2Node_CustomEvent_SkinClass;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_AttachmentCategory_2 = K2Node_ComponentBoundEvent_AttachmentCategory_2;
	Parms.K2Node_ComponentBoundEvent_AttachmentCategory_1 = K2Node_ComponentBoundEvent_AttachmentCategory_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


