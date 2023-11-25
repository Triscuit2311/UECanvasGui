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
	 * WidgetBlueprintGeneratedClass W_Hotkeys.W_Hotkeys_C
	 * Size -> 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
	 */
	class UW_Hotkeys_C : public UHotkeysWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void OnQuickThrowStart_Event_1(class ABaseItem* LastItemBeforeQuickThrow, class ABaseItem* QuickThrowGrenade);
		void OnQuickThrowEnd_Event_1(class ABaseItem* QuickThrowGrenade);
		void OnSecondarySightToggled_Event_1(bool bUsingSecondarySight, class ABaseMagazineWeapon* Weapon);
		void OnAttachmentLightToggled_Event_1();
		void OnNightVisionGogglesToggled_Event_1(bool bNVGOn);
		void RefreshHotkeyInput();
		void ExecuteUbergraph_W_Hotkeys(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
