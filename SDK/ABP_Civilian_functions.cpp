// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UABP_Civilian_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.AnimGraph");

	UABP_Civilian_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.AddEmotionalAnimationSet
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerAnimationSetCollection*                InSetCollection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::AddEmotionalAnimationSet(class UTigerAnimationSetCollection* InSetCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.AddEmotionalAnimationSet");

	UABP_Civilian_C_AddEmotionalAnimationSet_Params params;
	params.InSetCollection = InSetCollection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.Facial Animations
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UABP_Civilian_C::Facial_Animations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.Facial Animations");

	UABP_Civilian_C_Facial_Animations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.StopCapMontage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerAIAnimationMode                        A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::StopCapMontage(Tiger_ETigerAIAnimationMode A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.StopCapMontage");

	UABP_Civilian_C_StopCapMontage_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.HandleContextualIdle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UABP_Civilian_C::HandleContextualIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.HandleContextualIdle");

	UABP_Civilian_C_HandleContextualIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.HandleFootstepSound
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FootstepDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               LeftFoot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UABP_Civilian_C::HandleFootstepSound(float FootstepDuration, bool LeftFoot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.HandleFootstepSound");

	UABP_Civilian_C_HandleFootstepSound_Params params;
	params.FootstepDuration = FootstepDuration;
	params.LeftFoot = LeftFoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C
//		Flags  -> (BlueprintEvent)
void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C");

	UABP_Civilian_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.BlueprintUpdateAnimation");

	UABP_Civilian_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.OnInitiateAnimationBlueprint
//		Flags  -> (Event, Public, BlueprintEvent)
void UABP_Civilian_C::OnInitiateAnimationBlueprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.OnInitiateAnimationBlueprint");

	UABP_Civilian_C_OnInitiateAnimationBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.AddSets
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerAnimationSetCollection*                SetCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::AddSets(class UTigerAnimationSetCollection* SetCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.AddSets");

	UABP_Civilian_C_AddSets_Params params;
	params.SetCollection = SetCollection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FootStep_Left
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Civilian_C::AnimNotify_FootStep_Left()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FootStep_Left");

	UABP_Civilian_C_AnimNotify_FootStep_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.AnimNotify_Footstep_Right
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Civilian_C::AnimNotify_Footstep_Right()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_Footstep_Right");

	UABP_Civilian_C_AnimNotify_Footstep_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.OnFootstep
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bIsLeftFoot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              FootstepDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::OnFootstep(bool bIsLeftFoot, float FootstepDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.OnFootstep");

	UABP_Civilian_C_OnFootstep_Params params;
	params.bIsLeftFoot = bIsLeftFoot;
	params.FootstepDuration = FootstepDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.OnNpcReactionEvent
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerNpcReactionEvent                      ReactionEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UABP_Civilian_C::OnNpcReactionEvent(const struct FTigerNpcReactionEvent& ReactionEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.OnNpcReactionEvent");

	UABP_Civilian_C_OnNpcReactionEvent_Params params;
	params.ReactionEvent = ReactionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FullyRecovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Civilian_C::AnimNotify_FullyRecovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FullyRecovered");

	UABP_Civilian_C_AnimNotify_FullyRecovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.AnimNotify_ResetFeedingState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Civilian_C::AnimNotify_ResetFeedingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_ResetFeedingState");

	UABP_Civilian_C_AnimNotify_ResetFeedingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.OnAnimationModeChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_ETigerAIAnimationMode                        LastAnimationMode                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::OnAnimationModeChanged(Tiger_ETigerAIAnimationMode LastAnimationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.OnAnimationModeChanged");

	UABP_Civilian_C_OnAnimationModeChanged_Params params;
	params.LastAnimationMode = LastAnimationMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.OnBumpedByPlayerEvent
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InDirectionToPlayer                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::OnBumpedByPlayerEvent(class ATigerPlayer* InPlayer, const struct FVector& InDirectionToPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.OnBumpedByPlayerEvent");

	UABP_Civilian_C_OnBumpedByPlayerEvent_Params params;
	params.InPlayer = InPlayer;
	params.InDirectionToPlayer = InDirectionToPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.OnSettle
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerSettleEvent                           SettleEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UABP_Civilian_C::OnSettle(const struct FTigerSettleEvent& SettleEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.OnSettle");

	UABP_Civilian_C_OnSettle_Params params;
	params.SettleEvent = SettleEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Civilian.ABP_Civilian_C.ExecuteUbergraph_ABP_Civilian
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Civilian_C::ExecuteUbergraph_ABP_Civilian(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Civilian.ABP_Civilian_C.ExecuteUbergraph_ABP_Civilian");

	UABP_Civilian_C_ExecuteUbergraph_ABP_Civilian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
