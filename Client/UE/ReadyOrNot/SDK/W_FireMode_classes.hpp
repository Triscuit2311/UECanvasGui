#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x328 - 0x260)
// WidgetBlueprintGeneratedClass W_FireMode.W_FireMode_C
class UW_FireMode_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                FireMode_Icon_Image;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Firemode;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           Icon;                                              // 0x278(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          SelectedColor;                                     // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  FireModeText;                                      // 0x310(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_FireMode_C* GetDefaultObj();

	void Deselect();
	void Select();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_FireMode(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


