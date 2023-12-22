#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ReadyOrNotUI.ReadyOrNotUI_C
class IReadyOrNotUI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IReadyOrNotUI_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void ChangePage(class FName PageName);
	void GetFocusTarget(class UWidget** Focus);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
};

}


