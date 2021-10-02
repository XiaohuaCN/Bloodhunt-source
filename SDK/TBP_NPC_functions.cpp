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
//		Name   -> Function TBP_NPC.TBP_NPC_C.RemoveAwarenessParticle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_C::RemoveAwarenessParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.RemoveAwarenessParticle");

	ATBP_NPC_C_RemoveAwarenessParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.GetStencilIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::GetStencilIndex(int* OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.GetStencilIndex");

	ATBP_NPC_C_GetStencilIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.ResetEntityVisor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::ResetEntityVisor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.ResetEntityVisor");

	ATBP_NPC_C_ResetEntityVisor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.MakeEntityVisorVisibleInHS
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_C::MakeEntityVisorVisibleInHS()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.MakeEntityVisorVisibleInHS");

	ATBP_NPC_C_MakeEntityVisorVisibleInHS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.SetPotencyParticleActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_NPC_C::SetPotencyParticleActive(bool InIsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.SetPotencyParticleActive");

	ATBP_NPC_C_SetPotencyParticleActive_Params params;
	params.InIsActive = InIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.DisableScreenCullSize
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_C::DisableScreenCullSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.DisableScreenCullSize");

	ATBP_NPC_C_DisableScreenCullSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.InitHealthBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_C::InitHealthBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.InitHealthBar");

	ATBP_NPC_C_InitHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.UpdateOutlineParameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_C::UpdateOutlineParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.UpdateOutlineParameters");

	ATBP_NPC_C_UpdateOutlineParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.RemoveHighPotenceBloodSoundComp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::RemoveHighPotenceBloodSoundComp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.RemoveHighPotenceBloodSoundComp");

	ATBP_NPC_C_RemoveHighPotenceBloodSoundComp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.CreateHighPotenceBloodSoundComp
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_C::CreateHighPotenceBloodSoundComp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.CreateHighPotenceBloodSoundComp");

	ATBP_NPC_C_CreateHighPotenceBloodSoundComp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.UserConstructionScript");

	ATBP_NPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_NPC_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.Timeline_0__FinishedFunc");

	ATBP_NPC_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_NPC_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.Timeline_0__UpdateFunc");

	ATBP_NPC_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.Timeline_1__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_NPC_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.Timeline_1__FinishedFunc");

	ATBP_NPC_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.Timeline_1__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_NPC_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.Timeline_1__UpdateFunc");

	ATBP_NPC_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_NPC_C::TimelineHeightenedSenses__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__FinishedFunc");

	ATBP_NPC_C_TimelineHeightenedSenses__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_NPC_C::TimelineHeightenedSenses__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__UpdateFunc");

	ATBP_NPC_C_TimelineHeightenedSenses__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.SpawnBloodDecal
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_NPC_C::SpawnBloodDecal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.SpawnBloodDecal");

	ATBP_NPC_C_SpawnBloodDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnLeaveHeightenedSenseArea
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::OnLeaveHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnLeaveHeightenedSenseArea");

	ATBP_NPC_C_OnLeaveHeightenedSenseArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseArea
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::OnEnterHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseArea");

	ATBP_NPC_C_OnEnterHeightenedSenseArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseAreaInitial
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::OnEnterHeightenedSenseAreaInitial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseAreaInitial");

	ATBP_NPC_C_OnEnterHeightenedSenseAreaInitial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnPlayMeleeHitEffects
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UTigerMeleeWeapon*                           WeaponHitBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ImpactLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     HitDirection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::OnPlayMeleeHitEffects(class UTigerMeleeWeapon* WeaponHitBy, const struct FVector& ImpactLocation, const struct FVector& HitDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnPlayMeleeHitEffects");

	ATBP_NPC_C_OnPlayMeleeHitEffects_Params params;
	params.WeaponHitBy = WeaponHitBy;
	params.ImpactLocation = ImpactLocation;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnBloodPotencyChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Tiger_ETigerBloodPotency                           InBloodPotency                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::OnBloodPotencyChanged(Tiger_ETigerBloodPotency InBloodPotency)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnBloodPotencyChanged");

	ATBP_NPC_C_OnBloodPotencyChanged_Params params;
	params.InBloodPotency = InBloodPotency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.ReceiveEndPlay");

	ATBP_NPC_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.PickHeartMeshes
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::PickHeartMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.PickHeartMeshes");

	ATBP_NPC_C_PickHeartMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnShowDamageAmount
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InHitLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InDamageColor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InTotalDamageAmount                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InHealthDamageAmount                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInHasExtraHealth                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bInHasShield                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              InRangedDamageFalloffPercent                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::OnShowDamageAmount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnShowDamageAmount");

	ATBP_NPC_C_OnShowDamageAmount_Params params;
	params.InHitLocation = InHitLocation;
	params.InDamageColor = InDamageColor;
	params.InTotalDamageAmount = InTotalDamageAmount;
	params.InHealthDamageAmount = InHealthDamageAmount;
	params.bInHasExtraHealth = bInHasExtraHealth;
	params.bInHasShield = bInHasShield;
	params.InRangedDamageFalloffPercent = InRangedDamageFalloffPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_NPC_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.ReceiveBeginPlay");

	ATBP_NPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnDeath
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::OnDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnDeath");

	ATBP_NPC_C_OnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.ReceiveAnyDamage");

	ATBP_NPC_C_ReceiveAnyDamage_Params params;
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
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnGainedSightOfLocalPlayer
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::OnGainedSightOfLocalPlayer(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnGainedSightOfLocalPlayer");

	ATBP_NPC_C_OnGainedSightOfLocalPlayer_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnLostSightOfLocalPlayer
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::OnLostSightOfLocalPlayer(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnLostSightOfLocalPlayer");

	ATBP_NPC_C_OnLostSightOfLocalPlayer_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		Tiger_ETigerOutlineMode                            HighestPrioOutline                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature(Tiger_ETigerOutlineMode HighestPrioOutline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature");

	ATBP_NPC_C_BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature_Params params;
	params.HighestPrioOutline = HighestPrioOutline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnBecameClosestNpcWithPotencyInHeightenedSenses
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_NPC_C::OnBecameClosestNpcWithPotencyInHeightenedSenses()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnBecameClosestNpcWithPotencyInHeightenedSenses");

	ATBP_NPC_C_OnBecameClosestNpcWithPotencyInHeightenedSenses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_NPC_C::OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses");

	ATBP_NPC_C_OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnLocalPlayerUsedHS
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsNowActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_NPC_C::OnLocalPlayerUsedHS(bool bIsNowActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnLocalPlayerUsedHS");

	ATBP_NPC_C_OnLocalPlayerUsedHS_Params params;
	params.bIsNowActive = bIsNowActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.ToggleUIVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.ToggleUIVisibility");

	ATBP_NPC_C_ToggleUIVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnFeedingStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FeedingTicksLeft                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxFeedingTicks                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::OnFeedingStart(int FeedingTicksLeft, int MaxFeedingTicks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnFeedingStart");

	ATBP_NPC_C_OnFeedingStart_Params params;
	params.FeedingTicksLeft = FeedingTicksLeft;
	params.MaxFeedingTicks = MaxFeedingTicks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnFeedingEnd
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_NPC_C::OnFeedingEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnFeedingEnd");

	ATBP_NPC_C_OnFeedingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.OnSawLocalPlayerBreachMasquerade
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_NPC_C::OnSawLocalPlayerBreachMasquerade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.OnSawLocalPlayerBreachMasquerade");

	ATBP_NPC_C_OnSawLocalPlayerBreachMasquerade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC.TBP_NPC_C.ExecuteUbergraph_TBP_NPC
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_C::ExecuteUbergraph_TBP_NPC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC.TBP_NPC_C.ExecuteUbergraph_TBP_NPC");

	ATBP_NPC_C_ExecuteUbergraph_TBP_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
