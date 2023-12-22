#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	uint8                                        Pad_C06[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterface* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class Niagara.NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	TSet<int32>                                  OutputShaderStages;                                // 0x38(0x50)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	TSet<int32>                                  IterationShaderStages;                             // 0x88(0x50)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRWBase* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x90(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraTrack* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0xA0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraParameterTrack* GetDefaultObj();

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraBoolParameterTrack
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_C22[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraBoolParameterTrack* GetDefaultObj();

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraColorParameterTrack
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_C29[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraColorParameterTrack* GetDefaultObj();

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraFloatParameterTrack
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_C2D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraFloatParameterTrack* GetDefaultObj();

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_C31[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraIntegerParameterTrack* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class Niagara.MovieSceneNiagaraSystemSpawnSection
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                              // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;                           // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;                                // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0xF4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C42[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemSpawnSection* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class Niagara.MovieSceneNiagaraSystemTrack
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
	uint8                                        Pad_C46[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemTrack* GetDefaultObj();

};

// 0x10 (0xD0 - 0xC0)
// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_C48[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChannelsUsed;                                      // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C49[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraVectorParameterTrack* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Niagara.NiagaraActor
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDestroyOnSystemFinish : 1;                        // Mask: 0x1, PropSize: 0x10x228(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C56[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANiagaraActor* GetDefaultObj();

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
};

// 0xF0 (0x118 - 0x28)
// Class Niagara.NiagaraBakerSettings
class UNiagaraBakerSettings : public UObject
{
public:
	float                                        StartSeconds;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationSeconds;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FramesPerSecond;                                   // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreviewLooping : 1;                               // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_76 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C58[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             FramesPerDimension;                                // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraBakerTextureSettings>  OutputTextures;                                    // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraBakerViewMode             CameraViewportMode;                                // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CameraViewportLocation[0x7];                       // 0x54(0x54)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraViewportRotation[0x7];                       // 0xA8(0x54)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CameraOrbitDistance;                               // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraFOV;                                         // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraOrthoWidth;                                  // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCameraAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_77 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C5C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraAspectRatio;                                 // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderComponentOnly : 1;                          // Mask: 0x1, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraBakerSettings* GetDefaultObj();

};

// 0x1B0 (0x600 - 0x450)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                        Asset;                                             // 0x450(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraTickBehavior              TickBehavior;                                      // 0x458(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D43[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomSeedOffset;                                  // 0x45C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;                                // 0x460(0xC8)(NativeAccessSpecifierPrivate)
	uint8                                        bForceSolo : 1;                                    // Mask: 0x1, PropSize: 0x10x528(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnableGpuComputeDebug : 1;                        // Mask: 0x2, PropSize: 0x10x528(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_7C : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D45[0x2F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x558(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderingEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x558(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAutoManageAttachment : 1;                         // Mask: 0x4, PropSize: 0x10x558(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoAttachWeldSimulatedBodies : 1;                // Mask: 0x8, PropSize: 0x10x558(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7D : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D48[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTimeBeforeForceUpdateTransform;                 // 0x55C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraMaterialOverride>      EmitterMaterials;                                  // 0x560(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSystemFinished;                                  // 0x578(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        AutoAttachParent;                                  // 0x588(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AutoAttachSocketName;                              // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachLocationRule;                            // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachRotationRule;                            // 0x599(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachScaleRule;                               // 0x59A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D50[0x65];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraComponent* GetDefaultObj();

	void SetVariableVec4(class FName InVariableName, struct FVector4& InValue);
	void SetVariableVec3(class FName InVariableName, const struct FVector& InValue);
	void SetVariableVec2(class FName InVariableName, const struct FVector2D& InValue);
	void SetVariableTextureRenderTarget(class FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
	void SetVariableQuat(class FName InVariableName, struct FQuat& InValue);
	void SetVariableObject(class FName InVariableName, class UObject* Object);
	void SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(class FName InVariableName, struct FLinearColor& InValue);
	void SetVariableInt(class FName InVariableName, int32 InValue);
	void SetVariableFloat(class FName InVariableName, float InValue);
	void SetVariableBool(class FName InVariableName, bool InValue);
	void SetVariableActor(class FName InVariableName, class AActor* Actor);
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetRandomSeedOffset(int32 NewRandomSeedOffset);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const class FString& InVariableName, struct FVector4& InValue);
	void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const class FString& InVariableName, struct FQuat& InValue);
	void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(const class FString& InVariableName, struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue);
	void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
	void SetGpuComputeDebug(bool bEnableDebug);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
	void SetAllowScalability(bool bAllow);
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	void InitForPerformanceBaseline();
	enum class ENiagaraTickBehavior GetTickBehavior();
	float GetSeekDelta();
	int32 GetRandomSeedOffset();
	bool GetPreviewLODDistanceEnabled();
	float GetPreviewLODDistance();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
	float GetMaxSimTime();
	bool GetLockDesiredAgeDeltaTimeToSeekDelta();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const class FString& Name);
	class UNiagaraSystem* GetAsset();
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
};

