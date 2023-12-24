#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_RadialMenuHelpers.BP_RadialMenuHelpers_C
class UBP_RadialMenuHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_RadialMenuHelpers_C* GetDefaultObj();

	void CenterMousePosition(int32 PlayerIndex, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1);
};

}


