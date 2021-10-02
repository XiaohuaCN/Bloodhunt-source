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
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnExtra
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_Friend_PlayerCard_C::OnExtra()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnExtra");

	UTBP_UI_Social_Friend_PlayerCard_C_OnExtra_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnAdd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_Friend_PlayerCard_C::OnAdd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnAdd");

	UTBP_UI_Social_Friend_PlayerCard_C_OnAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnLocationChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_PlayerCard_C::OnLocationChanged(const struct FString& InLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnLocationChanged");

	UTBP_UI_Social_Friend_PlayerCard_C_OnLocationChanged_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.InviteToParty
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Friend_PlayerCard_C::InviteToParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.InviteToParty");

	UTBP_UI_Social_Friend_PlayerCard_C_InviteToParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.RemoveFriend
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Friend_PlayerCard_C::RemoveFriend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.RemoveFriend");

	UTBP_UI_Social_Friend_PlayerCard_C_RemoveFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Update
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Friend_PlayerCard_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Update");

	UTBP_UI_Social_Friend_PlayerCard_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Social_Friend_PlayerCard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Construct");

	UTBP_UI_Social_Friend_PlayerCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ReEnableInviteFriendButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_Friend_PlayerCard_C::ReEnableInviteFriendButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ReEnableInviteFriendButton");

	UTBP_UI_Social_Friend_PlayerCard_C_ReEnableInviteFriendButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_PlayerCard_C::ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard");

	UTBP_UI_Social_Friend_PlayerCard_C_ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
