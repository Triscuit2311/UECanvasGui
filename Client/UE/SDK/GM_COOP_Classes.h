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
	 * BlueprintGeneratedClass GM_COOP.GM_COOP_C
	 * Size -> 0x0010 (FullSize[0x0AC0] - InheritedSize[0x0AB0])
	 */
	class AGM_COOP_C : public ACoopGM
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0AB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                       DefaultSceneRoot;                                        // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnMatchStarted_Event_1();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GM_COOP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
