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
//		Name   -> Function TBP_WallJumpEffect.TBP_WallJumpEffect_C.HandleVFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UParticleSystem*                             ParticleSystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInterface*                          Decal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     VFXLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    ParticleRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    DecalRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_WallJumpEffect_C::HandleVFX(class UObject* WorldContextObject, class UParticleSystem* ParticleSystem, class UMaterialInterface* Decal, const struct FVector& VFXLocation, const struct FRotator& ParticleRotation, const struct FRotator& DecalRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WallJumpEffect.TBP_WallJumpEffect_C.HandleVFX");

	UTBP_WallJumpEffect_C_HandleVFX_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ParticleSystem = ParticleSystem;
	params.Decal = Decal;
	params.VFXLocation = VFXLocation;
	params.ParticleRotation = ParticleRotation;
	params.DecalRotation = DecalRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_WallJumpEffect.TBP_WallJumpEffect_C.ApplyWithSocket
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_WallJumpEffect_C::ApplyWithSocket(class ATigerCharacter* Character, const struct FName& SocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WallJumpEffect.TBP_WallJumpEffect_C.ApplyWithSocket");

	UTBP_WallJumpEffect_C_ApplyWithSocket_Params params;
	params.Character = Character;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_WallJumpEffect.TBP_WallJumpEffect_C.ExecuteUbergraph_TBP_WallJumpEffect
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_WallJumpEffect_C::ExecuteUbergraph_TBP_WallJumpEffect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WallJumpEffect.TBP_WallJumpEffect_C.ExecuteUbergraph_TBP_WallJumpEffect");

	UTBP_WallJumpEffect_C_ExecuteUbergraph_TBP_WallJumpEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
