#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ModioEx.ModioSubmissionExtensionLibrary
class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioSubmissionExtensionLibrary* GetDefaultObj();

	void K2_SubmitNewModFromMemoryAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params, const TArray<uint8>& PngData, FDelegateProperty_ Callback);
	void K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, const struct FModioModID& Mod, const struct FModioCreateModFileMemoryParams& Params);
	void K2_SubmitModChangesFromMemoryAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params, const TArray<uint8>& PngData, FDelegateProperty_ Callback);
	bool K2_LoadModFileToMemory(class UModioSubsystem* Target, const struct FModioModID& ModId, TArray<uint8>* ModData);
};

}


