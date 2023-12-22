#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EModioUIInputMode : uint8
{
	Unknown                        = 0,
	Mouse                          = 2,
	Keyboard                       = 4,
	XBox                           = 8,
	Playstation                    = 16,
	Controller                     = 24,
	NintendoSwitch                 = 64,
	EModioUIInputMode_MAX          = 65,
};

enum class EModioUIAsyncOperationWidgetState : uint8
{
	Success                        = 0,
	Error                          = 1,
	InProgress                     = 2,
	EModioUIAsyncOperationWidgetState_MAX = 3,
};

enum class EModioUIDirection : uint8
{
	MoveLeft                       = 0,
	MoveRight                      = 1,
	MoveUp                         = 2,
	MoveDown                       = 3,
	EModioUIDirection_MAX          = 4,
};

enum class EModioTextValidationRule : uint8
{
	ETVR_ValidateEmailAddress      = 0,
	ETVR_ValidateAllLetters        = 1,
	ETVR_ValidateAllNumeric        = 2,
	ETVR_ValidateAlphanumeric      = 3,
	ETVR_ValidateLength            = 4,
	ETVR_ValidateNotEmpty          = 5,
	ETVR_ValidateNoWhitespace      = 6,
	ETVR_MAX                       = 7,
};

enum class EModioDialogReply : uint8
{
	Neutral                        = 0,
	Confirm                        = 1,
	Cancel                         = 2,
	EModioDialogReply_MAX          = 3,
};

enum class EModioDialogOperationCall : uint8
{
	SetReportEmailAddress          = 0,
	SetReportDetails               = 1,
	EModioDialogOperationCall_MAX  = 2,
};

enum class EModioDialogAsyncCall : uint8
{
	AuthSubmitEmail                = 0,
	AuthSubmitCode                 = 1,
	BeginAuthentication            = 2,
	RetryFetchTerms                = 3,
	SubmitReport                   = 4,
	UnsubscribeFromMod             = 5,
	UninstallMod                   = 6,
	Logout                         = 7,
	EModioDialogAsyncCall_MAX      = 8,
};

enum class EModioDialogButtonCommand : uint8
{
	Back                           = 0,
	Cancel                         = 1,
	Close                          = 2,
	PushDialog                     = 3,
	AsyncCallThenPushDialog        = 4,
	PushDialogWithOperation        = 5,
	EModioDialogButtonCommand_MAX  = 6,
};

enum class EModioDrawerControllerSlotEdge : uint8
{
	Top                            = 0,
	Bottom                         = 1,
	Left                           = 2,
	Right                          = 3,
	EModioDrawerControllerSlotEdge_MAX = 4,
};

enum class EModioInputValidationType : uint8
{
	Email                          = 0,
	NotEmpty                       = 1,
	Custom                         = 2,
	EModioInputValidationType_MAX  = 3,
};

enum class EModioMenuDrawer : uint8
{
	EMMD_RefineSearch              = 0,
	EMMD_DownloadQueue             = 1,
	EMMD_MAX                       = 2,
};

enum class EModioMenuScreen : uint8
{
	EMMS_Featured                  = 0,
	EMMS_Collection                = 1,
	EMMS_SearchResults             = 2,
	EMMS_ModDetails                = 3,
	EMMS_MAX                       = 4,
};

enum class EModioModInfoPropertyType : uint8
{
	Name                           = 0,
	Size                           = 1,
	LastUpdated                    = 2,
	ReleaseDate                    = 3,
	Subscribers                    = 4,
	CreatorName                    = 5,
	EModioModInfoPropertyType_MAX  = 6,
};

enum class EModioNotificationControllerSlotEdge : uint8
{
	Top                            = 0,
	Bottom                         = 1,
	Left                           = 2,
	Right                          = 3,
	EModioNotificationControllerSlotEdge_MAX = 4,
};

enum class EModioPopupPlacement : uint8
{
	AlignBottomLeft                = 0,
	AlignTopLeft                   = 1,
	EModioPopupPlacement_MAX       = 2,
};

enum class EModioScrollBoxBarAlignment : uint8
{
	Default                        = 0,
	Left                           = 1,
	Right                          = 2,
	Top                            = 3,
	Bottom                         = 4,
	EModioScrollBoxBarAlignment_MAX = 5,
};

