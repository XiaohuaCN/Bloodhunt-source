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
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshItemPreviewButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChallengesMenu_C::RefreshItemPreviewButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshItemPreviewButton");

	UTBP_UI_ChallengesMenu_C_RefreshItemPreviewButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.HideItemPreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::HideItemPreview()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.HideItemPreview");

	UTBP_UI_ChallengesMenu_C_HideItemPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ShowItemPreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                InItemToShow                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengesMenu_C::ShowItemPreview(const struct FTigerItemId& InItemToShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ShowItemPreview");

	UTBP_UI_ChallengesMenu_C_ShowItemPreview_Params params;
	params.InItemToShow = InItemToShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshQuestWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChallengesMenu_C::RefreshQuestWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshQuestWidgets");

	UTBP_UI_ChallengesMenu_C_RefreshQuestWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetWeeklyChallengeHeader
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InWeek                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengesMenu_C::SetWeeklyChallengeHeader(int InWeek)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetWeeklyChallengeHeader");

	UTBP_UI_ChallengesMenu_C_SetWeeklyChallengeHeader_Params params;
	params.InWeek = InWeek;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshAllWeeklyChallengeProgress
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChallengesMenu_C::RefreshAllWeeklyChallengeProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshAllWeeklyChallengeProgress");

	UTBP_UI_ChallengesMenu_C_RefreshAllWeeklyChallengeProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.TryRebuildWeeklyChallenges
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChallengesMenu_C::TryRebuildWeeklyChallenges()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.TryRebuildWeeklyChallenges");

	UTBP_UI_ChallengesMenu_C_TryRebuildWeeklyChallenges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.GetDailyExpireText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       OutExpireText                                              (Parm, OutParm)
void UTBP_UI_ChallengesMenu_C::GetDailyExpireText(struct FText* OutExpireText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.GetDailyExpireText");

	UTBP_UI_ChallengesMenu_C_GetDailyExpireText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutExpireText != nullptr)
		*OutExpireText = params.OutExpireText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnOpen");

	UTBP_UI_ChallengesMenu_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnClose");

	UTBP_UI_ChallengesMenu_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnBackgroundSceneShown
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnBackgroundSceneShown");

	UTBP_UI_ChallengesMenu_C_OnBackgroundSceneShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChallengeProgressUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::ChallengeProgressUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChallengeProgressUpdated");

	UTBP_UI_ChallengesMenu_C_ChallengeProgressUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengesMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Tick");

	UTBP_UI_ChallengesMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeRightFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::FadeRightFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeRightFinished");

	UTBP_UI_ChallengesMenu_C_FadeRightFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeLeftFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::FadeLeftFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeLeftFinished");

	UTBP_UI_ChallengesMenu_C_FadeLeftFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChallengesMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.PreConstruct");

	UTBP_UI_ChallengesMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChallengesMenu_C::BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ExecuteUbergraph_TBP_UI_ChallengesMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengesMenu_C::ExecuteUbergraph_TBP_UI_ChallengesMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ExecuteUbergraph_TBP_UI_ChallengesMenu");

	UTBP_UI_ChallengesMenu_C_ExecuteUbergraph_TBP_UI_ChallengesMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
