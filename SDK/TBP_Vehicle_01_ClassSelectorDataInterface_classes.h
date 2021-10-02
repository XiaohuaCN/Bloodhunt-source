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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Vehicle_01_ClassSelectorDataInterface.TBP_Vehicle_01_ClassSelectorDataInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBP_Vehicle_01_ClassSelectorDataInterface_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Vehicle_01_ClassSelectorDataInterface.TBP_Vehicle_01_ClassSelectorDataInterface_C");
		return ptr;
	}



	void GetVehicleCDO(TEnumAsByte<ENUM_VehicleSelection_ENUM_VehicleSelection> InEnum, class UTBP_Vehicle_01_DataInterface_C** OutCDO);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
