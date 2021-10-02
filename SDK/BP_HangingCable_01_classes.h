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

// BlueprintGeneratedClass BP_HangingCable_01.BP_HangingCable_01_C
// 0x0034 (FullSize[0x025C] - InheritedSize[0x0228])
class ABP_HangingCable_01_C : public AActor
{
public:
	class USplineComponent*                            Spline;                                                    // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         Mesh_Array;                                                // 0x0230(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Spacing;                                                   // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MeshSwitch;                                                // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   Materials;                                                 // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ColorSwitch;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HangingCable_01.BP_HangingCable_01_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
