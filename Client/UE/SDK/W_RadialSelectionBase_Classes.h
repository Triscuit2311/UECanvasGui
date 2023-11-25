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
	 * WidgetBlueprintGeneratedClass W_RadialSelectionBase.W_RadialSelectionBase_C
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UW_RadialSelectionBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABasePlayer_C*                                         PlayerCharacter;                                         // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      CurrentSelectionIndex;                                   // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      PreviousSelectionIndex;                                  // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateIcon(int32_t SelectionIndex, const struct FSlateBrush& InBrush);
		void Select(int32_t Index);
		void Previous(bool* bSuccess);
		void Next(bool* bSuccess);
		void ExecuteRadial();
		void OnDeselected(bool PlayAnimation);
		void OnSelected(bool PlayAnimation);
		void PreConstruct(bool IsDesignTime);
		void OnWheelCreated();
		void ExecuteUbergraph_W_RadialSelectionBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
