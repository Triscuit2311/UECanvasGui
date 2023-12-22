#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass W_MissionEndBonus.W_MissionEndBonus_C
class UW_MissionEndBonus_C : public UUserWidget
{
public:
	class UTextBlock*                            BonusAmount;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BonusName;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BonusScoreAmount;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BonusTxt;                                          // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  BonusAmountTxt;                                    // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  ScoreAmountTxt;                                    // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_MissionEndBonus_C* GetDefaultObj();

};

}


