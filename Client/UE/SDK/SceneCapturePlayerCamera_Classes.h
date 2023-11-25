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
	 * BlueprintGeneratedClass SceneCapturePlayerCamera.SceneCapturePlayerCamera_C
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class ASceneCapturePlayerCamera_C : public ASceneCapture2D
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Stop();
		void Start();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_SceneCapturePlayerCamera(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
