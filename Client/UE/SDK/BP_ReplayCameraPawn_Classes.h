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
	 * BlueprintGeneratedClass BP_ReplayCameraPawn.BP_ReplayCameraPawn_C
	 * Size -> 0x0008 (FullSize[0x0DA8] - InheritedSize[0x0DA0])
	 */
	class ABP_ReplayCameraPawn_C : public AReplayCameraPawn
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0DA0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_ReplayCameraPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
