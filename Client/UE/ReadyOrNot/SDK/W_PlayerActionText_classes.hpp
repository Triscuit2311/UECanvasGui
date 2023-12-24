#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x348 - 0x2A8)
// WidgetBlueprintGeneratedClass W_PlayerActionText.W_PlayerActionText_C
class UW_PlayerActionText_C : public UPlayerActionPromptWidget
{
public:
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RedLine_Image;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerActionPromptSlot               ActionPrompt;                                      // 0x2B8(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_PlayerActionText_C* GetDefaultObj();

};

}