// 0x58 (0x80 - 0x28)
// Class Niagara.NiagaraComponentPool
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>  WorldParticleSystemPools;                          // 0x28(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D6A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraComponentPool* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x28(0x30)(Edit, NativeAccessSpecifierPublic)
	int32                                        SortOrderHint;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting;                               // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMotionBlurEnabled;                                // 0x61(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D77[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraRendererProperties* GetDefaultObj();

};

// 0x138 (0x1B0 - 0x78)
// Class Niagara.NiagaraComponentRendererProperties
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	TSubclassOf<class USceneComponent>           ComponentType;                                     // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ComponentCountLimit;                               // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x88(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0xE0(0x58)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAssignComponentsOnParticleID;                     // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyCreateComponentsOnParticleSpawn;              // 0x139(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RendererVisibility;                                // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TemplateComponent;                                 // 0x140(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;                                  // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7F[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraComponentRendererProperties* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class Niagara.NiagaraComponentSettings
class UNiagaraComponentSettings : public UObject
{
public:
	TSet<class FName>                            SuppressActivationList;                            // 0x28(0x50)(Config, NativeAccessSpecifierPublic)
	TSet<class FName>                            ForceAutoPooolingList;                             // 0x78(0x50)(Config, NativeAccessSpecifierPublic)
	TSet<struct FNiagaraEmitterNameSettingsRef>  SuppressEmitterList;                               // 0xC8(0x50)(Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraComponentSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraConvertInPlaceUtilityBase
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraConvertInPlaceUtilityBase* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterface2DArrayTexture
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture2DArray*                       Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8A[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterface2DArrayTexture* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_D8F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxElements;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D90[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArray* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayFloat
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                FloatData;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayFloat2
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2D>                     FloatData;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat2* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayFloat3
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector>                       FloatData;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat3* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayFloat4
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4>                      FloatData;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat4* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayColor
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                  ColorData;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayColor* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayQuat
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat>                         QuatData;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayQuat* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFunctionLibrary* GetDefaultObj();

	void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector& Value, bool bSizeToFit);
	void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector4& Value, bool bSizeToFit);
	void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector4>& ArrayData);
	void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector2D& Value, bool bSizeToFit);
	void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector2D>& ArrayData);
	void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector>& ArrayData);
	void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FQuat& Value, bool bSizeToFit);
	void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FQuat>& ArrayData);
	void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
	void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<int32>& ArrayData);
	void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, float Value, bool bSizeToFit);
	void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<float>& ArrayData);
	void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FLinearColor& Value, bool bSizeToFit);
	void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FLinearColor>& ArrayData);
	void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, bool& Value, bool bSizeToFit);
	void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<bool>& ArrayData);
	struct FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	struct FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	TArray<struct FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	int32 GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayInt32
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
	TArray<int32>                                IntData;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayInt32* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class Niagara.NiagaraDataInterfaceArrayBool
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                 BoolData;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayBool* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioSubmix
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSubmix* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScopeInMilliseconds;                               // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioOscilloscope* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioPlayer
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     Attenuation;                                       // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     Concurrency;                                       // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ParameterNames;                                    // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bLimitPlaysPerTick;                                // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPlaysPerTick;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenComponentIsDestroyed;                     // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioPlayer* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class Niagara.NiagaraDataInterfaceAudioSpectrum
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseFloorDb;                                      // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSpectrum* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCamera
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int32                                        PlayerControllerIndex;                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCamera* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCollisionQuery
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_FB8[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCollisionQuery* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                ShaderLUT;                                         // 0x38(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        LUTMinTime;                                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTMaxTime;                                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTInvTimeRange;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTNumSamplesMinusOne;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseLUT : 1;                                       // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExposeCurve : 1;                                  // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_99 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FC8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ExposedName;                                       // 0x5C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ExposedTexture;                                    // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurveBase* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            RedCurve;                                          // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            GreenCurve;                                        // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            BlueCurve;                                         // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            AlphaCurve;                                        // 0x1F0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceColorCurve* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCubeTexture
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
public:
	class UTextureCube*                          Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCubeTexture* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32                                       Seed;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDE[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurlNoise* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            Curve;                                             // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurve* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceDebugDraw
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDebugDraw* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParticleCallbackHandler
class INiagaraParticleCallbackHandler : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraParticleCallbackHandler* GetDefaultObj();

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceExport
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          CallbackHandlerParameter;                          // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENDIExport_GPUAllocationMode      GPUAllocationMode;                                 // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GPUAllocationFixedSize;                            // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GPUAllocationPerParticleSize;                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1000[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceExport* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceGBuffer
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGBuffer* GetDefaultObj();

};

// 0x20 (0xF8 - 0xD8)
// Class Niagara.NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                        NumCellsX;                                         // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsY;                                         // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAttributes;                                     // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetGridFromMaxAxis;                                // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             WorldBBoxSize;                                     // 0xEC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2D* GetDefaultObj();

};

