﻿#pragma once

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
	 * BlueprintGeneratedClass AG_TimeSincePerformingCombatMove.AG_TimeSincePerformingCombatMove_C
	 * Size -> 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
	 */
	class UAG_TimeSincePerformingCombatMove_C : public UAIActionGate
	{
	public:
		float                                                        Seconds;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif