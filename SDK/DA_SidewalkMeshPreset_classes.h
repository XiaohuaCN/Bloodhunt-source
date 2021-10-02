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

// BlueprintGeneratedClass DA_SidewalkMeshPreset.DA_SidewalkMeshPreset_C
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDA_SidewalkMeshPreset_C : public UPrimaryDataAsset
{
public:
	TArray<class UStaticMesh*>                         Meshes;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DA_SidewalkMeshPreset.DA_SidewalkMeshPreset_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