// 0xC8 (0x1C0 - 0xF8)
// Class Niagara.NiagaraDataInterfaceGrid2DCollection
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0xF8(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x119(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9C : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_102C[0x56];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0x170(0x50)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollection* GetDefaultObj();

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY);
};

// 0x70 (0x168 - 0xF8)
// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{
public:
	class FString                                EmitterName;                                       // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIName;                                            // 0x108(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1032[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollectionReader* GetDefaultObj();

};

// 0x28 (0x100 - 0xD8)
// Class Niagara.NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            NumCells;                                          // 0xD8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetResolutionMethod              SetResolutionMethod;                               // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldBBoxSize;                                     // 0xF0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1039[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3D* GetDefaultObj();

};

// 0x80 (0x180 - 0x100)
// Class Niagara.NiagaraDataInterfaceGrid3DCollection
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x108(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x129(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106F[0x56];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3DCollection* GetDefaultObj();

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
	bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32* TilesX, int32* TilesY, int32* TileZ);
};

// 0x78 (0x150 - 0xD8)
// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                             Size;                                              // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0xE0(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0x100(0x50)(Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceIntRenderTarget2D* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceLandscape
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class AActor*                                SourceLandscape;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDILandscape_SourceMode          SourceMode;                                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPhysicalMaterial*>             PhysicalMaterials;                                 // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceLandscape* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraMeshRendererProperties*        MeshRenderer;                                      // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_107F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceMeshRendererInfo* GetDefaultObj();

};

// 0x8 (0x108 - 0x100)
// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32                                       MaxNeighborsPerCell;                               // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1082[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceNeighborGrid3D* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceOcclusion
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceOcclusion* GetDefaultObj();

};

// 0x10 (0xE8 - 0xD8)
// Class Niagara.NiagaraDataInterfaceParticleRead
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	class FString                                EmitterName;                                       // 0xD8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceParticleRead* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfacePlatformSet
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePlatformSet* GetDefaultObj();

};

// 0xD0 (0x1A8 - 0xD8)
// Class Niagara.NiagaraDataInterfaceRenderTarget2D
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                             Size;                                              // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMipMapGeneration          MipMapGeneration;                                  // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0xE1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10xE2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10xE2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A0 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1090[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0xE8(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1093[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0x158(0x50)(Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2D* GetDefaultObj();

};

// 0x80 (0x158 - 0xD8)
// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            Size;                                              // 0xD8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10xE5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10xE5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A1 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_109A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0xE8(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0x108(0x50)(Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2DArray* GetDefaultObj();

};

// 0x78 (0x150 - 0xD8)
// Class Niagara.NiagaraDataInterfaceRenderTargetCube
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                        Size;                                              // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0xDC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10xDD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10xDD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A2 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_10A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0xE0(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTargetCube*> ManagedRenderTargets;                              // 0x100(0x50)(Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetCube* GetDefaultObj();

};

