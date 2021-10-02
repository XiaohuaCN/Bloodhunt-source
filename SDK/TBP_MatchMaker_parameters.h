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

// Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveBeginPlay
struct UTBP_MatchMaker_C_ReceiveBeginPlay_Params
{
};

// Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveEndPlay
struct UTBP_MatchMaker_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MatchMaker.TBP_MatchMaker_C.OnCountdownBegin
struct UTBP_MatchMaker_C_OnCountdownBegin_Params
{
};

// Function TBP_MatchMaker.TBP_MatchMaker_C.OnTitleScreenClosed
struct UTBP_MatchMaker_C_OnTitleScreenClosed_Params
{
};

// Function TBP_MatchMaker.TBP_MatchMaker_C.ExecuteUbergraph_TBP_MatchMaker
struct UTBP_MatchMaker_C_ExecuteUbergraph_TBP_MatchMaker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
