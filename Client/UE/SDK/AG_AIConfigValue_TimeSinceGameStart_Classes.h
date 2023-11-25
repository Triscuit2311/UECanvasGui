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
	 * BlueprintGeneratedClass AG_AIConfigValue_TimeSinceGameStart.AG_AIConfigValue_TimeSinceGameStart_C
	 * Size -> 0x0011 (FullSize[0x0039] - InheritedSize[0x0028])
	 */
	class UAG_AIConfigValue_TimeSinceGameStart_C : public UAIActionGate
	{
	public:
		class FString                                                ConfigKey;                                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		EOnlineComparisonOpRedux                                     ComparisonType;                                          // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
