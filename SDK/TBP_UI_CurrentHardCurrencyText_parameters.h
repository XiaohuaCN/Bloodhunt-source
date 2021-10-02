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

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.GetInterpolatedPremiumCurrencyBalance
struct UTBP_UI_CurrentHardCurrencyText_C_GetInterpolatedPremiumCurrencyBalance_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAmount
struct UTBP_UI_CurrentHardCurrencyText_C_SetCurrencyAmount_Params
{
	int                                                CurrencyAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.UpdateToCurrentPlayerAmount
struct UTBP_UI_CurrentHardCurrencyText_C_UpdateToCurrentPlayerAmount_Params
{
};

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAppearance
struct UTBP_UI_CurrentHardCurrencyText_C_SetCurrencyAppearance_Params
{
};

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Construct
struct UTBP_UI_CurrentHardCurrencyText_C_Construct_Params
{
};

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnPlayerStateCreated
struct UTBP_UI_CurrentHardCurrencyText_C_OnPlayerStateCreated_Params
{
	class ATigerPlayerState*                           TigerPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnClientTransactionalPlayerDataChangedEvent
struct UTBP_UI_CurrentHardCurrencyText_C_OnClientTransactionalPlayerDataChangedEvent_Params
{
	struct FTigerPersistentPlayerTransactionalData     TransactionalPlayerData;                                   // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText
struct UTBP_UI_CurrentHardCurrencyText_C_ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
