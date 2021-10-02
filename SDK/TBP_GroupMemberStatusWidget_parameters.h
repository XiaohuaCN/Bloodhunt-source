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

// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetPlayerColor
struct UTBP_GroupMemberStatusWidget_C_SetPlayerColor_Params
{
	unsigned char                                      InPlayerIndex;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.OnPawnChanged
struct UTBP_GroupMemberStatusWidget_C_OnPawnChanged_Params
{
	class APawn*                                       New_Pawn;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateElysiumVisibility
struct UTBP_GroupMemberStatusWidget_C_UpdateElysiumVisibility_Params
{
};

// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetMember
struct UTBP_GroupMemberStatusWidget_C_SetMember_Params
{
	class ATigerPlayerState*                           InGroupMemberState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateMatchmakingReadyStatus
struct UTBP_GroupMemberStatusWidget_C_UpdateMatchmakingReadyStatus_Params
{
	bool                                               InIsReadyForMatchmaking;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.ExecuteUbergraph_TBP_GroupMemberStatusWidget
struct UTBP_GroupMemberStatusWidget_C_ExecuteUbergraph_TBP_GroupMemberStatusWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
