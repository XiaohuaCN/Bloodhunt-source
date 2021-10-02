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
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldAddAsFriend
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bCouldAdd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_Elysium_ActionMenu_C::CouldAddAsFriend(bool* bCouldAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldAddAsFriend");

	UTBP_UI_Social_Elysium_ActionMenu_C_CouldAddAsFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bCouldAdd != nullptr)
		*bCouldAdd = params.bCouldAdd;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldInviteToParty
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bCouldInvite                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_Elysium_ActionMenu_C::CouldInviteToParty(bool* bCouldInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldInviteToParty");

	UTBP_UI_Social_Elysium_ActionMenu_C_CouldInviteToParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bCouldInvite != nullptr)
		*bCouldInvite = params.bCouldInvite;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.GetElysiumPlayerCard
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Social_Elysium_PlayerCard_C*         OutPlayerCard                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Elysium_ActionMenu_C::GetElysiumPlayerCard(class UTBP_UI_Social_Elysium_PlayerCard_C** OutPlayerCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.GetElysiumPlayerCard");

	UTBP_UI_Social_Elysium_ActionMenu_C_GetElysiumPlayerCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPlayerCard != nullptr)
		*OutPlayerCard = params.OutPlayerCard;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_Elysium_ActionMenu_C::BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature");

	UTBP_UI_Social_Elysium_ActionMenu_C_BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_Elysium_ActionMenu_C::BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature");

	UTBP_UI_Social_Elysium_ActionMenu_C_BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Social_Elysium_ActionMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Construct");

	UTBP_UI_Social_Elysium_ActionMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Elysium_ActionMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Tick");

	UTBP_UI_Social_Elysium_ActionMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Elysium_ActionMenu_C::ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu");

	UTBP_UI_Social_Elysium_ActionMenu_C_ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
