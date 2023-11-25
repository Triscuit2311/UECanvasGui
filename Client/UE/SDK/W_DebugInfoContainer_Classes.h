#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * WidgetBlueprintGeneratedClass W_DebugInfoContainer.W_DebugInfoContainer_C
	 * Size -> 0x01A0 (FullSize[0x0400] - InheritedSize[0x0260])
	 */
	class UW_DebugInfoContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBackgroundBlur*                                       BG_Blur;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                BG_Image;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          DebugInfo_Container;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            Title_Text;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                        TitleFont;                                               // 0x0288(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FMargin                                               TitlePadding;                                            // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EHorizontalAlignment                                         TitleHorizontalAlignment;                                // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EVerticalAlignment                                           TitleVerticalAlignment;                                  // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                        DebugNameFont;                                           // 0x02F8(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateFontInfo                                        DebugValueFont;                                          // 0x0350(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bEnableBackgroundEffects;                                // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  Title;                                                   // 0x03B0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FText>                                          DebugItems;                                              // 0x03C8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<float>                                                Spacing;                                                 // 0x03D8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         bUseUniformSpacing;                                      // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        DefaultSpacing;                                          // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UW_DebugInfo_C*>                                DebugInfoWidgets;                                        // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetTitle(class FText* ReturnValue);
		void SetDebugItemValue(int32_t Index, const class FText& DebugText);
		void AddDebugItems(int32_t Num);
		void AddDebugItem(const class FText& Label, const class FText& Value);
		void Clear();
		void Refresh();
		void GetNumDebugEntries(int32_t* ReturnValue);
		void GetDebugItemName(const class FText& DebugName, class UW_DebugInfo_C** DebugInfoWidget);
		void GetDebugItemIndex(int32_t Index, class UW_DebugInfo_C** DebugInfoWidget);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_W_DebugInfoContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
