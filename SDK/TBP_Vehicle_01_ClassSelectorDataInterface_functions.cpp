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
//		Name   -> Function TBP_Vehicle_01_ClassSelectorDataInterface.TBP_Vehicle_01_ClassSelectorDataInterface_C.GetVehicleCDO
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<ENUM_VehicleSelection_ENUM_VehicleSelection> InEnum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_Vehicle_01_DataInterface_C*             OutCDO                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Vehicle_01_ClassSelectorDataInterface_C::GetVehicleCDO(TEnumAsByte<ENUM_VehicleSelection_ENUM_VehicleSelection> InEnum, class UTBP_Vehicle_01_DataInterface_C** OutCDO)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01_ClassSelectorDataInterface.TBP_Vehicle_01_ClassSelectorDataInterface_C.GetVehicleCDO");

	UTBP_Vehicle_01_ClassSelectorDataInterface_C_GetVehicleCDO_Params params;
	params.InEnum = InEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCDO != nullptr)
		*OutCDO = params.OutCDO;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
