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
//		Name   -> Function RangedOnlyStyle.RangedOnlyStyle_C.DetermineNextWeaponSlot
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerWeaponCycleDirection                   InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerWeaponSlot                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Tiger_ETigerWeaponSlot URangedOnlyStyle_C::DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, Tiger_ETigerWeaponCycleDirection InDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RangedOnlyStyle.RangedOnlyStyle_C.DetermineNextWeaponSlot");

	URangedOnlyStyle_C_DetermineNextWeaponSlot_Params params;
	params.InPlayerController = InPlayerController;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
