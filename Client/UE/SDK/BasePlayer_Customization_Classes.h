#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * BlueprintGeneratedClass BasePlayer_Customization.BasePlayer_Customization_C
	 * Size -> 0x0008 (FullSize[0x13B8] - InheritedSize[0x13B0])
	 */
	class ABasePlayer_Customization_C : public AReadyOrNotCharacter
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x13B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BasePlayer_Customization(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
