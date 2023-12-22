#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NetCore.NetAnalyticsAggregatorConfig
// (None)

class UClass* UNetAnalyticsAggregatorConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetAnalyticsAggregatorConfig");

	return Clss;
}


// NetAnalyticsAggregatorConfig NetCore.Default__NetAnalyticsAggregatorConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetAnalyticsAggregatorConfig* UNetAnalyticsAggregatorConfig::GetDefaultObj()
{
	static class UNetAnalyticsAggregatorConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetAnalyticsAggregatorConfig*>(UNetAnalyticsAggregatorConfig::StaticClass()->DefaultObject);

	return Default;
}

}


