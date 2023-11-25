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
	 * WidgetBlueprintGeneratedClass FriendsList_Entry.FriendsList_Entry_C
	 * Size -> 0x01D4 (FullSize[0x0434] - InheritedSize[0x0260])
	 */
	class UFriendsList_Entry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                                Avatar;                                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Join;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            Status;                                                  // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            TextBlock_1;                                             // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VerticalBox_2;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFriend                                               Friend;                                                  // 0x0290(0x0060) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                         bFoundLobby;                                             // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlueprintSessionResult                               FriendSession;                                           // 0x02F8(0x0108) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                  StatusText;                                              // 0x0400(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class AReadyOrNotGameMode*>                           Modes;                                                   // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class AReadyOrNotGameMode*                                   PlayingMode;                                             // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        TimeUntilNextRefresh;                                    // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FSlateColor GetColorAndOpacity_1();
		void OnFailure_1CE6F80B4BD85FF7DCF8B89490FF4D7A(TArray<struct FBlueprintSessionResult> SessionInfo);
		void OnSuccess_1CE6F80B4BD85FF7DCF8B89490FF4D7A(TArray<struct FBlueprintSessionResult> SessionInfo);
		void OnFailure_FCAA6E28485271A328483F824CE7E440();
		void OnSuccess_FCAA6E28485271A328483F824CE7E440();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void RefreshFriend(const struct FFriend& Friend);
		void BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
		void ExecuteUbergraph_FriendsList_Entry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
