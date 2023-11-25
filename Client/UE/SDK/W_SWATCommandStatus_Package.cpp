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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Grow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInstant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::Grow(bool bInstant)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27065);
		
		struct
		{
			bool                                               bInstant;
		} params;
		params.bInstant = bInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Shrink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInstant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::Shrink(bool bInstant)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27064);
		
		struct
		{
			bool                                               bInstant;
		} params;
		params.bInstant = bInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::HideCommandInfo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27063);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.ShowCommandSubText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::ShowCommandSubText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27062);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText_Rich
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetQueueCommandSubText_Rich(const class FString& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27061);
		
		struct
		{
			class FString                                      InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetQueueCommandSubText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetQueueCommandSubText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27060);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandNameColorFromTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETeamType                                          InTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetCommandNameColorFromTeam(ETeamType InTeam)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27059);
		
		struct
		{
			ETeamType                                          InTeam;
		} params;
		params.InTeam = InTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCommandSubText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetCommandSubText(const class FText& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27058);
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Set Command Sub Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetCommandSubText(const class FString& InText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27057);
		
		struct
		{
			class FString                                      InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteQueuedAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::PlayCommandCompleteQueuedAnim()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27056);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandIssuedAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::PlayCommandIssuedAnim()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27055);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PlayCommandCompleteAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::PlayCommandCompleteAnim()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27054);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.HideCommandStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShrinkHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::HideCommandStatus(bool bShrinkHeight)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27053);
		
		struct
		{
			bool                                               bShrinkHeight;
		} params;
		params.bShrinkHeight = bShrinkHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerHealthStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerHealthStatus                                InPlayerHealthStatus                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetPlayerHealthStatus(EPlayerHealthStatus InPlayerHealthStatus)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27052);
		
		struct
		{
			EPlayerHealthStatus                                InPlayerHealthStatus;
		} params;
		params.InPlayerHealthStatus = InPlayerHealthStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InPlayerName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetPlayerName(const class FText& InPlayerName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27051);
		
		struct
		{
			class FText                                        InPlayerName;
		} params;
		params.InPlayerName = InPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.SetCurrentCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InActivityName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        InCommandText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InProgressText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bWaiting                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::SetCurrentCommand(const class FString& InActivityName, const class FText& InCommandText, const class FText& InProgressText, bool bWaiting, bool bIsProgress)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27050);
		
		struct
		{
			class FString                                      InActivityName;
			class FText                                        InCommandText;
			class FText                                        InProgressText;
			bool                                               bWaiting;
			bool                                               bIsProgress;
			unsigned char                                      UnknownData_0000[0x6];
		} params;
		params.InActivityName = InActivityName;
		params.InCommandText = InCommandText;
		params.InProgressText = InProgressText;
		params.bWaiting = bWaiting;
		params.bIsProgress = bIsProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateSquadData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::UpdateSquadData(const class FText& InText, const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27049);
		
		struct
		{
			class FText                                        InText;
			struct FLinearColor                                InColorAndOpacity;
		} params;
		params.InText = InText;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESquadPosition                                     InSquadPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::Refresh(ESquadPosition InSquadPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27048);
		
		struct
		{
			ESquadPosition                                     InSquadPosition;
		} params;
		params.InSquadPosition = InSquadPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27047);
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27046);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHeightChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::StartHeightChange(float NewHeight)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27045);
		
		struct
		{
			float                                              NewHeight;
		} params;
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::UpdateDesiredHeight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27044);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::CustomEvent_2()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27043);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.StartHealthWidthChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::StartHealthWidthChange(float NewWidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27042);
		
		struct
		{
			float                                              NewWidth;
		} params;
		params.NewWidth = NewWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.UpdateDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::UpdateDesiredWidth()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27041);
		
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
	 * 		Name   -> Function W_SWATCommandStatus.W_SWATCommandStatus_C.ExecuteUbergraph_W_SWATCommandStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_SWATCommandStatus_C::ExecuteUbergraph_W_SWATCommandStatus(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27040);
		
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
	 * 		Name   -> PredefinedFunction UW_SWATCommandStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_SWATCommandStatus_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27039);
		return ptr;
	}

}


