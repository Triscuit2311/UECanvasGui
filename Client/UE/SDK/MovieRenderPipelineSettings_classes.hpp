#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xA0 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
public:
	struct FSoftClassPath                        BurnInClass;                                       // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompositeOntoFinalImage;                          // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FA[0x2F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoviePipelineBurnInWidget*            BurnInWidgetInstance;                              // 0x98(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInSetting* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
class UMoviePipelineBurnInWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInWidget* GetDefaultObj();

	void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
};

// 0x80 (0xC8 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
public:
	TMap<class FString, float>                   ConsoleVariables;                                  // 0x48(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                        StartConsoleCommands;                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        EndConsoleCommands;                                // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_707[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineConsoleVariableSetting* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
public:
	bool                                         bCompositeOntoFinalImage;                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_709[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoviePipelineWidgetRenderer* GetDefaultObj();

};

}


