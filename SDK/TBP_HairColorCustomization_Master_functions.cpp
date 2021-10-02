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
//		Name   -> Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.GetUiMaterialOverride
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInterface*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInterface* UTBP_HairColorCustomization_Master_C::GetUiMaterialOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.GetUiMaterialOverride");

	UTBP_HairColorCustomization_Master_C_GetUiMaterialOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.SetUIMaterialParameters
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInstanceDynamic*                    InMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_HairColorCustomization_Master_C::SetUIMaterialParameters(class UMaterialInstanceDynamic* InMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.SetUIMaterialParameters");

	UTBP_HairColorCustomization_Master_C_SetUIMaterialParameters_Params params;
	params.InMaterial = InMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.ExecuteUbergraph_TBP_HairColorCustomization_Master
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_HairColorCustomization_Master_C::ExecuteUbergraph_TBP_HairColorCustomization_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.ExecuteUbergraph_TBP_HairColorCustomization_Master");

	UTBP_HairColorCustomization_Master_C_ExecuteUbergraph_TBP_HairColorCustomization_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
