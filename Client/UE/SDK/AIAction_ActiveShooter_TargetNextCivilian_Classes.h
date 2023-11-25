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
	 * BlueprintGeneratedClass AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	class UAIAction_ActiveShooter_TargetNextCivilian_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ACivilianCharacter*                                    TargetingCivilian;                                       // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  RandomLocation;                                          // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        TimeUntilNextTarget;                                     // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ACivilianCharacter*>                            FailedCivilianPaths;                                     // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void GetNextClosestAliveCivilian(class ACivilianCharacter** Civilian, bool* ReturnValue);
		void CanTargetCivilian(class ACivilianCharacter* InCivilian, bool* ReturnValue);
		bool ShouldPerformAction();
		void BeginAction_Blueprint();
		void Tick_Blueprint(float DeltaTime);
		void EndAction_Blueprint();
		void OnPathFound_Blueprint(int32_t PathId, ERonNavigationQueryResult Result);
		void FindNextCivilian();
		void ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
