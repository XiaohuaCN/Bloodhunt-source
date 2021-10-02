// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Ping_InventoryWantsRangedWeapon.TBP_Ping_InventoryWantsRangedWeapon_C.GetNotificationUIData
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerPingNotificationUIData                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FTigerPingNotificationUIData UTBP_Ping_InventoryWantsRangedWeapon_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_InventoryWantsRangedWeapon.TBP_Ping_InventoryWantsRangedWeapon_C.GetNotificationUIData");

	UTBP_Ping_InventoryWantsRangedWeapon_C_GetNotificationUIData_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Ping_InventoryWantsRangedWeapon.TBP_Ping_InventoryWantsRangedWeapon_C.GetIconData
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerPingIconData                          ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor)
struct FTigerPingIconData UTBP_Ping_InventoryWantsRangedWeapon_C::GetIconData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_InventoryWantsRangedWeapon.TBP_Ping_InventoryWantsRangedWeapon_C.GetIconData");

	UTBP_Ping_InventoryWantsRangedWeapon_C_GetIconData_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
