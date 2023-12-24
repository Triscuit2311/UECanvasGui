#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SP_HQ_Weaponwall_Attachment_.SP_HQ_Weaponwall_Attachment__C
// (Actor)

class UClass* ASP_HQ_Weaponwall_Attachment__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SP_HQ_Weaponwall_Attachment__C");

	return Clss;
}


// SP_HQ_Weaponwall_Attachment__C SP_HQ_Weaponwall_Attachment_.Default__SP_HQ_Weaponwall_Attachment__C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASP_HQ_Weaponwall_Attachment__C* ASP_HQ_Weaponwall_Attachment__C::GetDefaultObj()
{
	static class ASP_HQ_Weaponwall_Attachment__C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASP_HQ_Weaponwall_Attachment__C*>(ASP_HQ_Weaponwall_Attachment__C::StaticClass()->DefaultObject);

	return Default;
}

}


