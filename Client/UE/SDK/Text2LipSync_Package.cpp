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
	 * 		Name   -> Function Text2LipSync.TextLipSync.TextToPhonemes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Line                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLipSync_PhonemeInPhrase>            OutputArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VowelsCount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PunctuationMarksCount                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::TextToPhonemes(const class FText& Line, TArray<struct FLipSync_PhonemeInPhrase>* OutputArray, int32_t* VowelsCount, int32_t* PunctuationMarksCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13135);
		
		struct
		{
			class FText                                        Line;
			TArray<struct FLipSync_PhonemeInPhrase>            OutputArray;
			int32_t                                            VowelsCount;
			int32_t                                            PunctuationMarksCount;
		} params;
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputArray != nullptr)
			*OutputArray = params.OutputArray;
		if (VowelsCount != nullptr)
			*VowelsCount = params.VowelsCount;
		if (PunctuationMarksCount != nullptr)
			*PunctuationMarksCount = params.PunctuationMarksCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.StretchPhraseData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ErrorForPunctuation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ErrorForWord                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::StretchPhraseData(float ErrorForPunctuation, float ErrorForWord)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13134);
		
		struct
		{
			float                                              ErrorForPunctuation;
			float                                              ErrorForWord;
		} params;
		params.ErrorForPunctuation = ErrorForPunctuation;
		params.ErrorForWord = ErrorForWord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.StretchDataInterval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewStartTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewEndTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::StretchDataInterval(int32_t StartIndex, int32_t EndIndex, float NewStartTime, float NewEndTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13133);
		
		struct
		{
			int32_t                                            StartIndex;
			int32_t                                            EndIndex;
			float                                              NewStartTime;
			float                                              NewEndTime;
		} params;
		params.StartIndex = StartIndex;
		params.EndIndex = EndIndex;
		params.NewStartTime = NewStartTime;
		params.NewEndTime = NewEndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.StopSpeaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStopPlayingSound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::StopSpeaking(bool bStopPlayingSound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13132);
		
		struct
		{
			bool                                               bStopPlayingSound;
			bool                                               ReturnValue;
		} params;
		params.bStopPlayingSound = bStopPlayingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SpeakByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PhraseKey                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartPlayingSound                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::SpeakByKey(const class FName& PhraseKey, bool bStartPlayingSound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13131);
		
		struct
		{
			class FName                                        PhraseKey;
			bool                                               bStartPlayingSound;
			bool                                               ReturnValue;
		} params;
		params.PhraseKey = PhraseKey;
		params.bStartPlayingSound = bStartPlayingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SpeakAgain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::SpeakAgain()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13130);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.Speak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLipSync_Phrase                             Phrase                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartPlayingSound                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::Speak(const struct FLipSync_Phrase& Phrase, bool bStartPlayingSound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13129);
		
		struct
		{
			struct FLipSync_Phrase                             Phrase;
			bool                                               bStartPlayingSound;
			bool                                               ReturnValue;
		} params;
		params.Phrase = Phrase;
		params.bStartPlayingSound = bStartPlayingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SaveLastPhraseToCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::SaveLastPhraseToCache()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13128);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.SaveCacheToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseBinaryFormat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTextLipSync::SaveCacheToDisk(const class FString& Filename, bool bUseBinaryFormat)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13127);
		
		struct
		{
			class FString                                      Filename;
			bool                                               bUseBinaryFormat;
			unsigned char                                      UnknownData_0000[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.Filename = Filename;
		params.bUseBinaryFormat = bUseBinaryFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.RestorePhraseDataFromPauses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::RestorePhraseDataFromPauses()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13126);
		
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
	 * 		Name   -> Function Text2LipSync.TextLipSync.RemovePhraseFromCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  VoiceAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::RemovePhraseFromCache(class USoundWave* VoiceAsset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13125);
		
		struct
		{
			class USoundWave*                                  VoiceAsset;
			bool                                               ReturnValue;
		} params;
		params.VoiceAsset = VoiceAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.OnSpeaker_AudioSingleEnvelopeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EnvelopeValue                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::OnSpeaker_AudioSingleEnvelopeValue(class USoundWave* PlayingSoundWave, float EnvelopeValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13124);
		
		struct
		{
			class USoundWave*                                  PlayingSoundWave;
			float                                              EnvelopeValue;
		} params;
		params.PlayingSoundWave = PlayingSoundWave;
		params.EnvelopeValue = EnvelopeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.OnSpeaker_AudioPlaybackPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackPercent                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::OnSpeaker_AudioPlaybackPercent(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13123);
		
		struct
		{
			class USoundWave*                                  PlayingSoundWave;
			float                                              PlaybackPercent;
		} params;
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.LoadPhrasesSetFromDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  Table                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::LoadPhrasesSetFromDataTable(class UDataTable* Table)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13122);
		
		struct
		{
			class UDataTable*                                  Table;
			bool                                               ReturnValue;
		} params;
		params.Table = Table;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.LoadCacheFromDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseBinaryFormat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTextLipSync::LoadCacheFromDisk(const class FString& Filename, bool bUseBinaryFormat)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13121);
		
		struct
		{
			class FString                                      Filename;
			bool                                               bUseBinaryFormat;
			unsigned char                                      UnknownData_0001[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.Filename = Filename;
		params.bUseBinaryFormat = bUseBinaryFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.IsSpeaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::IsSpeaking()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13120);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.IsInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::IsInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13119);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.InitializePhonemesArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::InitializePhonemesArray()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13118);
		
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
	 * 		Name   -> Function Text2LipSync.TextLipSync.InitializEPhonemeConvertRules
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::InitializEPhonemeConvertRules()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13117);
		
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
	 * 		Name   -> Function Text2LipSync.TextLipSync.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             SpeakingAudioComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTextLipSync::Initialize(class UAudioComponent* SpeakingAudioComp)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13116);
		
		struct
		{
			class UAudioComponent*                             SpeakingAudioComp;
			bool                                               ReturnValue;
		} params;
		params.SpeakingAudioComp = SpeakingAudioComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetSpeakingTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTextLipSync::GetSpeakingTime()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13115);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetListOfCachedAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              VoiceAssetNames                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::GetListOfCachedAssets(TArray<class FString>* VoiceAssetNames)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13114);
		
		struct
		{
			TArray<class FString>                              VoiceAssetNames;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoiceAssetNames != nullptr)
			*VoiceAssetNames = params.VoiceAssetNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetLastPhraseDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTextLipSync::GetLastPhraseDuration()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13113);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetCurveValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CurveName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTextLipSync::GetCurveValue(const class FName& CurveName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13112);
		
		struct
		{
			class FName                                        CurveName;
			float                                              ReturnValue;
		} params;
		params.CurveName = CurveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetCurrentPhrase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<float, EPhoneme>                              ReturnValue                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::GetCurrentPhrase(TMap<float, EPhoneme>* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13111);
		
		struct
		{
			TMap<float, EPhoneme>                              ReturnValue;
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
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetCurrentPhonemesLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTextLipSync::GetCurrentPhonemesLine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13110);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.GetActiveMorphTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTextLipSync::GetActiveMorphTargets()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13109);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.TextLipSync.BuildPhraseData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLipSync_TimedData>                  Subtitles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTextLipSync::BuildPhraseData(TArray<struct FLipSync_TimedData> Subtitles)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13108);
		
		struct
		{
			TArray<struct FLipSync_TimedData>                  Subtitles;
		} params;
		params.Subtitles = Subtitles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextLipSync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTextLipSync::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(368);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.PhrasesList.LoadFromDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPhrasesList::LoadFromDataTable(class UDataTable* DataTable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13098);
		
		struct
		{
			class UDataTable*                                  DataTable;
			bool                                               ReturnValue;
		} params;
		params.DataTable = DataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.PhrasesList.GetPhraseFromList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLipSync_Phrase                             ReturnValue                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPhrasesList::GetPhraseFromList(const class FName& Key, struct FLipSync_Phrase* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13097);
		
		struct
		{
			class FName                                        Key;
			struct FLipSync_Phrase                             ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhrasesList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPhrasesList::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(364);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.SaveToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::SaveToDisk(const class FString& Filename)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13107);
		
		struct
		{
			class FString                                      Filename;
			int32_t                                            ReturnValue;
		} params;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.SaveToBinaryFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFileName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::SaveToBinaryFile(const class FString& FullFileName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13106);
		
		struct
		{
			class FString                                      FullFileName;
			int32_t                                            ReturnValue;
		} params;
		params.FullFileName = FullFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.RenameAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::RenameAsset(const class FString& CurrentName, const class FString& NewName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13105);
		
		struct
		{
			class FString                                      CurrentName;
			class FString                                      NewName;
			bool                                               ReturnValue;
		} params;
		params.CurrentName = CurrentName;
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.RemoveAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::RemoveAsset(class USoundBase* SoundAsset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13104);
		
		struct
		{
			class USoundBase*                                  SoundAsset;
			bool                                               ReturnValue;
		} params;
		params.SoundAsset = SoundAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.LoadFromDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::LoadFromDisk(const class FString& Filename)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13103);
		
		struct
		{
			class FString                                      Filename;
			int32_t                                            ReturnValue;
		} params;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.LoadFromBinaryFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFileName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USubtitlesCache::LoadFromBinaryFile(const class FString& FullFileName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13102);
		
		struct
		{
			class FString                                      FullFileName;
			int32_t                                            ReturnValue;
		} params;
		params.FullFileName = FullFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.GetPausesForVoiceAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLipSync_Interval>                   Pauses                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::GetPausesForVoiceAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_Interval>* Pauses)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13101);
		
		struct
		{
			class USoundBase*                                  SoundAsset;
			TArray<struct FLipSync_Interval>                   Pauses;
			bool                                               ReturnValue;
		} params;
		params.SoundAsset = SoundAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pauses != nullptr)
			*Pauses = params.Pauses;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.GetCachedKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              CachedKeys                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USubtitlesCache::GetCachedKeys(TArray<class FString>* CachedKeys)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13100);
		
		struct
		{
			TArray<class FString>                              CachedKeys;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CachedKeys != nullptr)
			*CachedKeys = params.CachedKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Text2LipSync.SubtitlesCache.AddAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLipSync_TimedPhrase>                PhraseData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    PauseIndexes                                               (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              PhraseDuration                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubtitlesCache::AddAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_TimedPhrase> PhraseData, TArray<int32_t> PauseIndexes, float PhraseDuration)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13099);
		
		struct
		{
			class USoundBase*                                  SoundAsset;
			TArray<struct FLipSync_TimedPhrase>                PhraseData;
			TArray<int32_t>                                    PauseIndexes;
			float                                              PhraseDuration;
			bool                                               ReturnValue;
		} params;
		params.SoundAsset = SoundAsset;
		params.PhraseData = PhraseData;
		params.PauseIndexes = PauseIndexes;
		params.PhraseDuration = PhraseDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitlesCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USubtitlesCache::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(365);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitlesFileSave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USubtitlesFileSave::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(367);
		return ptr;
	}

}


