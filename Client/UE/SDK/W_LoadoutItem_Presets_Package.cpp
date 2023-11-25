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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.LoadPresets (ItemClass)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemClass                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::LoadPresetsItemClass(class ABaseItem* ItemClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55232);
		
		struct
		{
			class ABaseItem*                                   ItemClass;
		} params;
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.FindSelectedPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   ItemClass                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::FindSelectedPreset(class ABaseItem* ItemClass, int32_t* ReturnValue, class UW_LoadoutItem_Preset_C** LoadoutItemPreset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55231);
		
		struct
		{
			class ABaseItem*                                   ItemClass;
			int32_t                                            ReturnValue;
			unsigned char                                      UnknownData_0000[0x4];
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset;
		} params;
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (LoadoutItemPreset != nullptr)
			*LoadoutItemPreset = params.LoadoutItemPreset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.CanRenamePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::CanRenamePreset(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55230);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0001[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.GetSelectedPresetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::GetSelectedPresetWidget(class UW_LoadoutItem_Preset_C** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55229);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.IsRenamingPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::IsRenamingPreset(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55228);
		
		struct
		{
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ConflictsWithOtherPresets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::ConflictsWithOtherPresets(class UW_LoadoutItem_Preset_C* LoadoutItemPreset, const class FText& InText, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55227);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset;
			class FText                                        InText;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0003[0x7];
		} params;
		params.LoadoutItemPreset = LoadoutItemPreset;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.UnhoverAllPresetsExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::UnhoverAllPresetsExcept(class UW_LoadoutItem_Preset_C* LoadoutItemPreset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55226);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset;
		} params;
		params.LoadoutItemPreset = LoadoutItemPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.DeselectAllPresetsExcept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::DeselectAllPresetsExcept(class UW_LoadoutItem_Preset_C* LoadoutItemPreset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55225);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPreset;
		} params;
		params.LoadoutItemPreset = LoadoutItemPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StopRenamingPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::StopRenamingPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55224);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.StartRenamingPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::StartRenamingPreset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55223);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Enter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Enter()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55222);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Exit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Exit()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55221);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Escape()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55220);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Select(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55219);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0004[0x4];
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Click
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Click()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55218);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Unhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Unhover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55217);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Hover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Hover()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55216);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.PreviousRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::PreviousRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55215);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.NextRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::NextRow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55214);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutItem_Presets_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55213);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_LoadoutItem_Presets_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55212);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.InitializeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::InitializeWidget()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55211);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::OnLoadoutItemPresetButtonClicked(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55210);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget;
		} params;
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.OnLoadoutItemPresetButtonHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::OnLoadoutItemPresetButtonHovered(class UW_LoadoutItem_Preset_C* LoadoutItemPresetWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55209);
		
		struct
		{
			class UW_LoadoutItem_Preset_C*                     LoadoutItemPresetWidget;
		} params;
		params.LoadoutItemPresetWidget = LoadoutItemPresetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55208);
		
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
	 * 		Name   -> Function W_LoadoutItem_Presets.W_LoadoutItem_Presets_C.ExecuteUbergraph_W_LoadoutItem_Presets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_LoadoutItem_Presets_C::ExecuteUbergraph_W_LoadoutItem_Presets(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(55207);
		
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
	 * 		Name   -> PredefinedFunction UW_LoadoutItem_Presets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_LoadoutItem_Presets_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55206);
		return ptr;
	}

}


