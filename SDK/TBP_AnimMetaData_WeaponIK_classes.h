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

// BlueprintGeneratedClass TBP_AnimMetaData_WeaponIK.TBP_AnimMetaData_WeaponIK_C
// 0x0002 (FullSize[0x002A] - InheritedSize[0x0028])
class UTBP_AnimMetaData_WeaponIK_C : public UAnimMetaData
{
public:
	TEnumAsByte<ENUM_WeaponIKOverride_ENUM_WeaponIKOverride> LeftHandIK_Enum;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ENUM_WeaponIKOverride_ENUM_WeaponIKOverride> RightHandIK_Enum;                                          // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_AnimMetaData_WeaponIK.TBP_AnimMetaData_WeaponIK_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
