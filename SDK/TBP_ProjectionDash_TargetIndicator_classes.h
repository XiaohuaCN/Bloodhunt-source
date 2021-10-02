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

// BlueprintGeneratedClass TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class ATBP_ProjectionDash_TargetIndicator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
