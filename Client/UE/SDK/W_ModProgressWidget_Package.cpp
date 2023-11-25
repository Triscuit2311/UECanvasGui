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
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_ModProgressWidget_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89111);
		
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
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModProgressWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89110);
		
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
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.OnModNameUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModProgressWidget_C::OnModNameUpdated(const class FString& ModName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89109);
		
		struct
		{
			class FString                                      ModName;
		} params;
		params.ModName = ModName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.OnDownloadProgressUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DownloadPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExtractionPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PercentText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        RemainingText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_ModProgressWidget_C::OnDownloadProgressUpdated(float DownloadPercent, float ExtractionPercent, const class FText& PercentText, const class FText& RemainingText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89108);
		
		struct
		{
			float                                              DownloadPercent;
			float                                              ExtractionPercent;
			class FText                                        PercentText;
			class FText                                        RemainingText;
		} params;
		params.DownloadPercent = DownloadPercent;
		params.ExtractionPercent = ExtractionPercent;
		params.PercentText = PercentText;
		params.RemainingText = RemainingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.OnQueueProgressUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CompletedMods                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalMods                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModProgressWidget_C::OnQueueProgressUpdated(int32_t CompletedMods, int32_t TotalMods)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89107);
		
		struct
		{
			int32_t                                            CompletedMods;
			int32_t                                            TotalMods;
		} params;
		params.CompletedMods = CompletedMods;
		params.TotalMods = TotalMods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ModProgressWidget.W_ModProgressWidget_C.ExecuteUbergraph_W_ModProgressWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_ModProgressWidget_C::ExecuteUbergraph_W_ModProgressWidget(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89106);
		
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
	 * 		Name   -> PredefinedFunction UW_ModProgressWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_ModProgressWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89105);
		return ptr;
	}

}


