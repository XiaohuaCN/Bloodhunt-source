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

// AnimBlueprintGeneratedClass ABP_PoseableMesh_B.ABP_PoseableMesh_B_C
// 0x1610 (FullSize[0x1920] - InheritedSize[0x0310])
class UABP_PoseableMesh_B_C : public UTigerCharacterPoseableMeshAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0318(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x0348(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0358(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                               // 0x0378(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                               // 0x0480(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                               // 0x0588(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                               // 0x0690(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                               // 0x0798(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                               // 0x08A0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                               // 0x09A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                               // 0x0AB0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                               // 0x0BB8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                               // 0x0CC0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x0DC8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x0ED0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x0FD8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x10E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x11E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x12F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x13F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x1500(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x1608(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x1710(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x1818(0x0108)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PoseableMesh_B.ABP_PoseableMesh_B_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_A0E6490C41782952D5FC57B0CA5C6409();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_2DF24A0742CFB1823E811EB52E553A87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_7D31FE324CEB7845ED2E338B0E074994();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_031C2FFC46D8651BE91DEEB834E20B5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_3D2E521B4BB82E5940BFC695CF1FD7B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_D5B11FF44B026C72612FD590B0E9175F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_BB85BF9A49E573C5BBFE42A96212DFA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_ED90CC49437AEB231A70E8ACB62F224F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_EDF0D3DA4CE370E49BA4AE9DE7609185();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_F91FDD0E44CC0210D4AAC4B7735EDCF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_D6259059494DF8233BF1898DB44F880B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_396C293F45E4E8A1D0BAF1A134B7D28F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_89BEE47D4EA0774178C3BDA8229A0A42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_E7DB394D4E871F556901EFA586B2E0D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_82AA8AA84ECF664CB0ADFB8FA974A83D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_BB8B072542548DFA0A1715A1F4CEEE09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_7BE2D69A4C6C696D02FD5D9ECA5568EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_2BA46BB34BA04A290EAE659FCF773C5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_6D4535FF4C984C9B70DA03A0C758009B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_1639F39646EE2DB9D1A01EA85B0E7C9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PoseableMesh_B_AnimGraphNode_ModifyBone_22C6C0624B827331D6EBC1B662740E87();
	void ExecuteUbergraph_ABP_PoseableMesh_B(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
