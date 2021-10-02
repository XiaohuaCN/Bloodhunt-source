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
//		Name   -> Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnPopulateInvites
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class UTigerFriendInvite*>                  InFriendInvites                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Social_FriendInviteList_C::OnPopulateInvites(TArray<class UTigerFriendInvite*> InFriendInvites)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnPopulateInvites");

	UTBP_UI_Social_FriendInviteList_C_OnPopulateInvites_Params params;
	params.InFriendInvites = InFriendInvites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteReceived
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerFriendInvite*                          InInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_FriendInviteList_C::OnInviteReceived(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteReceived");

	UTBP_UI_Social_FriendInviteList_C_OnInviteReceived_Params params;
	params.InInvite = InInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteRemoved
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerFriendInvite*                          InInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_FriendInviteList_C::OnInviteRemoved(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteRemoved");

	UTBP_UI_Social_FriendInviteList_C_OnInviteRemoved_Params params;
	params.InInvite = InInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.ExecuteUbergraph_TBP_UI_Social_FriendInviteList
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_FriendInviteList_C::ExecuteUbergraph_TBP_UI_Social_FriendInviteList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.ExecuteUbergraph_TBP_UI_Social_FriendInviteList");

	UTBP_UI_Social_FriendInviteList_C_ExecuteUbergraph_TBP_UI_Social_FriendInviteList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
