#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELipSyncAnimType : uint8
{
	T_MorphTargets                 = 0,
	T_AnimCurves                   = 1,
	T_Max                          = 2,
};

enum class EPhoneme : uint8
{
	V_A                            = 0,
	V_AH                           = 1,
	V_B                            = 2,
	V_C                            = 3,
	V_CH                           = 4,
	V_D                            = 5,
	V_EH                           = 6,
	V_F                            = 7,
	V_I                            = 8,
	V_K                            = 9,
	V_N                            = 10,
	V_OO                           = 11,
	V_OW                           = 12,
	V_R                            = 13,
	V_Other                        = 14,
	V_OtherVowel                   = 15,
	V_Pause                        = 16,
	V_Max                          = 17,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Text2LipSync.LipSync_Interval
struct FLipSync_Interval
{
public:
	int32                                        PhonemeIndex;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flag;                                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Text2LipSync.LipSync_Pause
struct FLipSync_Pause
{
public:
	TArray<struct FLipSync_Interval>             Pauses;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Text2LipSync.LipSync_TimedData
struct FLipSync_TimedData
{
public:
	float                                        TimeOffset;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Data;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Text2LipSync.LipSync_TimedPhrase
struct FLipSync_TimedPhrase
{
public:
	float                                        TimeOffset;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemName;                                          // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flag;                                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlagEmotion;                                       // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B9[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Text2LipSync.LipSync_Phrase
struct FLipSync_Phrase : public FTableRowBase
{
public:
	class USoundBase*                            VoiceAsset;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLipSync_TimedData>            Subtitles;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLipSync_TimedPhrase>          Notifies;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Text2LipSync.LipSync_PhoneticRule
struct FLipSync_PhoneticRule
{
public:
	bool                                         bCondition_IsFirst;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCondition_IsLast;                                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Condition_NextSymbol;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPhoneme>                  Result_Replace;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bResult_RemoveNext;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Text2LipSync.LipSync_PhonemeInPhrase
struct FLipSync_PhonemeInPhrase
{
public:
	enum class EPhoneme                          Value;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flag;                                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlagEmotion;                                       // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Text2LipSync.LipSync_MorphTarget
struct FLipSync_MorphTarget
{
public:
	class FName                                  MorphTargetName;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Text2LipSync.LipSync_MorphPreset
struct FLipSync_MorphPreset
{
public:
	TArray<struct FLipSync_MorphTarget>          Data;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


