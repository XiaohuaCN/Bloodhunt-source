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

// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnJoinedParty
struct ATBP_ElysiumPlayer_C_OnJoinedParty_Params
{
	struct FTigerParty                                 InParty;                                                   // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnGotPlayerState
struct ATBP_ElysiumPlayer_C_OnGotPlayerState_Params
{
};

// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnLeftParty
struct ATBP_ElysiumPlayer_C_OnLeftParty_Params
{
	struct FTigerParty                                 InParty;                                                   // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveBeginPlay
struct ATBP_ElysiumPlayer_C_ReceiveBeginPlay_Params
{
};

// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ExecuteUbergraph_TBP_ElysiumPlayer
struct ATBP_ElysiumPlayer_C_ExecuteUbergraph_TBP_ElysiumPlayer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
