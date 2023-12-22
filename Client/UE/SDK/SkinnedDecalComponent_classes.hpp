#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x210 - 0x1F8)
// Class SkinnedDecalComponent.SkinnedDecalInstance
class USkinnedDecalInstance : public USceneComponent
{
public:
	int32                                        Index;                                             // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubUV;                                             // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5A[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkinnedDecalInstance* GetDefaultObj();

	void UpdateDecal();
	class USkinnedDecalSampler* GetSampler();
};

// 0xC8 (0x178 - 0xB0)
// Class SkinnedDecalComponent.SkinnedDecalSampler
class USkinnedDecalSampler : public UActorComponent
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0xB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       DecalLocations;                                    // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                EmptyIndexes;                                      // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LayerIndex;                                        // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialParameterAssociation     Association;                                       // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkinnedDecalAdditionalData       AdditionalData;                                    // 0xDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastDecalIndex;                                    // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDecals;                                         // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDecalDistance;                                  // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TranslucentBlend;                                  // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    TranslucentBlendMaterial;                          // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class USkinnedDecalInstance*, int32>    InstanceMap;                                       // 0x108(0x50)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              TranslucentBlendMaterialDynamic;                   // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USkeletalMeshComponent*>        RenderMeshes;                                      // 0x160(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                DataTarget;                                        // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USkinnedDecalSampler* GetDefaultObj();

	void UpdateInstance(class USkinnedDecalInstance* Instance);
	void UpdateAllDecals();
	int32 SpawnDecal(const struct FVector& Location, const struct FQuat& Rotation, class FName BoneName, float Size, int32 SubUV, int32 Index);
	void SetupMaterials();
	void SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child);
	void RemoveDecal(int32 Index);
	class UTextureRenderTarget2D* GetDataTarget();
	void CloneDecals(class USkinnedDecalSampler* Source);
	void ClearAllDecals();
};

}