// 0x80 (0x158 - 0xD8)
// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            Size;                                              // 0xD8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10xE5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10xE5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A3 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_10AA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0xE8(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTargetVolume*> ManagedRenderTargets;                              // 0x108(0x50)(Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetVolume* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimpleCounter
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimpleCounter* GetDefaultObj();

};

// 0x90 (0xC8 - 0x38)
// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	enum class ENDISkeletalMesh_SourceMode       SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Source;                                            // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SourceComponent;                                   // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkeletalMesh_SkinningMode     SkinningMode;                                      // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SamplingRegions;                                   // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        WholeMeshLOD;                                      // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FilteredBones;                                     // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          FilteredSockets;                                   // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ExcludeBoneName;                                   // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExcludeBone : 1;                                  // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A7 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_10CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UvSetIndex;                                        // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSkeletalMesh* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                Source;                                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          SplineUserParameter;                               // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpline* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	enum class ENDIStaticMesh_SourceMode         SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           DefaultMesh;                                       // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Source;                                            // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  SourceComponent;                                   // 0x50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIStaticMeshSectionFilter           SectionFilter;                                     // 0x58(0x10)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUsePhysicsBodyVelocity;                           // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FilteredSockets;                                   // 0x70(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceStaticMesh* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceTexture* GetDefaultObj();

};

// 0x100 (0x170 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector2DCurve* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector4Curve
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            WCurve;                                            // 0x1F0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector4Curve* GetDefaultObj();

};

// 0x180 (0x1F0 - 0x70)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorCurve* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceVectorField
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                          Field;                                             // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileX;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileY;                                            // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileZ;                                            // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F5[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorField* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeTexture
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UVolumeTexture*                        Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVolumeTexture* GetDefaultObj();

};

// 0x100 (0x128 - 0x28)
// Class Niagara.NiagaraDebugHUDSettings
class UNiagaraDebugHUDSettings : public UObject
{
public:
	uint8                                        Pad_10FB[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraDebugHUDSettingsData          Data;                                              // 0x48(0xE0)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDebugHUDSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorDataBase
class UNiagaraEditorDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorDataBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorParametersAdapterBase
class UNiagaraEditorParametersAdapterBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorParametersAdapterBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandler
class UNiagaraSignificanceHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerDistance
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerDistance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerAge
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerAge* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class Niagara.NiagaraEffectType
class UNiagaraEffectType : public UObject
{
public:
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCullReaction              CullReaction;                                      // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSignificanceHandler*           SignificanceHandler;                               // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;                    // 0x38(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                         // 0x48(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;                        // 0x58(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1109[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraBaselineController*            PerformanceBaselineController;                     // 0x70(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraPerfBaselineStats             PerfBaselineStats;                                 // 0x78(0x10)(Config, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGuid                                 PerfBaselineVersion;                               // 0x88(0x10)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraEffectType* GetDefaultObj();

};

// 0x278 (0x2A0 - 0x28)
// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public UObject
{
public:
	bool                                         bLocalSpace;                                       // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterminism;                                      // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomSeed;                                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleAllocationMode           AllocationMode;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreAllocationCount;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       UpdateScriptProps;                                 // 0x38(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       SpawnScriptProps;                                  // 0x60(0x28)(NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1111[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  FixedBounds;                                       // 0x8C(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinDetailLevel;                                    // 0xA8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDetailLevel;                                    // 0xAC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDetailsLevelScaleOverrides    GlobalSpawnCountScaleOverrides;                    // 0xB0(0x14)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1114[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraPlatformSet                   Platforms;                                         // 0xC8(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilityOverrides   ScalabilityOverrides;                              // 0xF8(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawning : 1;                         // Mask: 0x1, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x2, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinDetailLevel : 1;                            // Mask: 0x4, PropSize: 0x10x108(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxDetailLevel : 1;                            // Mask: 0x8, PropSize: 0x10x108(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGlobalSpawnCountScale : 1;                // Mask: 0x10, PropSize: 0x10x108(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x20, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCombineEventSpawn : 1;                            // Mask: 0x40, PropSize: 0x10x108(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AB : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_111A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDeltaTimePerTick;                               // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DefaultShaderStageIndex;                           // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxUpdateIterations;                               // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<uint32>                                 SpawnStages;                                       // 0x118(0x50)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        bSimulationStagesEnabled : 1;                      // Mask: 0x1, PropSize: 0x10x168(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDeprecatedShaderStagesEnabled : 1;                // Mask: 0x2, PropSize: 0x10x168(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitDeltaTime : 1;                               // Mask: 0x4, PropSize: 0x10x168(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AC : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1120[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UniqueEmitterName;                                 // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x190(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSimulationStageBase*>   SimulationStages;                                  // 0x1A0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1121[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraEmitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1124[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraFunctionLibrary* GetDefaultObj();

	class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture);
	void SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture);
	void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture);
	void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& SamplingRegions);
	void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
	void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};

