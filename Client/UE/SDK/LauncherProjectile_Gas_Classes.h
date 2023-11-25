#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * BlueprintGeneratedClass LauncherProjectile_Gas.LauncherProjectile_Gas_C
	 * Size -> 0x0009 (FullSize[0x03D1] - InheritedSize[0x03C8])
	 */
	class ALauncherProjectile_Gas_C : public ALauncherProjectile_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                         FiredOffEffect;                                          // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDetonate_Blueprint();
		void ExecuteUbergraph_LauncherProjectile_Gas(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
