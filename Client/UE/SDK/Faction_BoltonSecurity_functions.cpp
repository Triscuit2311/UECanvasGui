#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Faction_BoltonSecurity.Faction_BoltonSecurity_C
// (Actor)

class UClass* AFaction_BoltonSecurity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Faction_BoltonSecurity_C");

	return Clss;
}


// Faction_BoltonSecurity_C Faction_BoltonSecurity.Default__Faction_BoltonSecurity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFaction_BoltonSecurity_C* AFaction_BoltonSecurity_C::GetDefaultObj()
{
	static class AFaction_BoltonSecurity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFaction_BoltonSecurity_C*>(AFaction_BoltonSecurity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Faction_BoltonSecurity.Faction_BoltonSecurity_C.AlertOtherSuspectsInTeam_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASuspectCharacter*           Suspect                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_BoltonSecurity_C::AlertOtherSuspectsInTeam_Blueprint(class ASuspectCharacter* Suspect, class AReadyOrNotCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_BoltonSecurity_C", "AlertOtherSuspectsInTeam_Blueprint");

	Params::AFaction_BoltonSecurity_C_AlertOtherSuspectsInTeam_Blueprint_Params Parms{};

	Parms.Suspect = Suspect;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Faction_BoltonSecurity.Faction_BoltonSecurity_C.OnAIAdded_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticCharacter*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFaction_BoltonSecurity_C::OnAIAdded_Blueprint(class ACyberneticCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_BoltonSecurity_C", "OnAIAdded_Blueprint");

	Params::AFaction_BoltonSecurity_C_OnAIAdded_Blueprint_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Faction_BoltonSecurity.Faction_BoltonSecurity_C.ExecuteUbergraph_Faction_BoltonSecurity
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASuspectCharacter*           K2Node_Event_Suspect                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFaction_BoltonSecurity_C::ExecuteUbergraph_Faction_BoltonSecurity(int32 EntryPoint, class ASuspectCharacter* K2Node_Event_Suspect, class AReadyOrNotCharacter* K2Node_Event_Enemy, class ACyberneticCharacter* K2Node_Event_Character, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Faction_BoltonSecurity_C", "ExecuteUbergraph_Faction_BoltonSecurity");

	Params::AFaction_BoltonSecurity_C_ExecuteUbergraph_Faction_BoltonSecurity_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Suspect = K2Node_Event_Suspect;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


