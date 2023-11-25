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
	 * WidgetBlueprintGeneratedClass W_HotkeyBar.W_HotkeyBar_C
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UW_HotkeyBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                        HB_Bindings;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_HotkeyBar_Entry_C*                                  W_HotkeyBar_Entry;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct Fst_HotkeySettings>                            Hotkeys;                                                 // 0x0278(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class UMulticastInlineDelegate                               OnHotkeyClicked;                                         // 0x0288(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0289(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void UpdateHints(TArray<struct Fst_HotkeySettings> Hotkeys);
		void HotkeyButtonClicked(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry);
		void ExecuteUbergraph_W_HotkeyBar(int32_t EntryPoint);
		void OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
