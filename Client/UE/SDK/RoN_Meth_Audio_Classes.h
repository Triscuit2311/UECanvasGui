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
	 * BlueprintGeneratedClass RoN_Meth_Audio.RoN_Meth_Audio_C
	 * Size -> 0x0010 (FullSize[0x0B08] - InheritedSize[0x0AF8])
	 */
	class ARoN_Meth_Audio_C : public AReadyOrNotLevelScript
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0AF8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                                baseAmbience;                                            // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_RoN_Meth_Audio(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
