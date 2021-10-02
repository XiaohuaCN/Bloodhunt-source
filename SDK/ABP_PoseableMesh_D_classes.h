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

// AnimBlueprintGeneratedClass ABP_PoseableMesh_D.ABP_PoseableMesh_D_C
// 0x08A8 (FullSize[0x0BB8] - InheritedSize[0x0310])
class UABP_PoseableMesh_D_C : public UTigerCharacterPoseableMeshAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0318(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x0348(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0358(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x0378(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x0480(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x0588(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x0690(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x0798(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x08A0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x09A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0AB0(0x0108)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PoseableMesh_D.ABP_PoseableMesh_D_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_4ED989774F07DBE6EA93DAB2E5C9AA83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_6378C34B42B74098DEB925A9C0209CB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_2448B41D42362C241E6C66B576B2F1B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_CCC4E34A43447FCFF8ED8BAB08AC2247();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_8E4953BA4174CF2222C9009F8177579A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_CE5BC3EA48030A0A53BE229EB6611893();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_D670F49A4BF19098C2C23EB518151122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_D_AnimGraphNode_ModifyBone_3E73C6B1419C401D1E1FB9B51EA9FE37();
	void ExecuteUbergraph_ABP_PoseableMesh_D(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
