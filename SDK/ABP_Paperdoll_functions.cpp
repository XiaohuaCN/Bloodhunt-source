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
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UABP_Paperdoll_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.AnimGraph");

	UABP_Paperdoll_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.FacialAnimations
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UABP_Paperdoll_C::FacialAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.FacialAnimations");

	UABP_Paperdoll_C_FacialAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.SelectAnimationSets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerAnimationSetCollection*                Set_Collection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Paperdoll_C::SelectAnimationSets(class UTigerAnimationSetCollection* Set_Collection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.SelectAnimationSets");

	UABP_Paperdoll_C_SelectAnimationSets_Params params;
	params.Set_Collection = Set_Collection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2
//		Flags  -> (BlueprintEvent)
void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2");

	UABP_Paperdoll_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705
//		Flags  -> (BlueprintEvent)
void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705");

	UABP_Paperdoll_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F
//		Flags  -> (BlueprintEvent)
void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F");

	UABP_Paperdoll_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3
//		Flags  -> (BlueprintEvent)
void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3");

	UABP_Paperdoll_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107
//		Flags  -> (BlueprintEvent)
void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107");

	UABP_Paperdoll_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191
//		Flags  -> (BlueprintEvent)
void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191");

	UABP_Paperdoll_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.AddSets
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerAnimationSetCollection*                SetCollection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Paperdoll_C::AddSets(class UTigerAnimationSetCollection* SetCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.AddSets");

	UABP_Paperdoll_C_AddSets_Params params;
	params.SetCollection = SetCollection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Paperdoll_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintUpdateAnimation");

	UABP_Paperdoll_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintInitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UABP_Paperdoll_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintInitializeAnimation");

	UABP_Paperdoll_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Paperdoll.ABP_Paperdoll_C.ExecuteUbergraph_ABP_Paperdoll
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Paperdoll_C::ExecuteUbergraph_ABP_Paperdoll(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Paperdoll.ABP_Paperdoll_C.ExecuteUbergraph_ABP_Paperdoll");

	UABP_Paperdoll_C_ExecuteUbergraph_ABP_Paperdoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
