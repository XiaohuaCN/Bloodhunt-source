#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnPopulateInvites
struct UTBP_UI_Social_FriendInviteList_C_OnPopulateInvites_Params
{
	TArray<class UTigerFriendInvite*>                  InFriendInvites;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteReceived
struct UTBP_UI_Social_FriendInviteList_C_OnInviteReceived_Params
{
	class UTigerFriendInvite*                          InInvite;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteRemoved
struct UTBP_UI_Social_FriendInviteList_C_OnInviteRemoved_Params
{
	class UTigerFriendInvite*                          InInvite;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.ExecuteUbergraph_TBP_UI_Social_FriendInviteList
struct UTBP_UI_Social_FriendInviteList_C_ExecuteUbergraph_TBP_UI_Social_FriendInviteList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
