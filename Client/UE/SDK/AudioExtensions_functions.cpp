#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioExtensions.SoundfieldEncodingSettingsBase
// (None)

class UClass* USoundfieldEncodingSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEncodingSettingsBase");

	return Clss;
}


// SoundfieldEncodingSettingsBase AudioExtensions.Default__SoundfieldEncodingSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEncodingSettingsBase* USoundfieldEncodingSettingsBase::GetDefaultObj()
{
	static class USoundfieldEncodingSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEncodingSettingsBase*>(USoundfieldEncodingSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.AudioEndpointSettingsBase
// (None)

class UClass* UAudioEndpointSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioEndpointSettingsBase");

	return Clss;
}


// AudioEndpointSettingsBase AudioExtensions.Default__AudioEndpointSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioEndpointSettingsBase* UAudioEndpointSettingsBase::GetDefaultObj()
{
	static class UAudioEndpointSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioEndpointSettingsBase*>(UAudioEndpointSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.DummyEndpointSettings
// (None)

class UClass* UDummyEndpointSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DummyEndpointSettings");

	return Clss;
}


// DummyEndpointSettings AudioExtensions.Default__DummyEndpointSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDummyEndpointSettings* UDummyEndpointSettings::GetDefaultObj()
{
	static class UDummyEndpointSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDummyEndpointSettings*>(UDummyEndpointSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// (None)

class UClass* USpatializationPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatializationPluginSourceSettingsBase");

	return Clss;
}


// SpatializationPluginSourceSettingsBase AudioExtensions.Default__SpatializationPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USpatializationPluginSourceSettingsBase* USpatializationPluginSourceSettingsBase::GetDefaultObj()
{
	static class USpatializationPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatializationPluginSourceSettingsBase*>(USpatializationPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// (None)

class UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OcclusionPluginSourceSettingsBase");

	return Clss;
}


// OcclusionPluginSourceSettingsBase AudioExtensions.Default__OcclusionPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOcclusionPluginSourceSettingsBase* UOcclusionPluginSourceSettingsBase::GetDefaultObj()
{
	static class UOcclusionPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOcclusionPluginSourceSettingsBase*>(UOcclusionPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// (None)

class UClass* UReverbPluginSourceSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverbPluginSourceSettingsBase");

	return Clss;
}


// ReverbPluginSourceSettingsBase AudioExtensions.Default__ReverbPluginSourceSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UReverbPluginSourceSettingsBase* UReverbPluginSourceSettingsBase::GetDefaultObj()
{
	static class UReverbPluginSourceSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UReverbPluginSourceSettingsBase*>(UReverbPluginSourceSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundModulatorBase
// (None)

class UClass* USoundModulatorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulatorBase");

	return Clss;
}


// SoundModulatorBase AudioExtensions.Default__SoundModulatorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulatorBase* USoundModulatorBase::GetDefaultObj()
{
	static class USoundModulatorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulatorBase*>(USoundModulatorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// (None)

class UClass* USoundfieldEndpointSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEndpointSettingsBase");

	return Clss;
}


// SoundfieldEndpointSettingsBase AudioExtensions.Default__SoundfieldEndpointSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEndpointSettingsBase* USoundfieldEndpointSettingsBase::GetDefaultObj()
{
	static class USoundfieldEndpointSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEndpointSettingsBase*>(USoundfieldEndpointSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEffectSettingsBase
// (None)

class UClass* USoundfieldEffectSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEffectSettingsBase");

	return Clss;
}


// SoundfieldEffectSettingsBase AudioExtensions.Default__SoundfieldEffectSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEffectSettingsBase* USoundfieldEffectSettingsBase::GetDefaultObj()
{
	static class USoundfieldEffectSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEffectSettingsBase*>(USoundfieldEffectSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioExtensions.SoundfieldEffectBase
// (None)

class UClass* USoundfieldEffectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundfieldEffectBase");

	return Clss;
}


// SoundfieldEffectBase AudioExtensions.Default__SoundfieldEffectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundfieldEffectBase* USoundfieldEffectBase::GetDefaultObj()
{
	static class USoundfieldEffectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundfieldEffectBase*>(USoundfieldEffectBase::StaticClass()->DefaultObject);

	return Default;
}

}


