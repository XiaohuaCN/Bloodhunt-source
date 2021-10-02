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

// BlueprintGeneratedClass BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C
// 0x004C (FullSize[0x029C] - InheritedSize[0x0250])
class ABP_Sidewalk_Spline_01_C : public ATigerSidewalkSpline
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                            SplineComponentExample;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Spacing;                                                   // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QSXQ[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 SidewalkMesh;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Padding;                                                   // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstance*>                   OverrideMaterials;                                         // 0x0278(0x0010) (Edit, BlueprintVisible)
	bool                                               Use_padding_on_single_pieces;                              // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Use_point_rotation;                                        // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Reverse;                                                   // 0x028A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseNoCollision;                                            // 0x028B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R57Q[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHierarchicalInstancedStaticMeshComponent*   StraightMeshes;                                            // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SectionLength_Internal;                                    // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C");
		return ptr;
	}



	float GetSectionLengthBasedOnMesh(class UStaticMesh* InMesh);
	float GetReversedOffsetAmount();
	void AddSplineMeshes();
	void GetBestMeshesFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, TArray<class UStaticMesh*>* OutMeshes, float* OutCombinedLength);
	class UDA_SidewalkMeshPreset_C* LoadPreset();
	float GetMeshLength(class UStaticMesh* InMesh);
	void SetOverrideMaterialOnAllComponents();
	void GetBestMeshFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, class UStaticMesh** OutMesh);
	void HandleCollisionResponse(class UPrimitiveComponent* Mesh);
	void SetOverrideMaterial(class UPrimitiveComponent* Target);
	void OnRebuild();
	void ExecuteUbergraph_BP_Sidewalk_Spline_01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
