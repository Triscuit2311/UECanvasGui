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
	 * WidgetBlueprintGeneratedClass W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C
	 * Size -> 0x03E0 (FullSize[0x0640] - InheritedSize[0x0260])
	 */
	class UW_Briefing_Intel_Entry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_Button_C*                                           btn_Intel;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_IntelThumbnail;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                               SelectionBorder;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                           DocumentThumbnail;                                       // 0x0280(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		E_Briefing_Intel_Types                                       DocumentType;                                            // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterBio                                         Bio;                                                     // 0x0310(0x0140) Edit, BlueprintVisible, ExposeOnSpawn
		class UMulticastInlineDelegate                               BioIntelClicked;                                         // 0x0450(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0451(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FST_Briefing_Evidence                                 Media;                                                   // 0x0460(0x00A0) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bIsBio;                                                  // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsMedia;                                                // 0x0501(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsHovered;                                              // 0x0502(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x5];                                   // 0x0503(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               MediaIntelClicked;                                       // 0x0508(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0509(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         bIsActive;                                               // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0004[0x3];                                   // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                          colTintActive;                                           // 0x051C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0005[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                           BorderActiveBrush;                                       // 0x0530(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                           BorderNormalBrush;                                       // 0x05B8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetActive(bool Active);
		void SetHovered(bool IsHovered);
		void BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_Document_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
		void ExecuteUbergraph_W_Briefing_Intel_Entry(int32_t EntryPoint);
		void MediaIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media);
		void BioIntelClicked__DelegateSignature(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
