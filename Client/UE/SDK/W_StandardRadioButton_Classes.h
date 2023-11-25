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
	 * WidgetBlueprintGeneratedClass W_StandardRadioButton.W_StandardRadioButton_C
	 * Size -> 0x0018 (FullSize[0x0584] - InheritedSize[0x056C])
	 */
	class UW_StandardRadioButton_C : public UW_StandardButton_C
	{
	public:
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_RadioContainer_C*                                   ParentContainer;                                         // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      TabControlIndex;                                         // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Equals(const TScriptInterface<class IIRadioWidget_C>& Other, bool* Result);
		int32_t GetTabControlIndex();
		void GetParentContainerSlow(class UW_RadioContainer_C** RadioContainer);
		void OnClicked_Derived();
		void Construct();
		void OnRadioSelected();
		void OnRadioDeselected();
		void EventReconstruct();
		void ExecuteUbergraph_W_StandardRadioButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
