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
	 * WidgetBlueprintGeneratedClass FriendsList.FriendsList_C
	 * Size -> 0x0014 (FullSize[0x02B4] - InheritedSize[0x02A0])
	 */
	class UFriendsList_C : public UFriendsList
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                            ScrollBox_1;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                        LastScrolloffset;                                        // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveNonExistentFriendWidgets();
		void DoesFriendExistAlready(const struct FFriend& TestFriend, bool* Exists, int32_t* Idx);
		ESlateVisibility GetNoFriendsPlayingText();
		void Construct();
		void OnSuccess_Event_1();
		void OnFailure_Event_1();
		void CustomEvent_1();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_FriendsList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
