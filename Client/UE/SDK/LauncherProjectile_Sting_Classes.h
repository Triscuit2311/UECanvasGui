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
	 * BlueprintGeneratedClass LauncherProjectile_Sting.LauncherProjectile_Sting_C
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class ALauncherProjectile_Sting_C : public ALauncherProjectile_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnDetonate_Blueprint();
		void ExecuteUbergraph_LauncherProjectile_Sting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
