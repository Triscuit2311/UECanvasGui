#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithObjectTemplate
class UDatasmithObjectTemplate : public UObject
{
public:
	uint8                                        Pad_A76[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithObjectTemplate* GetDefaultObj();

};

// 0xA0 (0xD0 - 0x30)
// Class DatasmithContent.DatasmithActorTemplate
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	TSet<class FName>                            Layers;                                            // 0x30(0x50)(NativeAccessSpecifierPublic)
	TSet<class FName>                            Tags;                                              // 0x80(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithActorTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithAdditionalData
class UDatasmithAdditionalData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDatasmithAdditionalData* GetDefaultObj();

};

// 0x58 (0x278 - 0x220)
// Class DatasmithContent.DatasmithAreaLightActor
class ADatasmithAreaLightActor : public AActor
{
public:
	enum class EComponentMobility                Mobility;                                          // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x221(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x222(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A86[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Dimensions;                                        // 0x224(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightUnits                       IntensityUnits;                                    // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A89[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x234(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature;                                       // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                  IESTexture;                                        // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseIESBrightness;                                 // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IESBrightnessScale;                                // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpotlightInnerAngle;                               // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpotlightOuterAngle;                               // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADatasmithAreaLightActor* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class DatasmithContent.DatasmithAreaLightActorTemplate
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A90[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Dimensions;                                        // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightUnits                       IntensityUnits;                                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A91[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temperature;                                       // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTextureLightProfile>   IESTexture;                                        // 0x58(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseIESBrightness;                                 // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A93[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IESBrightnessScale;                                // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x88(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithAreaLightActorTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithAssetImportData
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithAssetImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshImportData
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshCADImportData
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshCADImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithSceneImportData
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithTranslatedSceneImportData
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithTranslatedSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithCADImportSceneData
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithCADImportSceneData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithMDLSceneImportData
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithMDLSceneImportData* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class DatasmithContent.DatasmithGLTFSceneImportData
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	class FString                                Generator;                                         // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Version;                                           // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Author;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                License;                                           // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Source;                                            // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithGLTFSceneImportData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	class FString                                SourceMeshName;                                    // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshGLTFImportData* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class DatasmithContent.DatasmithFBXSceneImportData
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	bool                                         bGenerateLightmapUVs;                              // 0x28(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TexturesDir;                                       // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IntermediateSerialization;                         // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColorizeMaterials;                                // 0x41(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAF[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithFBXSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithDeltaGenAssetImportData
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithDeltaGenAssetImportData* GetDefaultObj();

};

// 0x48 (0x90 - 0x48)
// Class DatasmithContent.DatasmithDeltaGenSceneImportData
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                         bMergeNodes;                                       // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveInvisibleNodes;                             // 0x4A(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyNodeHierarchy;                            // 0x4B(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportVar;                                        // 0x4C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VarPath;                                           // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportPos;                                        // 0x60(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PosPath;                                           // 0x68(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportTml;                                        // 0x78(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TmlPath;                                           // 0x80(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithDeltaGenSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithVREDAssetImportData
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithVREDAssetImportData* GetDefaultObj();

};

