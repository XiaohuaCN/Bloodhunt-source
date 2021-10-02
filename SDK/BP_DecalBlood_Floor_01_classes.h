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

// BlueprintGeneratedClass BP_DecalBlood_Floor_01.BP_DecalBlood_Floor_01_C
// 0x0024 (FullSize[0x024C] - InheritedSize[0x0228])
class ABP_DecalBlood_Floor_01_C : public AActor
{
public:
	class UStaticMeshComponent*                        SM_Decal_Blood_Slaughterhouse_01;                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         Decal_Meshes;                                              // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Decal_Selector;                                            // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DecalBlood_Floor_01.BP_DecalBlood_Floor_01_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
