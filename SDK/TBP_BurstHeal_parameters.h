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

// Function TBP_BurstHeal.TBP_BurstHeal_C.OnCreated
struct UTBP_BurstHeal_C_OnCreated_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InHasAuthority;                                            // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_BurstHeal.TBP_BurstHeal_C.Character Action
struct UTBP_BurstHeal_C_Character_Action_Params
{
	Tiger_ETigerCharacterAction                        InCharacterAction;                                         // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BurstHeal.TBP_BurstHeal_C.ExecuteUbergraph_TBP_BurstHeal
struct UTBP_BurstHeal_C_ExecuteUbergraph_TBP_BurstHeal_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
