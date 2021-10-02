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
//		Offset -> 0x028C9580
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness");

	UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02254F40
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");

	UClothingSimulationInteractor_PhysicsAssetUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x028C9540
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UClothingSimulationInteractor::GetSimulationTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime");

	UClothingSimulationInteractor_GetSimulationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x028C9510
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumSubsteps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps");

	UClothingSimulationInteractor_GetNumSubsteps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x028C94E0
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumKinematicParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles");

	UClothingSimulationInteractor_GetNumKinematicParticles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x028C94B0
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumIterations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations");

	UClothingSimulationInteractor_GetNumIterations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x028C9480
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumDynamicParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles");

	UClothingSimulationInteractor_GetNumDynamicParticles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x028C9450
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UClothingSimulationInteractor::GetNumCloths()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths");

	UClothingSimulationInteractor_GetNumCloths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x028C93C0
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride");

	UClothingSimulationInteractor_EnableGravityOverride_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x028C93A0
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::DisableGravityOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride");

	UClothingSimulationInteractor_DisableGravityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02254F60
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");

	UClothingSimulationInteractor_ClothConfigUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
