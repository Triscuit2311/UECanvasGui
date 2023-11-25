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
	 * WidgetBlueprintGeneratedClass W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C
	 * Size -> 0x005A (FullSize[0x02BA] - InheritedSize[0x0260])
	 */
	class UW_Briefing_Dossier_Entry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                                div_bot;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                div_top;                                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Label;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Value;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  LabelText;                                               // 0x0288(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                  ValueText;                                               // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         bHideTopDiv;                                             // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         bHideBottomDiv;                                          // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetValue(const class FText& Value);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_W_Briefing_Dossier_Entry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
