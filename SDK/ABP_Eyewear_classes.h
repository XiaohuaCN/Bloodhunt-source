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

// AnimBlueprintGeneratedClass ABP_Eyewear.ABP_Eyewear_C
// 0x0380 (FullSize[0x07D0] - InheritedSize[0x0450])
class UABP_Eyewear_C : public UTigerEyewearAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x0458(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x0560(0x0108)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x0668(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0678(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0698(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x07A0(0x0030)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Eyewear.ABP_Eyewear_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_75CEAA9341A2E5F5BEDC008475ECB15D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_CA255A0D46EF5803406ADD9DD0BAF21D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Eyewear_AnimGraphNode_ModifyBone_9030559C422CA45A834828A0869B1D21();
	void ExecuteUbergraph_ABP_Eyewear(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
