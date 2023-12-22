#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x32 - 0x0)
// UserDefinedStruct SGraphicPreset.SGraphicPreset
struct FSGraphicPreset
{
public:
	enum class EGraphicOption                    TextureQuality_21_DCFA25B247C5C97F16BB66B0C36D5767; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGraphicOption                    ShadowQuality_22_5CA061DF41F511084549A0910A581B92; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGraphicOption                    PostProcessQuality_23_B63D0DF640EC1D2DF86414A9C50238D7; // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGraphicOption                    AntiAliasQuality_24_B13F943748E782AF7AB213AB3A228191; // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGraphicOption                    EffectsQuality_25_EADA0B75461AFF664A68C78B72F4DF29; // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGraphicOption                    ViewDistance_26_4F2BF7104EA2E118AA66D894FBC45E5A;  // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FEE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OptiwandFPS_27_B83DB6E1464B5DC0E4250CAC2D7C8001;   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507;     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51;     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DepthofField_36_546F25334B7EC02E61E0A98BD4255CA9;  // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MeshPainting_37_F11DDA0743147B12822B0FB435294635;  // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         VSync_40_83B693B640BC886B8E8FA183455AE247;         // 0x1E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FrameLimitEnabled_54_E31EECB64CD9F972AA2F3AB8C28B3ECA; // 0x1F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        FrameLimit_43_F547893643D618728BD0E4861E24EC49;    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MotionBlurEnabled_61_1E9D07FC4C84A6EE0E14C6B1DF04BB10; // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RaytracingEnabled_46_61DC0015490B78AE835B26AD80C82327; // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RaytracingShadowsEnabled_48_38CA7DA24EB3101A363C1F8A26180503; // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RaytracingReflectionsEnabled_50_ED2EE1514CBBE256E84EC3B7EE028FDE; // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RaytracingAmbientOcclusionEnabled_52_D109A53B4F0CE9C2C3D871AFA30DD109; // 0x2F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RaytracingGlobalIlluminationEnabled_57_D5F60443451A613E5B65889E2BC960F4; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RaytracingTranslucencyEnabled_58_734380354681CA2266E0C98271986DB8; // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


