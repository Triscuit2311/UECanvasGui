#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IRadialInput.IRadialInput_C
class IIRadialInput_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIRadialInput_C* GetDefaultObj();

	void GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput);
};

}


