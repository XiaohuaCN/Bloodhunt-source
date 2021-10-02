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

// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.CheckIfRepeatedInviteFromPlayer
struct UTBP_UI_GroupInvitationList_C_CheckIfRepeatedInviteFromPlayer_Params
{
	class ATigerPlayerState*                           Inviter;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewInvite;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.AddInvitation
struct UTBP_UI_GroupInvitationList_C_AddInvitation_Params
{
	struct FTigerGroupInvitation                       Invitation;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class ATigerPlayerState*                           Inviter;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Tick
struct UTBP_UI_GroupInvitationList_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Construct
struct UTBP_UI_GroupInvitationList_C_Construct_Params
{
};

// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.ExecuteUbergraph_TBP_UI_GroupInvitationList
struct UTBP_UI_GroupInvitationList_C_ExecuteUbergraph_TBP_UI_GroupInvitationList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
