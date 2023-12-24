#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass W_MagCheck_MagStatus.W_MagCheck_MagStatus_C
class UW_MagCheck_MagStatus_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Highlight;                                    // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            AmmoTypeText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight_Bar_Image;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MagIcon_Image;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_MagIcon;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MagIndex;                                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AmmoType;                                          // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_MagCheck_MagStatus_C* GetDefaultObj();

	void Unhighlight();
	void Highlight(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Init(int32 MagIndex, class FText AmmoTypeText);
	void ExecuteUbergraph_W_MagCheck_MagStatus(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_GetMagazineAmmoPercentage_ReturnValue, int32 K2Node_CustomEvent_MagIndex, class FText K2Node_CustomEvent_AmmoTypeText);
};

}


