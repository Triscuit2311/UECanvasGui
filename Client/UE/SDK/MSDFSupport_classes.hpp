#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class MSDFSupport.MSDFAssetData
class UMSDFAssetData : public UAssetUserData
{
public:
	struct FSVGConversionParams                  ImportParameters;                                  // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMSDFAssetData* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class MSDFSupport.RenderMSDF
class URenderMSDF : public UMaterialExpression
{
public:
	class UTexture*                              EffectiveTexture;                                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FExpressionInput                      MSDFTexture;                                       // 0x48(0x14)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EMaterialSamplerType              SamplerType;                                       // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8FF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpressionInput                      Coordinates;                                       // 0x60(0x14)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        ConstCoordinateIndex;                              // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_902[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                      FieldDistance;                                     // 0x80(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      OutputTextureSize;                                 // 0x94(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionOutput                     Output;                                            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URenderMSDF* GetDefaultObj();

};

}


