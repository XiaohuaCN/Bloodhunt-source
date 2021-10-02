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

// BlueprintGeneratedClass BP_LightMasterData.BP_LightMasterData_C
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UBP_LightMasterData_C : public UBP_LightMasterDataInterface_C
{
public:
	unsigned char                                      LightOffMaterial[0x10];                                    // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      LightFlickerMaterial[0x10];                                // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      LightMeshes[0x10];                                         // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      LightMaterials[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      LightIESProfiles[0x10];                                    // 0x0068(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightMasterData.BP_LightMasterData_C");
		return ptr;
	}



	void GetIESProfile(int InIndex, class UTextureLightProfile** OutIESProfile);
	void GetLightMateriales(int InIndex, class UMaterialInstance** OutMaterial);
	void GetLightMeshes(int InIndex, class UStaticMesh** OutMesh);
	void GetLightFlickerMaterial(int InIndex, class UMaterialInstance** OutMaterial);
	void GetLightOffMaterial(int InIndex, class UMaterialInstance** OutMaterial);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