// 0x2B8 (0x330 - 0x78)
// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	uint8                                        bUseInverseSquaredFalloff : 1;                     // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsTranslucency : 1;                          // Mask: 0x2, PropSize: 0x10x78(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaScalesBrightness : 1;                        // Mask: 0x4, PropSize: 0x10x78(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AF : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_11A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RadiusScale;                                       // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultExponent;                                   // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ColorAdd;                                          // 0x84(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RendererVisibility;                                // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableAttributeBinding      LightRenderingEnabledBinding;                      // 0x98(0x58)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      LightExponentBinding;                              // 0xF0(0x58)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x148(0x58)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x1A0(0x58)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RadiusBinding;                                     // 0x1F8(0x58)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VolumetricScatteringBinding;                       // 0x250(0x58)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x2A8(0x58)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B0[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraLightRendererProperties* GetDefaultObj();

};

// 0x820 (0x898 - 0x78)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;                                            // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverrideMaterials : 1;                            // Mask: 0x1, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x2, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGpuLowLatencyTranslucency : 1;                    // Mask: 0x4, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x8, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableFrustumCulling : 1;                         // Mask: 0x10, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x20, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableMeshFlipbook : 1;                           // Mask: 0x40, PropSize: 0x10x8C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B2 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_11C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraMeshMaterialOverride>  OverrideMaterials;                                 // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             SubImageSize;                                      // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshFacingMode            FacingMode;                                        // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bLockedAxisEnable : 1;                             // Mask: 0x1, PropSize: 0x10xAC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B3 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_11C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LockedAxis;                                        // 0xB0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshLockedAxisSpace       LockedAxisSpace;                                   // 0xBC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinCameraDistance;                                 // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xD0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x128(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x180(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshOrientationBinding;                            // 0x1D8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x230(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x288(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x2E0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x338(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x390(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x3E8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x440(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x498(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x4F0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x548(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x5A0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshIndexBinding;                                  // 0x5F8(0x58)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;                         // 0x650(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x660(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevScaleBinding;                                  // 0x6B8(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevMeshOrientationBinding;                        // 0x710(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0x768(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x7C0(0x58)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D3[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           ParticleMesh;                                      // 0x880(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               PivotOffset;                                       // 0x888(0xC)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraMeshPivotOffsetSpace      PivotOffsetSpace;                                  // 0x894(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraMeshRendererProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraMessageDataBase
class UNiagaraMessageDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraMessageDataBase* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*           Collection;                                        // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              OverridenParameters;                               // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                ParameterStorage;                                  // 0x40(0x78)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_123D[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraParameterCollectionInstance* GetDefaultObj();

	void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const class FString& InVariableName, struct FVector4& InValue);
	void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const class FString& InVariableName, struct FQuat& InValue);
	void SetIntParameter(const class FString& InVariableName, int32 InValue);
	void SetFloatParameter(const class FString& InVariableName, float InValue);
	void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const class FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const class FString& InVariableName);
	struct FVector4 GetVector4Parameter(const class FString& InVariableName);
	struct FVector2D GetVector2DParameter(const class FString& InVariableName);
	struct FQuat GetQuatParameter(const class FString& InVariableName);
	int32 GetIntParameter(const class FString& InVariableName);
	float GetFloatParameter(const class FString& InVariableName);
	struct FLinearColor GetColorParameter(const class FString& InVariableName);
	bool GetBoolParameter(const class FString& InVariableName);
};

