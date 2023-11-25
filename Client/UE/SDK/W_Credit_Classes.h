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
	 * WidgetBlueprintGeneratedClass W_Credit.W_Credit_C
	 * Size -> 0x0189 (FullSize[0x03E9] - InheritedSize[0x0260])
	 */
	class UW_Credit_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Name;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                              WB_Roles;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                  FullName;                                                // 0x0280(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FText>                                          Roles;                                                   // 0x0298(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		struct FST_Style_Text                                        NameTextStyle;                                           // 0x02A8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FST_Style_Text                                        RolesTextStyle;                                          // 0x0348(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                         bRevealed;                                               // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Reveal(float Delay);
		void Hide(float Delay, bool Collapse);
		void ExecuteUbergraph_W_Credit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
