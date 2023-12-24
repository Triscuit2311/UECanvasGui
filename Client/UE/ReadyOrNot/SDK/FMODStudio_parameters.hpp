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

// 0x4 (0x4 - 0x0)
// Function FMODStudio.FMODAudioComponent.SetVolume
struct UFMODAudioComponent_SetVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
struct UFMODAudioComponent_SetTimelinePosition_Params
{
public:
	int32                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODAudioComponent.SetProperty
struct UFMODAudioComponent_SetProperty_Params
{
public:
	enum class EFMODEventProperty                Property;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
struct UFMODAudioComponent_SetProgrammerSoundName_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FMODStudio.FMODAudioComponent.SetPitch
struct UFMODAudioComponent_SetPitch_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FMODStudio.FMODAudioComponent.SetPaused
struct UFMODAudioComponent_SetPaused_Params
{
public:
	bool                                         Paused;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FMODStudio.FMODAudioComponent.SetParameter
struct UFMODAudioComponent_SetParameter_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODAudioComponent.SetEvent
struct UFMODAudioComponent_SetEvent_Params
{
public:
	class UFMODEvent*                            NewEvent;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FMODStudio.FMODAudioComponent.IsPlaying
struct UFMODAudioComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FMODStudio.FMODAudioComponent.GetTimelinePosition
struct UFMODAudioComponent_GetTimelinePosition_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODAudioComponent.GetProperty
struct UFMODAudioComponent_GetProperty_Params
{
public:
	enum class EFMODEventProperty                Property;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_731[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODAudioComponent.GetParameterValue
struct UFMODAudioComponent_GetParameterValue_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UserValue;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinalValue;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FMODStudio.FMODAudioComponent.GetParameter
struct UFMODAudioComponent_GetParameter_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FMODStudio.FMODAudioComponent.GetLength
struct UFMODAudioComponent_GetLength_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
struct UFMODBlueprintStatics_VCASetVolume_Params
{
public:
	class UFMODVCA*                              Vca;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
struct UFMODBlueprintStatics_UnloadEventSampleData_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Event;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
struct UFMODBlueprintStatics_UnloadBankSampleData_Params
{
public:
	class UFMODBank*                             Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.UnloadBank
struct UFMODBlueprintStatics_UnloadBank_Params
{
public:
	class UFMODBank*                             Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
struct UFMODBlueprintStatics_SetOutputDriverByName_Params
{
public:
	class FString                                NewDriverName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
struct UFMODBlueprintStatics_SetOutputDriverByIndex_Params
{
public:
	int32                                        NewDriverIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.SetLocale
struct UFMODBlueprintStatics_SetLocale_Params
{
public:
	class FString                                Locale;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
struct UFMODBlueprintStatics_SetGlobalParameterByName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
struct UFMODBlueprintStatics_PlayEventAttached_Params
{
public:
	class UFMODEvent*                            Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttachToComponent;                                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachPointName;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachLocation                   LocationType;                                      // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoPlay;                                         // 0x26(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDestroy;                                      // 0x27(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODAudioComponent*                   ReturnValue;                                       // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
struct UFMODBlueprintStatics_PlayEventAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Event;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Location;                                          // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bAutoPlay;                                         // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
struct UFMODBlueprintStatics_PlayEvent2D_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Event;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoPlay;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_787[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
struct UFMODBlueprintStatics_LoadEventSampleData_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Event;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
struct UFMODBlueprintStatics_LoadBankSampleData_Params
{
public:
	class UFMODBank*                             Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.LoadBank
struct UFMODBlueprintStatics_LoadBank_Params
{
public:
	class UFMODBank*                             Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlocking;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadSampleData;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79E[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
struct UFMODBlueprintStatics_IsBankLoaded_Params
{
public:
	class UFMODBank*                             Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
struct UFMODBlueprintStatics_GetOutputDrivers_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
struct UFMODBlueprintStatics_GetGlobalParameterValueByName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UserValue;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinalValue;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
struct UFMODBlueprintStatics_GetGlobalParameterByName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.FindEventInstances
struct UFMODBlueprintStatics_FindEventInstances_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Event;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFMODEventInstance>            ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.FindEventByName
struct UFMODBlueprintStatics_FindEventByName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
struct UFMODBlueprintStatics_FindAssetByName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODAsset*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
struct UFMODBlueprintStatics_EventInstanceStop_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Release;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
struct UFMODBlueprintStatics_EventInstanceSetVolume_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
struct UFMODBlueprintStatics_EventInstanceSetTransform_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Location;                                          // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
struct UFMODBlueprintStatics_EventInstanceSetProperty_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFMODEventProperty                Property;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
struct UFMODBlueprintStatics_EventInstanceSetPitch_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
struct UFMODBlueprintStatics_EventInstanceSetPaused_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Paused;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
struct UFMODBlueprintStatics_EventInstanceSetParameter_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease
struct UFMODBlueprintStatics_EventInstanceRelease_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
struct UFMODBlueprintStatics_EventInstancePlay_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff
struct UFMODBlueprintStatics_EventInstanceKeyOff_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
struct UFMODBlueprintStatics_EventInstanceIsValid_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
struct UFMODBlueprintStatics_EventInstanceGetParameterValue_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UserValue;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinalValue;                                        // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
struct UFMODBlueprintStatics_EventInstanceGetParameter_Params
{
public:
	struct FFMODEventInstance                    EventInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_806[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
struct UFMODBlueprintStatics_BusStopAllEvents_Params
{
public:
	class UFMODBus*                              Bus;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFMOD_STUDIO_STOP_MODE            StopMode;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
struct UFMODBlueprintStatics_BusSetVolume_Params
{
public:
	class UFMODBus*                              Bus;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_812[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
struct UFMODBlueprintStatics_BusSetPaused_Params
{
public:
	class UFMODBus*                              Bus;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPaused;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_819[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FMODStudio.FMODBlueprintStatics.BusSetMute
struct UFMODBlueprintStatics_BusSetMute_Params
{
public:
	class UFMODBus*                              Bus;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMute;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_820[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


