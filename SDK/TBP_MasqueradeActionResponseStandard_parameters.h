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

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.KilledNonCivilian
struct UTBP_MasqueradeActionResponseStandard_C_KilledNonCivilian_Params
{
	Tiger_ETigerAIPlayerAction                         PlayerAction;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerBaseNPC*                               NPC;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetPlayerMasqueradePointsForAction
struct UTBP_MasqueradeActionResponseStandard_C_GetPlayerMasqueradePointsForAction_Params
{
	class ATigerNPC*                                   InNpc;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                InTigerPlayer;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerAIPlayerAction                        InPlayerAction;                                            // 0x0010(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.IsActionVampiricMobility
struct UTBP_MasqueradeActionResponseStandard_C_IsActionVampiricMobility_Params
{
	Tiger_ETigerAIPlayerAction                         Action;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMobility;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValueFromJudge
struct UTBP_MasqueradeActionResponseStandard_C_GetMasqueradeValueFromJudge_Params
{
	struct FTigerAIPlayerAction                        Action;                                                    // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ATigerJudge*                                 Judge;                                                     // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                Player;                                                    // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundValue;                                                // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.CheckFearLimitsFunction
struct UTBP_MasqueradeActionResponseStandard_C_CheckFearLimitsFunction_Params
{
	float                                              CurrentFearValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerAIController*                          AI;                                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerAIMasqueradeState                      NewMasqueradeState;                                        // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.ScaleValueByDistance
struct UTBP_MasqueradeActionResponseStandard_C_ScaleValueByDistance_Params
{
	float                                              Unscaled_Value;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerBaseNPC*                               NPC;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseMasqueradeScaling;                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldScale;                                               // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ActionLocation;                                            // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledValue;                                               // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValue
struct UTBP_MasqueradeActionResponseStandard_C_GetMasqueradeValue_Params
{
	struct FTigerAIPlayerAction                        Action;                                                    // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ATigerBaseNPC*                               NPC;                                                       // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                Player;                                                    // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundValue;                                                // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValues
struct UTBP_MasqueradeActionResponseStandard_C_GetFearValues_Params
{
	Tiger_ETigerAIPlayerAction                         Action;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerAIController*                          AI;                                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<Tiger_ETigerAIPlayerAction, float>            ReturnValue;                                               // 0x0010(0x0050)  (Parm, OutParm, ReturnParm)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradePointsForFeedingAction
struct UTBP_MasqueradeActionResponseStandard_C_GetMasqueradePointsForFeedingAction_Params
{
	Tiger_ETigerAIPlayerAction                         Player_Action;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MasqueradePoints;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.AddFearPoints
struct UTBP_MasqueradeActionResponseStandard_C_AddFearPoints_Params
{
	class ATigerAIController*                          AI;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerAIPlayerAction                        PlayerAction;                                              // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              FearValue;                                                 // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                Player;                                                    // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Added_Fear_Value;                                          // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.OnReactToPlayerAction
struct UTBP_MasqueradeActionResponseStandard_C_OnReactToPlayerAction_Params
{
	class ATigerAIController*                          TigerAIController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                TigerPlayer;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerAIPlayerAction                        PlayerAction;                                              // 0x0010(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	Tiger_ETigerAIMasqueradeState                      CurrentState;                                              // 0x0068(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FearValue;                                                 // 0x006C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerAIMasqueradeState                      ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValueThresholds
struct UTBP_MasqueradeActionResponseStandard_C_GetFearValueThresholds_Params
{
	class ATigerAIController*                          AI;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Threatened;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Suspicious;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
