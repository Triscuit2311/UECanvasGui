﻿/**
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
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_ItemStat_Range_C::Initialize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54481);
		
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
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_ItemStat_Range_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54480);
		
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
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.OnRefresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_ItemStat_Range_C::OnRefresh()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54479);
		
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
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.OnWheelCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_ItemStat_Range_C::OnWheelCreated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54478);
		
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
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_ItemStat_Range_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54477);
		
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
	 * 		Name   -> Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Range
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_ItemStat_Range_C::ExecuteUbergraph_W_WeaponWheel_ItemStat_Range(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54476);
		
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
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_ItemStat_Range_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_WeaponWheel_ItemStat_Range_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54475);
		return ptr;
	}

}

