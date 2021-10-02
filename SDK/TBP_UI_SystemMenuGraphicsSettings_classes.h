#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C
// 0x01ED (FullSize[0x047D] - InheritedSize[0x0290])
class UTBP_UI_SystemMenuGraphicsSettings_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_Carousel_C*                          AmbientOcclusionCarousel;                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          AntiAliasingCarousel;                                      // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        AntiAliasingItem;                                          // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       ApplyPrompt;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          BloomCarousel;                                             // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    BrightnessSetup;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_261;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ButtonOutline;                                             // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          ChromaticAberrationBox;                                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          DisplayModeCarousel;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          DX12Box;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          FilmGrainBox;                                              // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          FoliageCarousel;                                           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          FrameRateLimitCarousel;                                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          FrameRateSmoothingBox;                                     // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          FsrQualityCarousel;                                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        FsrSharpeningSlider;                                       // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        GammaSlider;                                               // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          LensFlareCarousel;                                         // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          LightingQualityCarousel;                                   // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          LightShaftsItemBox;                                        // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          MaterialCarousel;                                          // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          MotionBlurCarousel;                                        // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          QualityPresetCarousel;                                     // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          ResolutionCarousel;                                        // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        ResolutionScale;                                           // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        ResolutionScaleSlider;                                     // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       RestartPrompt;                                             // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       RevertPrompt;                                              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Screenshot;                                                // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          ScreenSpaceReflectionCarousel;                             // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Setup_Button_Text;                                         // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          ShadowCarousel;                                            // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          SubSurfaceScatteringCarousel;                              // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher_Settings;                                         // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              TabButton1;                                                // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              TabButton2;                                                // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                     // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemBrightness_C*                  TBP_UI_SystemBrightness;                                   // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          TextureCarousel;                                           // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          TextureFilteringCarousel;                                  // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          ViewDistanceCarousel;                                      // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          VisualEffectCarousel;                                      // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          VolumetricFogCarousel;                                     // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          VsyncBox;                                                  // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    CurrentlySelectedSystemMenuItem;                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                           AvailableResolutions;                                      // 0x0408(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               SubmenuButtonNames;                                        // 0x0418(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               QualityLevelLabels;                                        // 0x0428(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               AntiAliasingLevelLabels;                                   // 0x0438(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               AnisotropyLevelLabels;                                     // 0x0448(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               FsrQualityLabels;                                          // 0x0458(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               FrameLimitLabels;                                          // 0x0468(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DefaultGamma;                                              // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldShowRestartPrompt;                                   // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C");
		return ptr;
	}



	UMG_ESlateVisibility GetAntiAliasingItemVisibility();
	UMG_ESlateVisibility GetResolutionScaleItemVisibility();
	UMG_ESlateVisibility GetFsrSettingsItemVisibility();
	void ApplySettings();
	void InitGraphicsSettings();
	void InitDisplaySettings();
	void InitQualityOptions();
	void SetQualityOptionLabels(class UTBP_UI_Carousel_C** InOptionCarousel, int InOptionCount, bool InUsesCustom, bool InUsesOff, bool InUsesLow);
	void RefreshQualityOptions();
	void SetSubmenuButtonNames();
	void DiscardUnappliedChanges();
	void RefreshResolutionOptions();
	void RefreshWindowModeOptions();
	void BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature();
	void BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature();
	void BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void OnBrightnessConfirm();
	void BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TestCheckBox1_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnQualityOptionChanged();
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_3_CountdownFinished__DelegateSignature();
	void ConfirmApply();
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_22_Confirm__DelegateSignature();
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_23_Decline__DelegateSignature();
	void OpenCategory();
	void CloseCategory();
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
