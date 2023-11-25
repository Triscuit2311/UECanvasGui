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
	 * BlueprintGeneratedClass AC_SuppressionNearBone.AC_SuppressionNearBone_C
	 * Size -> 0x0014 (FullSize[0x00EC] - InheritedSize[0x00D8])
	 */
	class UAC_SuppressionNearBone_C : public UAIActionConsideration
	{
	public:
		TArray<class FName>                                          BoneNames;                                               // 0x00D8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                        SuppressionDistanceThreshold;                            // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void IsBoneSuppressed(class AReadyOrNotCharacter* Character, bool* ReturnValue, float* SuppressionAmount);
		float Score(const struct FAIActionDecisionContext& Context, bool* bSuccess);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
