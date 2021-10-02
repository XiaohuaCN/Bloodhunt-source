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
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Location & Rotation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_EarthShock_C::Set_Indicator_Location___Rotation(const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Location & Rotation");

	UTBP_EarthShock_C_Set_Indicator_Location___Rotation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Visibility
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Has_Valid_Target_Location                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_EarthShock_C::Set_Indicator_Visibility(bool Has_Valid_Target_Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Visibility");

	UTBP_EarthShock_C_Set_Indicator_Visibility_Params params;
	params.Has_Valid_Target_Location = Has_Valid_Target_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.Spawn Impact VFX Actor Check
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_EarthShock_C::Spawn_Impact_VFX_Actor_Check()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.Spawn Impact VFX Actor Check");

	UTBP_EarthShock_C_Spawn_Impact_VFX_Actor_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.Set Variables
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Target_Is_Wall                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    Calculated_Rotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Calculated_Position                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Base_Position                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_EarthShock_C::Set_Variables(bool Target_Is_Wall, const struct FRotator& Calculated_Rotation, const struct FVector& Calculated_Position, const struct FVector& Base_Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.Set Variables");

	UTBP_EarthShock_C_Set_Variables_Params params;
	params.Target_Is_Wall = Target_Is_Wall;
	params.Calculated_Rotation = Calculated_Rotation;
	params.Calculated_Position = Calculated_Position;
	params.Base_Position = Base_Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.CalculateConeDirection
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_EarthShock_C::CalculateConeDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.CalculateConeDirection");

	UTBP_EarthShock_C_CalculateConeDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.CalculateKnockbackForce
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class ATigerCharacter*                             InHitCharacter                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_EarthShock_C::CalculateKnockbackForce(class ATigerCharacter* InHitCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.CalculateKnockbackForce");

	UTBP_EarthShock_C_CalculateKnockbackForce_Params params;
	params.InHitCharacter = InHitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.EvaluateIsTargetLocationValid
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		bool                                               bIsWall                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  InHitSurface                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_EarthShock_C::EvaluateIsTargetLocationValid(bool bIsWall, const struct FHitResult& InHitSurface)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.EvaluateIsTargetLocationValid");

	UTBP_EarthShock_C_EvaluateIsTargetLocationValid_Params params;
	params.bIsWall = bIsWall;
	params.InHitSurface = InHitSurface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.GetLeapTime
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FVector                                     InLeapVector                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTBP_EarthShock_C::GetLeapTime(const struct FVector& InLeapVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.GetLeapTime");

	UTBP_EarthShock_C_GetLeapTime_Params params;
	params.InLeapVector = InLeapVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.CalculateDecalLocationAndRotation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     SurfaceNormal                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     DecalOffset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_EarthShock_C::CalculateDecalLocationAndRotation(const struct FVector& TargetLocation, const struct FVector& SurfaceNormal, struct FRotator* Rotation, struct FVector* DecalOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.CalculateDecalLocationAndRotation");

	UTBP_EarthShock_C_CalculateDecalLocationAndRotation_Params params;
	params.TargetLocation = TargetLocation;
	params.SurfaceNormal = SurfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (DecalOffset != nullptr)
		*DecalOffset = params.DecalOffset;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.OnLanded
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InSurfaceNormal                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInTargetIsWall                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_EarthShock_C::OnLanded(const struct FVector& InLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.OnLanded");

	UTBP_EarthShock_C_OnLanded_Params params;
	params.InLocation = InLocation;
	params.InSurfaceNormal = InSurfaceNormal;
	params.bInTargetIsWall = bInTargetIsWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.OnRemoveTargetIndicator
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_EarthShock_C::OnRemoveTargetIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.OnRemoveTargetIndicator");

	UTBP_EarthShock_C_OnRemoveTargetIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.OnSpawnTargetIndicator
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_EarthShock_C::OnSpawnTargetIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.OnSpawnTargetIndicator");

	UTBP_EarthShock_C_OnSpawnTargetIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.OnTargetIndicatorUpdated
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bInHasTargetLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     InTargetLocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InSurfaceNormal                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInTargetIsWall                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_EarthShock_C::OnTargetIndicatorUpdated(bool bInHasTargetLocation, const struct FVector& InTargetLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.OnTargetIndicatorUpdated");

	UTBP_EarthShock_C_OnTargetIndicatorUpdated_Params params;
	params.bInHasTargetLocation = bInHasTargetLocation;
	params.InTargetLocation = InTargetLocation;
	params.InSurfaceNormal = InSurfaceNormal;
	params.bInTargetIsWall = bInTargetIsWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.OnEnemyCharacterHit
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             InHitCharacter                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_EarthShock_C::OnEnemyCharacterHit(class ATigerCharacter* InHitCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.OnEnemyCharacterHit");

	UTBP_EarthShock_C_OnEnemyCharacterHit_Params params;
	params.InHitCharacter = InHitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_EarthShock.TBP_EarthShock_C.ExecuteUbergraph_TBP_EarthShock
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_EarthShock_C::ExecuteUbergraph_TBP_EarthShock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EarthShock.TBP_EarthShock_C.ExecuteUbergraph_TBP_EarthShock");

	UTBP_EarthShock_C_ExecuteUbergraph_TBP_EarthShock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
