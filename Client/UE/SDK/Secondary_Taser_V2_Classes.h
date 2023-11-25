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
	 * BlueprintGeneratedClass Secondary_Taser_V2.Secondary_Taser_V2_C
	 * Size -> 0x0018 (FullSize[0x1538] - InheritedSize[0x1520])
	 */
	class ASecondary_Taser_V2_C : public ATaser
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                        OverallTaserWireLength;                                  // 0x1528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  LastLocation;                                            // 0x152C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void DestroyPouches_2();
		void SpawnPouches_2();
		void ExecuteUbergraph_Secondary_Taser_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
