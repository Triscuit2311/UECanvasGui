#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_USVeterans.Faction_USVeterans_C
// (Actor)

class UClass* AFaction_USVeterans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_USVeterans_C");

	return Clss;
}


// Faction_USVeterans_C Faction_USVeterans.Default__Faction_USVeterans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_USVeterans_C* AFaction_USVeterans_C::GetDefaultObj()
{
	static class AFaction_USVeterans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_USVeterans_C*>(AFaction_USVeterans_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Faction_USVeterans.Faction_USVeterans_C.OnAIAdded_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticCharacter*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_USVeterans_C::OnAIAdded_Blueprint(class ACyberneticCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_USVeterans_C", "OnAIAdded_Blueprint");

	Params::AFaction_USVeterans_C_OnAIAdded_Blueprint_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Faction_USVeterans.Faction_USVeterans_C.AlertOtherSuspectsInTeam_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASuspectCharacter*           Suspect                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_USVeterans_C::AlertOtherSuspectsInTeam_Blueprint(class ASuspectCharacter* Suspect, class AReadyOrNotCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_USVeterans_C", "AlertOtherSuspectsInTeam_Blueprint");

	Params::AFaction_USVeterans_C_AlertOtherSuspectsInTeam_Blueprint_Params Parms{};

	Parms.Suspect = Suspect;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Faction_USVeterans.Faction_USVeterans_C.ExecuteUbergraph_Faction_USVeterans
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASuspectCharacter*           K2Node_Event_Suspect                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_USVeterans_C::ExecuteUbergraph_Faction_USVeterans(int32 EntryPoint, class ACyberneticCharacter* K2Node_Event_Character, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, class ASuspectCharacter* K2Node_Event_Suspect, class AReadyOrNotCharacter* K2Node_Event_Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_USVeterans_C", "ExecuteUbergraph_Faction_USVeterans");

	Params::AFaction_USVeterans_C_ExecuteUbergraph_Faction_USVeterans_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.K2Node_Event_Suspect = K2Node_Event_Suspect;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;

	UObject::ProcessEvent(Func, &Parms);

}

}


