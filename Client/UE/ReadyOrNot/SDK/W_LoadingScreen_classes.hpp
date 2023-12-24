#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x328 - 0x2D8)
// WidgetBlueprintGeneratedClass W_LoadingScreen.W_LoadingScreen_C
class UW_LoadingScreen_C : public ULoadingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BlinkSpaceToContinue;                              // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Loading;                                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Tips;                                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Out_Map;                                           // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Out_Mode;                                          // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadingScreen_C* GetDefaultObj();

	class FText GetLoadingProgressText(float CallFunc_GetLoadingPercentage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateHeaderText(class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	enum class ESlateVisibility Get_Loading_Visibility_0(bool CallFunc_EqualEqual_StrStr_ReturnValue);
	class FText GetText_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_TextLoading_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_ServerName_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateLoadingScreenPercentage(float NewPercentage, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateTips();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_LoadingScreen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetLoadingProgressText_ReturnValue);
};

}


