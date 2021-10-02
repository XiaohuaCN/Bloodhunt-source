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

// BlueprintGeneratedClass TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C
// 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
class ATBP_Vfx_GroundSlam_Marker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Marker;                                                    // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C");
		return ptr;
	}



	void ToggleUIVisibility();
	void ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
