#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDualSense2DType : uint8
{
	TOUCHPOINT_FIRST               = 0,
	TOUCHPOINT_SECOND              = 1,
	TOUCHPOINT_MAX                 = 2,
};

enum class EDualSenseVectorType : uint8
{
	GYROSCOPE                      = 0,
	ACCELERATION                   = 1,
	EDualSenseVectorType_MAX       = 2,
};

enum class EDualSenseAnalogType : uint8
{
	LEFT_STICK_X                   = 0,
	LEFT_STICK_Y                   = 1,
	RIGHT_STICK_X                  = 2,
	RIGHT_STICK_Y                  = 3,
	LEFT_TRIGGER                   = 4,
	RIGHT_TRIGGER                  = 5,
	EDualSenseAnalogType_MAX       = 6,
};

enum class EDualSenseButtonType : uint8
{
	TRIANGLE                       = 0,
	CROSS                          = 1,
	SQUARE                         = 2,
	CIRCLE                         = 3,
	DPAD_UP                        = 4,
	DPAD_DOWN                      = 5,
	DPAD_LEFT                      = 6,
	DPAD_RIGHT                     = 7,
	BUMPER_LEFT                    = 8,
	BUMPER_RIGHT                   = 9,
	TRIGGER_LEFT                   = 10,
	TRIGGER_RIGHT                  = 11,
	LEFT_STICK_PUSH                = 12,
	RIGHT_STICK_PUSH               = 13,
	SELECT                         = 14,
	MENU                           = 15,
	PLAYSTATION_LOGO               = 16,
	TOUCHPAD                       = 17,
	MIC                            = 18,
	MAX_COUNT                      = 19,
	EDualSenseButtonType_MAX       = 20,
};

enum class EDualSenseButtonState : uint8
{
	NONE                           = 0,
	PRESS                          = 1,
	REPEAT                         = 2,
	RELEASE                        = 3,
	EDualSenseButtonState_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct WinDualSense.DualSenseVectorData
struct FDualSenseVectorData
{
public:
	uint8                                        Pad_20CB[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WinDualSense.DualSenseAnalogData
struct FDualSenseAnalogData
{
public:
	uint8                                        Pad_20CC[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WinDualSense.DualSenseButtonData
struct FDualSenseButtonData
{
public:
	uint8                                        Pad_20CD[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


