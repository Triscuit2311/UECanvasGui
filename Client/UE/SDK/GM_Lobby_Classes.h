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
	 * BlueprintGeneratedClass GM_Lobby.GM_Lobby_C
	 * Size -> 0x0008 (FullSize[0x0778] - InheritedSize[0x0770])
	 */
	class AGM_Lobby_C : public ALobbyGM
	{
	public:
		class USceneComponent*                                       DefaultSceneRoot;                                        // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
