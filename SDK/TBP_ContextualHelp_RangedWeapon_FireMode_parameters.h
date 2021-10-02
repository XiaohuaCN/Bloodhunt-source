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

// Function TBP_ContextualHelp_RangedWeapon_FireMode.TBP_ContextualHelp_RangedWeapon_FireMode_C.OnPlayerSpawned
struct UTBP_ContextualHelp_RangedWeapon_FireMode_C_OnPlayerSpawned_Params
{
	class ATigerPlayer*                                InTigerPlayer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_RangedWeapon_FireMode.TBP_ContextualHelp_RangedWeapon_FireMode_C.RangedWeaponPickedUp
struct UTBP_ContextualHelp_RangedWeapon_FireMode_C_RangedWeaponPickedUp_Params
{
};

// Function TBP_ContextualHelp_RangedWeapon_FireMode.TBP_ContextualHelp_RangedWeapon_FireMode_C.ItemPickedUp
struct UTBP_ContextualHelp_RangedWeapon_FireMode_C_ItemPickedUp_Params
{
	class UTigerItemAsset*                             Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ContextualHelp_RangedWeapon_FireMode.TBP_ContextualHelp_RangedWeapon_FireMode_C.ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_FireMode
struct UTBP_ContextualHelp_RangedWeapon_FireMode_C_ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_FireMode_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
