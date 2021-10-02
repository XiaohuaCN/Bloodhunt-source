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

// BlueprintGeneratedClass BP_LightMasterDataInterface.BP_LightMasterDataInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_LightMasterDataInterface_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightMasterDataInterface.BP_LightMasterDataInterface_C");
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
