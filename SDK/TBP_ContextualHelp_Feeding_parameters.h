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

// Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.OnTargetInteractionChanged
struct UTBP_ContextualHelp_Feeding_C_OnTargetInteractionChanged_Params
{
	Tiger_ETargetInteraction                           InInteraction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.OnHealthChanged
struct UTBP_ContextualHelp_Feeding_C_OnHealthChanged_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InOldHealth;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InNewHealth;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.OnPlayerSpawned
struct UTBP_ContextualHelp_Feeding_C_OnPlayerSpawned_Params
{
	class ATigerPlayer*                                InTigerPlayer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_Feeding.TBP_ContextualHelp_Feeding_C.ExecuteUbergraph_TBP_ContextualHelp_Feeding
struct UTBP_ContextualHelp_Feeding_C_ExecuteUbergraph_TBP_ContextualHelp_Feeding_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
