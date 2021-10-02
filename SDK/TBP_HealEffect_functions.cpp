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
//		Name   -> Function TBP_HealEffect.TBP_HealEffect_C.Apply
//		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class ATigerCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_HealEffect_C::Apply(class ATigerCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_HealEffect.TBP_HealEffect_C.Apply");

	UTBP_HealEffect_C_Apply_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
