#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Text2LipSync.EPhoneme
	 */
	enum class EPhoneme : uint8_t
	{
		V_A          = 0,
		V_AH         = 1,
		V_B          = 2,
		V_C          = 3,
		V_CH         = 4,
		V_D          = 5,
		V_EH         = 6,
		V_F          = 7,
		V_I          = 8,
		V_K          = 9,
		V_N          = 10,
		V_OO         = 11,
		V_OW         = 12,
		V_R          = 13,
		V_Other      = 14,
		V_OtherVowel = 15,
		V_Pause      = 16,
		V_Max        = 17
	};

	/**
	 * Enum Text2LipSync.ELipSyncAnimType
	 */
	enum class ELipSyncAnimType : uint8_t
	{
		T_MorphTargets = 0,
		T_AnimCurves   = 1,
		T_Max          = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Text2LipSync.LipSync_MorphTarget
	 * Size -> 0x000C
	 */
	struct FLipSync_MorphTarget
	{
	public:
		class FName                                                  MorphTargetName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_MorphPreset
	 * Size -> 0x0010
	 */
	struct FLipSync_MorphPreset
	{
	public:
		TArray<struct FLipSync_MorphTarget>                          Data;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_TimedPhrase
	 * Size -> 0x0010
	 */
	struct FLipSync_TimedPhrase
	{
	public:
		float                                                        TimeOffset;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ItemName;                                                // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      Flag;                                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      FlagEmotion;                                             // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_TimedData
	 * Size -> 0x0020
	 */
	struct FLipSync_TimedData
	{
	public:
		float                                                        TimeOffset;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        EndTime;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                  Data;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_Phrase
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FLipSync_Phrase : public FTableRowBase
	{
	public:
		class USoundBase*                                            VoiceAsset;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLipSync_TimedData>                            Subtitles;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLipSync_TimedPhrase>                          Notifies;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_Interval
	 * Size -> 0x0010
	 */
	struct FLipSync_Interval
	{
	public:
		int32_t                                                      PhonemeIndex;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        StartTime;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        EndTime;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      Flag;                                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_Pause
	 * Size -> 0x0010
	 */
	struct FLipSync_Pause
	{
	public:
		TArray<struct FLipSync_Interval>                             Pauses;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_PhoneticRule
	 * Size -> 0x0030
	 */
	struct FLipSync_PhoneticRule
	{
	public:
		bool                                                         bCondition_IsFirst;                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCondition_IsLast;                                       // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                Condition_NextSymbol;                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPhoneme>                                             Result_Replace;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bResult_RemoveNext;                                      // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Text2LipSync.LipSync_PhonemeInPhrase
	 * Size -> 0x0003
	 */
	struct FLipSync_PhonemeInPhrase
	{
	public:
		EPhoneme                                                     Value;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      Flag;                                                    // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint8_t                                                      FlagEmotion;                                             // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
