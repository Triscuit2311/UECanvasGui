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
	 * BlueprintGeneratedClass BP_BaseController.BP_BaseController_C
	 * Size -> 0x0050 (FullSize[0x09C8] - InheritedSize[0x0978])
	 */
	class ABP_BaseController_C : public AReadyOrNotPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0978(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_PauseMenu_C*                                        EscapeMenuRef;                                           // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         EscapeMenuOpen;                                          // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EFreeDrawColor                                               CurrentFreeDrawColor;                                    // 0x0989(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         MouseButtonDown;                                         // 0x098A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x098B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Slomo;                                                   // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                                 LastPawn;                                                // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bFreeCamera;                                             // 0x0998(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0999(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                           ReplaySystemWidget;                                      // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                                 PawnBeforePremissionPlanning;                            // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_COOPScorePopUp_C*                                   PopUpWidget;                                             // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_VotePopUp_C*                                        VoteWidget;                                              // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                           TabWidget;                                               // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput);
		void HideEscapeMenu();
		void InpActEvt_Slash_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_End_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Equals_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnFailure_E5236F624136A216FC80949690426E05();
		void OnSuccess_E5236F624136A216FC80949690426E05();
		void InpActEvt_ViewScoreboard_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_VoteYes_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_VoteNo_K2Node_InputActionEvent_1(const struct FKey& Key);
		void Server_FreeCamera();
		void SpawnEscapeMenu();
		void BP_ClientWasKicked(const class FText& KickReason);
		void ServerPossesPawn(class APawn* Pawn);
		void CloseDeployMenu();
		void ShowCoopScoreChangeWidget(float ScoreChangeValue);
		void RequestVoteInput(const struct FVoteData& CurrentVoteData);
		void SetUpVoteWidget(class UW_VotePopUp_C* Widget);
		void StopVoteInput();
		void ExecuteUbergraph_BP_BaseController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
