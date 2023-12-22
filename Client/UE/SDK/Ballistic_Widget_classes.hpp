#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x269 - 0x260)
// WidgetBlueprintGeneratedClass Ballistic_Widget.Ballistic_Widget_C
class UBallistic_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bBreathIn;                                         // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBallistic_Widget_C* GetDefaultObj();

	void CustomEvent_1();
	void ExecuteUbergraph_Ballistic_Widget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue);
};

}


