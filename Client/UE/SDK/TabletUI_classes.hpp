#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass TabletUI.TabletUI_C
class ITabletUI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITabletUI_C* GetDefaultObj();

	void AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible);
	void SetVisualTheme(bool UseDarkTheme);
	void SetTabletState(bool IsAwake);
};

}


