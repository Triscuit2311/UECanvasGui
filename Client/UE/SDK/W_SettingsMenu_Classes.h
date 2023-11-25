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
	 * WidgetBlueprintGeneratedClass W_SettingsMenu.W_SettingsMenu_C
	 * Size -> 0x0998 (FullSize[0x0BF8] - InheritedSize[0x0260])
	 */
	class UW_SettingsMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_Header_C*                                           AdvancedGraphicsHeader;                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          AdvancedGraphicsSettings;                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           AdvanceMirrorOptionsHeader_2;                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           AdvanceOptiwandOptionsHeader;                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGrahpics_Check_BounceLight;                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_DepthOfField;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_FlashlightShadows;                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_FrameLimit;                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_MeshPainting;                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_MotionBlurEnable;                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_OptiwandFPSEnabled;                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_Raytracing;                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_RaytracingAmbientOcclusion;            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_RaytracingGlobalIllumination;          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_RaytracingReflections;                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_RaytracingShadows;                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_RaytracingTranslucency;                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Check_VSync;                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 AdvGraphics_Checkbox_DecalsEnabled;                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_AAQuality;                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_DecalDensity;                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_DecalFadeScreenSize;                  // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_DLSSQuality;                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_EffectsQuality;                       // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_FrameLimiter;                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_FSRQuality;                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_MirrorFPS_2;                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_MotionBlurScale;                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_OptiwandFPS;                          // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_OptiwandScale;                        // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_PPQuality;                            // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_ShadowQuality;                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_TextureQuality;                       // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   AdvGraphics_Slider_ViewDistance;                         // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          Analytics;                                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           AnalyticsHeader;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   ApplySettingsButton;                                     // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Audio_Slider_MasterVolume;                               // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Audio_Slider_MicGainVolume;                              // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Audio_Slider_MusicVolume;                                // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Audio_Slider_SFXVolume;                                  // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Audio_Slider_UIVolume;                                   // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Audio_Slider_VOIPVolume;                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           AudioHeader;                                             // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              AudioOptionsButton;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           BasicGraphicsHeader;                                     // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Blackout;                                                // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Apply;                                               // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_AudioOptions;                                        // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ControlOptions;                                      // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ControlsEquipment;                                   // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ControlsInteraction;                                 // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ControlsMisc;                                        // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ControlsMovement;                                    // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ControlsTeamwork;                                    // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_ControlsVehicle;                                     // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Exit;                                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_GameOptions;                                         // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_GraphicsOptions;                                     // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Reset;                                               // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           ClearModioUserData;                                      // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           CommandHeader;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              ControlOptionsButton;                                    // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Controls_Equipment;                                      // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                            Controls_Equipment_Widget;                               // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Controls_Interaction;                                    // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                            Controls_Interaction_Widget;                             // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Controls_Misc;                                           // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                            Controls_Miscellaneous_Widget;                           // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Controls_Movement;                                       // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                            Controls_Movement_Widget;                                // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Controls_Teamwork;                                       // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                            Controls_Teamwork_Widget;                                // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                            Controls_Vehicle_Widget;                                 // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Controls_Vehicles;                                       // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       ControlsWidgetSwitcher;                                  // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           CopySupporterCode;                                       // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            DescriptionText;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           DLSS_Header;                                             // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     DLSSQualityLabel;                                        // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   ExitSettingsMenu;                                        // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           FSR_Header;                                              // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     FSRQualityLabel;                                         // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              GameOptionsButton;                                       // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              GraphicOptionsButton;                                    // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       GraphicOptionsSwitcher;                                  // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            HighFOVWarning;                                          // 0x0518(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           HudHeader;                                               // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            KeybindDescriptionText;                                  // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           LanguageHeader;                                          // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           MiscHeader;                                              // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           ModioHeader;                                             // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          ModioSubCategory;                                        // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           MouseHeader;                                             // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_InvertMousePitch;                       // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_InvertMouseYaw;                         // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_MapAnalytics;                           // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ServersideChecksum;                     // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowChat;                               // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowCommandContextHint;                 // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowCommandMarkers;                     // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowCompass;                            // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowFPS;                                // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowHealthIcons;                        // 0x05A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowHesitationBar;                      // 0x05A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowHotkeys;                            // 0x05B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowHUD;                                // 0x05B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowIcons;                              // 0x05C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowNames;                              // 0x05C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowPatches;                            // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_ShowTeamStatus;                         // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_StaticReload;                           // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_SwayHUD;                                // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 Options_Checkbox_TeamViewFPS;                            // 0x05F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_CommandStyle;                              // 0x05F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_DefaultOpenDoorCommand;                    // 0x0600(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_DefaultSurfaceCommand;                     // 0x0608(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_DefaultTargetCommand;                      // 0x0610(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_DefaultUnknownDoorCommand;                 // 0x0618(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_EmptyMagReloadStyle;                       // 0x0620(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_GrenadeStyle;                              // 0x0628(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_InputAudioDevice;                          // 0x0630(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_ItemSelectionStyle;                        // 0x0638(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_Language;                                  // 0x0640(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_LockedDoorcommand;                         // 0x0648(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_MirrorReflectionMode;                      // 0x0650(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_NVGStyle;                                  // 0x0658(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_OptiwandViewMode;                          // 0x0660(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_ScoreReadoutMode;                          // 0x0668(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_ShotgunReloadStyle;                        // 0x0670(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Options_Combo_UnlockedDoorCommand;                       // 0x0678(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                Options_Image_PatchPreview;                              // 0x0680(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Options_Slider_FreelookSensitivity;                      // 0x0688(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Options_Slider_MouseSensitivity;                         // 0x0690(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   Options_Slider_TeamView_PIP_FPS;                         // 0x0698(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            Options_Text_PatchPreview;                               // 0x06A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                      Options_Textbox_OfficerName;                             // 0x06A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                      Options_Textbox_PatchURL;                                // 0x06B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           PresetsHeader;                                           // 0x06B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           ProfilingBtn;                                            // 0x06C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           ProfilingHeader;                                         // 0x06C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          ProfilingSubCategory;                                    // 0x06D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     RaytracingAmbientOcclusion;                              // 0x06D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     RayTracingEnabledLabel;                                  // 0x06E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           RayTracingHeader;                                        // 0x06E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     RaytracingReflectionsLabel;                              // 0x06F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     RaytracingShadowsLabel;                                  // 0x06F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             Reflex_Combo;                                            // 0x0700(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 ReflexGameLatencyChkBox;                                 // 0x0708(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     ReflexGameLatencyLabel;                                  // 0x0710(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 ReflexGameToRenderLatency_ChkBox;                        // 0x0718(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     ReflexGameToRenderLatencyLabel;                          // 0x0720(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           ReflexHeader;                                            // 0x0728(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     ReflexLowLatencyLabel;                                   // 0x0730(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 ReflexRenderLatency_ChkBox;                              // 0x0738(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_SettingLabel_C*                                     ReflexRenderLatencyLabel;                                // 0x0740(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          ReflexSettingsBox;                                       // 0x0748(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardButton_C*                                   ResetKeybindsButton;                                     // 0x0750(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           ServerHeader;                                            // 0x0758(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          ServerSubCategory;                                       // 0x0760(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                       SettingsSwitcher;                                        // 0x0768(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCheckbox_C*                                 SimpleGraphics_ADSZoom;                                  // 0x0770(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             SimpleGraphics_Combo_Preset;                             // 0x0778(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardCombobox_New_C*                             SimpleGraphics_Combo_ScreenMode;                         // 0x0780(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   SimpleGraphics_Slider_FieldOfView;                       // 0x0788(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   SimpleGraphics_Slider_Resolution;                        // 0x0790(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   SimpleGraphics_Slider_ResolutionScale;                   // 0x0798(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   SimpleGraphics_Slider_SafeZone_X;                        // 0x07A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardSlider_C*                                   SimpleGraphics_Slider_SafeZone_Y;                        // 0x07A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          SimpleGraphicsSettings;                                  // 0x07B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           Supporter_Header;                                        // 0x07B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          SupporterSubCategory;                                    // 0x07C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Tab_AdvancedGraphicOptions;                              // 0x07C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           Tab_AdvancedGraphicsOptions;                             // 0x07D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                            Tab_Audio;                                               // 0x07D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardRadioButton_C*                              Tab_BasicGraphicOptions;                                 // 0x07E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          Tab_Controls;                                            // 0x07E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                            Tab_Game;                                                // 0x07F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          Tab_Graphics;                                            // 0x07F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           Tab_SimpleGraphicsOptions;                               // 0x0800(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StandardModal_C*                                    VideoOptionsModal;                                       // 0x0808(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_PageHeader_C*                                       W_PageHeader;                                            // 0x0810(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSKeybinding>                                  MovementControls;                                        // 0x0818(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSKeybinding>                                  DroneControls;                                           // 0x0828(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSKeybinding>                                  EquipmentControls;                                       // 0x0838(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSKeybinding>                                  InteractionControls;                                     // 0x0848(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSKeybinding>                                  TeamworkControls;                                        // 0x0858(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSKeybinding>                                  MiscellaneousControls;                                   // 0x0868(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_ControlsBind_C*                                     Temp_FirstInput;                                         // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_ControlsBind_C*                                     Temp_SecondInput;                                        // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                               BindNamePadding;                                         // 0x0888(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMargin                                               Bind1Padding;                                            // 0x0898(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMargin                                               Bind2Padding;                                            // 0x08A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMargin                                               BindResetPadding;                                        // 0x08B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         VideoSettingsChanged;                                    // 0x08C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x08C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSGraphicPreset>                               GraphicsPresets;                                         // 0x08D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                                StagedResolution;                                        // 0x08E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                        StagedResolutionScale;                                   // 0x08F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      StagedFOV;                                               // 0x08F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSGraphicPreset                                       StagedGraphicsPreset;                                    // 0x08F8(0x0034) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      StagedScreenMode;                                        // 0x092C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnMenuExited;                                            // 0x0930(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0931(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class FString                                                PatchPreviewURL;                                         // 0x0940(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateBrush                                           DefaultPatchPreviewBrush;                                // 0x0950(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_ControlsBind_C*                                     ListeningBinding;                                        // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bShowBlackout;                                           // 0x09E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x09E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_ControlsBind_C*                                     ConflictingBindPending;                                  // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                  ConflictingBindFormat;                                   // 0x09F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         IsAxis;                                                  // 0x0A08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0003[0x7];                                   // 0x0A09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSKeybinding>                                  CharacterControls;                                       // 0x0A10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSKeybinding>                                  SharedControls;                                          // 0x0A20(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UW_ControlsBind_C*, struct FAxisMappingStruct>    AxesControlBinds;                                        // 0x0A30(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UW_ControlsBind_C*, struct FActionMappingStruct>  ActionsControlBinds;                                     // 0x0A80(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FSKeybinding>                                  UnbindableControls;                                      // 0x0AD0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_BindConflictModal_C*                                ConflictDetectedPopUp;                                   // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_IllegalUnbindModal_C*                               IllegalKeyConflictDetectedPopUp;                         // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSStandardModalDetails                                BindConflictModalDetails;                                // 0x0AF0(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSStandardModalDetails                                IllegalKeyConflictModalDetails;                          // 0x0B68(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UW_Button_C*                                           ActivePageButton;                                        // 0x0BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Button_C*                                           ActiveControlTabButton;                                  // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         ControlTabInit;                                          // 0x0BF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         DecalsStateChanged;                                      // 0x0BF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0004[0x2];                                   // 0x0BF2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MotionBlurScalar;                                        // 0x0BF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetSupporterCode();
		ESlateVisibility Get_SupporterSubCategory_Visibility_1();
		ESlateVisibility IsFSREnabledVisibility();
		ESlateVisibility Get_FOVWarning_Visibility();
		struct FLinearColor Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_1();
		bool Get_SimpleGraphics_Slider_Resolution_bIsEnabled_1();
		void TryAssignUnbindableControl(const struct FSKeybinding& Keybinding, bool* bSuccess);
		bool GetApplyButtonEnabled();
		void SetDefaultControlsTab();
		void SwitchControlsTab(class UW_Button_C* Button, class UWidget* MenuWidget);
		void SwitchTab(class UW_Button_C* Button, class UWidget* MenuWidget, const class FText& TabName, bool bShowResetButton);
		void InitialiseOrGetPopUp(class UW_StandardModal_C* PopUpType, const struct FSStandardModalDetails& StandardModalDetails, class UW_StandardModal_C** OutputPopUp);
		void ClearControlBindsLists();
		void AddToControlBindsLists(class UW_ControlsBind_C* ControlBInd, const struct FAxisMappingStruct& InputAxis, const struct FActionMappingStruct& InputAction);
		void SetupCategoryControls();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility IsRaytracingSupportedVisibility();
		void AddAllKeybindsInList(TArray<struct FSKeybinding>* Keybinds, const class FName& MatchingName, TArray<class FText>* KeyList);
		void GetConflictingKeybindListText(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, TArray<class FText>* ConflictBinds, class FText* Text);
		void GetConflictingKeybindText(const struct FKey& Key, TArray<struct FActionMappingStruct>* ConflictingActions, TArray<struct FAxisMappingStruct>* ConflictingAxes, TArray<class FText>* ConflictBindNames, class FText* Text);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void InitGraphicsPreset();
		void StageGraphicsPreset(const struct FSGraphicPreset& Preset);
		void PopulateGameOptions(bool bIsDesignTime);
		void PopulateAudioOptions(bool bIsDesignTime);
		void PopulateVideoOptions(bool bIsDesignTime);
		void ConstructControls();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void AddControlsToGridPanel(TArray<struct FSKeybinding> Bindings, class UGridPanel* GridPanel);
		void BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowSpeed_K2Node_ComponentBoundEvent_6_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, float NewSliderValue);
		void BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, const class FText& TextEntry);
		void BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature(class UW_StandardModal_C* CallingModal);
		void BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, const class FText& TextEntry);
		void ExitMenu();
		void ApplyVideoSettings();
		void BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
		void BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnBindingStarted(class UW_ControlsBind_C* CallingWidget);
		void OnBindingCanceled(class UW_ControlsBind_C* CallingWidget);
		void OnBindingCommitted(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey);
		void EndButtonsDisabledForBinding();
		void BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void ConflictingBindDetected(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>* ActionMappings, TArray<struct FAxisMappingStruct>* AxisMappings, const struct FKey& Key, TArray<class FText>* ConflictBindsText);
		void BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void Destruct();
		void BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void DisplayNoKeysBoundWarning();
		void ConflictingBindOkClicked(class UW_StandardModal_C* CallingModal, const class FText& TextEntry);
		void ConflictingBindCancelClicked(class UW_StandardModal_C* CallingModal);
		void InitialisePopUps();
		void OnCancelIllegalBindClicked(class UW_StandardModal_C* CallingModal);
		void BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature(int32_t NewOption);
		void BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		void BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature(bool bNewCheckState);
		void ExecuteUbergraph_W_SettingsMenu(int32_t EntryPoint);
		void OnMenuExited__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
