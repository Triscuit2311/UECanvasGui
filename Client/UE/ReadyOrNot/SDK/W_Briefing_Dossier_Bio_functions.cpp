#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Dossier_Bio.W_Briefing_Dossier_Bio_C
// (None)

class UClass* UW_Briefing_Dossier_Bio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Dossier_Bio_C");

	return Clss;
}


// W_Briefing_Dossier_Bio_C W_Briefing_Dossier_Bio.Default__W_Briefing_Dossier_Bio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Dossier_Bio_C* UW_Briefing_Dossier_Bio_C::GetDefaultObj()
{
	static class UW_Briefing_Dossier_Bio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Dossier_Bio_C*>(UW_Briefing_Dossier_Bio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Dossier_Bio.W_Briefing_Dossier_Bio_C.SetBioText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BioText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Dossier_Bio_C::SetBioText(class FText BioText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Bio_C", "SetBioText");

	Params::UW_Briefing_Dossier_Bio_C_SetBioText_Params Parms{};

	Parms.BioText = BioText;

	UObject::ProcessEvent(Func, &Parms);

}

}


