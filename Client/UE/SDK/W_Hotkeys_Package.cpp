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
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43860);
		
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
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowStart_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   LastItemBeforeQuickThrow                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABaseItem*                                   QuickThrowGrenade                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::OnQuickThrowStart_Event_1(class ABaseItem* LastItemBeforeQuickThrow, class ABaseItem* QuickThrowGrenade)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43859);
		
		struct
		{
			class ABaseItem*                                   LastItemBeforeQuickThrow;
			class ABaseItem*                                   QuickThrowGrenade;
		} params;
		params.LastItemBeforeQuickThrow = LastItemBeforeQuickThrow;
		params.QuickThrowGrenade = QuickThrowGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowEnd_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   QuickThrowGrenade                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::OnQuickThrowEnd_Event_1(class ABaseItem* QuickThrowGrenade)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43858);
		
		struct
		{
			class ABaseItem*                                   QuickThrowGrenade;
		} params;
		params.QuickThrowGrenade = QuickThrowGrenade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnSecondarySightToggled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUsingSecondarySight                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABaseMagazineWeapon*                         Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::OnSecondarySightToggled_Event_1(bool bUsingSecondarySight, class ABaseMagazineWeapon* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43857);
		
		struct
		{
			bool                                               bUsingSecondarySight;
			unsigned char                                      UnknownData_0000[0x7];
			class ABaseMagazineWeapon*                         Weapon;
		} params;
		params.bUsingSecondarySight = bUsingSecondarySight;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnAttachmentLightToggled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::OnAttachmentLightToggled_Event_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43856);
		
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
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.OnNightVisionGogglesToggled_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNVGOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::OnNightVisionGogglesToggled_Event_1(bool bNVGOn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43855);
		
		struct
		{
			bool                                               bNVGOn;
		} params;
		params.bNVGOn = bNVGOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.RefreshHotkeyInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::RefreshHotkeyInput()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43854);
		
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
	 * 		Name   -> Function W_Hotkeys.W_Hotkeys_C.ExecuteUbergraph_W_Hotkeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Hotkeys_C::ExecuteUbergraph_W_Hotkeys(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(43853);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Hotkeys_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Hotkeys_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(43852);
		return ptr;
	}

}


