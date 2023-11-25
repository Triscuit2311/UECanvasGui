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
	 * 		Name   -> Function W_FireModes.W_FireModes_C.IsFadingOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::IsFadingOut(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27215);
		
		struct
		{
			bool                                               ReturnValue;
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
	 * 		Name   -> Function W_FireModes.W_FireModes_C.IsFadeOutTimerActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::IsFadeOutTimerActive(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27214);
		
		struct
		{
			bool                                               ReturnValue;
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
	 * 		Name   -> Function W_FireModes.W_FireModes_C.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::SetStyle(int32_t Option)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27213);
		
		struct
		{
			int32_t                                            Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::FadeOut()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27212);
		
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
	 * 		Name   -> Function W_FireModes.W_FireModes_C.UpdateAvailableFireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseWeapon*                                 Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::UpdateAvailableFireModes(class ABaseWeapon* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27211);
		
		struct
		{
			class ABaseWeapon*                                 Weapon;
		} params;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.Deselect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_FireMode_C*                               FireModeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::Deselect(class UW_FireMode_C* FireModeWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27210);
		
		struct
		{
			class UW_FireMode_C*                               FireModeWidget;
		} params;
		params.FireModeWidget = FireModeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.DeselectAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::DeselectAll()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27209);
		
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
	 * 		Name   -> Function W_FireModes.W_FireModes_C.DeselectAllExpect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_FireMode_C*                               FireModeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::DeselectAllExpect(class UW_FireMode_C* FireModeWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27208);
		
		struct
		{
			class UW_FireMode_C*                               FireModeWidget;
		} params;
		params.FireModeWidget = FireModeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_FireMode_C*                               FireModeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::Select(class UW_FireMode_C* FireModeWidget)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27207);
		
		struct
		{
			class UW_FireMode_C*                               FireModeWidget;
		} params;
		params.FireModeWidget = FireModeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.SetFireMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFireMode                                          newFireMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::SetFireMode(EFireMode newFireMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27206);
		
		struct
		{
			EFireMode                                          newFireMode;
		} params;
		params.newFireMode = newFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.OnWeaponEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseWeapon*                                 NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::OnWeaponEquipped(class ABaseWeapon* NewWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27205);
		
		struct
		{
			class ABaseWeapon*                                 NewWeapon;
		} params;
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_FireModes.W_FireModes_C.ExecuteUbergraph_W_FireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_FireModes_C::ExecuteUbergraph_W_FireModes(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27204);
		
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
	 * 		Name   -> PredefinedFunction UW_FireModes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_FireModes_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27203);
		return ptr;
	}

}


