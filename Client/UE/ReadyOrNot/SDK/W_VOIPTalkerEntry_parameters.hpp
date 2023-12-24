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

// 0x3F (0x3F - 0x0)
// Function W_VOIPTalkerEntry.W_VOIPTalkerEntry_C.ExecuteUbergraph_W_VOIPTalkerEntry
struct UW_VOIPTalkerEntry_C_ExecuteUbergraph_W_VOIPTalkerEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetVoiceTypeText_ReturnValue;             // 0x8(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVoiceType                        CallFunc_GetVoiceType_ReturnValue;                 // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


