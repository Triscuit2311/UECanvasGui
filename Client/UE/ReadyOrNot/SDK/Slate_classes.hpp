#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x278 (0x2A8 - 0x30)
// Class Slate.ButtonWidgetStyle
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x30(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UButtonWidgetStyle* GetDefaultObj();

};

// 0x580 (0x5B0 - 0x30)
// Class Slate.CheckBoxWidgetStyle
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x30(0x580)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCheckBoxWidgetStyle* GetDefaultObj();

};

// 0x3F0 (0x420 - 0x30)
// Class Slate.ComboBoxWidgetStyle
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                        ComboBoxStyle;                                     // 0x30(0x3F0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboBoxWidgetStyle* GetDefaultObj();

};

// 0x3B8 (0x3E8 - 0x30)
// Class Slate.ComboButtonWidgetStyle
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x30(0x3B8)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboButtonWidgetStyle* GetDefaultObj();

};

// 0x7F8 (0x828 - 0x30)
// Class Slate.EditableTextBoxWidgetStyle
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x30(0x7F8)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextBoxWidgetStyle* GetDefaultObj();

};

// 0x220 (0x250 - 0x30)
// Class Slate.EditableTextWidgetStyle
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x30(0x220)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextWidgetStyle* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class Slate.ProgressWidgetStyle
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                     ProgressBarStyle;                                  // 0x30(0x1A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProgressWidgetStyle* GetDefaultObj();

};

// 0x4D0 (0x500 - 0x30)
// Class Slate.ScrollBarWidgetStyle
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x30(0x4D0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBarWidgetStyle* GetDefaultObj();

};

// 0x228 (0x258 - 0x30)
// Class Slate.ScrollBoxWidgetStyle
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                       ScrollBoxStyle;                                    // 0x30(0x228)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBoxWidgetStyle* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Slate.SlateSettings
class USlateSettings : public UObject
{
public:
	bool                                         bExplicitCanvasChildZOrder;                        // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlateSettings* GetDefaultObj();

};

// 0x2E8 (0x318 - 0x30)
// Class Slate.SpinBoxWidgetStyle
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                         SpinBoxStyle;                                      // 0x30(0x2E8)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpinBoxWidgetStyle* GetDefaultObj();

};

// 0x270 (0x2A0 - 0x30)
// Class Slate.TextBlockWidgetStyle
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                       TextBlockStyle;                                    // 0x30(0x270)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTextBlockWidgetStyle* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Slate.ToolMenuBase
class UToolMenuBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuBase* GetDefaultObj();

};

}


