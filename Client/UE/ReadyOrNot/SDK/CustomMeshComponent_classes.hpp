#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x490 - 0x478)
// Class CustomMeshComponent.CustomMeshComponent
class UCustomMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1B19[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomMeshComponent* GetDefaultObj();

	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
};

}


