#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x419 - 0x410)
// BlueprintGeneratedClass LauncherProjectile_Gas.LauncherProjectile_Gas_C
class ALauncherProjectile_Gas_C : public ALauncherProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         FiredOffEffect;                                    // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ALauncherProjectile_Gas_C* GetDefaultObj();

	void OnDetonate_Blueprint();
	void ExecuteUbergraph_LauncherProjectile_Gas(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue);
};

}


