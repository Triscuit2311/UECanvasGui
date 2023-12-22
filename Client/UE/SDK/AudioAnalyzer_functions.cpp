#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioAnalyzer.AudioAnalyzerAsset
// (None)

class UClass* UAudioAnalyzerAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerAsset");

	return Clss;
}


// AudioAnalyzerAsset AudioAnalyzer.Default__AudioAnalyzerAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerAsset* UAudioAnalyzerAsset::GetDefaultObj()
{
	static class UAudioAnalyzerAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerAsset*>(UAudioAnalyzerAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// (None)

class UClass* UAudioAnalyzerNRTSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerNRTSettings");

	return Clss;
}


// AudioAnalyzerNRTSettings AudioAnalyzer.Default__AudioAnalyzerNRTSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerNRTSettings* UAudioAnalyzerNRTSettings::GetDefaultObj()
{
	static class UAudioAnalyzerNRTSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerNRTSettings*>(UAudioAnalyzerNRTSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioAnalyzer.AudioAnalyzerNRT
// (None)

class UClass* UAudioAnalyzerNRT::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioAnalyzerNRT");

	return Clss;
}


// AudioAnalyzerNRT AudioAnalyzer.Default__AudioAnalyzerNRT
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioAnalyzerNRT* UAudioAnalyzerNRT::GetDefaultObj()
{
	static class UAudioAnalyzerNRT* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioAnalyzerNRT*>(UAudioAnalyzerNRT::StaticClass()->DefaultObject);

	return Default;
}

}


