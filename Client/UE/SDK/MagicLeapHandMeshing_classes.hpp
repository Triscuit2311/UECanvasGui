#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
class UMagicLeapHandMeshingComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapHandMeshingComponent* GetDefaultObj();

	void SetUseWeightedNormals(bool bInUseWeightedNormals);
	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapHandMeshingFunctionLibrary* GetDefaultObj();

	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool DestroyClient();
	bool CreateClient();
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

}


