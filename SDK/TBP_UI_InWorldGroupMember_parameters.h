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

// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.Construct
struct UTBP_UI_InWorldGroupMember_C_Construct_Params
{
};

// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnPlayerIndexChanged
struct UTBP_UI_InWorldGroupMember_C_OnPlayerIndexChanged_Params
{
	unsigned char                                      PlayerIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnLifeStatusChanged
struct UTBP_UI_InWorldGroupMember_C_OnLifeStatusChanged_Params
{
	Tiger_ETigerPlayerLifeStatus                       InLifeStatus;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.HandleRemovedGroupMember
struct UTBP_UI_InWorldGroupMember_C_HandleRemovedGroupMember_Params
{
};

// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.ExecuteUbergraph_TBP_UI_InWorldGroupMember
struct UTBP_UI_InWorldGroupMember_C_ExecuteUbergraph_TBP_UI_InWorldGroupMember_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
