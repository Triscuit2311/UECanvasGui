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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.GetJoystickDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoystickTypes                                     Stick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      StickInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29169);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.HideEscapeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::HideEscapeMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29168);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.InpActEvt_Slash_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::InpActEvt_Slash_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29167);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.InpActEvt_End_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::InpActEvt_End_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29166);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.InpActEvt_Equals_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::InpActEvt_Equals_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29165);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.OnFailure_E5236F624136A216FC80949690426E05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::OnFailure_E5236F624136A216FC80949690426E05()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29164);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.OnSuccess_E5236F624136A216FC80949690426E05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::OnSuccess_E5236F624136A216FC80949690426E05()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29163);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29162);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29161);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::InpActEvt_VoteYes_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29160);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::InpActEvt_VoteNo_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29159);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.Server_FreeCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::Server_FreeCamera()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29158);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.SpawnEscapeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::SpawnEscapeMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29157);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.BP_ClientWasKicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        KickReason                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::BP_ClientWasKicked(const class FText& KickReason)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29156);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.ServerPossesPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::ServerPossesPawn(class APawn* Pawn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29155);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.CloseDeployMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::CloseDeployMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29154);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.ShowCoopScoreChangeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScoreChangeValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::ShowCoopScoreChangeWidget(float ScoreChangeValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29153);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.RequestVoteInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoteData                                   CurrentVoteData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::RequestVoteInput(const struct FVoteData& CurrentVoteData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29152);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.SetUpVoteWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_VotePopUp_C*                              Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::SetUpVoteWidget(class UW_VotePopUp_C* Widget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29151);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.StopVoteInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::StopVoteInput()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29150);
		
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
	 * 		Name   -> Function BP_BaseController.BP_BaseController_C.ExecuteUbergraph_BP_BaseController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_BaseController_C::ExecuteUbergraph_BP_BaseController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(29149);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BaseController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_BaseController_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(29148);
		return ptr;
	}

}


