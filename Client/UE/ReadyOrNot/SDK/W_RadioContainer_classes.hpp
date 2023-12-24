#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x150 - 0x130)
// BlueprintGeneratedClass W_RadioContainer.W_RadioContainer_C
class UW_RadioContainer_C : public UOverlay
{
public:
	TArray<TScriptInterface<class IIRadioWidget_C>> RadioChildren;                                     // 0x130(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class IIRadioWidget_C>      SelectedChild;                                     // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_RadioContainer_C* GetDefaultObj();

	void OnNewChildSelected(TScriptInterface<class IIRadioWidget_C> NewSelectedChild, bool CallFunc_Equals_Result, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RegisterRadioChild(TScriptInterface<class IIRadioWidget_C> NewChild, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


