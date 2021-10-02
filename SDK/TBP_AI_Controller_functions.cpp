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
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.DebugStimulus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ATBP_AI_Controller_C::DebugStimulus(const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.DebugStimulus");

	ATBP_AI_Controller_C_DebugStimulus_Params params;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.HandleNonVampireStimulus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ATBP_AI_Controller_C::HandleNonVampireStimulus(const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.HandleNonVampireStimulus");

	ATBP_AI_Controller_C_HandleNonVampireStimulus_Params params;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.SyncKeysFromBlackboard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_AI_Controller_C::SyncKeysFromBlackboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.SyncKeysFromBlackboard");

	ATBP_AI_Controller_C_SyncKeysFromBlackboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Police
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_AI_Controller_C::InitBlackBoardBB_Police()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Police");

	ATBP_AI_Controller_C_InitBlackBoardBB_Police_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Civilian
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_AI_Controller_C::InitBlackBoardBB_Civilian()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Civilian");

	ATBP_AI_Controller_C_InitBlackBoardBB_Civilian_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Entity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_AI_Controller_C::InitBlackBoardBB_Entity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Entity");

	ATBP_AI_Controller_C_InitBlackBoardBB_Entity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardValues
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerNPCType                                NPC_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_AI_Controller_C::InitBlackBoardValues(Tiger_ETigerNPCType NPC_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardValues");

	ATBP_AI_Controller_C_InitBlackBoardValues_Params params;
	params.NPC_Type = NPC_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_AI_Controller_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveBeginPlay");

	ATBP_AI_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ATBP_AI_Controller_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	ATBP_AI_Controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_AI_Controller_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveAnyDamage");

	ATBP_AI_Controller_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.SetupData
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_ETigerNPCType                                InNPCType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_AI_Controller_C::SetupData(Tiger_ETigerNPCType InNPCType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.SetupData");

	ATBP_AI_Controller_C_SetupData_Params params;
	params.InNPCType = InNPCType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_Controller.TBP_AI_Controller_C.ExecuteUbergraph_TBP_AI_Controller
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_AI_Controller_C::ExecuteUbergraph_TBP_AI_Controller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_Controller.TBP_AI_Controller_C.ExecuteUbergraph_TBP_AI_Controller");

	ATBP_AI_Controller_C_ExecuteUbergraph_TBP_AI_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
