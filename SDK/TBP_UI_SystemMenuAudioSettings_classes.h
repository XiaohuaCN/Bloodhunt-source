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

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C
// 0x0080 (FullSize[0x0310] - InheritedSize[0x0290])
class UTBP_UI_SystemMenuAudioSettings_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_CheckBox_C*                          AllowBackgroundAudio;                                      // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        DialogueVolumeSlider;                                      // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          EnableDolbyAtmos;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          EnableVoiceChat;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MasterVolumeSlider;                                        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MicVolumeSlider;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MusicVolumeSlider;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        SfxVolumeSlider;                                           // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                SystemMenuSubItemBox;                                      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_166;                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_383;                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          UsePushToTalk;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VideoVolumeSlider;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VoiceChatVolumeSlider;                                     // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    CurrentlySelectedSystemMenuItem;                           // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C");
		return ptr;
	}



	void UpdateVolumeSettings();
	void Update_Voip_Settings();
	void Construct();
	void OnOpen();
	void BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
