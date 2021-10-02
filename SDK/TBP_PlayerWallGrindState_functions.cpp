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
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.AssignPhysicalMaterial
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FName                                       BoneName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::AssignPhysicalMaterial(const struct FHitResult& Hit, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.AssignPhysicalMaterial");

	UTBP_PlayerWallGrindState_C_AssignPhysicalMaterial_Params params;
	params.Hit = Hit;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CheckForParticleSystemUpdate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::CheckForParticleSystemUpdate(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CheckForParticleSystemUpdate");

	UTBP_PlayerWallGrindState_C_CheckForParticleSystemUpdate_Params params;
	params.BoneName = BoneName;
	params.HitResult = HitResult;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.DestroyParticleSystem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       BoneName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::DestroyParticleSystem(const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.DestroyParticleSystem");

	UTBP_PlayerWallGrindState_C_DestroyParticleSystem_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CreateParticleSystem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::CreateParticleSystem(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CreateParticleSystem");

	UTBP_PlayerWallGrindState_C_CreateParticleSystem_Params params;
	params.BoneName = BoneName;
	params.HitResult = HitResult;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StartEffect
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FName                                       InAssociatedBoneName                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  InHitResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class ATigerCharacter*                             InTigerCharacter                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::StartEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StartEffect");

	UTBP_PlayerWallGrindState_C_StartEffect_Params params;
	params.InAssociatedBoneName = InAssociatedBoneName;
	params.InHitResult = InHitResult;
	params.InTigerCharacter = InTigerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StopEffect
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FName                                       InAssociatedBoneName                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             InTigerCharacter                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::StopEffect(const struct FName& InAssociatedBoneName, class ATigerCharacter* InTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StopEffect");

	UTBP_PlayerWallGrindState_C_StopEffect_Params params;
	params.InAssociatedBoneName = InAssociatedBoneName;
	params.InTigerCharacter = InTigerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.UpdateEffect
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FName                                       InAssociatedBoneName                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  InHitResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class ATigerCharacter*                             InTigerCharacter                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::UpdateEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.UpdateEffect");

	UTBP_PlayerWallGrindState_C_UpdateEffect_Params params;
	params.InAssociatedBoneName = InAssociatedBoneName;
	params.InHitResult = InHitResult;
	params.InTigerCharacter = InTigerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.ExecuteUbergraph_TBP_PlayerWallGrindState
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerWallGrindState_C::ExecuteUbergraph_TBP_PlayerWallGrindState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.ExecuteUbergraph_TBP_PlayerWallGrindState");

	UTBP_PlayerWallGrindState_C_ExecuteUbergraph_TBP_PlayerWallGrindState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
