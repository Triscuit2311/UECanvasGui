#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SGraphicPreset.SGraphicPreset
	 * Size -> 0x0032
	 */
	struct FSGraphicPreset
	{
	public:
		EGraphicOption                                               TextureQuality_21_DCFA25B247C5C97F16BB66B0C36D5767;      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGraphicOption                                               ShadowQuality_22_5CA061DF41F511084549A0910A581B92;       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGraphicOption                                               PostProcessQuality_23_B63D0DF640EC1D2DF86414A9C50238D7;  // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGraphicOption                                               AntiAliasQuality_24_B13F943748E782AF7AB213AB3A228191;    // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGraphicOption                                               EffectsQuality_25_EADA0B75461AFF664A68C78B72F4DF29;      // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGraphicOption                                               ViewDistance_26_4F2BF7104EA2E118AA66D894FBC45E5A;        // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      OptiwandFPS_27_B83DB6E1464B5DC0E4250CAC2D7C8001;         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716;       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC;     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507;           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51;           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         DepthofField_36_546F25334B7EC02E61E0A98BD4255CA9;        // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         MeshPainting_37_F11DDA0743147B12822B0FB435294635;        // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         VSync_40_83B693B640BC886B8E8FA183455AE247;               // 0x001E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         FrameLimitEnabled_54_E31EECB64CD9F972AA2F3AB8C28B3ECA;   // 0x001F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                      FrameLimit_43_F547893643D618728BD0E4861E24EC49;          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         MotionBlurEnabled_61_1E9D07FC4C84A6EE0E14C6B1DF04BB10;   // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2;  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         RaytracingEnabled_46_61DC0015490B78AE835B26AD80C82327;   // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         RaytracingShadowsEnabled_48_38CA7DA24EB3101A363C1F8A26180503; // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         RaytracingReflectionsEnabled_50_ED2EE1514CBBE256E84EC3B7EE028FDE; // 0x002E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         RaytracingAmbientOcclusionEnabled_52_D109A53B4F0CE9C2C3D871AFA30DD109; // 0x002F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         RaytracingGlobalIlluminationEnabled_57_D5F60443451A613E5B65889E2BC960F4; // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         RaytracingTranslucencyEnabled_58_734380354681CA2266E0C98271986DB8; // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
