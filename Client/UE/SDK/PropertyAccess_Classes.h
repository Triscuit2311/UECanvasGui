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
	 * Class PropertyAccess.PropertyAccess
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class IPropertyAccess : public IInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PropertyAccess.PropertyEventBroadcaster
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class IPropertyEventBroadcaster : public IInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PropertyAccess.PropertyEventSubscriber
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class IPropertyEventSubscriber : public IInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
