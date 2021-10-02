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

// AnimBlueprintGeneratedClass ABP_Paperdoll.ABP_Paperdoll_C
// 0x0AA8 (FullSize[0x0E68] - InheritedSize[0x03C0])
class UABP_Paperdoll_C : public UTigerPaperDollAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x03C8(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                               // 0x0448(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                               // 0x0510(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                               // 0x05D8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x06A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x0720(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x07A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0820(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x08A0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0968(0x0080)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                               // 0x09E8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0A88(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0B28(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x0BA8(0x0048)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer;                           // 0x0BF0(0x0098) (ContainsInstancedReference)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x0C88(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x0D50(0x00C0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0E10(0x0030)
	bool                                               bIsDefaultSequenceList;                                    // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PQD9[0x3];                                     // 0x0E41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FaceAnimSlotName00;                                        // 0x0E44(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName01;                                        // 0x0E4C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName02;                                        // 0x0E54(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName03;                                        // 0x0E5C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Start_Position;                                            // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Paperdoll.ABP_Paperdoll_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void FacialAnimations();
	void SelectAnimationSets(class UTigerAnimationSetCollection* Set_Collection);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191();
	void AddSets(class UTigerAnimationSetCollection* SetCollection);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Paperdoll(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
