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
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableRemoveFriend
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldEnable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_Friend_ActionMenu_C::ShouldEnableRemoveFriend(bool* bShouldEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableRemoveFriend");

	UTBP_UI_Social_Friend_ActionMenu_C_ShouldEnableRemoveFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShouldEnable != nullptr)
		*bShouldEnable = params.bShouldEnable;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableGroupInvite
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldEnable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_Friend_ActionMenu_C::ShouldEnableGroupInvite(bool* bShouldEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableGroupInvite");

	UTBP_UI_Social_Friend_ActionMenu_C_ShouldEnableGroupInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShouldEnable != nullptr)
		*bShouldEnable = params.bShouldEnable;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.GetFriendPlayerCard
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Social_Friend_PlayerCard_C*          OutPlayerCard                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_ActionMenu_C::GetFriendPlayerCard(class UTBP_UI_Social_Friend_PlayerCard_C** OutPlayerCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.GetFriendPlayerCard");

	UTBP_UI_Social_Friend_ActionMenu_C_GetFriendPlayerCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPlayerCard != nullptr)
		*OutPlayerCard = params.OutPlayerCard;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_Friend_ActionMenu_C::BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature");

	UTBP_UI_Social_Friend_ActionMenu_C_BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Social_Friend_ActionMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Construct");

	UTBP_UI_Social_Friend_ActionMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_ActionMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Tick");

	UTBP_UI_Social_Friend_ActionMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_Friend_ActionMenu_C::BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature");

	UTBP_UI_Social_Friend_ActionMenu_C_BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_ActionMenu_C::ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu");

	UTBP_UI_Social_Friend_ActionMenu_C_ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
