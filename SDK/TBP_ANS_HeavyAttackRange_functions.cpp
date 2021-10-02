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
//		Name   -> Function TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C.OnChargeUpEnded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerMeleeWeapon*                           EquippedWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ChargeUpRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ANS_HeavyAttackRange_C::OnChargeUpEnded(class ATigerPlayer* Player, class UTigerMeleeWeapon* EquippedWeapon, float ChargeUpRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C.OnChargeUpEnded");

	UTBP_ANS_HeavyAttackRange_C_OnChargeUpEnded_Params params;
	params.Player = Player;
	params.EquippedWeapon = EquippedWeapon;
	params.ChargeUpRatio = ChargeUpRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C.Received_NotifyBegin
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_ANS_HeavyAttackRange_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C.Received_NotifyBegin");

	UTBP_ANS_HeavyAttackRange_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
