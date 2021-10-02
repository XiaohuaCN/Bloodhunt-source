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

// BlueprintGeneratedClass TBP_CullingPlane.TBP_CullingPlane_C
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class ATBP_CullingPlane_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_CullingPlane;                                           // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_CullingPlane.TBP_CullingPlane_C");
		return ptr;
	}



	void EnableCullingPlanes();
	void DisableCullingPlanes();
	void ExecuteUbergraph_TBP_CullingPlane(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
