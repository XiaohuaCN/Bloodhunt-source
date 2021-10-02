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

// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Open
struct UTBP_UI_Social_PartyInviteList_C_Open_Params
{
};

// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Close
struct UTBP_UI_Social_PartyInviteList_C_Close_Params
{
};

// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteReceived
struct UTBP_UI_Social_PartyInviteList_C_OnInviteReceived_Params
{
	class UTigerPartyInvite*                           InInvite;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteRemoved
struct UTBP_UI_Social_PartyInviteList_C_OnInviteRemoved_Params
{
	class UTigerPartyInvite*                           InInvite;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.ExecuteUbergraph_TBP_UI_Social_PartyInviteList
struct UTBP_UI_Social_PartyInviteList_C_ExecuteUbergraph_TBP_UI_Social_PartyInviteList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
