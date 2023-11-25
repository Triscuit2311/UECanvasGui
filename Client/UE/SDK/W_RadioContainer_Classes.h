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
	 * BlueprintGeneratedClass W_RadioContainer.W_RadioContainer_C
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UW_RadioContainer_C : public UOverlay
	{
	public:
		TArray<TScriptInterface<class IIRadioWidget_C>>              RadioChildren;                                           // 0x0130(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TScriptInterface<class IIRadioWidget_C>                      SelectedChild;                                           // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNewChildSelected(const TScriptInterface<class IIRadioWidget_C>& NewSelectedChild);
		void RegisterRadioChild(const TScriptInterface<class IIRadioWidget_C>& NewChild);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
