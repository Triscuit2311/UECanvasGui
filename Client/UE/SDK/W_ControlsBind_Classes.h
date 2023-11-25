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
	 * WidgetBlueprintGeneratedClass W_ControlsBind.W_ControlsBind_C
	 * Size -> 0x02A9 (FullSize[0x0509] - InheritedSize[0x0260])
	 */
	class UW_ControlsBind_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                            BindingText;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Button_Disabled;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Button_Dn;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Button_Hi;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Button_Selected;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Button_Up;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                               KeybindButton;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            DescriptionWidget;                                       // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                  DescriptionText;                                         // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                  ChangeBindFormat;                                        // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FActionMappingStruct                                  ActionMappingData;                                       // 0x02D8(0x0028) Edit, BlueprintVisible
		struct FAxisMappingStruct                                    AxisMappingData;                                         // 0x0300(0x0028) Edit, BlueprintVisible
		bool                                                         bIsAxis;                                                 // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      BindIndex;                                               // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                  UnboundText;                                             // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKey                                                  Key;                                                     // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<EKeyModifiers>                                        KeyModifiers;                                            // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               OnHovered;                                               // 0x0370(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0371(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnUnhovered;                                             // 0x0380(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0381(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnPressed;                                               // 0x0390(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0391(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnReleased;                                              // 0x03A0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x03A1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnBindingStarted;                                        // 0x03B0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x03B1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnBindingCanceled;                                       // 0x03C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x03C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnBindingCommitted;                                      // 0x03D0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0007[0xF];                                   // 0x03D1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FName                                                  BindName;                                                // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                  Mod_Shift;                                               // 0x03E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                  Mod_Ctrl;                                                // 0x0400(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                  Mod_Alt;                                                 // 0x0418(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                  Mod_Cmd;                                                 // 0x0430(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         bListeningForKeystrokes;                                 // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0008[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  BindFriendlyName;                                        // 0x0450(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UTextBlock*                                            BindNotificationWidget;                                  // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        AxisScale;                                               // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0009[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_ControlsBind_C*                                     PairedKeybind;                                           // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                            KeybindHoveredSoundEffect;                               // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UFMODEvent*                                            KeybindStartBindingSoundEffect;                          // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnConflictingBindDetected;                               // 0x0490(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0010[0xF];                                   // 0x0491(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FKey                                                  PendingNewKey;                                           // 0x04A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		EInputKeyCategory                                            KeyCategory;                                             // 0x04B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0011[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_SettingsMenu_C*                                     SettingsMenu;                                            // 0x04C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class FText>                                          ConflictBindFriendlyNamesList;                           // 0x04C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FAxisMappingStruct>                            ConflictingAxes;                                         // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FActionMappingStruct>                          ConflictingActions;                                      // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               OnUnbindableKeyReboundAttempted;                         // 0x04F8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0012[0xF];                                   // 0x04F9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         bIsReadOnly;                                             // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void GetConflictingKeybindText(const class FText& RequiredKeybindName, class FText* Text);
		void CheckConflictingKeybindsAreUnbindable(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, class FText* BindFriendlyName);
		void RemoveConflictKeybinds(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions);
		void AddKeybindstoList(TArray<struct FSKeybinding>* Keybinds, const class FName& AxisMapping, float Scale, TArray<struct FAxisMappingStruct>* AxesList, TArray<struct FActionMappingStruct>* ActionsList);
		void AddConflictingKeybindstoList(const class FName& MappingName, float Scale, TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions);
		struct FEventReply HandleMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent);
		void GetConflictingKeybindswhenValid(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, bool* bHasConflict, TArray<struct FAxisMappingStruct>* ConflictingAxes, TArray<struct FActionMappingStruct>* ConflictingActions);
		struct FEventReply HandleKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetOtherBindingIndex(int32_t* Value);
		void HandleMouseButtonDown(const struct FPointerEvent& PointerEvent, struct FEventReply* Reply);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetDisabled(bool Disabled);
		void SetKeybindingText();
		void ResetBinding();
		void BindingFinished();
		void RebindKey(const struct FKey& NewKey, bool* KeyRebound);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetInputBindingData(int32_t Index, struct FActionMappingStruct* ActionMapping, struct FAxisMappingStruct* AxisMapping);
		void PreConstruct(bool IsDesignTime);
		void KeyEventReceived(const struct FKey& KeyIn);
		void BindingConfirmed();
		void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void Destruct();
		void OnIllegalBindAttempted(const class FText& BindFriendlyName);
		void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void UnbindAllEvents();
		void Construct();
		void ExecuteUbergraph_W_ControlsBind(int32_t EntryPoint);
		void OnUnbindableKeyReboundAttempted__DelegateSignature(const class FText& BindFriendlyName);
		void OnConflictingBindDetected__DelegateSignature(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>* ActionMappings, TArray<struct FAxisMappingStruct>* AxisMappings, const struct FKey& Key, TArray<class FText>* ConflictBindsText);
		void OnBindingCommitted__DelegateSignature(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey);
		void OnBindingCanceled__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
		void OnBindingStarted__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
		void OnReleased__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
		void OnPressed__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
		void OnUnhovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
		void OnHovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
