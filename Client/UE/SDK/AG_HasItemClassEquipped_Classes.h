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
	 * BlueprintGeneratedClass AG_HasItemClassEquipped.AG_HasItemClassEquipped_C
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAG_HasItemClassEquipped_C : public UAIActionGate
	{
	public:
		TArray<EItemClass>                                           ItemClasses;                                             // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn

	public:
		bool CanOpen(const struct FAIActionDecisionContext& Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
