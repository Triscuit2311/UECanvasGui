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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ClearActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::ClearActive()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54838);
		
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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.AddToGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::AddToGrid(class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54837);
		
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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitMedia
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_Briefing_Evidence>               Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::InitMedia(TArray<struct FST_Briefing_Evidence>* Media)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54836);
		
		struct
		{
			TArray<struct FST_Briefing_Evidence>               Media;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Media != nullptr)
			*Media = params.Media;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitBios
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCharacterBio>                       Bios                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::InitBios(TArray<struct FCharacterBio>* Bios)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54835);
		
		struct
		{
			TArray<struct FCharacterBio>                       Bios;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bios != nullptr)
			*Bios = params.Bios;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54834);
		
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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54833);
		
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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ForceClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::ForceClick(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54832);
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_Intel_Entry_C*                   ClickedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FST_Briefing_Evidence                       Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::MediaClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54831);
		
		struct
		{
			class UW_Briefing_Intel_Entry_C*                   ClickedEntry;
			struct FST_Briefing_Evidence                       Media;
		} params;
		params.ClickedEntry = ClickedEntry;
		params.Media = Media;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Briefing_Intel_Entry_C*                   ClickedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::BioClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54830);
		
		struct
		{
			class UW_Briefing_Intel_Entry_C*                   ClickedEntry;
			struct FCharacterBio                               Bio;
		} params;
		params.ClickedEntry = ClickedEntry;
		params.Bio = Bio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ExecuteUbergraph_W_Briefing_IntelList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::ExecuteUbergraph_W_Briefing_IntelList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54829);
		
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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_Briefing_Evidence                       Media                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::MediaIntelClicked__DelegateSignature(const struct FST_Briefing_Evidence& Media)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54828);
		
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
	 * 		Name   -> Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioIntelClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBio                               Bio                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_IntelList_Entry_C::BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54827);
		
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
	 * 		Name   -> PredefinedFunction UW_Briefing_IntelList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_IntelList_Entry_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54826);
		return ptr;
	}

}


