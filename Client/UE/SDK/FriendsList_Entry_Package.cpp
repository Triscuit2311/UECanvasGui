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
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.GetColorAndOpacity_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FSlateColor UFriendsList_Entry_C::GetColorAndOpacity_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88431);
		
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
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             SessionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A(TArray<struct FBlueprintSessionResult> SessionInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88430);
		
		struct
		{
			TArray<struct FBlueprintSessionResult>             SessionInfo;
		} params;
		params.SessionInfo = SessionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             SessionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A(TArray<struct FBlueprintSessionResult> SessionInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88429);
		
		struct
		{
			TArray<struct FBlueprintSessionResult>             SessionInfo;
		} params;
		params.SessionInfo = SessionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnFailure_FCAA6E28485271A328483F824CE7E440
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::OnFailure_FCAA6E28485271A328483F824CE7E440()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88428);
		
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
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_FCAA6E28485271A328483F824CE7E440
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::OnSuccess_FCAA6E28485271A328483F824CE7E440()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88427);
		
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
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88426);
		
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
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88425);
		
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
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.RefreshFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFriend                                     Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::RefreshFriend(const struct FFriend& Friend)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88424);
		
		struct
		{
			struct FFriend                                     Friend;
		} params;
		params.Friend = Friend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88423);
		
		struct
		{
			class UW_Button_C*                                 Button;
		} params;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendsList_Entry.FriendsList_Entry_C.ExecuteUbergraph_FriendsList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UFriendsList_Entry_C::ExecuteUbergraph_FriendsList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88422);
		
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
	 * 		Name   -> PredefinedFunction UFriendsList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFriendsList_Entry_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88421);
		return ptr;
	}

}


