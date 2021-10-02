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

// AnimBlueprintGeneratedClass ABP_Vendor.ABP_Vendor_C
// 0x1EB4 (FullSize[0x22E4] - InheritedSize[0x0430])
class UABP_Vendor_C : public UTigerNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0438(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x0590(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x05B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x05E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x0608(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x0630(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x0658(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x0680(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x06A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x06D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x06F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0720(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0748(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0770(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0798(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x07C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x07F0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x0870(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x0920(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x09A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x0A20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x0AA0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x0B20(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x0BA0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x0BD0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x0C50(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x0C80(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x0D00(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x0D30(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x0DB0(0x0030)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer_2;                         // 0x0DE0(0x0098) (ContainsInstancedReference)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0E78(0x0030)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer;                           // 0x0EA8(0x0098) (ContainsInstancedReference)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x0F40(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x0FE0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1060(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x1090(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x1140(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x1200(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x1228(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5;                               // 0x1250(0x00C8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1318(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1338(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x1358(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x1460(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x1568(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x1670(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x1778(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x1880(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x18A8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x18D8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1988(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x1A28(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x1AF0(0x0080)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                               // 0x1B70(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x1C10(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x1C90(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x1CD8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x1D08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x1D88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1E08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1E88(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                               // 0x1F08(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                               // 0x1FD0(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                               // 0x2098(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x2160(0x00C8)
	class UTigerAnimationSetAsset*                     AnimationSet;                                              // 0x2228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasRandomisedIdle;                                         // 0x2230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TS6I[0x3];                                     // 0x2231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtVertical;                                            // 0x2234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookAtHorizontal;                                          // 0x2238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookAtHorizontalSlow;                                      // 0x223C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaX;                                                    // 0x2240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    LookAtHeadRotator;                                         // 0x2244(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LookAtSpineRotator;                                        // 0x2250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnimLookAtAllowed;                                         // 0x225C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasGreeted;                                                // 0x225D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CSIR[0x2];                                     // 0x225E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtTransSpeed;                                          // 0x2260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_00;                                       // 0x2264(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_01;                                       // 0x226C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_02;                                       // 0x2274(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_03;                                       // 0x227C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerDialogueIdleAnimation                  IdleType;                                                  // 0x2284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasIdleToLookAtAnim;                                       // 0x2285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasLookAtToIdleAnim;                                       // 0x2286(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DCLP[0x1];                                     // 0x2287(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, class UTigerAnimationSetAsset*> NewVar_1;                                                  // 0x2288(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsInInteraction;                                           // 0x22D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CooldownOver;                                              // 0x22D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O3KB[0x2];                                     // 0x22DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeltaTimer;                                                // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CooldownLenght;                                            // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Vendor.ABP_Vendor_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void FacialAnimations();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_B83E6FD34416943E4F60A5854B25A772();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_0BE017A94AE17BAAF196D89FD12072FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_A25B43D14DBFD4A98DAF769F4C874773();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_1D5342D0496446528003C09DBB269E06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoWayBlend_D37AF0384A4CC7B61365FCAC2705479F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_E1E4913B4DD3D5E80E701FA71626CA1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_C6E46422441151CFB7DE73AE11808333();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_05DEA6EB4D8001B9C83DAA9859859362();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_69A1CC994A59DAD9034DFD9F3CE92218();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_9F2D47874130037522611F899DBE65E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_4F53982F4D8AFB04B882ED8B664577BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_F9DE1C2A40644B4BE8FB408D4C4E30D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_F1C9743D4274E76987CAF9946F09E55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_B8C1874C41DB4EF5800C2986E763C69C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_47AD4F924ACEAB369B558F8C88A0B045();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_720622874B9BB55116BFC8BAFF52119B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_7AA39E4B4A811C4F5D8313828B169656();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_452C266742F2A56D76D96FAA41288FFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_4077772F4C55BC1FCAFD05A4F4059FA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_AD34B8E24C6E3140074A46A6D322EA05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_F832016349BE8D525619A0809B8F8B81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_1B827D5246973FDD9CECFCA7FE4A7D17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_5A33D1DB442E9E8EBEEFA98CAB18521E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_269138D6434C5FAE9B12BAB4824A9F5C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_E832D8A24F77DFF7A08BD291D1ABC4F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_83BFD29343C675CCC5E52F96EEFD0D85();
	void AddSets(class UTigerAnimationSetCollection* SetCollection);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_HasGreeted();
	void OnInitiateAnimationBlueprint();
	void ExecuteUbergraph_ABP_Vendor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
