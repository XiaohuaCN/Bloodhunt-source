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
//		Name   -> Function TBP_MightyLeap.TBP_MightyLeap_C.GetTargetPosition
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     PlayerEyeLocation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    CameraRotation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              JumpCheckDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_MightyLeap_C::GetTargetPosition(const struct FVector& PlayerEyeLocation, const struct FRotator& CameraRotation, float JumpCheckDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MightyLeap.TBP_MightyLeap_C.GetTargetPosition");

	UTBP_MightyLeap_C_GetTargetPosition_Params params;
	params.PlayerEyeLocation = PlayerEyeLocation;
	params.CameraRotation = CameraRotation;
	params.JumpCheckDistance = JumpCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapEnded
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_MightyLeap_C::OnLeapEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapEnded");

	UTBP_MightyLeap_C_OnLeapEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapStarted
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_MightyLeap_C::OnLeapStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapStarted");

	UTBP_MightyLeap_C_OnLeapStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MightyLeap.TBP_MightyLeap_C.ExecuteUbergraph_TBP_MightyLeap
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MightyLeap_C::ExecuteUbergraph_TBP_MightyLeap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MightyLeap.TBP_MightyLeap_C.ExecuteUbergraph_TBP_MightyLeap");

	UTBP_MightyLeap_C_ExecuteUbergraph_TBP_MightyLeap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
