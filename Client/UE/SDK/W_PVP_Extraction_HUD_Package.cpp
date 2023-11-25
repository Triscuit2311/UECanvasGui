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
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.UpdateMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETeamType                                          InstigatorTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETeamType                                          PlayerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_Extraction_HUD_C::UpdateMessage(ETeamType InstigatorTeam, ETeamType PlayerTeam)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43893);
		
		struct
		{
			ETeamType                                          InstigatorTeam;
			ETeamType                                          PlayerTeam;
		} params;
		params.InstigatorTeam = InstigatorTeam;
		params.PlayerTeam = PlayerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.HideMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_Extraction_HUD_C::HideMessage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43892);
		
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
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ShowMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHasIntel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_Extraction_HUD_C::ShowMessage(bool bHasIntel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43891);
		
		struct
		{
			bool                                               bHasIntel;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.bHasIntel = bHasIntel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_Extraction_HUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43890);
		
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
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_Extraction_HUD_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43889);
		
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
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ResetTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_Extraction_HUD_C::ResetTimer()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43888);
		
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
	 * 		Name   -> Function W_PVP_Extraction_HUD.W_PVP_Extraction_HUD_C.ExecuteUbergraph_W_PVP_Extraction_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PVP_Extraction_HUD_C::ExecuteUbergraph_W_PVP_Extraction_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43887);
		
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
	 * 		Name   -> PredefinedFunction UW_PVP_Extraction_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PVP_Extraction_HUD_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43886);
		return ptr;
	}

}


