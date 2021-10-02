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
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.EndInteraction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_DialogueInteraction_C::EndInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.EndInteraction");

	UTBP_UI_DialogueInteraction_C_EndInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.StartInteraction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::StartInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.StartInteraction");

	UTBP_UI_DialogueInteraction_C_StartInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialoguePack
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_DialogueInteraction_C::NextDialoguePack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialoguePack");

	UTBP_UI_DialogueInteraction_C_NextDialoguePack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialogueLine
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InQuestObjective                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_DialogueInteraction_C::NextDialogueLine(const struct FText& InText, const struct FText& InQuestObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialogueLine");

	UTBP_UI_DialogueInteraction_C_NextDialogueLine_Params params;
	params.InText = InText;
	params.InQuestObjective = InQuestObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__ContinueButtonPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::BndEvt__ContinueButtonPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__ContinueButtonPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature");

	UTBP_UI_DialogueInteraction_C_BndEvt__ContinueButtonPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature");

	UTBP_UI_DialogueInteraction_C_BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnInitialized");

	UTBP_UI_DialogueInteraction_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnClose");

	UTBP_UI_DialogueInteraction_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.Continue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::Continue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.Continue");

	UTBP_UI_DialogueInteraction_C_Continue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.CloseDialogueInteraction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::CloseDialogueInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.CloseDialogueInteraction");

	UTBP_UI_DialogueInteraction_C_CloseDialogueInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_DialogueInteraction_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnOpen");

	UTBP_UI_DialogueInteraction_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.ExecuteUbergraph_TBP_UI_DialogueInteraction
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_DialogueInteraction_C::ExecuteUbergraph_TBP_UI_DialogueInteraction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.ExecuteUbergraph_TBP_UI_DialogueInteraction");

	UTBP_UI_DialogueInteraction_C_ExecuteUbergraph_TBP_UI_DialogueInteraction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
