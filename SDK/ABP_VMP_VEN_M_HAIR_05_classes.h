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

// AnimBlueprintGeneratedClass ABP_VMP_VEN_M_HAIR_05.ABP_VMP_VEN_M_HAIR_05_C
// 0x3388 (FullSize[0x3640] - InheritedSize[0x02B8])
class UABP_VMP_VEN_M_HAIR_05_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_QVN8[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	unsigned char                                      UnknownData_LQA0[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x0300(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0740(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x0760(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x0BA0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x0FE0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x1420(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x1860(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1CA0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x1CC0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x2100(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x2540(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x2980(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x2DC0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x3200(0x0440)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_VMP_VEN_M_HAIR_05.ABP_VMP_VEN_M_HAIR_05_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_VEN_M_HAIR_05(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
