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
//		Name   -> Function TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C.CreateDynamicEffectMaterial
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInstanceDynamic*                    EffectMaterial                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionRetainerBox_C::CreateDynamicEffectMaterial(class UMaterialInstanceDynamic** EffectMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C.CreateDynamicEffectMaterial");

	UTBP_UI_TransitionRetainerBox_C_CreateDynamicEffectMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EffectMaterial != nullptr)
		*EffectMaterial = params.EffectMaterial;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
