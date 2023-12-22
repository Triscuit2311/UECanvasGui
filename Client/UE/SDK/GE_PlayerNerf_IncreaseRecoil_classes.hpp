#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x118 - 0x110)
// BlueprintGeneratedClass GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C
class UGE_PlayerNerf_IncreaseRecoil_C : public UPlayerEffect_ModifyRecoil
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGE_PlayerNerf_IncreaseRecoil_C* GetDefaultObj();

	void ApplyEffect();
	void ResetEffect();
	void ExecuteUbergraph_GE_PlayerNerf_IncreaseRecoil(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
};

}


