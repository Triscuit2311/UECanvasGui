#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.OpenReplayFolder
struct UW_ReplayBrowser_C_OpenReplayFolder_Params
{
public:
	class FString                                CallFunc_GetProjectSavedDirectory_ReturnValue;     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.PlaySelectedReplay
struct UW_ReplayBrowser_C_PlaySelectedReplay_Params
{
public:
	class UReadyOrNotGameInstance*               GameInstance;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFMODBus*>                      CallFunc_GetAllFMODBusObjects_ReturnValue;         // 0x18(0x10)(ReferenceParm)
	class UFMODBus*                              CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               K2Node_DynamicCast_AsReady_or_Not_Game_Instance;   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.AddModalToCanvas
struct UW_ReplayBrowser_C_AddModalToCanvas_Params
{
public:
	class UW_StandardModal_C*                    Modal;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    PresetModal;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x10(0x10)(NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.UpdateBackgroundImage
struct UW_ReplayBrowser_C_UpdateBackgroundImage_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.CreateEntryWidget
struct UW_ReplayBrowser_C_CreateEntryWidget_Params
{
public:
	class FString                                ReplayFileName;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FReplayData                           ReplayData;                                        // 0x10(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ReplayEntry_C*                      CallFunc_Create_ReturnValue;                       // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xAC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3C61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B1 (0x2B1 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.OnKeyDown
struct UW_ReplayBrowser_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_SaveSettings_ReturnValue;                 // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Ctrl;                            // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Shift;                           // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Alt;                             // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Cmd;                             // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Match;                           // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C62[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x130(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1E8(0xB8)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.Get_RenameButton_bIsEnabled_0
struct UW_ReplayBrowser_C_Get_RenameButton_bIsEnabled_0_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662
struct UW_ReplayBrowser_C_OnLoaded_AC8BF0914D2ED3F60A0233A2BD722662_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.CreateRenameModal
struct UW_ReplayBrowser_C_CreateRenameModal_Params
{
public:
	class FText                                  ReplayName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.RenameOkButton
struct UW_ReplayBrowser_C_RenameOkButton_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.EntrySelected
struct UW_ReplayBrowser_C_EntrySelected_Params
{
public:
	class UW_ReplayEntry_C*                      ReplayEntry;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.DeleteReplay
struct UW_ReplayBrowser_C_DeleteReplay_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature
struct UW_ReplayBrowser_C_BndEvt__W_ReplayBrowser_W_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.ModalCanceledButton
struct UW_ReplayBrowser_C_ModalCanceledButton_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xBB1 (0xBB1 - 0x0)
// Function W_ReplayBrowser.W_ReplayBrowser_C.ExecuteUbergraph_W_ReplayBrowser
struct UW_ReplayBrowser_C_ExecuteUbergraph_W_ReplayBrowser_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry;                      // 0x10(0x18)(None)
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x30(0x10)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue_1;                     // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	class UW_StandardModal_C*                    CallFunc_AddModalToCanvas_PresetModal;             // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	class UReadyOrNotGameInstance*               K2Node_DynamicCast_AsReady_or_Not_Game_Instance;   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FReplayData>      CallFunc_FindReplays_ReturnValue;                  // 0xC8(0x50)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x120(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReplayData                           CallFunc_Map_Find_Value;                           // 0x150(0x80)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x1D8(0x18)(ConstParm)
	class FText                                  K2Node_CustomEvent_ReplayName;                     // 0x1F0(0x18)(None)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal_2;                 // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry_2;                    // 0x220(0x18)(None)
	class UReadyOrNotGameInstance*               K2Node_DynamicCast_AsReady_or_Not_Game_Instance_1; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ReplayEntry_C*                      K2Node_CustomEvent_ReplayEntry;                    // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x268(0x18)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x288(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_2;                              // 0x2A0(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_3;                              // 0x2B8(0x18)(ConstParm)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            CallFunc_GetLevelLookupDataTable_ReturnValue;      // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x2E0(0x788)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xA68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_4;                              // 0xA70(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_5;                              // 0xA88(0x18)(ConstParm)
	struct FVector2D                             Temp_struct_Variable;                              // 0xAA0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0xAA8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xAB0(0x10)(ZeroConstructor, NoDestructor)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal_1;                 // 0xAC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry_1;                    // 0xAC8(0x18)(None)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0xAE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               K2Node_DynamicCast_AsReady_or_Not_Game_Instance_2; // 0xAE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xAF4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3C76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_6;                              // 0xB08(0x18)(ConstParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xB20(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB78(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB88(0x18)(None)
	class FString                                K2Node_ComponentBoundEvent_ButtonID;               // 0xBA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


