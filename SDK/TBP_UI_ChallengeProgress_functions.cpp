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
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UHorizontalBox*                              ChallengeProgressHB                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengeProgress_C::SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1(class UHorizontalBox* ChallengeProgressHB)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1");

	UTBP_UI_ChallengeProgress_C_SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1_Params params;
	params.ChallengeProgressHB = ChallengeProgressHB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OverrideMinSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              MinWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MinHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengeProgress_C::OverrideMinSize(float MinWidth, float MinHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OverrideMinSize");

	UTBP_UI_ChallengeProgress_C_OverrideMinSize_Params params;
	params.MinWidth = MinWidth;
	params.MinHeight = MinHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HideExpRewardText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChallengeProgress_C::HideExpRewardText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HideExpRewardText");

	UTBP_UI_ChallengeProgress_C_HideExpRewardText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Reward Display From Item
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChallengeProgress_C::Set_Reward_Display_From_Item()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Reward Display From Item");

	UTBP_UI_ChallengeProgress_C_Set_Reward_Display_From_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HasFinishedProgressBarAnimation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               HasUpdatedProgressBar                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChallengeProgress_C::HasFinishedProgressBarAnimation(bool* HasUpdatedProgressBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HasFinishedProgressBarAnimation");

	UTBP_UI_ChallengeProgress_C_HasFinishedProgressBarAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasUpdatedProgressBar != nullptr)
		*HasUpdatedProgressBar = params.HasUpdatedProgressBar;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Progress
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InProgressBarPercentage                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       InProgressText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ChallengeProgress_C::Set_Progress(float InProgressBarPercentage, const struct FText& InProgressText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Progress");

	UTBP_UI_ChallengeProgress_C_Set_Progress_Params params;
	params.InProgressBarPercentage = InProgressBarPercentage;
	params.InProgressText = InProgressText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.MoveProgressBar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              LerpValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengeProgress_C::MoveProgressBar(float LerpValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.MoveProgressBar");

	UTBP_UI_ChallengeProgress_C_MoveProgressBar_Params params;
	params.LerpValue = LerpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Challenge Data
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerProgressedChallengeWrapper            Challenge_Progress_Wrapper                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ChallengeProgress_C::Set_Challenge_Data(const struct FTigerProgressedChallengeWrapper& Challenge_Progress_Wrapper)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Challenge Data");

	UTBP_UI_ChallengeProgress_C_Set_Challenge_Data_Params params;
	params.Challenge_Progress_Wrapper = Challenge_Progress_Wrapper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ShowComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UHorizontalBox*                              ChallengeProgressHB                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengeProgress_C::ShowComplete(class UHorizontalBox* ChallengeProgressHB)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ShowComplete");

	UTBP_UI_ChallengeProgress_C_ShowComplete_Params params;
	params.ChallengeProgressHB = ChallengeProgressHB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ChallengeProgress_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Construct");

	UTBP_UI_ChallengeProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OnChallengeCompleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChallengeProgress_C::OnChallengeCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OnChallengeCompleted");

	UTBP_UI_ChallengeProgress_C_OnChallengeCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.UpdateProgress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChallengeProgress_C::UpdateProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.UpdateProgress");

	UTBP_UI_ChallengeProgress_C_UpdateProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ExecuteUbergraph_TBP_UI_ChallengeProgress
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChallengeProgress_C::ExecuteUbergraph_TBP_UI_ChallengeProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ExecuteUbergraph_TBP_UI_ChallengeProgress");

	UTBP_UI_ChallengeProgress_C_ExecuteUbergraph_TBP_UI_ChallengeProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
