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
	 * BlueprintGeneratedClass Primary_B1301_Entryman.Primary_B1301_Entryman_C
	 * Size -> 0x0048 (FullSize[0x1348] - InheritedSize[0x1300])
	 */
	class APrimary_B1301_Entryman_C : public AShotgun
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UShellRackShellComponent*                              Shell6;                                                  // 0x1308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShellRackShellComponent*                              Shell5;                                                  // 0x1310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShellRackShellComponent*                              Shell4;                                                  // 0x1318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShellRackShellComponent*                              Shell3;                                                  // 0x1320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShellRackShellComponent*                              Shell2;                                                  // 0x1328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShellRackShellComponent*                              Shell1;                                                  // 0x1330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShellRackShellComponent*                              Shell0;                                                  // 0x1338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                          LightToggle1P;                                           // 0x1340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Primary_B1301_Entryman(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
