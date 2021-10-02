// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateVolumeSettings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuAudioSettings_C::UpdateVolumeSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateVolumeSettings");

	UTBP_UI_SystemMenuAudioSettings_C_UpdateVolumeSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Update Voip Settings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuAudioSettings_C::Update_Voip_Settings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Update Voip Settings");

	UTBP_UI_SystemMenuAudioSettings_C_Update_Voip_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_SystemMenuAudioSettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Construct");

	UTBP_UI_SystemMenuAudioSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SystemMenuAudioSettings_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OnOpen");

	UTBP_UI_SystemMenuAudioSettings_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuAudioSettings_C::BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuAudioSettings_C_BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuAudioSettings_C::ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings");

	UTBP_UI_SystemMenuAudioSettings_C_ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
