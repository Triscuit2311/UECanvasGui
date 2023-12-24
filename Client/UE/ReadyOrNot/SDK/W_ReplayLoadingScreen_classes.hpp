#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x344 - 0x320)
// WidgetBlueprintGeneratedClass W_ReplayLoadingScreen.W_ReplayLoadingScreen_C
class UW_ReplayLoadingScreen_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Loading;                                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        LoadingPercentage;                                 // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ReplayLoadingScreen_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_ReplayLoadingScreen(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


