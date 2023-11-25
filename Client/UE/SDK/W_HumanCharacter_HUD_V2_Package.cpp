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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetOwningPlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::GetOwningPlayerCharacter(class APlayerCharacter** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27568);
		
		struct
		{
			class APlayerCharacter*                            ReturnValue;
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowFireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseWeapon*                                 Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowFireModes(class ABaseWeapon* Weapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27567);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowMagCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowMagCheck()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27566);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFireMode                                          newFireMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnWeaponFireModeChanged(EFireMode newFireMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27565);
		
		struct
		{
			EFireMode                                          newFireMode;
			unsigned char                                      UnknownData_0000[0x7];
		} params;
		params.newFireMode = newFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TickCommandContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::TickCommandContext()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27564);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddMapActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapActorComponent*                          MapActorComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMapActorWidget*                             MapActorIconWidgetClass                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                IconColor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                IconTextColor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMapActorWidget*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UMapActorWidget* UW_HumanCharacter_HUD_V2_C::AddMapActor(class UMapActorComponent* MapActorComponent, class UMapActorWidget* MapActorIconWidgetClass, const struct FSlateBrush& IconBrush, const struct FLinearColor& IconColor, const struct FLinearColor& IconTextColor, float RotationOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27563);
		
		struct
		{
			class UMapActorComponent*                          MapActorComponent;
			class UMapActorWidget*                             MapActorIconWidgetClass;
			struct FSlateBrush                                 IconBrush;
			struct FLinearColor                                IconColor;
			struct FLinearColor                                IconTextColor;
			float                                              RotationOffset;
			unsigned char                                      UnknownData_0001[0x4];
			class UMapActorWidget*                             ReturnValue;
		} params;
		params.MapActorComponent = MapActorComponent;
		params.MapActorIconWidgetClass = MapActorIconWidgetClass;
		params.IconBrush = IconBrush;
		params.IconColor = IconColor;
		params.IconTextColor = IconTextColor;
		params.RotationOffset = RotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.PreviousTabletMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::PreviousTabletMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27562);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.NextTabletMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::NextTabletMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27561);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTablet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::HideTablet()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27560);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTablet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowTablet()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27559);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideIncriminationExtractionHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::HideIncriminationExtractionHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27558);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowIncriminationExtractionHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowIncriminationExtractionHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27557);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurrentFireMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateCurrentFireMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27556);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.FadeInHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::FadeInHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27555);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitializeItemSelectionPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::InitializeItemSelectionPanel(bool bForce)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27554);
		
		struct
		{
			bool                                               bForce;
			unsigned char                                      UnknownData_0002[0x7];
		} params;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.EnabledCurvedHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::EnabledCurvedHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27553);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.DisableCurvedHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::DisableCurvedHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27552);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.IsCurvedHUDEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::IsCurvedHUDEnabled(bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27551);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurveHUDValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateCurveHUDValue(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27550);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleCurvedHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ToggleCurvedHUD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27549);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleHUDSway
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ToggleHUDSway()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27548);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27547);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27546);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Re-Initialize Item Selection Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ReInitializeItemSelectionMenu()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27545);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFireMode                                          newFireMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFireMode                                          LastFireMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnWeaponFireModeChanged_Event_1(EFireMode newFireMode, EFireMode LastFireMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27544);
		
		struct
		{
			EFireMode                                          newFireMode;
			EFireMode                                          LastFireMode;
		} params;
		params.newFireMode = newFireMode;
		params.LastFireMode = LastFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitalizeDelegateEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::InitalizeDelegateEvents()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27543);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ReflectHUDSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ReflectHUDSettings()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27542);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ChatPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ChatPressed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27541);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TeamChatPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::TeamChatPressed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27540);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.RemoveMapActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapActorComponent*                          MapActorComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::RemoveMapActor(class UMapActorComponent* MapActorComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27539);
		
		struct
		{
			class UMapActorComponent*                          MapActorComponent;
		} params;
		params.MapActorComponent = MapActorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateMapFloors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBuildingFloor>                      Floors                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateMapFloors(TArray<struct FBuildingFloor> Floors)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27538);
		
		struct
		{
			TArray<struct FBuildingFloor>                      Floors;
		} params;
		params.Floors = Floors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponMagCheck_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseMagazineWeapon*                         MagazineWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnWeaponMagCheck_Event_1(class ABaseMagazineWeapon* MagazineWeapon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27537);
		
		struct
		{
			class ABaseMagazineWeapon*                         MagazineWeapon;
		} params;
		params.MagazineWeapon = MagazineWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnInventoryItemsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnInventoryItemsChanged()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27536);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddScorePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ScoreText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ScoreValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bGive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::AddScorePopup(const class FText& ScoreText, int32_t ScoreValue, bool bGive)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27535);
		
		struct
		{
			class FText                                        ScoreText;
			int32_t                                            ScoreValue;
			bool                                               bGive;
		} params;
		params.ScoreText = ScoreText;
		params.ScoreValue = ScoreValue;
		params.bGive = bGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bFirstShowing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        MessageTitle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                MessageContent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowTutorialPrompt(const class FString& MessageID, bool bFirstShowing, const class FText& MessageTitle, TArray<class FText> MessageContent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27534);
		
		struct
		{
			class FString                                      MessageID;
			bool                                               bFirstShowing;
			unsigned char                                      UnknownData_0003[0x7];
			class FText                                        MessageTitle;
			TArray<class FText>                                MessageContent;
		} params;
		params.MessageID = MessageID;
		params.bFirstShowing = bFirstShowing;
		params.MessageTitle = MessageTitle;
		params.MessageContent = MessageContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTutorialPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::HideTutorialPrompt(const class FString& MessageID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27533);
		
		struct
		{
			class FString                                      MessageID;
		} params;
		params.MessageID = MessageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialOverview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        MessageTitle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                MessageContent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ShowTutorialOverview(const class FString& MessageID, const class FText& MessageTitle, TArray<class FText> MessageContent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27532);
		
		struct
		{
			class FString                                      MessageID;
			class FText                                        MessageTitle;
			TArray<class FText>                                MessageContent;
		} params;
		params.MessageID = MessageID;
		params.MessageTitle = MessageTitle;
		params.MessageContent = MessageContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTeamViewSet_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        NewViewCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnTeamViewSet_Event_1(class AReadyOrNotCharacter* NewViewCharacter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27531);
		
		struct
		{
			class AReadyOrNotCharacter*                        NewViewCharacter;
		} params;
		params.NewViewCharacter = NewViewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnMenuOpened_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnMenuOpened_Event_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27530);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemEquipped_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABaseItem*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemEquipped_Event_1(class ABaseItem* Item)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27529);
		
		struct
		{
			class ABaseItem*                                   Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnBodyPartDamaged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHeadDamaged                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBodyDamaged                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftArmDamaged                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightArmDamaged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftLegDamaged                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightLegDamaged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftFootDamaged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightFootDamaged                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnBodyPartDamaged_Event_1(bool bHeadDamaged, bool bBodyDamaged, bool bLeftArmDamaged, bool bRightArmDamaged, bool bLeftLegDamaged, bool bRightLegDamaged, bool bLeftFootDamaged, bool bRightFootDamaged)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27528);
		
		struct
		{
			bool                                               bHeadDamaged;
			bool                                               bBodyDamaged;
			bool                                               bLeftArmDamaged;
			bool                                               bRightArmDamaged;
			bool                                               bLeftLegDamaged;
			bool                                               bRightLegDamaged;
			bool                                               bLeftFootDamaged;
			bool                                               bRightFootDamaged;
		} params;
		params.bHeadDamaged = bHeadDamaged;
		params.bBodyDamaged = bBodyDamaged;
		params.bLeftArmDamaged = bLeftArmDamaged;
		params.bRightArmDamaged = bRightArmDamaged;
		params.bLeftLegDamaged = bLeftLegDamaged;
		params.bRightLegDamaged = bRightLegDamaged;
		params.bLeftFootDamaged = bLeftFootDamaged;
		params.bRightFootDamaged = bRightFootDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Reconstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::Reconstruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27527);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Pressed_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_Pressed_Event_1(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27526);
		
		struct
		{
			int32_t                                            GroupIndex;
			int32_t                                            CategoryIndex;
		} params;
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Released_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_Released_Event_1(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27525);
		
		struct
		{
			int32_t                                            GroupIndex;
			int32_t                                            CategoryIndex;
		} params;
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateItemSelectionPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::UpdateItemSelectionPanel()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27524);
		
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
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnCharacterTakeDamage_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        InstigatorCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        DamagedCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthRemaining                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnCharacterTakeDamage_Event_1(class AReadyOrNotCharacter* InstigatorCharacter, class AReadyOrNotCharacter* DamagedCharacter, class AActor* DamageCauser, float Damage, float HealthRemaining)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27523);
		
		struct
		{
			class AReadyOrNotCharacter*                        InstigatorCharacter;
			class AReadyOrNotCharacter*                        DamagedCharacter;
			class AActor*                                      DamageCauser;
			float                                              Damage;
			float                                              HealthRemaining;
		} params;
		params.InstigatorCharacter = InstigatorCharacter;
		params.DamagedCharacter = DamagedCharacter;
		params.DamageCauser = DamageCauser;
		params.Damage = Damage;
		params.HealthRemaining = HealthRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_ItemChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_ItemChanged_Event_1(int32_t GroupIndex, int32_t CategoryIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27522);
		
		struct
		{
			int32_t                                            GroupIndex;
			int32_t                                            CategoryIndex;
		} params;
		params.GroupIndex = GroupIndex;
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ExecuteUbergraph_W_HumanCharacter_HUD_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_HumanCharacter_HUD_V2_C::ExecuteUbergraph_W_HumanCharacter_HUD_V2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27521);
		
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
	 * 		Name   -> PredefinedFunction UW_HumanCharacter_HUD_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_HumanCharacter_HUD_V2_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27520);
		return ptr;
	}

}


