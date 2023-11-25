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
	 * WidgetBlueprintGeneratedClass W_TutorialMessagePopup.W_TutorialMessagePopup_C
	 * Size -> 0x00D9 (FullSize[0x0339] - InheritedSize[0x0260])
	 */
	class UW_TutorialMessagePopup_C : public UTutorialTextPrompt_Widget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      InitMessageBox;                                          // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                                Image_241;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          MessageBox;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          MessageContentBox;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            MessageText;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            TitleText;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              WidgetMessageBox;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FPromptInfo>                                   PromptMessages;                                          // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateFontInfo                                        MessageFontInfo;                                         // 0x02B0(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<EActionMappingFilter>                                 NewVar_2;                                                // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVictoryInput>                                 NewVar_3;                                                // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UW_TutorialMessageEntry_C*>                     Active;                                                  // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                         Displayed;                                               // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void ShowMessagePrompt(bool IsFirstShowing, const class FText& Title, TArray<class FText> Content);
		void HideMessagePrompt();
		void UpdateMessageContent(TArray<class FText> Content);
		void ClearMessages();
		void ExecuteUbergraph_W_TutorialMessagePopup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
