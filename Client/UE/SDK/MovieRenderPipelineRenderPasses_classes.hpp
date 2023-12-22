#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xC8 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
public:
	uint8                                        Pad_1520[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineImagePassBase* GetDefaultObj();

};

// 0xA8 (0x170 - 0xC8)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
public:
	bool                                         bAccumulatorIncludesAlpha;                         // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableMultisampleEffects;                        // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUse32BitPostProcessMaterials;                     // 0xCA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1523[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;                    // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAddDefaultLayer;                                  // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1524[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActorLayer>                   StencilLayers;                                     // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            ActivePostProcessMaterials;                        // 0xF8(0x10)(ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    StencilLayerMaterial;                              // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTextureRenderTarget2D*>        TileRenderTargets;                                 // 0x110(0x10)(ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1528[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPassBase* GetDefaultObj();

};

// 0x0 (0x170 - 0x170)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_Unlit* GetDefaultObj();

};

// 0x0 (0x170 - 0x170)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_DetailLighting* GetDefaultObj();

};

// 0x0 (0x170 - 0x170)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_LightingOnly* GetDefaultObj();

};

// 0x0 (0x170 - 0x170)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_ReflectionsOnly* GetDefaultObj();

};

// 0x0 (0x170 - 0x170)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_PathTracer* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_1533[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutputBase* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
public:
	enum class EEXRCompressionFormat             Compression;                                       // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMultilayer;                                       // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1535[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_EXR* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_BMP* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_PNG* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_JPG* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153A[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineWaveOutput* GetDefaultObj();

};

}


