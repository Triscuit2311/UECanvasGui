#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEncodingSettingsBase
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEncodingSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioEndpointSettingsBase
class UAudioEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioEndpointSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.DummyEndpointSettings
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
public:

	static class UClass* StaticClass();
	static class UDummyEndpointSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SpatializationPluginSourceSettingsBase
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.OcclusionPluginSourceSettingsBase
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.ReverbPluginSourceSettingsBase
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UReverbPluginSourceSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundModulatorBase
class USoundModulatorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundModulatorBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEndpointSettingsBase
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEndpointSettingsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEffectSettingsBase
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundfieldEffectSettingsBase* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundfieldEffectBase
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*         Settings;                                          // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundfieldEffectBase* GetDefaultObj();

};

}


