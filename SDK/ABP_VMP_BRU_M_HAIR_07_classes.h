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

// AnimBlueprintGeneratedClass ABP_VMP_BRU_M_HAIR_07.ABP_VMP_BRU_M_HAIR_07_C
// 0x0908 (FullSize[0x0BC0] - InheritedSize[0x02B8])
class UABP_VMP_BRU_M_HAIR_07_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_WO5A[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	unsigned char                                      UnknownData_4XLD[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x0300(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0740(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x0760(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0BA0(0x0020)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_VMP_BRU_M_HAIR_07.ABP_VMP_BRU_M_HAIR_07_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_BRU_M_HAIR_07(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
