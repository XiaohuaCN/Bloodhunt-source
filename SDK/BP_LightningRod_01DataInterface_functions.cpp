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
//		Name   -> Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalBottom
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightningRod_01DataInterface_C::GetMetalBottom(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalBottom");

	UBP_LightningRod_01DataInterface_C_GetMetalBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalTop
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightningRod_01DataInterface_C::GetMetalTop(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalTop");

	UBP_LightningRod_01DataInterface_C_GetMetalTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalMiddle
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightningRod_01DataInterface_C::GetMetalMiddle(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalMiddle");

	UBP_LightningRod_01DataInterface_C_GetMetalMiddle_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
