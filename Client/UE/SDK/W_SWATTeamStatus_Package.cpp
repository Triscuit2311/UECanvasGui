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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::IsSWATDead(ESquadPosition InSquadPosition, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27129);
		
		struct
		{
			ESquadPosition                                     InSquadPosition;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x6];
		} params;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.IsSWATWaiting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               InActivity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::IsSWATWaiting(class UBaseActivity** InActivity, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27128);
		
		struct
		{
			class UBaseActivity*                               InActivity;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActivity != nullptr)
			*InActivity = params.InActivity;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.HideDuplicateCommandStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               InActivityA                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseActivity*                               InActivityB                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SWATCommandStatus_C*                      StatusWidgetToHide                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::HideDuplicateCommandStatus(class UBaseActivity** InActivityA, class UBaseActivity** InActivityB, class UW_SWATCommandStatus_C** StatusWidgetToHide)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27127);
		
		struct
		{
			class UBaseActivity*                               InActivityA;
			class UBaseActivity*                               InActivityB;
			class UW_SWATCommandStatus_C*                      StatusWidgetToHide;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActivityA != nullptr)
			*InActivityA = params.InActivityA;
		if (InActivityB != nullptr)
			*InActivityB = params.InActivityB;
		if (StatusWidgetToHide != nullptr)
			*StatusWidgetToHide = params.StatusWidgetToHide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.SetCommandStatusInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               InActivity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_SWATCommandStatus_C*                      CommandStatusWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::SetCommandStatusInfo(class UBaseActivity** InActivity, class UW_SWATCommandStatus_C** CommandStatusWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27126);
		
		struct
		{
			class UBaseActivity*                               InActivity;
			class UW_SWATCommandStatus_C*                      CommandStatusWidget;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InActivity != nullptr)
			*InActivity = params.InActivity;
		if (CommandStatusWidget != nullptr)
			*CommandStatusWidget = params.CommandStatusWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnActivitySoftComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::OnActivitySoftComplete(class UBaseActivity* Activity, class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27125);
		
		struct
		{
			class UBaseActivity*                               Activity;
			class ACyberneticController*                       Controller;
		} params;
		params.Activity = Activity;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnQueuedActivitySoftComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseActivity*                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACyberneticController*                       Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::OnQueuedActivitySoftComplete(class UBaseActivity* Activity, class ACyberneticController* Controller)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27124);
		
		struct
		{
			class UBaseActivity*                               Activity;
			class ACyberneticController*                       Controller;
		} params;
		params.Activity = Activity;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusAllPlayerHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusAllPlayerHealth()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27123);
		
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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27122);
		
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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.InitializeSWATStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::InitializeSWATStatus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27121);
		
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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SWATCommandStatus_C*                      InSWATCommandStatus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusPlayerHealth(class UW_SWATCommandStatus_C* InSWATCommandStatus, ESquadPosition InSquadPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27120);
		
		struct
		{
			class UW_SWATCommandStatus_C*                      InSWATCommandStatus;
			ESquadPosition                                     InSquadPosition;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		params.InSWATCommandStatus = InSWATCommandStatus;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusCommands()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27119);
		
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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusCommandName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SWATCommandStatus_C*                      InSWATCommandWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseActivity*                               SquadActivity                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusCommandName(class UW_SWATCommandStatus_C* InSWATCommandWidget, class UBaseActivity** SquadActivity, ESquadPosition InSquadPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27118);
		
		struct
		{
			class UW_SWATCommandStatus_C*                      InSWATCommandWidget;
			class UBaseActivity*                               SquadActivity;
			ESquadPosition                                     InSquadPosition;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		params.InSWATCommandWidget = InSWATCommandWidget;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadActivity != nullptr)
			*SquadActivity = params.SquadActivity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateSWATStatusPlayerNameFromSquadPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_SWATCommandStatus_C*                      InSWATCommandWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::UpdateSWATStatusPlayerNameFromSquadPosition(class UW_SWATCommandStatus_C* InSWATCommandWidget, ESquadPosition InSquadPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27117);
		
		struct
		{
			class UW_SWATCommandStatus_C*                      InSWATCommandWidget;
			ESquadPosition                                     InSquadPosition;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		params.InSWATCommandWidget = InSWATCommandWidget;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27116);
		
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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.OnDefaultCommandIssued
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Issuer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESwatCommand                                       CommandIssued                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::OnDefaultCommandIssued(class APlayerCharacter* Issuer, ESwatCommand CommandIssued)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27115);
		
		struct
		{
			class APlayerCharacter*                            Issuer;
			ESwatCommand                                       CommandIssued;
		} params;
		params.Issuer = Issuer;
		params.CommandIssued = CommandIssued;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.UpdateStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::UpdateStatus()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27114);
		
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
	 * 		Name   -> Function W_SWATTeamStatus.W_SWATTeamStatus_C.ExecuteUbergraph_W_SWATTeamStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATTeamStatus_C::ExecuteUbergraph_W_SWATTeamStatus(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27113);
		
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
	 * 		Name   -> PredefinedFunction UW_SWATTeamStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_SWATTeamStatus_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27112);
		return ptr;
	}

}


