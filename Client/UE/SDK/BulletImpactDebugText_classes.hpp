#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x26C - 0x260)
// WidgetBlueprintGeneratedClass BulletImpactDebugText.BulletImpactDebugText_C
class UBulletImpactDebugText_C : public UUserWidget
{
public:
	class UTextBlock*                            Text;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ID;                                                // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBulletImpactDebugText_C* GetDefaultObj();

	void SetData(int32 ID, class FText Text);
};

}


