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

// 0xC (0xC - 0x0)
// Function IRadialInput.IRadialInput_C.GetJoystickDirection
struct IIRadialInput_C_GetJoystickDirection_Params
{
public:
	enum class EJoystickTypes                    Stick;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             StickInput;                                        // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


