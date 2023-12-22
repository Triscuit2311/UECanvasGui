#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IRadioWidget.IRadioWidget_C
class IIRadioWidget_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIRadioWidget_C* GetDefaultObj();

	void Equals(TScriptInterface<class IIRadioWidget_C> Other, bool* Result);
	void OnRadioDeselected();
	void OnRadioSelected();
};

}


