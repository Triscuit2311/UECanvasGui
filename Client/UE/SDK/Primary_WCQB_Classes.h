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
	 * BlueprintGeneratedClass Primary_WCQB.Primary_WCQB_C
	 * Size -> 0x0010 (FullSize[0x1310] - InheritedSize[0x1300])
	 */
	class APrimary_WCQB_C : public AShotgun
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                          LightToggle1P;                                           // 0x1308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Primary_WCQB(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
