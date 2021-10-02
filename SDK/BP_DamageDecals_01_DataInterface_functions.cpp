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
//		Name   -> Function BP_DamageDecals_01_DataInterface.BP_DamageDecals_01_DataInterface_C.GetMesh
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DamageDecals_01_DataInterface_C::GetMesh(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DamageDecals_01_DataInterface.BP_DamageDecals_01_DataInterface_C.GetMesh");

	UBP_DamageDecals_01_DataInterface_C_GetMesh_Params params;
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
