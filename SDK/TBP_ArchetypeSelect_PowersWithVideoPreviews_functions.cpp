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
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.UpdatePassivesViewOrCloseText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::UpdatePassivesViewOrCloseText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.UpdatePassivesViewOrCloseText");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_UpdatePassivesViewOrCloseText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ViewOrCloseVideoText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMediaSource*                                Media_Source                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::ViewOrCloseVideoText(class UMediaSource* Media_Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ViewOrCloseVideoText");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_ViewOrCloseVideoText_Params params;
	params.Media_Source = Media_Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.UpdateVideoTextProperties
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       PostfixText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::UpdateVideoTextProperties(const struct FText& PostfixText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.UpdateVideoTextProperties");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_UpdateVideoTextProperties_Params params;
	params.PostfixText = PostfixText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.DeselectOnUnhover
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_TransitionMenuButton_C*              ButtonWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::DeselectOnUnhover(class UTBP_UI_TransitionMenuButton_C* ButtonWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.DeselectOnUnhover");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_DeselectOnUnhover_Params params;
	params.ButtonWidget = ButtonWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMediaSource*                                InVIdeoSource                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnVideoButtonClicked(class UMediaSource* InVIdeoSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoButtonClicked");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnVideoButtonClicked_Params params;
	params.InVIdeoSource = InVIdeoSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.StopVideo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::StopVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.StopVideo");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_StopVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Construct");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnMediaOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnMediaOpened(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnMediaOpened");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnMediaOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Tick");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnMediaEndReached
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnMediaEndReached()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnMediaEndReached");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnMediaEndReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedMoveSkill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnClickedMoveSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedMoveSkill");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnClickedMoveSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedArchetypeSkill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnClickedArchetypeSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedArchetypeSkill");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnClickedArchetypeSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedPassiveSkill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnClickedPassiveSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedPassiveSkill");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnClickedPassiveSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_PassiveSkill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::Hovered_PassiveSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_PassiveSkill");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_Hovered_PassiveSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_ArchetypeSkill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::Hovered_ArchetypeSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_ArchetypeSkill");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_Hovered_ArchetypeSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_MoveSkill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::Hovered_MoveSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_MoveSkill");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_Hovered_MoveSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.PlayVideo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMediaSource*                                InVIdeoSource                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::PlayVideo(class UMediaSource* InVIdeoSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.PlayVideo");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_PlayVideo_Params params;
	params.InVIdeoSource = InVIdeoSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnInitialized");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ChangeArchetype
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::ChangeArchetype(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ChangeArchetype");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_ChangeArchetype_Params params;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.On Open
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::On_Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.On Open");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_On_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ExecuteUbergraph_TBP_ArchetypeSelect_PowersWithVideoPreviews
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::ExecuteUbergraph_TBP_ArchetypeSelect_PowersWithVideoPreviews(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ExecuteUbergraph_TBP_ArchetypeSelect_PowersWithVideoPreviews");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_ExecuteUbergraph_TBP_ArchetypeSelect_PowersWithVideoPreviews_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoEnded__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnVideoEnded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoEnded__DelegateSignature");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnVideoEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoStarted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_ArchetypeSelect_PowersWithVideoPreviews_C::OnVideoStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoStarted__DelegateSignature");

	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C_OnVideoStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
