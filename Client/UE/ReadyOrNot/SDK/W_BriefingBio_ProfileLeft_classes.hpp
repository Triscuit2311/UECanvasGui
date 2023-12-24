#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass W_BriefingBio_ProfileLeft.W_BriefingBio_ProfileLeft_C
class UW_BriefingBio_ProfileLeft_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BioDescription;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BioText;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProfilePicture;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProfilePicture_1;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Bio;                                               // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            ProfileImage;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_BriefingBio_ProfileLeft_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_BriefingBio_ProfileLeft(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


