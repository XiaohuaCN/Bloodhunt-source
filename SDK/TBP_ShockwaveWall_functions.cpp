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
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StrongBarrierTrait
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isStrong                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_ShockwaveWall_C::StrongBarrierTrait(bool* isStrong)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StrongBarrierTrait");

	ATBP_ShockwaveWall_C_StrongBarrierTrait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isStrong != nullptr)
		*isStrong = params.isStrong;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.DetermineDamageOnEnemy
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class ATigerCharacter*                             InEnemyCharacter                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ATBP_ShockwaveWall_C::DetermineDamageOnEnemy(class ATigerCharacter* InEnemyCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.DetermineDamageOnEnemy");

	ATBP_ShockwaveWall_C_DetermineDamageOnEnemy_Params params;
	params.InEnemyCharacter = InEnemyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.SlowBarrierTrait
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWall_C::SlowBarrierTrait(class ATigerCharacter* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.SlowBarrierTrait");

	ATBP_ShockwaveWall_C_SlowBarrierTrait_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierImpactPlayerAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ShockwaveWall_C::PlayBarrierImpactPlayerAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierImpactPlayerAudio");

	ATBP_ShockwaveWall_C_PlayBarrierImpactPlayerAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ShockwaveWall_C::PlayBarrierAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierAudio");

	ATBP_ShockwaveWall_C_PlayBarrierAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_ShockwaveWall_C::StopBarrierAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudio");

	ATBP_ShockwaveWall_C_StopBarrierAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudioPlayImpactAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ShockwaveWall_C::StopBarrierAudioPlayImpactAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudioPlayImpactAudio");

	ATBP_ShockwaveWall_C_StopBarrierAudioPlayImpactAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.CalculateKnockbackVector
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             InHitEnemyCharacter                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ATBP_ShockwaveWall_C::CalculateKnockbackVector(class ATigerCharacter* InHitEnemyCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.CalculateKnockbackVector");

	ATBP_ShockwaveWall_C_CalculateKnockbackVector_Params params;
	params.InHitEnemyCharacter = InHitEnemyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ShockwaveWall_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveBeginPlay");

	ATBP_ShockwaveWall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnEffectBoxOverlap
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ATBP_ShockwaveWall_C::OnEffectBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnEffectBoxOverlap");

	ATBP_ShockwaveWall_C_OnEffectBoxOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWall_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveEndPlay");

	ATBP_ShockwaveWall_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWall_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveTick");

	ATBP_ShockwaveWall_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ShockwaveWall_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveDestroyed");

	ATBP_ShockwaveWall_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnShockwaveWallDestroyed
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Tiger_EShockwaveWallDestroyReason                  InDestroyReason                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWall_C::OnShockwaveWallDestroyed(Tiger_EShockwaveWallDestroyReason InDestroyReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnShockwaveWallDestroyed");

	ATBP_ShockwaveWall_C_OnShockwaveWallDestroyed_Params params;
	params.InDestroyReason = InDestroyReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnCharacterHit
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             InCharacterHit                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWall_C::OnCharacterHit(class ATigerCharacter* InCharacterHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnCharacterHit");

	ATBP_ShockwaveWall_C_OnCharacterHit_Params params;
	params.InCharacterHit = InCharacterHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ExecuteUbergraph_TBP_ShockwaveWall
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWall_C::ExecuteUbergraph_TBP_ShockwaveWall(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ExecuteUbergraph_TBP_ShockwaveWall");

	ATBP_ShockwaveWall_C_ExecuteUbergraph_TBP_ShockwaveWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
