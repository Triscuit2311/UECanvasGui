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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
	 * Size -> 0x0028 (FullSize[0x0F70] - InheritedSize[0x0F48])
	 */
	class UBP_GameInstance_C : public UReadyOrNotGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0F48(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FString>                                        StreamedLevels;                                          // 0x0F50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                                ModeURL;                                                 // 0x0F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ReceiveInit();
		void AdjustVolume();
		void AddPauseGameCondition(const class FString& PauseCondition);
		void RemovePauseGameCondition(const class FString& PauseCondition);
		void PauseGameWithConditon(const class FString& NewCondition);
		void OnSessionInviteAccepted(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
		void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
