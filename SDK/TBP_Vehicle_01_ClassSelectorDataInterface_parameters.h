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

// Function TBP_Vehicle_01_ClassSelectorDataInterface.TBP_Vehicle_01_ClassSelectorDataInterface_C.GetVehicleCDO
struct UTBP_Vehicle_01_ClassSelectorDataInterface_C_GetVehicleCDO_Params
{
	TEnumAsByte<ENUM_VehicleSelection_ENUM_VehicleSelection> InEnum;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_Vehicle_01_DataInterface_C*             OutCDO;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
