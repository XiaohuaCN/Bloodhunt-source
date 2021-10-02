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

// AnimBlueprintGeneratedClass ABP_PoseableMesh_C.ABP_PoseableMesh_C_C
// 0x0380 (FullSize[0x0690] - InheritedSize[0x0310])
class UABP_PoseableMesh_C_C : public UTigerCharacterPoseableMeshAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0318(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x0348(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0358(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x0378(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x0480(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0588(0x0108)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PoseableMesh_C.ABP_PoseableMesh_C_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_4436AF3F4D2DA00D79ACACA1E6B5456E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_68D7C2F3493EB5DB53413FBEDC741B7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_C_AnimGraphNode_ModifyBone_2C25BF4F4E288E810E80FF8B1F7F9F36();
	void ExecuteUbergraph_ABP_PoseableMesh_C(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
