#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x348 - 0x260)
// WidgetBlueprintGeneratedClass W_DebugInfo.W_DebugInfo_C
class UW_DebugInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            DebugName_Text;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DebugValue_Text;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_53;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DebugName;                                         // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateFontInfo                        DebugNameFont;                                     // 0x298(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateFontInfo                        DebugValueFont;                                    // 0x2F0(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DebugInfo_C* GetDefaultObj();

	void SetDebugValue(class FText DebugText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_DebugInfo(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


