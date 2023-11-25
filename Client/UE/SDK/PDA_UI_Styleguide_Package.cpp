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
	 * 		Name   -> Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                White                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Dark                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Red                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Yellow                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Blue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UPDA_UI_Styleguide_C::GetColors(float Opacity, struct FLinearColor* White, struct FLinearColor* Dark, struct FLinearColor* Red, struct FLinearColor* Yellow, struct FLinearColor* Blue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(59683);
		
		struct
		{
			float                                              Opacity;
			struct FLinearColor                                White;
			struct FLinearColor                                Dark;
			struct FLinearColor                                Red;
			struct FLinearColor                                Yellow;
			struct FLinearColor                                Blue;
		} params;
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (White != nullptr)
			*White = params.White;
		if (Dark != nullptr)
			*Dark = params.Dark;
		if (Red != nullptr)
			*Red = params.Red;
		if (Yellow != nullptr)
			*Yellow = params.Yellow;
		if (Blue != nullptr)
			*Blue = params.Blue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetBlueTeamColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                BlueTeam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UPDA_UI_Styleguide_C::GetBlueTeamColor(float Opacity, struct FLinearColor* BlueTeam)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27422);
		
		struct
		{
			float                                              Opacity;
			struct FLinearColor                                BlueTeam;
		} params;
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlueTeam != nullptr)
			*BlueTeam = params.BlueTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PDA_UI_Styleguide.PDA_UI_Styleguide_C.GetRedTeamColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                RedTeam                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UPDA_UI_Styleguide_C::GetRedTeamColor(float Opacity, struct FLinearColor* RedTeam)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27421);
		
		struct
		{
			float                                              Opacity;
			struct FLinearColor                                RedTeam;
		} params;
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RedTeam != nullptr)
			*RedTeam = params.RedTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPDA_UI_Styleguide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPDA_UI_Styleguide_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27420);
		return ptr;
	}

}


