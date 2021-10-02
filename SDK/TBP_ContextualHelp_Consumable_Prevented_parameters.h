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

// Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnPlayerSpawned
struct UTBP_ContextualHelp_Consumable_Prevented_C_OnPlayerSpawned_Params
{
	class ATigerPlayer*                                InTigerPlayer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnConsumablePrevented
struct UTBP_ContextualHelp_Consumable_Prevented_C_OnConsumablePrevented_Params
{
	class UTigerConsumableAsset*                       Consumable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented
struct UTBP_ContextualHelp_Consumable_Prevented_C_ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
