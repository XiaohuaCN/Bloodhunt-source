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

// AnimBlueprintGeneratedClass ABP_Civilian.ABP_Civilian_C
// 0x3A50 (FullSize[0x3E80] - InheritedSize[0x0430])
class UABP_Civilian_C : public UTigerNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x0438(0x00C0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x04F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x0520(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x0548(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x05C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x05F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x0678(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x06A8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x0728(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x0758(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x0808(0x00A0)
	struct FTigerFilteredLayeredBlend                  TigerAnimGraphNode_FilteredLayeredBlending;                // 0x08A8(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x0970(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                      // 0x0998(0x0048)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer;                           // 0x09E0(0x0098) (ContainsInstancedReference)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x0A78(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                            // 0x0AA0(0x0158)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0BF8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x0C28(0x00C0)
	unsigned char                                      UnknownData_FKMS[0x8];                                     // 0x0CE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                 // 0x0CF0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x0ED0(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                     // 0x10B0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                     // 0x10D0(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                      // 0x10F0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x1138(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0x1160(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x12B8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x1358(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x1380(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                      // 0x1400(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x1448(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x15A0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x15E8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x1740(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x1768(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x18C0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x18E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x1930(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x1958(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x1980(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x19A8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                               // 0x19D0(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x1AD8(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                     // 0x1B58(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                     // 0x1B78(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x1B98(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x1BC8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x1C88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x1D08(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x1D88(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x1DB8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x1E78(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x1EF8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x1F78(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x1FA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x1FD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x1FF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x2020(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x2048(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x2070(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x2098(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x20C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x20E8(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x2168(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x2188(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                               // 0x21A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                               // 0x22B0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                               // 0x23B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                               // 0x24C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                               // 0x25C8(0x0108)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x26D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x2700(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x2780(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x27A0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                               // 0x27C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                               // 0x28C8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                               // 0x29D0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                               // 0x2AD8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x2BE0(0x0108)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x2CE8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x2D18(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x2D98(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x2DB8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x2DD8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x2EE0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x2FE8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x30F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x31F8(0x0108)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x3300(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x3330(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x3350(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x3370(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x3478(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x3580(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x3688(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x3790(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x3898(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x3918(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x3948(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x39C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x39F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x3A98(0x0080)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                                // 0x3B18(0x0090)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x3BA8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x3BF0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x3C20(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x3CD0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x3D00(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x3DB0(0x0028)
	bool                                               bIsDedicatedServer;                                        // 0x3DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W5WQ[0x3];                                     // 0x3DD9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LeftFootstepPosition;                                      // 0x3DDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftFootstepTime;                                          // 0x3DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightFootstepTime;                                         // 0x3DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RightFootstepPosition;                                     // 0x3DF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CharacterRotation;                                         // 0x3DFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawDelta;                                                  // 0x3E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaX;                                                    // 0x3E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YawDeltaSmooth;                                            // 0x3E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBeingFeedOn;                                             // 0x3E14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsRecovering;                                              // 0x3E15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullyRecoverd;                                             // 0x3E16(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InContextIdle;                                             // 0x3E17(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       CachedContextBasedIdle;                                    // 0x3E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHoldingProp;                                             // 0x3E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RMIA[0x3];                                     // 0x3E21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FaceAnimSlotName_00;                                       // 0x3E24(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_01;                                       // 0x3E2C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_02;                                       // 0x3E34(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_03;                                       // 0x3E3C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    LookAtSpineRotator;                                        // 0x3E44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LookAtHeadRotator;                                         // 0x3E50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LookAtVertical;                                            // 0x3E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookAtHorizontal;                                          // 0x3E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookAtHorizontalSlow;                                      // 0x3E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawDelta;                                               // 0x3E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed_Smooth;                                              // 0x3E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                        React_Montage;                                             // 0x3E70(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Civilian.ABP_Civilian_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void AddEmotionalAnimationSet(class UTigerAnimationSetCollection* InSetCollection);
	void Facial_Animations();
	void StopCapMontage(Tiger_ETigerAIAnimationMode A);
	void HandleContextualIdle();
	void HandleFootstepSound(float FootstepDuration, bool LeftFoot);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnInitiateAnimationBlueprint();
	void AddSets(class UTigerAnimationSetCollection* SetCollection);
	void AnimNotify_FootStep_Left();
	void AnimNotify_Footstep_Right();
	void OnFootstep(bool bIsLeftFoot, float FootstepDuration);
	void OnNpcReactionEvent(const struct FTigerNpcReactionEvent& ReactionEvent);
	void AnimNotify_FullyRecovered();
	void AnimNotify_ResetFeedingState();
	void OnAnimationModeChanged(Tiger_ETigerAIAnimationMode LastAnimationMode);
	void OnBumpedByPlayerEvent(class ATigerPlayer* InPlayer, const struct FVector& InDirectionToPlayer);
	void OnSettle(const struct FTigerSettleEvent& SettleEvent);
	void ExecuteUbergraph_ABP_Civilian(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