// 0x60 (0xA8 - 0x48)
// Class DatasmithContent.DatasmithVREDSceneImportData
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                         bMergeNodes;                                       // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportMats;                                       // 0x4A(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC4[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MatsPath;                                          // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportVar;                                        // 0x60(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCleanVar;                                         // 0x61(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VarPath;                                           // 0x68(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportLightInfo;                                  // 0x78(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LightInfoPath;                                     // 0x80(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportClipInfo;                                   // 0x90(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ClipInfoPath;                                      // 0x98(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithVREDSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithIFCSceneImportData
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithIFCSceneImportData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshIFCImportData
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	class FString                                SourceGlobalId;                                    // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshIFCImportData* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class DatasmithContent.DatasmithAssetUserData
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<class FName, class FString>             MetaData;                                          // 0x28(0x50)(Edit, BlueprintVisible, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithAssetUserData* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class DatasmithContent.DatasmithCineCameraActorTemplate
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                            // 0x30(0x30)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithCineCameraActorTemplate* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class DatasmithContent.DatasmithCineCameraComponentTemplate
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;                                  // 0x30(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraLensSettingsTemplate  LensSettings;                                      // 0x38(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;                                     // 0x3C(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;                               // 0x50(0x40)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithCineCameraComponentTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithContentBlueprintLibrary
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDatasmithContentBlueprintLibrary* GetDefaultObj();

	class FString GetDatasmithUserDataValueForKey(class UObject* Object, class FName Key);
	void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues);
	class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);
};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithCustomActionBase
class UDatasmithCustomActionBase : public UObject
{
public:
	uint8                                        Pad_B11[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithCustomActionBase* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class DatasmithContent.DatasmithDecalComponentTemplate
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
public:
	int32                                        SortOrder;                                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DecalSize;                                         // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithDecalComponentTemplate* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class DatasmithContent.DatasmithImportedSequencesActor
class ADatasmithImportedSequencesActor : public AActor
{
public:
	TArray<class ULevelSequence*>                ImportedSequences;                                 // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADatasmithImportedSequencesActor* GetDefaultObj();

	void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithOptionsBase
class UDatasmithOptionsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDatasmithOptionsBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithCommonTessellationOptions
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
	struct FDatasmithTessellationOptions         Options;                                           // 0x28(0x10)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithCommonTessellationOptions* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class DatasmithContent.DatasmithImportOptions
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                               // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                            // 0x29(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                             // 0x2A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       StaticMeshActorImportPolicy;                       // 0x2B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       LightImportPolicy;                                 // 0x2C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       CameraImportPolicy;                                // 0x2D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       OtherActorImportPolicy;                            // 0x2E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportMaterialQuality   MaterialQuality;                                   // 0x2F(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDatasmithImportBaseOptions           BaseOptions;                                       // 0x30(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithReimportOptions             ReimportOptions;                                   // 0x44(0x2)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Filename;                                          // 0x48(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x58(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B30[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithImportOptions* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithLandscapeTemplate
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StaticLightingLOD;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B38[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithLandscapeTemplate* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class DatasmithContent.DatasmithLightComponentTemplate
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	uint8                                        bVisible : 1;                                      // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_63 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_B3B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CastShadows : 1;                                   // Mask: 0x1, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseTemperature : 1;                               // Mask: 0x2, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseIESBrightness : 1;                             // Mask: 0x4, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_64 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_B3F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Intensity;                                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature;                                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IESBrightnessScale;                                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LightColor;                                        // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B40[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LightFunctionMaterial;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                  IESTexture;                                        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithLightComponentTemplate* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class DatasmithContent.DatasmithMaterialInstanceTemplate
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	TSoftObjectPtr<class UMaterialInterface>     ParentMaterial;                                    // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     ScalarParameterValues;                             // 0x58(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>       VectorParameterValues;                             // 0xA8(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, TSoftObjectPtr<class UTexture>> TextureParameterValues;                            // 0xF8(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	struct FDatasmithStaticParameterSetTemplate  StaticParameters;                                  // 0x148(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithMaterialInstanceTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithPointLightComponentTemplate
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ELightUnits                       IntensityUnits;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SourceRadius;                                      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithPointLightComponentTemplate* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithPostProcessSettingsTemplate Settings;                                          // 0x30(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUnbound : 1;                                      // Mask: 0x2, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B51[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithPostProcessVolumeTemplate* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithScene
class UDatasmithScene : public UObject
{
public:
	uint8                                        Pad_B52[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithScene* GetDefaultObj();

};

// 0x58 (0x278 - 0x220)
// Class DatasmithContent.DatasmithSceneActor
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                       Scene;                                             // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, TSoftObjectPtr<class AActor>> RelatedActors;                                     // 0x228(0x50)(Edit, EditConst, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADatasmithSceneActor* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class DatasmithContent.DatasmithSceneComponentTemplate
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FTransform                            RelativeTransform;                                 // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EComponentMobility                Mobility;                                          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B59[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USceneComponent>        AttachParent;                                      // 0x68(0x28)(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            Tags;                                              // 0x98(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_B5C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDatasmithSceneComponentTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithSkyLightComponentTemplate
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ESkyLightSourceType               SourceType;                                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CubemapResolution;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                          Cubemap;                                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithSkyLightComponentTemplate* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class DatasmithContent.DatasmithSpotLightComponentTemplate
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                        InnerConeAngle;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithSpotLightComponentTemplate* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshComponentTemplate* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshTemplate
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate  SectionInfoMap;                                    // 0x30(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	int32                                        LightMapCoordinateIndex;                           // 0x80(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightMapResolution;                                // 0x84(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                     // 0x88(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;                                   // 0x98(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshTemplate* GetDefaultObj();

};

}


