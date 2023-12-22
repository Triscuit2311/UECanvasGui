#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PropertyAccess.PropertyAccess
// (None)

class UClass* IPropertyAccess::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyAccess");

	return Clss;
}


// PropertyAccess PropertyAccess.Default__PropertyAccess
// (Public, ClassDefaultObject, ArchetypeObject)

class IPropertyAccess* IPropertyAccess::GetDefaultObj()
{
	static class IPropertyAccess* Default = nullptr;

	if (!Default)
		Default = static_cast<IPropertyAccess*>(IPropertyAccess::StaticClass()->DefaultObject);

	return Default;
}


// Class PropertyAccess.PropertyEventBroadcaster
// (None)

class UClass* IPropertyEventBroadcaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyEventBroadcaster");

	return Clss;
}


// PropertyEventBroadcaster PropertyAccess.Default__PropertyEventBroadcaster
// (Public, ClassDefaultObject, ArchetypeObject)

class IPropertyEventBroadcaster* IPropertyEventBroadcaster::GetDefaultObj()
{
	static class IPropertyEventBroadcaster* Default = nullptr;

	if (!Default)
		Default = static_cast<IPropertyEventBroadcaster*>(IPropertyEventBroadcaster::StaticClass()->DefaultObject);

	return Default;
}


// Class PropertyAccess.PropertyEventSubscriber
// (None)

class UClass* IPropertyEventSubscriber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyEventSubscriber");

	return Clss;
}


// PropertyEventSubscriber PropertyAccess.Default__PropertyEventSubscriber
// (Public, ClassDefaultObject, ArchetypeObject)

class IPropertyEventSubscriber* IPropertyEventSubscriber::GetDefaultObj()
{
	static class IPropertyEventSubscriber* Default = nullptr;

	if (!Default)
		Default = static_cast<IPropertyEventSubscriber*>(IPropertyEventSubscriber::StaticClass()->DefaultObject);

	return Default;
}

}


