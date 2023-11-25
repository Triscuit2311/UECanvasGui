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
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_Briefing_Evidence>               MediaIntel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::InitMedia(TArray<struct FST_Briefing_Evidence>* MediaIntel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57043);
		
		struct
		{
			TArray<struct FST_Briefing_Evidence>               MediaIntel;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MediaIntel != nullptr)
			*MediaIntel = params.MediaIntel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCharacterBio>                       CivilianBios                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::InitCivilians(TArray<struct FCharacterBio>* CivilianBios)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57042);
		
		struct
		{
			TArray<struct FCharacterBio>                       CivilianBios;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CivilianBios != nullptr)
			*CivilianBios = params.CivilianBios;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCharacterBio>                       SuspectBios                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::InitSuspects(TArray<struct FCharacterBio>* SuspectBios)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57041);
		
		struct
		{
			TArray<struct FCharacterBio>                       SuspectBios;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SuspectBios != nullptr)
			*SuspectBios = params.SuspectBios;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::UpdateBioIntel(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57040);
		
		struct
		{
			struct FCharacterBio                               Bio;
		} params;
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_Briefing_Evidence                       Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::UpdateMediaIntel(const struct FST_Briefing_Evidence& Media)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57039);
		
		struct
		{
			struct FST_Briefing_Evidence                       Media;
		} params;
		params.Media = Media;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::AddToList(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57038);
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::CreateLists()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57037);
		
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
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57036);
		
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
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57035);
		
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
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_Briefing_Intel                          Intel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::Initialize(const struct FST_Briefing_Intel& Intel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57034);
		
		struct
		{
			struct FST_Briefing_Intel                          Intel;
		} params;
		params.Intel = Intel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(57033);
		
		struct
		{
			struct FCharacterBio                               Bio;
		} params;
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31510);
		
		struct
		{
			struct FCharacterBio                               Bio;
		} params;
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Intel_C::ExecuteUbergraph_W_Briefing_Intel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31509);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Intel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_Intel_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31508);
		return ptr;
	}

}


