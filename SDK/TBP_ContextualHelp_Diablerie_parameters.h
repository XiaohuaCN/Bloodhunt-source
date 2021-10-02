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

// Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.SetupTriggerConditions
struct UTBP_ContextualHelp_Diablerie_C_SetupTriggerConditions_Params
{
	struct FTigerContextualHelpContext                 InContext;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnClientDownedEnemyPlayer
struct UTBP_ContextualHelp_Diablerie_C_OnClientDownedEnemyPlayer_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnEnemyLifeStatusChanged
struct UTBP_ContextualHelp_Diablerie_C_OnEnemyLifeStatusChanged_Params
{
	Tiger_ETigerPlayerLifeStatus                       NewLifeStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.ExecuteUbergraph_TBP_ContextualHelp_Diablerie
struct UTBP_ContextualHelp_Diablerie_C_ExecuteUbergraph_TBP_ContextualHelp_Diablerie_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
