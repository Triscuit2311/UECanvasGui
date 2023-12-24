#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class LiveLinkComponents.LiveLinkControllerBase
class ULiveLinkControllerBase : public UObject
{
public:
	uint8                                        Pad_1469[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkControllerBase* GetDefaultObj();

};

// 0xA8 (0x158 - 0xB0)
// Class LiveLinkComponents.LiveLinkComponentController
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap;                                     // 0xC0(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear, Interp, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FComponentReference                   ComponentToControl;                                // 0x128(0x28)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                         bDisableEvaluateLiveLinkWhenSpawnable;             // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvaluateLiveLink;                                 // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkComponentController* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class LiveLinkComponents.LiveLinkComponentSettings
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<TSubclassOf<class ULiveLinkRole>, TSubclassOf<class ULiveLinkControllerBase>> DefaultControllerForRole;                          // 0x28(0x50)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULiveLinkComponentSettings* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class LiveLinkComponents.LiveLinkLightController
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkLightController* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class LiveLinkComponents.LiveLinkTransformController
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData      TransformData;                                     // 0x40(0x6)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1477[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkTransformController* GetDefaultObj();

};

}