enum class EModioWidgetCarouselSizeOverrideType : int32
{
	AbsoluteDimensions             = 0,
	RelativeLayoutScale            = 1,
	NoOverride                     = 2,
	EModioWidgetCarouselSizeOverrideType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ModioUI.ModioUIAuthenticationProviderInfo
struct FModioUIAuthenticationProviderInfo
{
public:
	bool                                         bIsEmailAuthentication;                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioAuthenticationProvider      ProviderID;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ProviderUILabel;                                   // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModioUI.ModioTextValidationRule
struct FModioTextValidationRule
{
public:
	enum class EModioTextValidationRule          RuleToUse;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ValidationMessage;                                 // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MinimumLength;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLength;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ModioUI.ModioUIStyleRef
struct FModioUIStyleRef
{
public:
	class FName                                  StyleName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x298 (0x2A0 - 0x8)
// ScriptStruct ModioUI.ModioButtonStyle
struct FModioButtonStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x8(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      RichTextStyle;                                     // 0x280(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      BorderStyle;                                       // 0x288(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ModioUI.ModioUIColorRef
struct FModioUIColorRef
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ModioUI.ModioWidgetBorderStyle
struct FModioWidgetBorderStyle : public FSlateWidgetStyle
{
public:
	bool                                         bMaskWithMaterial;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     MaskMaterial;                                      // 0x10(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeRadius;                                   // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CornerRadius;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableBorder;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIColorRef                      BorderColor;                                       // 0x44(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      HoverColor;                                        // 0x4C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      ActiveColor;                                       // 0x54(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      NewInnerColor;                                     // 0x5C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BorderThickness;                                   // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BorderOpacity;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWidgetTexture;                                 // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          InnerColor;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8B8 (0x8C0 - 0x8)
// ScriptStruct ModioUI.ModioCheckBoxStyle
struct FModioCheckBoxStyle : public FSlateWidgetStyle
{
public:
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x8(0x580)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x598(0x270)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      TextStyleNew;                                      // 0x808(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioWidgetBorderStyle               CheckBoxBorderStyle;                               // 0x810(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x890(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x8A8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ModioUI.ModioUIMaterialRef
struct FModioUIMaterialRef
{
public:
	class FName                                  MaterialName;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xB0 (0x320 - 0x270)
// ScriptStruct ModioUI.ModioCodeInputStyle
struct FModioCodeInputStyle : public FTextBlockStyle
{
public:
	struct FSlateBrush                           CharacterBrush;                                    // 0x270(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      ColorWhenFocused;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIMaterialRef                   FakeCaretMaterial;                                 // 0x300(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CharacterSpacing;                                  // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             MinimumCharacterSize;                              // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xCB8 (0xCC0 - 0x8)
// ScriptStruct ModioUI.ModioComboBoxStyle
struct FModioComboBoxStyle : public FSlateWidgetStyle
{
public:
	struct FComboBoxStyle                        ComboBoxStyle;                                     // 0x8(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioWidgetBorderStyle               MenuBorderStyle;                                   // 0x3F8(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioWidgetBorderStyle               ButtonBorderStyle;                                 // 0x478(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTableRowStyle                        DropdownItemStyle;                                 // 0x4F8(0x7C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ModioUI.ModioCustomComboBoxStyle
struct FModioCustomComboBoxStyle : public FSlateWidgetStyle
{
public:
	struct FModioUIStyleRef                      BorderStyle;                                       // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      RowStyle;                                          // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      TextStyle;                                         // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      BackgroundColor;                                   // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSound;                                      // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSound;                                      // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ModioUI.ModioDialogButtonInfo
struct FModioDialogButtonInfo
{
public:
	class FText                                  ButtonLabel;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EModioDialogButtonCommand         ButtonCommand;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioDialogAsyncCall             AsyncCallType;                                     // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioDialogOperationCall         OperationCallType;                                 // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioDialogInfo*                      Destination;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct ModioUI.ModioDialogStyle
struct FModioDialogStyle : public FSlateWidgetStyle
{
public:
	struct FMargin                               ContentPadding;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0x18(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      TitleTextStyle;                                    // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      ContentTextStyle;                                  // 0xA8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      ButtonStyle;                                       // 0xB0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ModioUI.ModioDownloadQueueEntryStyle
struct FModioDownloadQueueEntryStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HighlightedBorderBrush;                            // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      UnsubscribeButtonStyle;                            // 0x90(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      TextStyle;                                         // 0x98(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSound;                                      // 0xA0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSound;                                      // 0xB8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ModioUI.ModioDrawerWidgetStyle
struct FModioDrawerWidgetStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HeadingBackgroundBrush;                            // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ContentBackgroundBrush;                            // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FooterBackgroundBrush;                             // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ModioUI.ModioDynamicImageStyle
struct FModioDynamicImageStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           ImageLoadingBrush;                                 // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ImageUnavailableBrush;                             // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSound;                                      // 0x118(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x228 (0xA20 - 0x7F8)
// ScriptStruct ModioUI.ModioEditableTextBoxStyle
struct FModioEditableTextBoxStyle : public FEditableTextBoxStyle
{
public:
	bool                                         bShowHintIcon;                                     // 0x7F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1408[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HintIcon;                                          // 0x800(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBorderBrush;                                 // 0x888(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBorderBrush;                                // 0x910(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ErrorBorderBrush;                                  // 0x998(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct ModioUI.ModioInputMappingGlyph
struct FModioInputMappingGlyph
{
public:
	TSoftObjectPtr<class UTexture2D>             MouseGlyph;                                        // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             KeyboardGlyph;                                     // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             XBoxControllerGlyph;                               // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             PSControllerGlyph;                                 // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             FallbackControllerGlyph;                           // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ModioUI.ModioModDetailsGalleryImageInfo
struct FModioModDetailsGalleryImageInfo
{
public:
	uint8                                        Pad_140F[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     LoadedImage;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModioUI.ModioModInfoPropertyDescriptor
struct FModioModInfoPropertyDescriptor
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EModioModInfoPropertyType         Property;                                          // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1411[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ModioUI.ModioModTileStyle
struct FModioModTileStyle : public FSlateWidgetStyle
{
public:
	struct FSlateSound                           HoveredSound;                                      // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSound;                                      // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x800 - 0x7F8)
// ScriptStruct ModioUI.ModioMultiLineEditableTextBoxStyle
struct FModioMultiLineEditableTextBoxStyle : public FEditableTextBoxStyle
{
public:
	struct FModioUIStyleRef                      ModioTextStyle;                                    // 0x7F8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ModioUI.ModioNotificationStyle
struct FModioNotificationStyle : public FSlateWidgetStyle
{
public:
	struct FModioUIStyleRef                      TextStyleSet;                                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  PrimaryTextStyleName;                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SecondaryTextStyleName;                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUIMaterialRef                   ErrorSuccessGlyph;                                 // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIMaterialRef                   ErrorFailureGlyph;                                 // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIMaterialRef                   BackgroundMaterial;                                // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      SuccessColor;                                      // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      ErrorColor;                                        // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ModioUI.ModioPopupMenuStyle
struct FModioPopupMenuStyle : public FSlateWidgetStyle
{
public:
	struct FSlateSound                           HoveredSound;                                      // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSound;                                      // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x1A0 - 0x1A0)
// ScriptStruct ModioUI.ModioProgressBarStyle
struct FModioProgressBarStyle : public FProgressBarStyle
{
public:
};

// 0x2C0 (0x2C8 - 0x8)
// ScriptStruct ModioUI.ModioTextBlockStyleOverride
struct FModioTextBlockStyleOverride : public FSlateWidgetStyle
{
public:
	struct FTextBlockStyle                       StyleProperties;                                   // 0x8(0x270)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      OverriddenProperties;                              // 0x278(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct ModioUI.ModioRichTextStyle
struct FModioRichTextStyle : public FSlateWidgetStyle
{
public:
	TMap<class FName, struct FTextBlockStyle>    Styles;                                            // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FModioTextBlockStyleOverride> InlineStyleOverrides;                              // 0x58(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x88 - 0x88)
// ScriptStruct ModioUI.ModioSlateMaterialBrush
struct FModioSlateMaterialBrush : public FSlateBrush
{
public:
};

// 0x300 (0x308 - 0x8)
// ScriptStruct ModioUI.ModioSubscriptionBadgeStyle
struct FModioSubscriptionBadgeStyle : public FSlateWidgetStyle
{
public:
	struct FTextBlockStyle                       LabelStyle;                                        // 0x8(0x270)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      LabelStyleNew;                                     // 0x278(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIStyleRef                      ProgressBarStyle;                                  // 0x280(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioWidgetBorderStyle               BadgeBorderStyle;                                  // 0x288(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ModioUI.ModioTableRowStyle
struct FModioTableRowStyle : public FSlateWidgetStyle
{
public:
	struct FModioUIColorRef                      BackgroundHoverColor;                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      BackgroundSelectedColor;                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      BackgroundColor;                                   // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      TextHoverColor;                                    // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      TextSelectedColor;                                 // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUIColorRef                      TextColor;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C8 (0x1D0 - 0x8)
// ScriptStruct ModioUI.ModioTagWidgetStyle
struct FModioTagWidgetStyle : public FSlateWidgetStyle
{
public:
	struct FModioUIStyleRef                      TextStyleNew;                                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TagBackgroundBrush;                                // 0x10(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioRichTextStyle                   TextStyle;                                         // 0x98(0xA8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioWidgetBorderStyle               TagBackgroundStyle;                                // 0x140(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ModioUI.ModioUIAction
struct FModioUIAction
{
public:
	FDelegateProperty_                           ExecuteAction;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CanExecuteAction;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           IsActionVisible;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModioUI.ModioUIColor
struct FModioUIColor
{
public:
	uint8                                        Pad_141E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ModioUI.ModioUIMenuEntry
struct FModioUIMenuEntry
{
public:
	class FText                                  MenuEntryLabel;                                    // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ModioUI.ModioUIMenuCommandList
struct FModioUIMenuCommandList
{
public:
	TMap<struct FModioUIMenuEntry, struct FModioUIAction> MappedActions;                                     // 0x0(0x50)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModioUI.ModioInputMapping
struct FModioInputMapping
{
public:
	struct FKey                                  VirtualKey;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          MappedProjectInputs;                               // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ModioUI.ModioLinearColor
struct FModioLinearColor : public FLinearColor
{
public:
};

// 0x0 (0x28 - 0x28)
// ScriptStruct ModioUI.ModioSlateColorInspector
struct FModioSlateColorInspector : public FSlateColor
{
public:
};

}


