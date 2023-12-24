#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_ArrestSomeone.Challenge_ArrestSomeone_C
// (None)

class UClass* UChallenge_ArrestSomeone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_ArrestSomeone_C");

	return Clss;
}


// Challenge_ArrestSomeone_C Challenge_ArrestSomeone.Default__Challenge_ArrestSomeone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_ArrestSomeone_C* UChallenge_ArrestSomeone_C::GetDefaultObj()
{
	static class UChallenge_ArrestSomeone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_ArrestSomeone_C*>(UChallenge_ArrestSomeone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        Gs                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_ArrestSomeone_C::OnChallengeInit(class AReadyOrNotGameState* Gs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_ArrestSomeone_C", "OnChallengeInit");

	Params::UChallenge_ArrestSomeone_C_OnChallengeInit_Params Parms{};

	Parms.Gs = Gs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeAchieved
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallenge_ArrestSomeone_C::OnChallengeAchieved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_ArrestSomeone_C", "OnChallengeAchieved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnCharacterArrested_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        ArrestedBy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_ArrestSomeone_C::OnCharacterArrested_Event_0(class AReadyOrNotCharacter* Character, class AReadyOrNotCharacter* ArrestedBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_ArrestSomeone_C", "OnCharacterArrested_Event_0");

	Params::UChallenge_ArrestSomeone_C_OnCharacterArrested_Event_0_Params Parms{};

	Parms.Character = Character;
	Parms.ArrestedBy = ArrestedBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.ExecuteUbergraph_Challenge_ArrestSomeone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_ArrestedBy                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AReadyOrNotGameState*        K2Node_Event_gs                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_ArrestSomeone_C::ExecuteUbergraph_Challenge_ArrestSomeone(int32 EntryPoint, class AReadyOrNotCharacter* K2Node_CustomEvent_Character, class AReadyOrNotCharacter* K2Node_CustomEvent_ArrestedBy, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AReadyOrNotGameState* K2Node_Event_gs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_ArrestSomeone_C", "ExecuteUbergraph_Challenge_ArrestSomeone");

	Params::UChallenge_ArrestSomeone_C_ExecuteUbergraph_Challenge_ArrestSomeone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_ArrestedBy = K2Node_CustomEvent_ArrestedBy;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_gs = K2Node_Event_gs;

	UObject::ProcessEvent(Func, &Parms);

}

}


