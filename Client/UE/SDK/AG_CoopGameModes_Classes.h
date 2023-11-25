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
	 * BlueprintGeneratedClass AG_CoopGameModes.AG_CoopGameModes_C
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAG_CoopGameModes_C : public UAIActionGate
	{
	public:
		TArray<ECOOPMode>                                            GameMode;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn

	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
