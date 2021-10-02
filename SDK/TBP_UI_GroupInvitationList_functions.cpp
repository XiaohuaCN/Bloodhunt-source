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
//		Name   -> Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.CheckIfRepeatedInviteFromPlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           Inviter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               NewInvite                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_GroupInvitationList_C::CheckIfRepeatedInviteFromPlayer(class ATigerPlayerState* Inviter, bool* NewInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.CheckIfRepeatedInviteFromPlayer");

	UTBP_UI_GroupInvitationList_C_CheckIfRepeatedInviteFromPlayer_Params params;
	params.Inviter = Inviter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewInvite != nullptr)
		*NewInvite = params.NewInvite;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.AddInvitation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerGroupInvitation                       Invitation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class ATigerPlayerState*                           Inviter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_GroupInvitationList_C::AddInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.AddInvitation");

	UTBP_UI_GroupInvitationList_C_AddInvitation_Params params;
	params.Invitation = Invitation;
	params.Inviter = Inviter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_GroupInvitationList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Tick");

	UTBP_UI_GroupInvitationList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_GroupInvitationList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Construct");

	UTBP_UI_GroupInvitationList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.ExecuteUbergraph_TBP_UI_GroupInvitationList
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_GroupInvitationList_C::ExecuteUbergraph_TBP_UI_GroupInvitationList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.ExecuteUbergraph_TBP_UI_GroupInvitationList");

	UTBP_UI_GroupInvitationList_C_ExecuteUbergraph_TBP_UI_GroupInvitationList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
