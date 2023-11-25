#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * BlueprintGeneratedClass IRadioWidget.IRadioWidget_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class IIRadioWidget_C : public IInterface
	{
	public:
		void Equals(const TScriptInterface<class IIRadioWidget_C>& Other, bool* Result);
		void OnRadioDeselected();
		void OnRadioSelected();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
