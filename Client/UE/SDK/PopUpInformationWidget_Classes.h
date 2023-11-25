#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass PopUpInformationWidget.PopUpInformationWidget_C
	 * Size -> 0x0039 (FullSize[0x0299] - InheritedSize[0x0260])
	 */
	class UPopUpInformationWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      FadeOutEverything;                                       // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      FadeInEverything;                                        // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                            TextBlock_46;                                            // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  Text;                                                    // 0x0280(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         WaitForMatchStartInformation;                            // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		ESlateVisibility Get_RoundCount_Visibility_1();
		struct FLinearColor GetColorAndOpacity_1();
		class FText DisplayText();
		class FText Get_RoundCount_Text_1();
		void OnGameStarted();
		void Construct();
		void CustomEvent_1();
		void ExecuteUbergraph_PopUpInformationWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
