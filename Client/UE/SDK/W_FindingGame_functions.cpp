#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_FindingGame.W_FindingGame_C
// (None)

class UClass* UW_FindingGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_FindingGame_C");

	return Clss;
}


// W_FindingGame_C W_FindingGame.Default__W_FindingGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_FindingGame_C* UW_FindingGame_C::GetDefaultObj()
{
	static class UW_FindingGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_FindingGame_C*>(UW_FindingGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_FindingGame.W_FindingGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_FindingGame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FindingGame_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FindingGame.W_FindingGame_C.ExecuteUbergraph_W_FindingGame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FindingGame_C::ExecuteUbergraph_W_FindingGame(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FindingGame_C", "ExecuteUbergraph_W_FindingGame");

	Params::UW_FindingGame_C_ExecuteUbergraph_W_FindingGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


