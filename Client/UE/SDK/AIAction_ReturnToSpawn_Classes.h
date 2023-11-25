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
	 * BlueprintGeneratedClass AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAIAction_ReturnToSpawn_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool ShouldPerformAction();
		void BeginAction_Blueprint();
		void OnMoveComplete_Blueprint(class AAIController* Controller, int32_t RequestID);
		void ExecuteUbergraph_AIAction_ReturnToSpawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
