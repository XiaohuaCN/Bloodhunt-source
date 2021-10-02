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
//		Name   -> Function TBP_DefaultColorCoding.TBP_DefaultColorCoding_C.ExecutePostSpawnStrategy
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UParticleSystemComponent*                    InParticleToExecuteOn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             InParticleInstigator                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_DefaultColorCoding_C::ExecutePostSpawnStrategy(class UParticleSystemComponent* InParticleToExecuteOn, class ATigerCharacter* InParticleInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_DefaultColorCoding.TBP_DefaultColorCoding_C.ExecutePostSpawnStrategy");

	UTBP_DefaultColorCoding_C_ExecutePostSpawnStrategy_Params params;
	params.InParticleToExecuteOn = InParticleToExecuteOn;
	params.InParticleInstigator = InParticleInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
