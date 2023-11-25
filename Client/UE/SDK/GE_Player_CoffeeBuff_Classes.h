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
	 * BlueprintGeneratedClass GE_Player_CoffeeBuff.GE_Player_CoffeeBuff_C
	 * Size -> 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
	 */
	class UGE_Player_CoffeeBuff_C : public UBasePlayerEffect
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                        OriginalRunSpeed;                                        // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        NewMovementSpeed;                                        // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        NewMovementSpeedPercentage;                              // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void ApplyEffect();
		void ResetEffect();
		void ExecuteUbergraph_GE_Player_CoffeeBuff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
