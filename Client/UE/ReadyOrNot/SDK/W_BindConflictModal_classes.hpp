#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x448 - 0x43C)
// WidgetBlueprintGeneratedClass W_BindConflictModal.W_BindConflictModal_C
class UW_BindConflictModal_C : public UW_StandardModal_C
{
public:
	uint8                                        Pad_414E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_BindConflictModal_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_W_BindConflictModal(int32 EntryPoint);
};

}


