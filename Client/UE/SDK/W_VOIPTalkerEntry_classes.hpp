#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x2E1 - 0x2D0)
// WidgetBlueprintGeneratedClass W_VOIPTalkerEntry.W_VOIPTalkerEntry_C
class UW_VOIPTalkerEntry_C : public UVOIPTalkerEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             VoiceImg_Box;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVoiceType                        CurrentVoiceType;                                  // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_VOIPTalkerEntry_C* GetDefaultObj();

	void Construct();
	void VoiceChannelChanged();
	void ExecuteUbergraph_W_VOIPTalkerEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetVoiceTypeText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class EVoiceType CallFunc_GetVoiceType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


