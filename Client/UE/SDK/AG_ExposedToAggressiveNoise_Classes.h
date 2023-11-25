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
	 * BlueprintGeneratedClass AG_ExposedToAggressiveNoise.AG_ExposedToAggressiveNoise_C
	 * Size -> 0x0019 (FullSize[0x0041] - InheritedSize[0x0028])
	 */
	class UAG_ExposedToAggressiveNoise_C : public UAIActionGate
	{
	public:
		TArray<class FName>                                          ExcludedTags;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		float                                                        SinceSeconds;                                            // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        MaxDistance;                                             // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         IncludeFriendly;                                         // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
