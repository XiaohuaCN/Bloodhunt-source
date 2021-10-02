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

// Function TBP_Ping_InventoryWantsRangedWeapon.TBP_Ping_InventoryWantsRangedWeapon_C.GetNotificationUIData
struct UTBP_Ping_InventoryWantsRangedWeapon_C_GetNotificationUIData_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerPingNotificationUIData                ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function TBP_Ping_InventoryWantsRangedWeapon.TBP_Ping_InventoryWantsRangedWeapon_C.GetIconData
struct UTBP_Ping_InventoryWantsRangedWeapon_C_GetIconData_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerPingIconData                          ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
