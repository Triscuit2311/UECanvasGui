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
	 * WidgetBlueprintGeneratedClass W_SWATTeamStatus.W_SWATTeamStatus_C
	 * Size -> 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
	 */
	class UW_SWATTeamStatus_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_SWATCommandStatus_C*                                SWAT_Alpha_Status;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SWATCommandStatus_C*                                SWAT_Beta_Status;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SWATCommandStatus_C*                                SWAT_Charlie_Status;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SWATCommandStatus_C*                                SWAT_Delta_Status;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SWATCommandStatus_C*                                SWAT_Lead_Status;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          SWAT_Status_Container;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBaseActivity*                                         CachedAlphaActivity;                                     // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBaseActivity*                                         CachedBetaActivity;                                      // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBaseActivity*                                         CachedCharlieActivity;                                   // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBaseActivity*                                         CachedDeltaActivity;                                     // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBaseActivity*                                         CachedFoxtrotActivity;                                   // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsSWATDead(ESquadPosition InSquadPosition, bool* ReturnValue);
		void IsSWATWaiting(class UBaseActivity** InActivity, bool* ReturnValue);
		void HideDuplicateCommandStatus(class UBaseActivity** InActivityA, class UBaseActivity** InActivityB, class UW_SWATCommandStatus_C** StatusWidgetToHide);
		void SetCommandStatusInfo(class UBaseActivity** InActivity, class UW_SWATCommandStatus_C** CommandStatusWidget);
		void OnActivitySoftComplete(class UBaseActivity* Activity, class ACyberneticController* Controller);
		void OnQueuedActivitySoftComplete(class UBaseActivity* Activity, class ACyberneticController* Controller);
		void UpdateSWATStatusAllPlayerHealth();
		void UpdateSWATStatus();
		void InitializeSWATStatus();
		void UpdateSWATStatusPlayerHealth(class UW_SWATCommandStatus_C* InSWATCommandStatus, ESquadPosition InSquadPosition);
		void UpdateSWATStatusCommands();
		void UpdateSWATStatusCommandName(class UW_SWATCommandStatus_C* InSWATCommandWidget, class UBaseActivity** SquadActivity, ESquadPosition InSquadPosition);
		void UpdateSWATStatusPlayerNameFromSquadPosition(class UW_SWATCommandStatus_C* InSWATCommandWidget, ESquadPosition InSquadPosition);
		void Construct();
		void OnDefaultCommandIssued(class APlayerCharacter* Issuer, ESwatCommand CommandIssued);
		void UpdateStatus();
		void ExecuteUbergraph_W_SWATTeamStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
