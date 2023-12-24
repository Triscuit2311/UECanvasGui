#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowStart_Event_0
struct UW_Hotkeys_C_OnQuickThrowStart_Event_0_Params
{
public:
	class AReadyOrNotCharacter*                  Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             LastItemBeforeQuickThrow;                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             QuickThrowGrenade;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowEnd_Event_0
struct UW_Hotkeys_C_OnQuickThrowEnd_Event_0_Params
{
public:
	class ABaseItem*                             QuickThrowGrenade;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Hotkeys.W_Hotkeys_C.OnSecondarySightToggled_Event_0
struct UW_Hotkeys_C_OnSecondarySightToggled_Event_0_Params
{
public:
	bool                                         bUsingSecondarySight;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseMagazineWeapon*                   Weapon;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Hotkeys.W_Hotkeys_C.OnNightVisionGogglesToggled_Event_0
struct UW_Hotkeys_C_OnNightVisionGogglesToggled_Event_0_Params
{
public:
	class AReadyOrNotCharacter*                  Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOn;                                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA9 (0xA9 - 0x0)
// Function W_Hotkeys.W_Hotkeys_C.ExecuteUbergraph_W_Hotkeys
struct UW_Hotkeys_C_ExecuteUbergraph_W_Hotkeys_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3F3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_Character_1;                    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_CustomEvent_LastItemBeforeQuickThrow;       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_CustomEvent_QuickThrowGrenade_1;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_CustomEvent_QuickThrowGrenade;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bUsingSecondarySight;           // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseMagazineWeapon*                   K2Node_CustomEvent_Weapon;                         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_CustomEvent_Character;                      // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bOn;                            // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EquippedWeaponHasLaserAttachment_ReturnValue; // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EquippedWeaponHasLightAttachment_ReturnValue; // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F41[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


