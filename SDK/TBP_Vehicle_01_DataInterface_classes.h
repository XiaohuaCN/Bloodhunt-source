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

// BlueprintGeneratedClass TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C
// 0x000D (FullSize[0x0035] - InheritedSize[0x0028])
class UTBP_Vehicle_01_DataInterface_C : public UObject
{
public:
	bool                                               Bounceable;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Squashable;                                                // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasCarAlam;                                                // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanBeTinted;                                               // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LandAnywhereCrushAll;                                      // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_25Q0[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HowManyCrushZones;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasTwoExteriorMaterials;                                   // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C");
		return ptr;
	}



	void GetBrandingMaterial(int InIndex, class UMaterialInstance** OutMaterial);
	void GetLootableAsset(class UClass** OutAsset);
	void GetBodyMesh(class UStaticMesh** OutMesh);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
