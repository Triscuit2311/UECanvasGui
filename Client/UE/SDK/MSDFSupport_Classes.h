#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MSDFSupport.RenderMSDF
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class URenderMSDF : public UMaterialExpression
	{
	public:
		class UTexture*                                              EffectiveTexture;                                        // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FExpressionInput                                      MSDFTexture;                                             // 0x0048(0x0014) NoDestructor, Protected, NativeAccessSpecifierProtected
		EMaterialSamplerType                                         SamplerType;                                             // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                      Coordinates;                                             // 0x0060(0x0014) NoDestructor, Protected, NativeAccessSpecifierProtected
		uint8_t                                                      ConstCoordinateIndex;                                    // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                              Texture;                                                 // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput                                      FieldDistance;                                           // 0x0080(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FExpressionInput                                      OutputTextureSize;                                       // 0x0094(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FExpressionOutput                                     Output;                                                  // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MSDFSupport.SVGToSDFFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USVGToSDFFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool ConvertSVGToMSDFData(const class FString& FilePath, const struct FSVGConversionParams& Params, TArray<uint8_t>* Output);
		static UClass* StaticClass();
	};

	/**
	 * Class MSDFSupport.MSDFAssetData
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMSDFAssetData : public UAssetUserData
	{
	public:
		struct FSVGConversionParams                                  ImportParameters;                                        // 0x0028(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
