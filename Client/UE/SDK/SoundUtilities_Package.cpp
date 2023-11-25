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
	 * 		Name   -> PredefinedFunction USoundSimple.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USoundSimple::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(200);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InBandwidth                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetQFromBandwidth(float InBandwidth)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12605);
		
		struct
		{
			float                                              InBandwidth;
			float                                              ReturnValue;
		} params;
		params.InBandwidth = InBandwidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseMidiNote                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetMidiNote                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12604);
		
		struct
		{
			int32_t                                            BaseMidiNote;
			int32_t                                            TargetMidiNote;
			float                                              ReturnValue;
		} params;
		params.BaseMidiNote = BaseMidiNote;
		params.TargetMidiNote = TargetMidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Frequency                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12603);
		
		struct
		{
			float                                              Frequency;
			int32_t                                            ReturnValue;
		} params;
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      InDomain                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      InRange                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetLogFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12602);
		
		struct
		{
			float                                              InValue;
			struct FVector2D                      InDomain;
			struct FVector2D                      InRange;
			float                                              ReturnValue;
		} params;
		params.InValue = InValue;
		params.InDomain = InDomain;
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      InDomain                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      InRange                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetLinearFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12601);
		
		struct
		{
			float                                              InValue;
			struct FVector2D                      InDomain;
			struct FVector2D                      InRange;
			float                                              ReturnValue;
		} params;
		params.InValue = InValue;
		params.InDomain = InDomain;
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetGainFromMidiVelocity(int32_t InVelocity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12600);
		
		struct
		{
			int32_t                                            InVelocity;
			float                                              ReturnValue;
		} params;
		params.InVelocity = InVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPitchSemitones                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetFrequencyMultiplierFromSemitones(float InPitchSemitones)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12599);
		
		struct
		{
			float                                              InPitchSemitones;
			float                                              ReturnValue;
		} params;
		params.InPitchSemitones = InPitchSemitones;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MidiNote                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int32_t MidiNote)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12598);
		
		struct
		{
			int32_t                                            MidiNote;
			float                                              ReturnValue;
		} params;
		params.MidiNote = MidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BeatsPerMinute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BeatMultiplier                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DivisionsOfWholeNote                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12597);
		
		struct
		{
			float                                              BeatsPerMinute;
			int32_t                                            BeatMultiplier;
			int32_t                                            DivisionsOfWholeNote;
			float                                              ReturnValue;
		} params;
		params.BeatsPerMinute = BeatsPerMinute;
		params.BeatMultiplier = BeatMultiplier;
		params.DivisionsOfWholeNote = DivisionsOfWholeNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InQ                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetBandwidthFromQ(float InQ)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12596);
		
		struct
		{
			float                                              InQ;
			float                                              ReturnValue;
		} params;
		params.InQ = InQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLinear                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InFloor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::ConvertLinearToDecibels(float InLinear, float InFloor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12595);
		
		struct
		{
			float                                              InLinear;
			float                                              InFloor;
			float                                              ReturnValue;
		} params;
		params.InLinear = InLinear;
		params.InFloor = InFloor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDecibels                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::ConvertDecibelsToLinear(float InDecibels)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12594);
		
		struct
		{
			float                                              InDecibels;
			float                                              ReturnValue;
		} params;
		params.InDecibels = InDecibels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundUtilitiesBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USoundUtilitiesBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(201);
		return ptr;
	}

}


