#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_Ammo.AC_Ammo_C
class UAC_Ammo_C : public UAC_Ammo
{
public:

	static class UClass* StaticClass();
	static class UAC_Ammo_C* GetDefaultObj();

	float CalculateCurve(float X, float CallFunc_LogisticCurve_Return_Value);
	void ReloadCurve(float X, float* Return_Value, float E, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_NegateFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


