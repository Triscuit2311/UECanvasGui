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
	 * BlueprintGeneratedClass GS_COOP.GS_COOP_C
	 * Size -> 0x0010 (FullSize[0x0AE0] - InheritedSize[0x0AD0])
	 */
	class AGS_COOP_C : public ACoopGS
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0AD0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                                NewVar_1;                                                // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GS_COOP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
