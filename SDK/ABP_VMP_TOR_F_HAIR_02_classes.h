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

// AnimBlueprintGeneratedClass ABP_VMP_TOR_F_HAIR_02.ABP_VMP_TOR_F_HAIR_02_C
// 0x2288 (FullSize[0x2540] - InheritedSize[0x02B8])
class UABP_VMP_TOR_F_HAIR_02_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_NO06[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_6MK2[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x02D0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x0710(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x0B50(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0F90(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0FB0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x0FD0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x1410(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x1850(0x0440)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x1C90(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x1CC0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x2100(0x0440)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_VMP_TOR_F_HAIR_02.ABP_VMP_TOR_F_HAIR_02_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_TOR_F_HAIR_02(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
