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
	 * WidgetBlueprintGeneratedClass W_TutorialMissionButton.W_TutorialMissionButton_C
	 * Size -> 0x019C (FullSize[0x0708] - InheritedSize[0x056C])
	 */
	class UW_TutorialMissionButton_C : public UW_StandardButton_C
	{
	public:
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTutorialMissionData                                  TutorialData;                                            // 0x0578(0x0190) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void Construct();
		void UpdateTutorialMissionData(class UW_StandardButton_C* CallingButton);
		void Destruct();
		void ExecuteUbergraph_W_TutorialMissionButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
