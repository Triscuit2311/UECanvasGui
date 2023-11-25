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
	 * BlueprintGeneratedClass AIAction_TakeHostage.AIAction_TakeHostage_C
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class UAIAction_TakeHostage_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ACivilianCharacter*                                    TargetCivilian;                                          // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTakeHostageActivity*                                  TakeHostageActivity;                                     // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        TakeHostageTime;                                         // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bPerformHostageTaking;                                   // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SearchRange;                                             // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        LookatThreshold;                                         // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsCivilianNotFacingTarget(class ACivilianCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* ReturnValue);
		void IsCivilianFacingTarget(class ACivilianCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* ReturnValue);
		void AnySWATNearCivilian(class ACivilianCharacter* Civilian, bool* ReturnValue);
		void OnTakeHostageFinished(class UBaseActivity* Activity, class ACyberneticController* Controller);
		void TraceForNearbyCivilians(TArray<class ACivilianCharacter*>* ReturnValue);
		bool ShouldPerformAction();
		void FindClosestCivilian(TArray<class ACivilianCharacter*>* Civilians, class ACivilianCharacter** ReturnValue);
		void BeginAction_Blueprint();
		void Tick_Blueprint(float DeltaTime);
		void OnCreate_Blueprint(class ACyberneticController* Controller);
		void ExecuteUbergraph_AIAction_TakeHostage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
