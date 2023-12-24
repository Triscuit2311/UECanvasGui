#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MSDFSupport.MSDFAssetData
// (None)

class UClass* UMSDFAssetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MSDFAssetData");

	return Clss;
}


// MSDFAssetData MSDFSupport.Default__MSDFAssetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMSDFAssetData* UMSDFAssetData::GetDefaultObj()
{
	static class UMSDFAssetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMSDFAssetData*>(UMSDFAssetData::StaticClass()->DefaultObject);

	return Default;
}


// Class MSDFSupport.RenderMSDF
// (None)

class UClass* URenderMSDF::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RenderMSDF");

	return Clss;
}


// RenderMSDF MSDFSupport.Default__RenderMSDF
// (Public, ClassDefaultObject, ArchetypeObject)

class URenderMSDF* URenderMSDF::GetDefaultObj()
{
	static class URenderMSDF* Default = nullptr;

	if (!Default)
		Default = static_cast<URenderMSDF*>(URenderMSDF::StaticClass()->DefaultObject);

	return Default;
}

}


