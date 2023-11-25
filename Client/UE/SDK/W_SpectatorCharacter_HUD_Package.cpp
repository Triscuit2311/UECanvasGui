/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReinforcementsTextVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SpectatorCharacter_HUD_C::GetReinforcementsTextVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89763);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteHotkeyVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SpectatorCharacter_HUD_C::GetVoteHotkeyVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89762);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteHotkeyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetVoteHotkeyText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89761);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteVotersText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetVoteVotersText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89760);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteTimeLeftText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetVoteTimeLeftText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89759);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetVoteName()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89758);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteCallerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetVoteCallerName()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89757);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteDisplayVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SpectatorCharacter_HUD_C::GetVoteDisplayVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89756);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetEvidenceLeftText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetEvidenceLeftText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89755);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReportsLeftText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetReportsLeftText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89754);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionEndedVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SpectatorCharacter_HUD_C::GetMissionEndedVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89753);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReinforcementsTimeRemainingText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetReinforcementsTimeRemainingText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89752);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReinforcementsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SpectatorCharacter_HUD_C::GetReinforcementsVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89751);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
			unsigned char                                      UnknownData_0004[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionCompleteFailedVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_SpectatorCharacter_HUD_C::GetMissionCompleteFailedVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89750);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionCompleteFailedColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FSlateColor UW_SpectatorCharacter_HUD_C::GetMissionCompleteFailedColor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89749);
		
		struct
		{
			struct FSlateColor                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionCompleteFailedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetMissionCompleteFailedText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89748);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetControlsPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	class FText UW_SpectatorCharacter_HUD_C::GetControlsPrompt()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89747);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.OnNewCharacterViewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            NewViewTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::OnNewCharacterViewed(class APlayerCharacter* NewViewTarget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89746);
		
		struct
		{
			class APlayerCharacter*                            NewViewTarget;
		} params;
		params.NewViewTarget = NewViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89745);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.TeamChatPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::TeamChatPressed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89744);
		
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
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.ChatPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::ChatPressed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89743);
		
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
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89742);
		
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
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.BndEvt__W_COOPDeathScreen_K2Node_ComponentBoundEvent_1_OnSpectateButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::BndEvt__W_COOPDeathScreen_K2Node_ComponentBoundEvent_1_OnSpectateButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89741);
		
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
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.CenterPrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::CenterPrint(const class FName& MessageType, float Duration, class APlayerCharacter* Other)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89740);
		
		struct
		{
			class FName                                        MessageType;
			float                                              Duration;
			unsigned char                                      UnknownData_0005[0x4];
			class APlayerCharacter*                            Other;
		} params;
		params.MessageType = MessageType;
		params.Duration = Duration;
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.On Center Print
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::OnCenterPrint(const class FName& MessageType, float Duration, class APlayerCharacter* Other)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89739);
		
		struct
		{
			class FName                                        MessageType;
			float                                              Duration;
			unsigned char                                      UnknownData_0006[0x4];
			class APlayerCharacter*                            Other;
		} params;
		params.MessageType = MessageType;
		params.Duration = Duration;
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.CheckifInDeploy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::CheckifInDeploy()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89738);
		
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
	 * 		Name   -> Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.ExecuteUbergraph_W_SpectatorCharacter_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SpectatorCharacter_HUD_C::ExecuteUbergraph_W_SpectatorCharacter_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89737);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0007[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_SpectatorCharacter_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_SpectatorCharacter_HUD_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89736);
		return ptr;
	}

}