// 0x38 (0x60 - 0x28)
// Class Niagara.NiagaraParameterCollection
class UNiagaraParameterCollection : public UObject
{
public:
	class FName                                  Namespace;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*          SourceMaterialCollection;                          // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*   DefaultInstance;                                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 CompileId;                                         // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraParameterCollection* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParameterDefinitionsBase
class UNiagaraParameterDefinitionsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraParameterDefinitionsBase* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Niagara.NiagaraBaselineController
class UNiagaraBaselineController : public UObject
{
public:
	float                                        TestDuration;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1256[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraEffectType*                    EffectType;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANiagaraPerfBaselineActor*             Owner;                                             // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UNiagaraSystem>         System;                                            // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController* GetDefaultObj();

	bool OnTickTest();
	void OnOwnerTick(float DeltaTime);
	void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);
	void OnBeginTest();
	class UNiagaraSystem* GetSystem();
};

// 0x18 (0x80 - 0x68)
// Class Niagara.NiagaraBaselineController_Basic
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
public:
	int32                                        NumInstances;                                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_125B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNiagaraComponent*>             SpawnedComponents;                                 // 0x70(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController_Basic* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Niagara.NiagaraPerfBaselineActor
class ANiagaraPerfBaselineActor : public AActor
{
public:
	class UNiagaraBaselineController*            Controller;                                        // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextRenderComponent*                  Label;                                             // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ANiagaraPerfBaselineActor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraPrecompileContainer
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                Scripts;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        System;                                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraPrecompileContainer* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class Niagara.NiagaraPreviewBase
class ANiagaraPreviewBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ANiagaraPreviewBase* GetDefaultObj();

	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(class FText& InXAxisText, class FText& InYAxisText);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPreviewAxis
class UNiagaraPreviewAxis : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis* GetDefaultObj();

	int32 Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	class FName                                  Param;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Count;                                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_128E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int32                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamInt32* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamFloat* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                             Min;                                               // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             Max;                                               // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector2D* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                               Min;                                               // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               Max;                                               // 0x44(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	uint8                                        Pad_129F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Min;                                               // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                              Max;                                               // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector4* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                          Min;                                               // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          Max;                                               // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamLinearColor* GetDefaultObj();

};

// 0x50 (0x270 - 0x220)
// Class Niagara.NiagaraPreviewGrid
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                        System;                                            // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraPreviewGridResetMode      ResetMode;                                         // 0x228(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraPreviewAxis*                   PreviewAxisX;                                      // 0x230(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                   PreviewAxisY;                                      // 0x238(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ANiagaraPreviewBase>       PreviewClass;                                      // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingX;                                          // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingY;                                          // 0x24C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumX;                                              // 0x250(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumY;                                              // 0x254(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>          PreviewComponents;                                 // 0x258(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12B8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANiagaraPreviewGrid* GetDefaultObj();

	void SetPaused(bool bPaused);
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// 0x7E8 (0x860 - 0x78)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0x80(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonFacingMode          FacingMode;                                        // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraRibbonUVSettings              UV0Settings;                                       // 0xA4(0x24)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraRibbonUVSettings              UV1Settings;                                       // 0xC8(0x24)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonDrawDirection       DrawDirection;                                     // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonShapeMode           Shape;                                             // 0xED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAccurateGeometry;                           // 0xEE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WidthSegmentationCount;                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiPlaneCount;                                   // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TubeSubdivisions;                                  // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;                                    // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        CurveTension;                                      // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonTessellationMode    TessellationMode;                                  // 0x114(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TessellationFactor;                                // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseConstantFactor;                                // 0x11C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TessellationAngle;                                 // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScreenSpaceTessellation;                          // 0x124(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x128(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x180(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x1D8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x230(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonTwistBinding;                                // 0x288(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonWidthBinding;                                // 0x2E0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonFacingBinding;                               // 0x338(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonIdBinding;                                   // 0x390(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonLinkOrderBinding;                            // 0x3E8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x440(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x498(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x4F0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x548(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x5A0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonUVDistance;                                  // 0x5F8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      U0OverrideBinding;                                 // 0x650(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      V0RangeOverrideBinding;                            // 0x6A8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      U1OverrideBinding;                                 // 0x700(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      V1RangeOverrideBinding;                            // 0x758(0x58)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;                         // 0x7B0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D5[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraRibbonRendererProperties* GetDefaultObj();

};

