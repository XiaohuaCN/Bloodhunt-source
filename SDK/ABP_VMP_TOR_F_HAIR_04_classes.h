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

// AnimBlueprintGeneratedClass ABP_VMP_TOR_F_HAIR_04.ABP_VMP_TOR_F_HAIR_04_C
// 0x1188 (FullSize[0x1440] - InheritedSize[0x02B8])
class UABP_VMP_TOR_F_HAIR_04_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_J1YZ[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x02C8(0x0020)
	unsigned char                                      UnknownData_HNTM[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x02F0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x0730(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x0B70(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x0FB0(0x0440)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x13F0(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1420(0x0020)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_VMP_TOR_F_HAIR_04.ABP_VMP_TOR_F_HAIR_04_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_TOR_F_HAIR_04(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
