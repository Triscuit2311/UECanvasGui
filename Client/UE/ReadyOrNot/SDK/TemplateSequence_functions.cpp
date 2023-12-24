#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TemplateSequence.TemplateSequence
// (None)

class UClass* UTemplateSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequence");

	return Clss;
}


// TemplateSequence TemplateSequence.Default__TemplateSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UTemplateSequence* UTemplateSequence::GetDefaultObj()
{
	static class UTemplateSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UTemplateSequence*>(UTemplateSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.CameraAnimationSequence
// (None)

class UClass* UCameraAnimationSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraAnimationSequence");

	return Clss;
}


// CameraAnimationSequence TemplateSequence.Default__CameraAnimationSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraAnimationSequence* UCameraAnimationSequence::GetDefaultObj()
{
	static class UCameraAnimationSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraAnimationSequence*>(UCameraAnimationSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// (None)

class UClass* USequenceCameraShakeCameraStandIn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceCameraShakeCameraStandIn");

	return Clss;
}


// SequenceCameraShakeCameraStandIn TemplateSequence.Default__SequenceCameraShakeCameraStandIn
// (Public, ClassDefaultObject, ArchetypeObject)

class USequenceCameraShakeCameraStandIn* USequenceCameraShakeCameraStandIn::GetDefaultObj()
{
	static class USequenceCameraShakeCameraStandIn* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceCameraShakeCameraStandIn*>(USequenceCameraShakeCameraStandIn::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.SequenceCameraShakePattern
// (None)

class UClass* USequenceCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceCameraShakePattern");

	return Clss;
}


// SequenceCameraShakePattern TemplateSequence.Default__SequenceCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class USequenceCameraShakePattern* USequenceCameraShakePattern::GetDefaultObj()
{
	static class USequenceCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceCameraShakePattern*>(USequenceCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// (None)

class UClass* USequenceCameraShakeSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceCameraShakeSequencePlayer");

	return Clss;
}


// SequenceCameraShakeSequencePlayer TemplateSequence.Default__SequenceCameraShakeSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class USequenceCameraShakeSequencePlayer* USequenceCameraShakeSequencePlayer::GetDefaultObj()
{
	static class USequenceCameraShakeSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceCameraShakeSequencePlayer*>(USequenceCameraShakeSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.TemplateSequenceActor
// (Actor)

class UClass* ATemplateSequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequenceActor");

	return Clss;
}


// TemplateSequenceActor TemplateSequence.Default__TemplateSequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATemplateSequenceActor* ATemplateSequenceActor::GetDefaultObj()
{
	static class ATemplateSequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATemplateSequenceActor*>(ATemplateSequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function TemplateSequence.TemplateSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTemplateSequence*           InSequence                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemplateSequenceActor", "SetSequence");

	Params::ATemplateSequenceActor_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TemplateSequence.TemplateSequenceActor.SetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOverridesDefault                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATemplateSequenceActor::SetBinding(class AActor* Actor, bool bOverridesDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemplateSequenceActor", "SetBinding");

	Params::ATemplateSequenceActor_SetBinding_Params Parms{};

	Parms.Actor = Actor;
	Parms.bOverridesDefault = bOverridesDefault;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequence* ATemplateSequenceActor::LoadSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemplateSequenceActor", "LoadSequence");

	Params::ATemplateSequenceActor_LoadSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequencePlayer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemplateSequenceActor", "GetSequencePlayer");

	Params::ATemplateSequenceActor_GetSequencePlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TemplateSequence.TemplateSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequence* ATemplateSequenceActor::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemplateSequenceActor", "GetSequence");

	Params::ATemplateSequenceActor_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TemplateSequence.TemplateSequencePlayer
// (None)

class UClass* UTemplateSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequencePlayer");

	return Clss;
}


// TemplateSequencePlayer TemplateSequence.Default__TemplateSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UTemplateSequencePlayer* UTemplateSequencePlayer::GetDefaultObj()
{
	static class UTemplateSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UTemplateSequencePlayer*>(UTemplateSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequence*           TemplateSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ATemplateSequenceActor*      OutActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequencePlayer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemplateSequencePlayer", "CreateTemplateSequencePlayer");

	Params::UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TemplateSequence = TemplateSequence;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Class TemplateSequence.TemplateSequenceSection
// (None)

class UClass* UTemplateSequenceSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequenceSection");

	return Clss;
}


// TemplateSequenceSection TemplateSequence.Default__TemplateSequenceSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTemplateSequenceSection* UTemplateSequenceSection::GetDefaultObj()
{
	static class UTemplateSequenceSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UTemplateSequenceSection*>(UTemplateSequenceSection::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.TemplateSequenceSystem
// (None)

class UClass* UTemplateSequenceSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequenceSystem");

	return Clss;
}


// TemplateSequenceSystem TemplateSequence.Default__TemplateSequenceSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTemplateSequenceSystem* UTemplateSequenceSystem::GetDefaultObj()
{
	static class UTemplateSequenceSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTemplateSequenceSystem*>(UTemplateSequenceSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// (None)

class UClass* UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequencePropertyScalingInstantiatorSystem");

	return Clss;
}


// TemplateSequencePropertyScalingInstantiatorSystem TemplateSequence.Default__TemplateSequencePropertyScalingInstantiatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTemplateSequencePropertyScalingInstantiatorSystem* UTemplateSequencePropertyScalingInstantiatorSystem::GetDefaultObj()
{
	static class UTemplateSequencePropertyScalingInstantiatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTemplateSequencePropertyScalingInstantiatorSystem*>(UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// (None)

class UClass* UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequencePropertyScalingEvaluatorSystem");

	return Clss;
}


// TemplateSequencePropertyScalingEvaluatorSystem TemplateSequence.Default__TemplateSequencePropertyScalingEvaluatorSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTemplateSequencePropertyScalingEvaluatorSystem* UTemplateSequencePropertyScalingEvaluatorSystem::GetDefaultObj()
{
	static class UTemplateSequencePropertyScalingEvaluatorSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTemplateSequencePropertyScalingEvaluatorSystem*>(UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class TemplateSequence.TemplateSequenceTrack
// (None)

class UClass* UTemplateSequenceTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemplateSequenceTrack");

	return Clss;
}


// TemplateSequenceTrack TemplateSequence.Default__TemplateSequenceTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTemplateSequenceTrack* UTemplateSequenceTrack::GetDefaultObj()
{
	static class UTemplateSequenceTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UTemplateSequenceTrack*>(UTemplateSequenceTrack::StaticClass()->DefaultObject);

	return Default;
}

}


