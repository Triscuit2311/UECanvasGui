/**
 * Name: ron
 * Version: 25346
 */

#include "../SDK.h"

namespace SDK
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.GetJoystickDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoystickTypes                                     Stick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      StickInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24834);
		
		struct
		{
			EJoystickTypes                                     Stick;
			unsigned char                                      UnknownData_0000[0x3];
			struct FVector2D                      StickInput;
		} params;
		params.Stick = Stick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StickInput != nullptr)
			*StickInput = params.StickInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.HideEscapeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::HideEscapeMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24833);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Equals_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_Equals_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24832);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Slash_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_Slash_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24831);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_VoteYes_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24830);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_VoteNo_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24829);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.OnFailure_396BB7CB46A59B1613A2548E31963ABF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::OnFailure_396BB7CB46A59B1613A2548E31963ABF()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24828);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.OnSuccess_396BB7CB46A59B1613A2548E31963ABF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::OnSuccess_396BB7CB46A59B1613A2548E31963ABF()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24827);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24826);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24825);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_End_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24824);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_End_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24823);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Chat_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::InpActEvt_Chat_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24822);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ServerPossesPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::ServerPossesPawn(class APawn* Pawn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24821);
		
		struct
		{
			class APawn*                                       Pawn;
		} params;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.CloseDeployMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::CloseDeployMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24820);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.Server_FreeCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::Server_FreeCamera()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24819);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.SpawnEscapeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::SpawnEscapeMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24818);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ShowCoopScoreChangeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScoreChangeValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::ShowCoopScoreChangeWidget(float ScoreChangeValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24817);
		
		struct
		{
			float                                              ScoreChangeValue;
		} params;
		params.ScoreChangeValue = ScoreChangeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.RequestVoteInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoteData                                   CurrentVoteData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::RequestVoteInput(const struct FVoteData& CurrentVoteData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24816);
		
		struct
		{
			struct FVoteData                                   CurrentVoteData;
		} params;
		params.CurrentVoteData = CurrentVoteData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.SetUpVoteWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_VotePopUp_C*                              Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::SetUpVoteWidget(class UW_VotePopUp_C* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24815);
		
		struct
		{
			class UW_VotePopUp_C*                              Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.StopVoteInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::StopVoteInput()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24814);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ShowLoadoutUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::ShowLoadoutUI()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24813);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.BP_ClientWasKicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        KickReason                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::BP_ClientWasKicked(const class FText& KickReason)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24812);
		
		struct
		{
			class FText                                        KickReason;
		} params;
		params.KickReason = KickReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.CloseLoadoutUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::CloseLoadoutUI()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24811);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ToggleCredits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::ToggleCredits()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24810);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.TogglePreMissionTablet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::TogglePreMissionTablet()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24809);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_TestController.BP_UI_TestController_C.ExecuteUbergraph_BP_UI_TestController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_TestController_C::ExecuteUbergraph_BP_UI_TestController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(24808);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_UI_TestController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_UI_TestController_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(24807);
		return ptr;
	}

}


