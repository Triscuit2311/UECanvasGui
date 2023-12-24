#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BulletImpactDebugText.BulletImpactDebugText_C
// (None)

class UClass* UBulletImpactDebugText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletImpactDebugText_C");

	return Clss;
}


// BulletImpactDebugText_C BulletImpactDebugText.Default__BulletImpactDebugText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletImpactDebugText_C* UBulletImpactDebugText_C::GetDefaultObj()
{
	static class UBulletImpactDebugText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletImpactDebugText_C*>(UBulletImpactDebugText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BulletImpactDebugText.BulletImpactDebugText_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBulletImpactDebugText_C::SetData(int32 ID, class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BulletImpactDebugText_C", "SetData");

	Params::UBulletImpactDebugText_C_SetData_Params Parms{};

	Parms.ID = ID;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


