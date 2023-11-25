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
	 * BlueprintGeneratedClass AIAction_SeekPlayer.AIAction_SeekPlayer_C
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UAIAction_SeekPlayer_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USeekPlayerCombatMove_C*                               SeekPlayerCombatMove;                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldPerformAction();
		void BeginAction_Blueprint();
		void OnCreate_Blueprint(class ACyberneticController* Controller);
		void ExecuteUbergraph_AIAction_SeekPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
