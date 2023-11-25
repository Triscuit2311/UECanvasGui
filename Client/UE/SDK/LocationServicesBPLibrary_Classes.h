#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LocationServicesBPLibrary.LocationServices
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocationServices : public UBlueprintFunctionLibrary
	{
	public:
		bool StopLocationServices();
		bool StartLocationServices();
		bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
		bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
		class ULocationServicesImpl* GetLocationServicesImpl();
		struct FLocationServicesData GetLastKnownLocation();
		bool AreLocationServicesEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class LocationServicesBPLibrary.LocationServicesImpl
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULocationServicesImpl : public UObject
	{
	public:
		class UMulticastInlineDelegate                               OnLocationChanged;                                       // 0x0028(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0029(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
