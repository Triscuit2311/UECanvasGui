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
	 * 		Name   -> Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.GetMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineSlot_C::GetMag(int32_t Index, class UImage** ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90279);
		
		struct
		{
			int32_t                                            Index;
			unsigned char                                      UnknownData_0000[0x4];
			class UImage*                                      ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.CreateMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     MagOutlineIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    MagIconEmpty                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    MagIconFull                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineSlot_C::CreateMag(class UObject* MagOutlineIcon, class UTexture* MagIconEmpty, class UTexture* MagIconFull, float IconSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90278);
		
		struct
		{
			class UObject*                                     MagOutlineIcon;
			class UTexture*                                    MagIconEmpty;
			class UTexture*                                    MagIconFull;
			float                                              IconSize;
		} params;
		params.MagOutlineIcon = MagOutlineIcon;
		params.MagIconEmpty = MagIconEmpty;
		params.MagIconFull = MagIconFull;
		params.IconSize = IconSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.AddMagOutline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineSlot_C::AddMagOutline(class UObject* Icon, float IconSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90277);
		
		struct
		{
			class UObject*                                     Icon;
			float                                              IconSize;
		} params;
		params.Icon = Icon;
		params.IconSize = IconSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C.AddMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    IconEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    IconFull                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_WeaponWheel_MagazineSlot_C::AddMag(class UTexture* IconEmpty, class UTexture* IconFull, float IconSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(90276);
		
		struct
		{
			class UTexture*                                    IconEmpty;
			class UTexture*                                    IconFull;
			float                                              IconSize;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.IconEmpty = IconEmpty;
		params.IconFull = IconFull;
		params.IconSize = IconSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_WeaponWheel_MagazineSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_WeaponWheel_MagazineSlot_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90275);
		return ptr;
	}

}


