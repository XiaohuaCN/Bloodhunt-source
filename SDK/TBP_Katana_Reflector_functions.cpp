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
//		Name   -> Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CanBeReflected
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         InOverlappedComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InOtherComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InOtherBodyIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInFromSweep                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  InSweepResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATBP_Katana_Reflector_C::CanBeReflected(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool bInFromSweep, const struct FHitResult& InSweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CanBeReflected");

	ATBP_Katana_Reflector_C_CanBeReflected_Params params;
	params.InOverlappedComponent = InOverlappedComponent;
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.bInFromSweep = bInFromSweep;
	params.InSweepResult = InSweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CheckIfProjectileHitWithinCone
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsWithinCone                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Katana_Reflector_C::CheckIfProjectileHitWithinCone(const struct FVector& HitLocation, bool* bIsWithinCone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CheckIfProjectileHitWithinCone");

	ATBP_Katana_Reflector_C_CheckIfProjectileHitWithinCone_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsWithinCone != nullptr)
		*bIsWithinCone = params.bIsWithinCone;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Katana_Reflector_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveBeginPlay");

	ATBP_Katana_Reflector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ATBP_Katana_Reflector_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ATBP_Katana_Reflector_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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
//		Name   -> Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Katana_Reflector_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveEndPlay");

	ATBP_Katana_Reflector_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ExecuteUbergraph_TBP_Katana_Reflector
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Katana_Reflector_C::ExecuteUbergraph_TBP_Katana_Reflector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ExecuteUbergraph_TBP_Katana_Reflector");

	ATBP_Katana_Reflector_C_ExecuteUbergraph_TBP_Katana_Reflector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
