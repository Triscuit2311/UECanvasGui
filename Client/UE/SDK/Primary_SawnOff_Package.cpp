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
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112739);
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.Multicast_EnableLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::Multicast_EnableLight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112740);
		
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
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.Multicast_DisableLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::Multicast_DisableLight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112741);
		
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
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.OnAttachmentActivated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemAttachment                                    AttachmentChanged                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::OnAttachmentActivated_Event_1(EItemAttachment AttachmentChanged)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112742);
		
		struct
		{
			EItemAttachment                                    AttachmentChanged;
		} params;
		params.AttachmentChanged = AttachmentChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.OnAttachmentDeactivated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemAttachment                                    AttachmentChanged                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::OnAttachmentDeactivated_Event_1(EItemAttachment AttachmentChanged)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112743);
		
		struct
		{
			EItemAttachment                                    AttachmentChanged;
		} params;
		params.AttachmentChanged = AttachmentChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112747);
		
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
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.Server_DisableLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::Server_DisableLight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112744);
		
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
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.Server_EnableLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::Server_EnableLight()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112745);
		
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
	 * 		Name   -> Function Primary_SawnOff.Primary_SawnOff_C.ExecuteUbergraph_Primary_SawnOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void APrimary_SawnOff_C::ExecuteUbergraph_Primary_SawnOff(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112746);
		
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
	 * 		Name   -> PredefinedFunction APrimary_SawnOff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APrimary_SawnOff_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(112748);
		return ptr;
	}

}