// 0x2B8 (0x2E0 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	enum class ENiagaraScriptUsage               Usage;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 UsageId;                                           // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraParameterStore                RapidIterationParameters;                          // 0x40(0x78)(NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                         // 0xB8(0x98)(NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraBoundParameter>        ScriptExecutionBoundParameters;                    // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId            CachedScriptVMId;                                  // 0x160(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12DF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVMExecutableData              CachedScriptVM;                                    // 0x1C8(0xF0)(NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>   CachedParameterCollectionReferences;               // 0x2B8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;                       // 0x2C8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12E2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraScript* GetDefaultObj();

	void RaiseOnGPUCompilationComplete();
};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_12E6[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraScriptSourceBase* GetDefaultObj();

};

// 0x90 (0xC8 - 0x38)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                       DefaultEffectType;                                 // 0x38(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          QualityLevels;                                     // 0x50(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             ComponentRendererWarningsPerClass;                 // 0x60(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        DefaultRenderTargetFormat;                         // 0xB0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           DefaultGridFormat;                                 // 0xB1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;                // 0xB4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuMaxInfluences     NDISkelMesh_GpuMaxInfluences;                      // 0xB8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;              // 0xB9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;          // 0xBA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraEffectType*                    DefaultEffectTypePtr;                              // 0xC0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraSettings* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraSimulationStageBase
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                        Script;                                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SimulationStageName;                               // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageBase* GetDefaultObj();

};

// 0x30 (0x70 - 0x40)
// Class Niagara.NiagaraSimulationStageGeneric
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	enum class ENiagaraIterationSource           IterationSource;                                   // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Iterations;                                        // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSpawnOnly : 1;                                    // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisablePartialParticleUpdate : 1;                 // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BC : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_12F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableDataInterfaceBinding  DataInterface;                                     // 0x50(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageGeneric* GetDefaultObj();

};

// 0xA38 (0xAB0 - 0x78)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0x88(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteAlignment           Alignment;                                         // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteFacingMode          FacingMode;                                        // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PivotInUVSpace;                                    // 0xAC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1301[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SubImageSize;                                      // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRemoveHMDRollInVR : 1;                            // Mask: 0x2, PropSize: 0x10xC0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10xC0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGpuLowLatencyTranslucency : 1;                    // Mask: 0x8, PropSize: 0x10xC0(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BD : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1304[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFacingCameraBlendDistance;                      // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x1, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BE : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1306[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinCameraDistance;                                 // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1308[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xE0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x138(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x190(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteRotationBinding;                             // 0x1E8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteSizeBinding;                                 // 0x240(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteFacingBinding;                               // 0x298(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteAlignmentBinding;                            // 0x2F0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x348(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x3A0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x3F8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x450(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x4A8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x500(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      UVScaleBinding;                                    // 0x558(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PivotOffsetBinding;                                // 0x5B0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x608(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x660(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x6B8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x710(0x58)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings;                         // 0x768(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x778(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x7D0(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteRotationBinding;                         // 0x828(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteSizeBinding;                             // 0x880(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteFacingBinding;                           // 0x8D8(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteAlignmentBinding;                        // 0x930(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0x988(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPivotOffsetBinding;                            // 0x9E0(0x58)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1318[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraSpriteRendererProperties* GetDefaultObj();

};

// 0x468 (0x498 - 0x30)
// Class Niagara.NiagaraSystem
class UNiagaraSystem : public UFXSystemAsset
{
public:
	bool                                         bDumpDebugSystemInfo;                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugEmitterInfo;                             // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRequireCurrentFrameData;                          // 0x33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BF : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_131C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraEffectType*                    EffectType;                                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideScalabilitySettings;                      // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_131D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides;                              // 0x48(0x10)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	struct FNiagaraSystemScalabilityOverrides    SystemScalabilityOverrides;                        // 0x58(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraEmitterHandle>         EmitterHandles;                                    // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                      // 0x78(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemSpawnScript;                                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemUpdateScript;                                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1321[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraSystemCompiledData            SystemCompiledData;                                // 0xA8(0x218)(Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;                                 // 0x2C0(0xC8)(Protected, NativeAccessSpecifierProtected)
	struct FBox                                  FixedBounds;                                       // 0x388(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoDeactivate;                                   // 0x3A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1323[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WarmupTime;                                        // 0x3A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WarmupTickCount;                                   // 0x3AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTickDelta;                                   // 0x3B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSystemScriptDIsWithPerInstanceData;            // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNeedsGPUContextInitForDataInterfaces;             // 0x3B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1326[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          UserDINamesReadInSystemScripts;                    // 0x3B8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1327[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraSystem* GetDefaultObj();

};

}


