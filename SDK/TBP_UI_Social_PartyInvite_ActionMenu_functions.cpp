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
//		Name   -> Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.GetPartyInviteCard
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Social_PartyInvite_PlayerCard_C*     OutPlayerCard                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PartyInvite_ActionMenu_C::GetPartyInviteCard(class UTBP_UI_Social_PartyInvite_PlayerCard_C** OutPlayerCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.GetPartyInviteCard");

	UTBP_UI_Social_PartyInvite_ActionMenu_C_GetPartyInviteCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPlayerCard != nullptr)
		*OutPlayerCard = params.OutPlayerCard;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PartyInvite_ActionMenu_C::BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature");

	UTBP_UI_Social_PartyInvite_ActionMenu_C_BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PartyInvite_ActionMenu_C::BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature");

	UTBP_UI_Social_PartyInvite_ActionMenu_C_BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_PartyInvite_ActionMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PartyInvite_ActionMenu_C::ExecuteUbergraph_TBP_UI_Social_PartyInvite_ActionMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInvite_ActionMenu.TBP_UI_Social_PartyInvite_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_PartyInvite_ActionMenu");

	UTBP_UI_Social_PartyInvite_ActionMenu_C_ExecuteUbergraph_TBP_UI_Social_PartyInvite_ActionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
