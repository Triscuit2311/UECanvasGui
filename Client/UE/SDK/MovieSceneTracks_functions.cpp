#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieSceneTracks.MovieScenePropertyTrack
// (None)

class UClass* UMovieScenePropertyTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePropertyTrack");

	return Clss;
}


// MovieScenePropertyTrack MovieSceneTracks.Default__MovieScenePropertyTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScenePropertyTrack* UMovieScenePropertyTrack::GetDefaultObj()
{
	static class UMovieScenePropertyTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePropertyTrack*>(UMovieScenePropertyTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
// (None)

class UClass* UMovieSceneCameraShakeEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeEvaluator");

	return Clss;
}


// MovieSceneCameraShakeEvaluator MovieSceneTracks.Default__MovieSceneCameraShakeEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeEvaluator* UMovieSceneCameraShakeEvaluator::GetDefaultObj()
{
	static class UMovieSceneCameraShakeEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeEvaluator*>(UMovieSceneCameraShakeEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.ByteChannelEvaluatorSystem
// (None)

class UClass* UByteChannelEvaluatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ByteChannelEvaluatorSystem");

	return Clss;
}


// ByteChannelEvaluatorSystem MovieSceneTracks.Default__ByteChannelEvaluatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UByteChannelEvaluatorSystem* UByteChannelEvaluatorSystem::GetDefaultObj()
{
	static class UByteChannelEvaluatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UByteChannelEvaluatorSystem*>(UByteChannelEvaluatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// (None)

class UClass* UFloatChannelEvaluatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloatChannelEvaluatorSystem");

	return Clss;
}


// FloatChannelEvaluatorSystem MovieSceneTracks.Default__FloatChannelEvaluatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFloatChannelEvaluatorSystem* UFloatChannelEvaluatorSystem::GetDefaultObj()
{
	static class UFloatChannelEvaluatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloatChannelEvaluatorSystem*>(UFloatChannelEvaluatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneTransformOrigin
// (None)

class UClass* IMovieSceneTransformOrigin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTransformOrigin");

	return Clss;
}


// MovieSceneTransformOrigin MovieSceneTracks.Default__MovieSceneTransformOrigin
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneTransformOrigin* IMovieSceneTransformOrigin::GetDefaultObj()
{
	static class IMovieSceneTransformOrigin* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneTransformOrigin*>(IMovieSceneTransformOrigin::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTransformOrigin", "BP_GetTransformOrigin");

	Params::IMovieSceneTransformOrigin_BP_GetTransformOrigin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// (None)

class UClass* UIntegerChannelEvaluatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IntegerChannelEvaluatorSystem");

	return Clss;
}


// IntegerChannelEvaluatorSystem MovieSceneTracks.Default__IntegerChannelEvaluatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UIntegerChannelEvaluatorSystem* UIntegerChannelEvaluatorSystem::GetDefaultObj()
{
	static class UIntegerChannelEvaluatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UIntegerChannelEvaluatorSystem*>(UIntegerChannelEvaluatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DConstraintSection
// (None)

class UClass* UMovieScene3DConstraintSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DConstraintSection");

	return Clss;
}


// MovieScene3DConstraintSection MovieSceneTracks.Default__MovieScene3DConstraintSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DConstraintSection* UMovieScene3DConstraintSection::GetDefaultObj()
{
	static class UMovieScene3DConstraintSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DConstraintSection*>(UMovieScene3DConstraintSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InConstraintBindingID                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieScene3DConstraintSection::SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "SetConstraintBindingID");

	Params::UMovieScene3DConstraintSection_SetConstraintBindingID_Params Parms{};

	Parms.InConstraintBindingID = InConstraintBindingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "GetConstraintBindingID");

	Params::UMovieScene3DConstraintSection_GetConstraintBindingID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieScene3DAttachSection
// (None)

class UClass* UMovieScene3DAttachSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DAttachSection");

	return Clss;
}


// MovieScene3DAttachSection MovieSceneTracks.Default__MovieScene3DAttachSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DAttachSection* UMovieScene3DAttachSection::GetDefaultObj()
{
	static class UMovieScene3DAttachSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DAttachSection*>(UMovieScene3DAttachSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// (None)

class UClass* UMovieScene3DConstraintTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DConstraintTrack");

	return Clss;
}


// MovieScene3DConstraintTrack MovieSceneTracks.Default__MovieScene3DConstraintTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DConstraintTrack* UMovieScene3DConstraintTrack::GetDefaultObj()
{
	static class UMovieScene3DConstraintTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DConstraintTrack*>(UMovieScene3DConstraintTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DAttachTrack
// (None)

class UClass* UMovieScene3DAttachTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DAttachTrack");

	return Clss;
}


// MovieScene3DAttachTrack MovieSceneTracks.Default__MovieScene3DAttachTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DAttachTrack* UMovieScene3DAttachTrack::GetDefaultObj()
{
	static class UMovieScene3DAttachTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DAttachTrack*>(UMovieScene3DAttachTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DPathSection
// (None)

class UClass* UMovieScene3DPathSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DPathSection");

	return Clss;
}


// MovieScene3DPathSection MovieSceneTracks.Default__MovieScene3DPathSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DPathSection* UMovieScene3DPathSection::GetDefaultObj()
{
	static class UMovieScene3DPathSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DPathSection*>(UMovieScene3DPathSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DPathTrack
// (None)

class UClass* UMovieScene3DPathTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DPathTrack");

	return Clss;
}


// MovieScene3DPathTrack MovieSceneTracks.Default__MovieScene3DPathTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DPathTrack* UMovieScene3DPathTrack::GetDefaultObj()
{
	static class UMovieScene3DPathTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DPathTrack*>(UMovieScene3DPathTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePropertySystem
// (None)

class UClass* UMovieScenePropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePropertySystem");

	return Clss;
}


// MovieScenePropertySystem MovieSceneTracks.Default__MovieScenePropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePropertySystem* UMovieScenePropertySystem::GetDefaultObj()
{
	static class UMovieScenePropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePropertySystem*>(UMovieScenePropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// (None)

class UClass* UMovieScene3DTransformPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DTransformPropertySystem");

	return Clss;
}


// MovieScene3DTransformPropertySystem MovieSceneTracks.Default__MovieScene3DTransformPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DTransformPropertySystem* UMovieScene3DTransformPropertySystem::GetDefaultObj()
{
	static class UMovieScene3DTransformPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DTransformPropertySystem*>(UMovieScene3DTransformPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DTransformSection
// (None)

class UClass* UMovieScene3DTransformSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DTransformSection");

	return Clss;
}


// MovieScene3DTransformSection MovieSceneTracks.Default__MovieScene3DTransformSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DTransformSection* UMovieScene3DTransformSection::GetDefaultObj()
{
	static class UMovieScene3DTransformSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DTransformSection*>(UMovieScene3DTransformSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScene3DTransformTrack
// (None)

class UClass* UMovieScene3DTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene3DTransformTrack");

	return Clss;
}


// MovieScene3DTransformTrack MovieSceneTracks.Default__MovieScene3DTransformTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene3DTransformTrack* UMovieScene3DTransformTrack::GetDefaultObj()
{
	static class UMovieScene3DTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene3DTransformTrack*>(UMovieScene3DTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// (None)

class UClass* UMovieSceneActorReferenceSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneActorReferenceSection");

	return Clss;
}


// MovieSceneActorReferenceSection MovieSceneTracks.Default__MovieSceneActorReferenceSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneActorReferenceSection* UMovieSceneActorReferenceSection::GetDefaultObj()
{
	static class UMovieSceneActorReferenceSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneActorReferenceSection*>(UMovieSceneActorReferenceSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// (None)

class UClass* UMovieSceneActorReferenceTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneActorReferenceTrack");

	return Clss;
}


// MovieSceneActorReferenceTrack MovieSceneTracks.Default__MovieSceneActorReferenceTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneActorReferenceTrack* UMovieSceneActorReferenceTrack::GetDefaultObj()
{
	static class UMovieSceneActorReferenceTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneActorReferenceTrack*>(UMovieSceneActorReferenceTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneAudioSection
// (None)

class UClass* UMovieSceneAudioSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAudioSection");

	return Clss;
}


// MovieSceneAudioSection MovieSceneTracks.Default__MovieSceneAudioSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAudioSection* UMovieSceneAudioSection::GetDefaultObj()
{
	static class UMovieSceneAudioSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAudioSection*>(UMovieSceneAudioSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InStartOffset                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetStartOffset");

	Params::UMovieSceneAudioSection_SetStartOffset_Params Parms{};

	Parms.InStartOffset = InStartOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  InSound                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetSound");

	Params::UMovieSceneAudioSection_SetSound_Params Parms{};

	Parms.InSound = InSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetStartOffset");

	Params::UMovieSceneAudioSection_GetStartOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetSound");

	Params::UMovieSceneAudioSection_GetSound_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneAudioTrack
// (None)

class UClass* UMovieSceneAudioTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAudioTrack");

	return Clss;
}


// MovieSceneAudioTrack MovieSceneTracks.Default__MovieSceneAudioTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAudioTrack* UMovieSceneAudioTrack::GetDefaultObj()
{
	static class UMovieSceneAudioTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAudioTrack*>(UMovieSceneAudioTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// (None)

class UClass* UMovieSceneBaseValueEvaluatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBaseValueEvaluatorSystem");

	return Clss;
}


// MovieSceneBaseValueEvaluatorSystem MovieSceneTracks.Default__MovieSceneBaseValueEvaluatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBaseValueEvaluatorSystem* UMovieSceneBaseValueEvaluatorSystem::GetDefaultObj()
{
	static class UMovieSceneBaseValueEvaluatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBaseValueEvaluatorSystem*>(UMovieSceneBaseValueEvaluatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneBoolPropertySystem
// (None)

class UClass* UMovieSceneBoolPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBoolPropertySystem");

	return Clss;
}


// MovieSceneBoolPropertySystem MovieSceneTracks.Default__MovieSceneBoolPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBoolPropertySystem* UMovieSceneBoolPropertySystem::GetDefaultObj()
{
	static class UMovieSceneBoolPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBoolPropertySystem*>(UMovieSceneBoolPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneBoolTrack
// (None)

class UClass* UMovieSceneBoolTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBoolTrack");

	return Clss;
}


// MovieSceneBoolTrack MovieSceneTracks.Default__MovieSceneBoolTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBoolTrack* UMovieSceneBoolTrack::GetDefaultObj()
{
	static class UMovieSceneBoolTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBoolTrack*>(UMovieSceneBoolTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneBytePropertySystem
// (None)

class UClass* UMovieSceneBytePropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBytePropertySystem");

	return Clss;
}


// MovieSceneBytePropertySystem MovieSceneTracks.Default__MovieSceneBytePropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBytePropertySystem* UMovieSceneBytePropertySystem::GetDefaultObj()
{
	static class UMovieSceneBytePropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBytePropertySystem*>(UMovieSceneBytePropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneByteSection
// (None)

class UClass* UMovieSceneByteSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneByteSection");

	return Clss;
}


// MovieSceneByteSection MovieSceneTracks.Default__MovieSceneByteSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneByteSection* UMovieSceneByteSection::GetDefaultObj()
{
	static class UMovieSceneByteSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneByteSection*>(UMovieSceneByteSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneByteTrack
// (None)

class UClass* UMovieSceneByteTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneByteTrack");

	return Clss;
}


// MovieSceneByteTrack MovieSceneTracks.Default__MovieSceneByteTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneByteTrack* UMovieSceneByteTrack::GetDefaultObj()
{
	static class UMovieSceneByteTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneByteTrack*>(UMovieSceneByteTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// (None)

class UClass* UMovieSceneCameraAnimSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraAnimSection");

	return Clss;
}


// MovieSceneCameraAnimSection MovieSceneTracks.Default__MovieSceneCameraAnimSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraAnimSection* UMovieSceneCameraAnimSection::GetDefaultObj()
{
	static class UMovieSceneCameraAnimSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraAnimSection*>(UMovieSceneCameraAnimSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// (None)

class UClass* UMovieSceneCameraAnimTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraAnimTrack");

	return Clss;
}


// MovieSceneCameraAnimTrack MovieSceneTracks.Default__MovieSceneCameraAnimTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraAnimTrack* UMovieSceneCameraAnimTrack::GetDefaultObj()
{
	static class UMovieSceneCameraAnimTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraAnimTrack*>(UMovieSceneCameraAnimTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraCutSection
// (None)

class UClass* UMovieSceneCameraCutSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraCutSection");

	return Clss;
}


// MovieSceneCameraCutSection MovieSceneTracks.Default__MovieSceneCameraCutSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraCutSection* UMovieSceneCameraCutSection::GetDefaultObj()
{
	static class UMovieSceneCameraCutSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraCutSection*>(UMovieSceneCameraCutSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InCameraBindingID                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCameraCutSection::SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "SetCameraBindingID");

	Params::UMovieSceneCameraCutSection_SetCameraBindingID_Params Parms{};

	Parms.InCameraBindingID = InCameraBindingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "GetCameraBindingID");

	Params::UMovieSceneCameraCutSection_GetCameraBindingID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// (None)

class UClass* UMovieSceneCameraCutTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraCutTrack");

	return Clss;
}


// MovieSceneCameraCutTrack MovieSceneTracks.Default__MovieSceneCameraCutTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraCutTrack* UMovieSceneCameraCutTrack::GetDefaultObj()
{
	static class UMovieSceneCameraCutTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraCutTrack*>(UMovieSceneCameraCutTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// (None)

class UClass* UMovieSceneCameraCutTrackInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraCutTrackInstance");

	return Clss;
}


// MovieSceneCameraCutTrackInstance MovieSceneTracks.Default__MovieSceneCameraCutTrackInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraCutTrackInstance* UMovieSceneCameraCutTrackInstance::GetDefaultObj()
{
	static class UMovieSceneCameraCutTrackInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraCutTrackInstance*>(UMovieSceneCameraCutTrackInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// (None)

class UClass* UMovieSceneCameraShakeSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeSection");

	return Clss;
}


// MovieSceneCameraShakeSection MovieSceneTracks.Default__MovieSceneCameraShakeSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeSection* UMovieSceneCameraShakeSection::GetDefaultObj()
{
	static class UMovieSceneCameraShakeSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeSection*>(UMovieSceneCameraShakeSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// (None)

class UClass* UMovieSceneCameraShakeSourceShakeSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceShakeSection");

	return Clss;
}


// MovieSceneCameraShakeSourceShakeSection MovieSceneTracks.Default__MovieSceneCameraShakeSourceShakeSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeSourceShakeSection* UMovieSceneCameraShakeSourceShakeSection::GetDefaultObj()
{
	static class UMovieSceneCameraShakeSourceShakeSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeSourceShakeSection*>(UMovieSceneCameraShakeSourceShakeSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// (None)

class UClass* UMovieSceneCameraShakeSourceShakeTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceShakeTrack");

	return Clss;
}


// MovieSceneCameraShakeSourceShakeTrack MovieSceneTracks.Default__MovieSceneCameraShakeSourceShakeTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeSourceShakeTrack* UMovieSceneCameraShakeSourceShakeTrack::GetDefaultObj()
{
	static class UMovieSceneCameraShakeSourceShakeTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeSourceShakeTrack*>(UMovieSceneCameraShakeSourceShakeTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// (None)

class UClass* UMovieSceneCameraShakeSourceTriggerSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceTriggerSection");

	return Clss;
}


// MovieSceneCameraShakeSourceTriggerSection MovieSceneTracks.Default__MovieSceneCameraShakeSourceTriggerSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeSourceTriggerSection* UMovieSceneCameraShakeSourceTriggerSection::GetDefaultObj()
{
	static class UMovieSceneCameraShakeSourceTriggerSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeSourceTriggerSection*>(UMovieSceneCameraShakeSourceTriggerSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// (None)

class UClass* UMovieSceneCameraShakeSourceTriggerTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceTriggerTrack");

	return Clss;
}


// MovieSceneCameraShakeSourceTriggerTrack MovieSceneTracks.Default__MovieSceneCameraShakeSourceTriggerTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeSourceTriggerTrack* UMovieSceneCameraShakeSourceTriggerTrack::GetDefaultObj()
{
	static class UMovieSceneCameraShakeSourceTriggerTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeSourceTriggerTrack*>(UMovieSceneCameraShakeSourceTriggerTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// (None)

class UClass* UMovieSceneCameraShakeTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCameraShakeTrack");

	return Clss;
}


// MovieSceneCameraShakeTrack MovieSceneTracks.Default__MovieSceneCameraShakeTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCameraShakeTrack* UMovieSceneCameraShakeTrack::GetDefaultObj()
{
	static class UMovieSceneCameraShakeTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCameraShakeTrack*>(UMovieSceneCameraShakeTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// (None)

class UClass* UMovieSceneCinematicShotSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCinematicShotSection");

	return Clss;
}


// MovieSceneCinematicShotSection MovieSceneTracks.Default__MovieSceneCinematicShotSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCinematicShotSection* UMovieSceneCinematicShotSection::GetDefaultObj()
{
	static class UMovieSceneCinematicShotSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCinematicShotSection*>(UMovieSceneCinematicShotSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InShotDisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCinematicShotSection::SetShotDisplayName(const class FString& InShotDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "SetShotDisplayName");

	Params::UMovieSceneCinematicShotSection_SetShotDisplayName_Params Parms{};

	Parms.InShotDisplayName = InShotDisplayName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "GetShotDisplayName");

	Params::UMovieSceneCinematicShotSection_GetShotDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// (None)

class UClass* UMovieSceneCinematicShotTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCinematicShotTrack");

	return Clss;
}


// MovieSceneCinematicShotTrack MovieSceneTracks.Default__MovieSceneCinematicShotTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCinematicShotTrack* UMovieSceneCinematicShotTrack::GetDefaultObj()
{
	static class UMovieSceneCinematicShotTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCinematicShotTrack*>(UMovieSceneCinematicShotTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneColorPropertySystem
// (None)

class UClass* UMovieSceneColorPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneColorPropertySystem");

	return Clss;
}


// MovieSceneColorPropertySystem MovieSceneTracks.Default__MovieSceneColorPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneColorPropertySystem* UMovieSceneColorPropertySystem::GetDefaultObj()
{
	static class UMovieSceneColorPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneColorPropertySystem*>(UMovieSceneColorPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneColorSection
// (None)

class UClass* UMovieSceneColorSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneColorSection");

	return Clss;
}


// MovieSceneColorSection MovieSceneTracks.Default__MovieSceneColorSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneColorSection* UMovieSceneColorSection::GetDefaultObj()
{
	static class UMovieSceneColorSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneColorSection*>(UMovieSceneColorSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneColorTrack
// (None)

class UClass* UMovieSceneColorTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneColorTrack");

	return Clss;
}


// MovieSceneColorTrack MovieSceneTracks.Default__MovieSceneColorTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneColorTrack* UMovieSceneColorTrack::GetDefaultObj()
{
	static class UMovieSceneColorTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneColorTrack*>(UMovieSceneColorTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// (None)

class UClass* UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComponentAttachmentInvalidatorSystem");

	return Clss;
}


// MovieSceneComponentAttachmentInvalidatorSystem MovieSceneTracks.Default__MovieSceneComponentAttachmentInvalidatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComponentAttachmentInvalidatorSystem* UMovieSceneComponentAttachmentInvalidatorSystem::GetDefaultObj()
{
	static class UMovieSceneComponentAttachmentInvalidatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComponentAttachmentInvalidatorSystem*>(UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// (None)

class UClass* UMovieSceneComponentAttachmentSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComponentAttachmentSystem");

	return Clss;
}


// MovieSceneComponentAttachmentSystem MovieSceneTracks.Default__MovieSceneComponentAttachmentSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComponentAttachmentSystem* UMovieSceneComponentAttachmentSystem::GetDefaultObj()
{
	static class UMovieSceneComponentAttachmentSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComponentAttachmentSystem*>(UMovieSceneComponentAttachmentSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// (None)

class UClass* UMovieSceneComponentMobilitySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComponentMobilitySystem");

	return Clss;
}


// MovieSceneComponentMobilitySystem MovieSceneTracks.Default__MovieSceneComponentMobilitySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComponentMobilitySystem* UMovieSceneComponentMobilitySystem::GetDefaultObj()
{
	static class UMovieSceneComponentMobilitySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComponentMobilitySystem*>(UMovieSceneComponentMobilitySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// (None)

class UClass* UMovieSceneComponentTransformSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComponentTransformSystem");

	return Clss;
}


// MovieSceneComponentTransformSystem MovieSceneTracks.Default__MovieSceneComponentTransformSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComponentTransformSystem* UMovieSceneComponentTransformSystem::GetDefaultObj()
{
	static class UMovieSceneComponentTransformSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComponentTransformSystem*>(UMovieSceneComponentTransformSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// (None)

class UClass* UMovieSceneDeferredComponentMovementSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneDeferredComponentMovementSystem");

	return Clss;
}


// MovieSceneDeferredComponentMovementSystem MovieSceneTracks.Default__MovieSceneDeferredComponentMovementSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneDeferredComponentMovementSystem* UMovieSceneDeferredComponentMovementSystem::GetDefaultObj()
{
	static class UMovieSceneDeferredComponentMovementSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneDeferredComponentMovementSystem*>(UMovieSceneDeferredComponentMovementSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEnumPropertySystem
// (None)

class UClass* UMovieSceneEnumPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEnumPropertySystem");

	return Clss;
}


// MovieSceneEnumPropertySystem MovieSceneTracks.Default__MovieSceneEnumPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEnumPropertySystem* UMovieSceneEnumPropertySystem::GetDefaultObj()
{
	static class UMovieSceneEnumPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEnumPropertySystem*>(UMovieSceneEnumPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEnumSection
// (None)

class UClass* UMovieSceneEnumSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEnumSection");

	return Clss;
}


// MovieSceneEnumSection MovieSceneTracks.Default__MovieSceneEnumSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEnumSection* UMovieSceneEnumSection::GetDefaultObj()
{
	static class UMovieSceneEnumSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEnumSection*>(UMovieSceneEnumSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEnumTrack
// (None)

class UClass* UMovieSceneEnumTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEnumTrack");

	return Clss;
}


// MovieSceneEnumTrack MovieSceneTracks.Default__MovieSceneEnumTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEnumTrack* UMovieSceneEnumTrack::GetDefaultObj()
{
	static class UMovieSceneEnumTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEnumTrack*>(UMovieSceneEnumTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// (None)

class UClass* UMovieSceneEulerTransformPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEulerTransformPropertySystem");

	return Clss;
}


// MovieSceneEulerTransformPropertySystem MovieSceneTracks.Default__MovieSceneEulerTransformPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEulerTransformPropertySystem* UMovieSceneEulerTransformPropertySystem::GetDefaultObj()
{
	static class UMovieSceneEulerTransformPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEulerTransformPropertySystem*>(UMovieSceneEulerTransformPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// (None)

class UClass* UMovieSceneEulerTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEulerTransformTrack");

	return Clss;
}


// MovieSceneEulerTransformTrack MovieSceneTracks.Default__MovieSceneEulerTransformTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEulerTransformTrack* UMovieSceneEulerTransformTrack::GetDefaultObj()
{
	static class UMovieSceneEulerTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEulerTransformTrack*>(UMovieSceneEulerTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventSectionBase
// (None)

class UClass* UMovieSceneEventSectionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventSectionBase");

	return Clss;
}


// MovieSceneEventSectionBase MovieSceneTracks.Default__MovieSceneEventSectionBase
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventSectionBase* UMovieSceneEventSectionBase::GetDefaultObj()
{
	static class UMovieSceneEventSectionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventSectionBase*>(UMovieSceneEventSectionBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// (None)

class UClass* UMovieSceneEventRepeaterSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventRepeaterSection");

	return Clss;
}


// MovieSceneEventRepeaterSection MovieSceneTracks.Default__MovieSceneEventRepeaterSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventRepeaterSection* UMovieSceneEventRepeaterSection::GetDefaultObj()
{
	static class UMovieSceneEventRepeaterSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventRepeaterSection*>(UMovieSceneEventRepeaterSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventSection
// (None)

class UClass* UMovieSceneEventSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventSection");

	return Clss;
}


// MovieSceneEventSection MovieSceneTracks.Default__MovieSceneEventSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventSection* UMovieSceneEventSection::GetDefaultObj()
{
	static class UMovieSceneEventSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventSection*>(UMovieSceneEventSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventSystem
// (None)

class UClass* UMovieSceneEventSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventSystem");

	return Clss;
}


// MovieSceneEventSystem MovieSceneTracks.Default__MovieSceneEventSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventSystem* UMovieSceneEventSystem::GetDefaultObj()
{
	static class UMovieSceneEventSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventSystem*>(UMovieSceneEventSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// (None)

class UClass* UMovieScenePreSpawnEventSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePreSpawnEventSystem");

	return Clss;
}


// MovieScenePreSpawnEventSystem MovieSceneTracks.Default__MovieScenePreSpawnEventSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePreSpawnEventSystem* UMovieScenePreSpawnEventSystem::GetDefaultObj()
{
	static class UMovieScenePreSpawnEventSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePreSpawnEventSystem*>(UMovieScenePreSpawnEventSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// (None)

class UClass* UMovieScenePostSpawnEventSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePostSpawnEventSystem");

	return Clss;
}


// MovieScenePostSpawnEventSystem MovieSceneTracks.Default__MovieScenePostSpawnEventSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePostSpawnEventSystem* UMovieScenePostSpawnEventSystem::GetDefaultObj()
{
	static class UMovieScenePostSpawnEventSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePostSpawnEventSystem*>(UMovieScenePostSpawnEventSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// (None)

class UClass* UMovieScenePostEvalEventSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePostEvalEventSystem");

	return Clss;
}


// MovieScenePostEvalEventSystem MovieSceneTracks.Default__MovieScenePostEvalEventSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePostEvalEventSystem* UMovieScenePostEvalEventSystem::GetDefaultObj()
{
	static class UMovieScenePostEvalEventSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePostEvalEventSystem*>(UMovieScenePostEvalEventSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventTrack
// (None)

class UClass* UMovieSceneEventTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventTrack");

	return Clss;
}


// MovieSceneEventTrack MovieSceneTracks.Default__MovieSceneEventTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventTrack* UMovieSceneEventTrack::GetDefaultObj()
{
	static class UMovieSceneEventTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventTrack*>(UMovieSceneEventTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneEventTriggerSection
// (None)

class UClass* UMovieSceneEventTriggerSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventTriggerSection");

	return Clss;
}


// MovieSceneEventTriggerSection MovieSceneTracks.Default__MovieSceneEventTriggerSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventTriggerSection* UMovieSceneEventTriggerSection::GetDefaultObj()
{
	static class UMovieSceneEventTriggerSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventTriggerSection*>(UMovieSceneEventTriggerSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFadeSection
// (None)

class UClass* UMovieSceneFadeSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFadeSection");

	return Clss;
}


// MovieSceneFadeSection MovieSceneTracks.Default__MovieSceneFadeSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFadeSection* UMovieSceneFadeSection::GetDefaultObj()
{
	static class UMovieSceneFadeSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFadeSection*>(UMovieSceneFadeSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFloatTrack
// (None)

class UClass* UMovieSceneFloatTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFloatTrack");

	return Clss;
}


// MovieSceneFloatTrack MovieSceneTracks.Default__MovieSceneFloatTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFloatTrack* UMovieSceneFloatTrack::GetDefaultObj()
{
	static class UMovieSceneFloatTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFloatTrack*>(UMovieSceneFloatTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFadeTrack
// (None)

class UClass* UMovieSceneFadeTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFadeTrack");

	return Clss;
}


// MovieSceneFadeTrack MovieSceneTracks.Default__MovieSceneFadeTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFadeTrack* UMovieSceneFadeTrack::GetDefaultObj()
{
	static class UMovieSceneFadeTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFadeTrack*>(UMovieSceneFadeTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// (None)

class UClass* UMovieSceneFloatPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFloatPropertySystem");

	return Clss;
}


// MovieSceneFloatPropertySystem MovieSceneTracks.Default__MovieSceneFloatPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFloatPropertySystem* UMovieSceneFloatPropertySystem::GetDefaultObj()
{
	static class UMovieSceneFloatPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFloatPropertySystem*>(UMovieSceneFloatPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneFloatSection
// (None)

class UClass* UMovieSceneFloatSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFloatSection");

	return Clss;
}


// MovieSceneFloatSection MovieSceneTracks.Default__MovieSceneFloatSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFloatSection* UMovieSceneFloatSection::GetDefaultObj()
{
	static class UMovieSceneFloatSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFloatSection*>(UMovieSceneFloatSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// (None)

class UClass* UMovieSceneHierarchicalBiasSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneHierarchicalBiasSystem");

	return Clss;
}


// MovieSceneHierarchicalBiasSystem MovieSceneTracks.Default__MovieSceneHierarchicalBiasSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneHierarchicalBiasSystem* UMovieSceneHierarchicalBiasSystem::GetDefaultObj()
{
	static class UMovieSceneHierarchicalBiasSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneHierarchicalBiasSystem*>(UMovieSceneHierarchicalBiasSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneInitialValueSystem
// (None)

class UClass* UMovieSceneInitialValueSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneInitialValueSystem");

	return Clss;
}


// MovieSceneInitialValueSystem MovieSceneTracks.Default__MovieSceneInitialValueSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneInitialValueSystem* UMovieSceneInitialValueSystem::GetDefaultObj()
{
	static class UMovieSceneInitialValueSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneInitialValueSystem*>(UMovieSceneInitialValueSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
// (None)

class UClass* UMovieSceneIntegerPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneIntegerPropertySystem");

	return Clss;
}


// MovieSceneIntegerPropertySystem MovieSceneTracks.Default__MovieSceneIntegerPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneIntegerPropertySystem* UMovieSceneIntegerPropertySystem::GetDefaultObj()
{
	static class UMovieSceneIntegerPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneIntegerPropertySystem*>(UMovieSceneIntegerPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneIntegerSection
// (None)

class UClass* UMovieSceneIntegerSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneIntegerSection");

	return Clss;
}


// MovieSceneIntegerSection MovieSceneTracks.Default__MovieSceneIntegerSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneIntegerSection* UMovieSceneIntegerSection::GetDefaultObj()
{
	static class UMovieSceneIntegerSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneIntegerSection*>(UMovieSceneIntegerSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneIntegerTrack
// (None)

class UClass* UMovieSceneIntegerTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneIntegerTrack");

	return Clss;
}


// MovieSceneIntegerTrack MovieSceneTracks.Default__MovieSceneIntegerTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneIntegerTrack* UMovieSceneIntegerTrack::GetDefaultObj()
{
	static class UMovieSceneIntegerTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneIntegerTrack*>(UMovieSceneIntegerTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// (None)

class UClass* UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneInterrogatedPropertyInstantiatorSystem");

	return Clss;
}


// MovieSceneInterrogatedPropertyInstantiatorSystem MovieSceneTracks.Default__MovieSceneInterrogatedPropertyInstantiatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneInterrogatedPropertyInstantiatorSystem* UMovieSceneInterrogatedPropertyInstantiatorSystem::GetDefaultObj()
{
	static class UMovieSceneInterrogatedPropertyInstantiatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneInterrogatedPropertyInstantiatorSystem*>(UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// (None)

class UClass* UMovieSceneLevelVisibilitySection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySection");

	return Clss;
}


// MovieSceneLevelVisibilitySection MovieSceneTracks.Default__MovieSceneLevelVisibilitySection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLevelVisibilitySection* UMovieSceneLevelVisibilitySection::GetDefaultObj()
{
	static class UMovieSceneLevelVisibilitySection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLevelVisibilitySection*>(UMovieSceneLevelVisibilitySection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELevelVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetVisibility(enum class ELevelVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetVisibility");

	Params::UMovieSceneLevelVisibilitySection_SetVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                InLevelNames                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<class FName>& InLevelNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetLevelNames");

	Params::UMovieSceneLevelVisibilitySection_SetLevelNames_Params Parms{};

	Parms.InLevelNames = InLevelNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELevelVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetVisibility");

	Params::UMovieSceneLevelVisibilitySection_GetVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetLevelNames");

	Params::UMovieSceneLevelVisibilitySection_GetLevelNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// (None)

class UClass* UMovieSceneLevelVisibilitySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySystem");

	return Clss;
}


// MovieSceneLevelVisibilitySystem MovieSceneTracks.Default__MovieSceneLevelVisibilitySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLevelVisibilitySystem* UMovieSceneLevelVisibilitySystem::GetDefaultObj()
{
	static class UMovieSceneLevelVisibilitySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLevelVisibilitySystem*>(UMovieSceneLevelVisibilitySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// (None)

class UClass* UMovieSceneLevelVisibilityTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneLevelVisibilityTrack");

	return Clss;
}


// MovieSceneLevelVisibilityTrack MovieSceneTracks.Default__MovieSceneLevelVisibilityTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneLevelVisibilityTrack* UMovieSceneLevelVisibilityTrack::GetDefaultObj()
{
	static class UMovieSceneLevelVisibilityTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneLevelVisibilityTrack*>(UMovieSceneLevelVisibilityTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneMaterialTrack
// (None)

class UClass* UMovieSceneMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMaterialTrack");

	return Clss;
}


// MovieSceneMaterialTrack MovieSceneTracks.Default__MovieSceneMaterialTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMaterialTrack* UMovieSceneMaterialTrack::GetDefaultObj()
{
	static class UMovieSceneMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMaterialTrack*>(UMovieSceneMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// (None)

class UClass* UMovieSceneMaterialParameterCollectionTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMaterialParameterCollectionTrack");

	return Clss;
}


// MovieSceneMaterialParameterCollectionTrack MovieSceneTracks.Default__MovieSceneMaterialParameterCollectionTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMaterialParameterCollectionTrack* UMovieSceneMaterialParameterCollectionTrack::GetDefaultObj()
{
	static class UMovieSceneMaterialParameterCollectionTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMaterialParameterCollectionTrack*>(UMovieSceneMaterialParameterCollectionTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// (None)

class UClass* UMovieSceneComponentMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneComponentMaterialTrack");

	return Clss;
}


// MovieSceneComponentMaterialTrack MovieSceneTracks.Default__MovieSceneComponentMaterialTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneComponentMaterialTrack* UMovieSceneComponentMaterialTrack::GetDefaultObj()
{
	static class UMovieSceneComponentMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneComponentMaterialTrack*>(UMovieSceneComponentMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// (None)

class UClass* UMovieSceneMotionVectorSimulationSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMotionVectorSimulationSystem");

	return Clss;
}


// MovieSceneMotionVectorSimulationSystem MovieSceneTracks.Default__MovieSceneMotionVectorSimulationSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMotionVectorSimulationSystem* UMovieSceneMotionVectorSimulationSystem::GetDefaultObj()
{
	static class UMovieSceneMotionVectorSimulationSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMotionVectorSimulationSystem*>(UMovieSceneMotionVectorSimulationSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneObjectPropertySection
// (None)

class UClass* UMovieSceneObjectPropertySection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneObjectPropertySection");

	return Clss;
}


// MovieSceneObjectPropertySection MovieSceneTracks.Default__MovieSceneObjectPropertySection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneObjectPropertySection* UMovieSceneObjectPropertySection::GetDefaultObj()
{
	static class UMovieSceneObjectPropertySection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneObjectPropertySection*>(UMovieSceneObjectPropertySection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// (None)

class UClass* UMovieSceneObjectPropertyTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneObjectPropertyTrack");

	return Clss;
}


// MovieSceneObjectPropertyTrack MovieSceneTracks.Default__MovieSceneObjectPropertyTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneObjectPropertyTrack* UMovieSceneObjectPropertyTrack::GetDefaultObj()
{
	static class UMovieSceneObjectPropertyTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneObjectPropertyTrack*>(UMovieSceneObjectPropertyTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneParameterSection
// (None)

class UClass* UMovieSceneParameterSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParameterSection");

	return Clss;
}


// MovieSceneParameterSection MovieSceneTracks.Default__MovieSceneParameterSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParameterSection* UMovieSceneParameterSection::GetDefaultObj()
{
	static class UMovieSceneParameterSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParameterSection*>(UMovieSceneParameterSection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveVectorParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveVectorParameter");

	Params::UMovieSceneParameterSection_RemoveVectorParameter_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveVector2DParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveVector2DParameter");

	Params::UMovieSceneParameterSection_RemoveVector2DParameter_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveTransformParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveTransformParameter");

	Params::UMovieSceneParameterSection_RemoveTransformParameter_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveScalarParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveScalarParameter");

	Params::UMovieSceneParameterSection_RemoveScalarParameter_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveColorParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveColorParameter");

	Params::UMovieSceneParameterSection_RemoveColorParameter_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveBoolParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveBoolParameter");

	Params::UMovieSceneParameterSection_RemoveBoolParameter_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<class FName>                  ParameterNames                                                   (Parm, OutParm, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::GetParameterNames(TSet<class FName>* ParameterNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "GetParameterNames");

	Params::UMovieSceneParameterSection_GetParameterNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterNames != nullptr)
		*ParameterNames = Parms.ParameterNames;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddVectorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddVectorParameterKey");

	Params::UMovieSceneParameterSection_AddVectorParameterKey_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddVector2DParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddVector2DParameterKey");

	Params::UMovieSceneParameterSection_AddVector2DParameterKey_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddTransformParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, struct FTransform& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddTransformParameterKey");

	Params::UMovieSceneParameterSection_AddTransformParameterKey_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddScalarParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddScalarParameterKey");

	Params::UMovieSceneParameterSection_AddScalarParameterKey_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddColorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddColorParameterKey");

	Params::UMovieSceneParameterSection_AddColorParameterKey_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddBoolParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddBoolParameterKey");

	Params::UMovieSceneParameterSection_AddBoolParameterKey_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// (None)

class UClass* UMovieSceneParticleParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParticleParameterTrack");

	return Clss;
}


// MovieSceneParticleParameterTrack MovieSceneTracks.Default__MovieSceneParticleParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParticleParameterTrack* UMovieSceneParticleParameterTrack::GetDefaultObj()
{
	static class UMovieSceneParticleParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParticleParameterTrack*>(UMovieSceneParticleParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneParticleSection
// (None)

class UClass* UMovieSceneParticleSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParticleSection");

	return Clss;
}


// MovieSceneParticleSection MovieSceneTracks.Default__MovieSceneParticleSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParticleSection* UMovieSceneParticleSection::GetDefaultObj()
{
	static class UMovieSceneParticleSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParticleSection*>(UMovieSceneParticleSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneParticleTrack
// (None)

class UClass* UMovieSceneParticleTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneParticleTrack");

	return Clss;
}


// MovieSceneParticleTrack MovieSceneTracks.Default__MovieSceneParticleTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneParticleTrack* UMovieSceneParticleTrack::GetDefaultObj()
{
	static class UMovieSceneParticleTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneParticleTrack*>(UMovieSceneParticleTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// (None)

class UClass* UMovieScenePiecewiseBoolBlenderSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePiecewiseBoolBlenderSystem");

	return Clss;
}


// MovieScenePiecewiseBoolBlenderSystem MovieSceneTracks.Default__MovieScenePiecewiseBoolBlenderSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePiecewiseBoolBlenderSystem* UMovieScenePiecewiseBoolBlenderSystem::GetDefaultObj()
{
	static class UMovieScenePiecewiseBoolBlenderSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePiecewiseBoolBlenderSystem*>(UMovieScenePiecewiseBoolBlenderSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// (None)

class UClass* UMovieScenePiecewiseByteBlenderSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePiecewiseByteBlenderSystem");

	return Clss;
}


// MovieScenePiecewiseByteBlenderSystem MovieSceneTracks.Default__MovieScenePiecewiseByteBlenderSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePiecewiseByteBlenderSystem* UMovieScenePiecewiseByteBlenderSystem::GetDefaultObj()
{
	static class UMovieScenePiecewiseByteBlenderSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePiecewiseByteBlenderSystem*>(UMovieScenePiecewiseByteBlenderSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// (None)

class UClass* UMovieScenePiecewiseEnumBlenderSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePiecewiseEnumBlenderSystem");

	return Clss;
}


// MovieScenePiecewiseEnumBlenderSystem MovieSceneTracks.Default__MovieScenePiecewiseEnumBlenderSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePiecewiseEnumBlenderSystem* UMovieScenePiecewiseEnumBlenderSystem::GetDefaultObj()
{
	static class UMovieScenePiecewiseEnumBlenderSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePiecewiseEnumBlenderSystem*>(UMovieScenePiecewiseEnumBlenderSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// (None)

class UClass* UMovieScenePiecewiseFloatBlenderSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePiecewiseFloatBlenderSystem");

	return Clss;
}


// MovieScenePiecewiseFloatBlenderSystem MovieSceneTracks.Default__MovieScenePiecewiseFloatBlenderSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePiecewiseFloatBlenderSystem* UMovieScenePiecewiseFloatBlenderSystem::GetDefaultObj()
{
	static class UMovieScenePiecewiseFloatBlenderSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePiecewiseFloatBlenderSystem*>(UMovieScenePiecewiseFloatBlenderSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// (None)

class UClass* UMovieScenePiecewiseIntegerBlenderSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePiecewiseIntegerBlenderSystem");

	return Clss;
}


// MovieScenePiecewiseIntegerBlenderSystem MovieSceneTracks.Default__MovieScenePiecewiseIntegerBlenderSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePiecewiseIntegerBlenderSystem* UMovieScenePiecewiseIntegerBlenderSystem::GetDefaultObj()
{
	static class UMovieScenePiecewiseIntegerBlenderSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePiecewiseIntegerBlenderSystem*>(UMovieScenePiecewiseIntegerBlenderSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// (None)

class UClass* UMovieScenePrimitiveMaterialSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialSection");

	return Clss;
}


// MovieScenePrimitiveMaterialSection MovieSceneTracks.Default__MovieScenePrimitiveMaterialSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScenePrimitiveMaterialSection* UMovieScenePrimitiveMaterialSection::GetDefaultObj()
{
	static class UMovieScenePrimitiveMaterialSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePrimitiveMaterialSection*>(UMovieScenePrimitiveMaterialSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// (None)

class UClass* UMovieScenePrimitiveMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialTrack");

	return Clss;
}


// MovieScenePrimitiveMaterialTrack MovieSceneTracks.Default__MovieScenePrimitiveMaterialTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScenePrimitiveMaterialTrack* UMovieScenePrimitiveMaterialTrack::GetDefaultObj()
{
	static class UMovieScenePrimitiveMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePrimitiveMaterialTrack*>(UMovieScenePrimitiveMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// (None)

class UClass* UMovieScenePropertyInstantiatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePropertyInstantiatorSystem");

	return Clss;
}


// MovieScenePropertyInstantiatorSystem MovieSceneTracks.Default__MovieScenePropertyInstantiatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePropertyInstantiatorSystem* UMovieScenePropertyInstantiatorSystem::GetDefaultObj()
{
	static class UMovieScenePropertyInstantiatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePropertyInstantiatorSystem*>(UMovieScenePropertyInstantiatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// (None)

class UClass* UMovieSceneQuaternionInterpolationRotationSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneQuaternionInterpolationRotationSystem");

	return Clss;
}


// MovieSceneQuaternionInterpolationRotationSystem MovieSceneTracks.Default__MovieSceneQuaternionInterpolationRotationSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneQuaternionInterpolationRotationSystem* UMovieSceneQuaternionInterpolationRotationSystem::GetDefaultObj()
{
	static class UMovieSceneQuaternionInterpolationRotationSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneQuaternionInterpolationRotationSystem*>(UMovieSceneQuaternionInterpolationRotationSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// (None)

class UClass* UMovieSceneSkeletalAnimationSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationSection");

	return Clss;
}


// MovieSceneSkeletalAnimationSection MovieSceneTracks.Default__MovieSceneSkeletalAnimationSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSkeletalAnimationSection* UMovieSceneSkeletalAnimationSection::GetDefaultObj()
{
	static class UMovieSceneSkeletalAnimationSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSkeletalAnimationSection*>(UMovieSceneSkeletalAnimationSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// (None)

class UClass* UMovieSceneSkeletalAnimationTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationTrack");

	return Clss;
}


// MovieSceneSkeletalAnimationTrack MovieSceneTracks.Default__MovieSceneSkeletalAnimationTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSkeletalAnimationTrack* UMovieSceneSkeletalAnimationTrack::GetDefaultObj()
{
	static class UMovieSceneSkeletalAnimationTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSkeletalAnimationTrack*>(UMovieSceneSkeletalAnimationTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSlomoSection
// (None)

class UClass* UMovieSceneSlomoSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSlomoSection");

	return Clss;
}


// MovieSceneSlomoSection MovieSceneTracks.Default__MovieSceneSlomoSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSlomoSection* UMovieSceneSlomoSection::GetDefaultObj()
{
	static class UMovieSceneSlomoSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSlomoSection*>(UMovieSceneSlomoSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneSlomoTrack
// (None)

class UClass* UMovieSceneSlomoTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSlomoTrack");

	return Clss;
}


// MovieSceneSlomoTrack MovieSceneTracks.Default__MovieSceneSlomoTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSlomoTrack* UMovieSceneSlomoTrack::GetDefaultObj()
{
	static class UMovieSceneSlomoTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSlomoTrack*>(UMovieSceneSlomoTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneStringSection
// (None)

class UClass* UMovieSceneStringSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneStringSection");

	return Clss;
}


// MovieSceneStringSection MovieSceneTracks.Default__MovieSceneStringSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneStringSection* UMovieSceneStringSection::GetDefaultObj()
{
	static class UMovieSceneStringSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneStringSection*>(UMovieSceneStringSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneStringTrack
// (None)

class UClass* UMovieSceneStringTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneStringTrack");

	return Clss;
}


// MovieSceneStringTrack MovieSceneTracks.Default__MovieSceneStringTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneStringTrack* UMovieSceneStringTrack::GetDefaultObj()
{
	static class UMovieSceneStringTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneStringTrack*>(UMovieSceneStringTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// (None)

class UClass* UMovieSceneTransformOriginSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTransformOriginSystem");

	return Clss;
}


// MovieSceneTransformOriginSystem MovieSceneTracks.Default__MovieSceneTransformOriginSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTransformOriginSystem* UMovieSceneTransformOriginSystem::GetDefaultObj()
{
	static class UMovieSceneTransformOriginSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTransformOriginSystem*>(UMovieSceneTransformOriginSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneTransformTrack
// (None)

class UClass* UMovieSceneTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTransformTrack");

	return Clss;
}


// MovieSceneTransformTrack MovieSceneTracks.Default__MovieSceneTransformTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTransformTrack* UMovieSceneTransformTrack::GetDefaultObj()
{
	static class UMovieSceneTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTransformTrack*>(UMovieSceneTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneVectorPropertySystem
// (None)

class UClass* UMovieSceneVectorPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneVectorPropertySystem");

	return Clss;
}


// MovieSceneVectorPropertySystem MovieSceneTracks.Default__MovieSceneVectorPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneVectorPropertySystem* UMovieSceneVectorPropertySystem::GetDefaultObj()
{
	static class UMovieSceneVectorPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneVectorPropertySystem*>(UMovieSceneVectorPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneVectorSection
// (None)

class UClass* UMovieSceneVectorSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneVectorSection");

	return Clss;
}


// MovieSceneVectorSection MovieSceneTracks.Default__MovieSceneVectorSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneVectorSection* UMovieSceneVectorSection::GetDefaultObj()
{
	static class UMovieSceneVectorSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneVectorSection*>(UMovieSceneVectorSection::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneVectorTrack
// (None)

class UClass* UMovieSceneVectorTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneVectorTrack");

	return Clss;
}


// MovieSceneVectorTrack MovieSceneTracks.Default__MovieSceneVectorTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneVectorTrack* UMovieSceneVectorTrack::GetDefaultObj()
{
	static class UMovieSceneVectorTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneVectorTrack*>(UMovieSceneVectorTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// (None)

class UClass* UMovieSceneVisibilityTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneVisibilityTrack");

	return Clss;
}


// MovieSceneVisibilityTrack MovieSceneTracks.Default__MovieSceneVisibilityTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneVisibilityTrack* UMovieSceneVisibilityTrack::GetDefaultObj()
{
	static class UMovieSceneVisibilityTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneVisibilityTrack*>(UMovieSceneVisibilityTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// (None)

class UClass* UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneHierarchicalEasingInstantiatorSystem");

	return Clss;
}


// MovieSceneHierarchicalEasingInstantiatorSystem MovieSceneTracks.Default__MovieSceneHierarchicalEasingInstantiatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneHierarchicalEasingInstantiatorSystem* UMovieSceneHierarchicalEasingInstantiatorSystem::GetDefaultObj()
{
	static class UMovieSceneHierarchicalEasingInstantiatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneHierarchicalEasingInstantiatorSystem*>(UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// (None)

class UClass* UWeightAndEasingEvaluatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeightAndEasingEvaluatorSystem");

	return Clss;
}


// WeightAndEasingEvaluatorSystem MovieSceneTracks.Default__WeightAndEasingEvaluatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeightAndEasingEvaluatorSystem* UWeightAndEasingEvaluatorSystem::GetDefaultObj()
{
	static class UWeightAndEasingEvaluatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeightAndEasingEvaluatorSystem*>(UWeightAndEasingEvaluatorSystem::StaticClass()->DefaultObject);

	return Default;
}

}


