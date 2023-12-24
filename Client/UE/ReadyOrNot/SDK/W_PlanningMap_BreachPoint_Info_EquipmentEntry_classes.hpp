#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint_Info_EquipmentEntry.W_PlanningMap_BreachPoint_Info_EquipmentEntry_C
class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_icon;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           W_Button;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLevelDeployableData                  DeployableData;                                    // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FLinearColor                          NormalColor;                                       // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredColor;                                      // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PressedColor;                                      // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C* GetDefaultObj();

	void OnLoaded_0AA3E177468D68E03944E59A03A2CFB4(class UObject* Loaded);
	void Construct();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
	void ExecuteUbergraph_W_PlanningMap_BreachPoint_Info_EquipmentEntry(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void OnClicked__DelegateSignature(const struct FLevelDeployableData& DeployableData);
};

}


