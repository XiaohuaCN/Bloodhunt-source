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
//		Name   -> Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GetPiercingSlots
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UTigerCharacterMeshManager*                  InMeshManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TMap<struct FName, struct FTigerCharacterHeadPiercingSocket> OutSlots                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_HeadConfiguration_Master_C::GetPiercingSlots(class UTigerCharacterMeshManager* InMeshManager, TMap<struct FName, struct FTigerCharacterHeadPiercingSocket>* OutSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GetPiercingSlots");

	UTBP_HeadConfiguration_Master_C_GetPiercingSlots_Params params;
	params.InMeshManager = InMeshManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSlots != nullptr)
		*OutSlots = params.OutSlots;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GatherPoseableMeshSetupData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UClass*                                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerCharacterPoseableMeshBoneSetupData> Data                                                       (Parm, OutParm)
void UTBP_HeadConfiguration_Master_C::GatherPoseableMeshSetupData(class UClass* Mesh, TArray<struct FTigerCharacterPoseableMeshBoneSetupData>* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GatherPoseableMeshSetupData");

	UTBP_HeadConfiguration_Master_C_GatherPoseableMeshSetupData_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPoseableBeard
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UTigerCharacterBeardCustomization*           InBeard                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerCharacterMeshManager*                  InMeshManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_HeadConfiguration_Master_C::SetPoseableBeard(class UTigerCharacterBeardCustomization* InBeard, class UTigerCharacterMeshManager* InMeshManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPoseableBeard");

	UTBP_HeadConfiguration_Master_C_SetPoseableBeard_Params params;
	params.InBeard = InBeard;
	params.InMeshManager = InMeshManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetEyewearOffset
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UTigerCharacterMeshManager*                  MeshManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_HeadConfiguration_Master_C::SetEyewearOffset(class UTigerCharacterMeshManager* MeshManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetEyewearOffset");

	UTBP_HeadConfiguration_Master_C_SetEyewearOffset_Params params;
	params.MeshManager = MeshManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercings
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UTigerCharacterPiercingSetCustomization*     InPiercingSet                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerCharacterMeshManager*                  InMeshManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_HeadConfiguration_Master_C::SetPiercings(class UTigerCharacterPiercingSetCustomization* InPiercingSet, class UTigerCharacterMeshManager* InMeshManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercings");

	UTBP_HeadConfiguration_Master_C_SetPiercings_Params params;
	params.InPiercingSet = InPiercingSet;
	params.InMeshManager = InMeshManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercingSlotLocationAndRotation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerCharacterMeshManager*                  InMeshManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    InRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_HeadConfiguration_Master_C::SetPiercingSlotLocationAndRotation(class UTigerCharacterMeshManager* InMeshManager, const struct FName& InName, const struct FVector& InLocation, const struct FRotator& InRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercingSlotLocationAndRotation");

	UTBP_HeadConfiguration_Master_C_SetPiercingSlotLocationAndRotation_Params params;
	params.InMeshManager = InMeshManager;
	params.InName = InName;
	params.InLocation = InLocation;
	params.InRotation = InRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.ExecuteUbergraph_TBP_HeadConfiguration_Master
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_HeadConfiguration_Master_C::ExecuteUbergraph_TBP_HeadConfiguration_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.ExecuteUbergraph_TBP_HeadConfiguration_Master");

	UTBP_HeadConfiguration_Master_C_ExecuteUbergraph_TBP_HeadConfiguration_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
