#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass W_2DMap.W_2DMap_C
class UW_2DMap_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Map;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MapDynMat;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_2DMap_C* GetDefaultObj();

	void GetDynMat(class UMaterialInstanceDynamic** MapDynMat, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_SetDynMat_MapDynMat);
	void SetDynMat(class UMaterialInstance* Material, class UMaterialInstanceDynamic** MapDynMat, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SetFloorTexture(class UMaterialInstance* MapMaterialInstance, class UTexture2D* LayoutTexture);
	void ExecuteUbergraph_W_2DMap(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynMat_MapDynMat, class UMaterialInstance* K2Node_CustomEvent_MapMaterialInstance, class UTexture2D* K2Node_CustomEvent_LayoutTexture, class UMaterialInstanceDynamic* CallFunc_SetDynMat_MapDynMat, bool CallFunc_IsValid_ReturnValue);
};

}


