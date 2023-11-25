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
	 * WidgetBlueprintGeneratedClass W_ItemSelection_Item.W_ItemSelection_Item_C
	 * Size -> 0x0198 (FullSize[0x0410] - InheritedSize[0x0278])
	 */
	class UW_ItemSelection_Item_C : public UBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Anim_Focus;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_Select;                                             // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Anim_FadeOut;                                            // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBackgroundBlur*                                       BG_Blur;                                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                BG_Image;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                          CanvasPanel;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Icon_Image;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Selected_Image;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                           DefaultIcon;                                             // 0x02C0(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                           BackgroundColor;                                         // 0x0348(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                           IconColor;                                               // 0x0370(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                           SelectedColor;                                           // 0x0398(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               ED_OnAnimFadeOutFinished;                                // 0x03C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x03C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FSlateColor                                           UnselectedColor;                                         // 0x03D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         bIsPirated;                                              // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         InDesignTime;                                            // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x6];                                   // 0x03FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               ED_OnAnimSelectFinished;                                 // 0x0400(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0401(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		void StopFadeOutAnim();
		void StopConfirmAnim();
		void ConfirmSelection();
		void Deselect();
		void Select();
		void FadeOut();
		void ChangeIconsIfBuildIsPirated();
		void OnAnimFadeOut_Finished();
		void Initialize(const struct FSlateBrush& InBrush, bool bIsVisible);
		void ResetSelectionIndicator();
		void Construct();
		void ReInitialize(bool bVisible);
		void CustomEvent_1();
		void PreConstruct(bool IsDesignTime);
		void CustomEvent_2();
		void ExecuteUbergraph_W_ItemSelection_Item(int32_t EntryPoint);
		void ED_OnAnimSelectFinished__DelegateSignature();
		void ED_OnAnimFadeOutFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
