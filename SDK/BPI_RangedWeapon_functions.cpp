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
//		Name   -> Function BPI_RangedWeapon.BPI_RangedWeapon_C.GetRangedWeaponCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ENUM_RangedWeaponCategories_ENUM_RangedWeaponCategories> RangedWeaponCategory                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_RangedWeapon_C::GetRangedWeaponCategory(TEnumAsByte<ENUM_RangedWeaponCategories_ENUM_RangedWeaponCategories>* RangedWeaponCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_RangedWeapon.BPI_RangedWeapon_C.GetRangedWeaponCategory");

	UBPI_RangedWeapon_C_GetRangedWeaponCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RangedWeaponCategory != nullptr)
		*RangedWeaponCategory = params.RangedWeaponCategory;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
