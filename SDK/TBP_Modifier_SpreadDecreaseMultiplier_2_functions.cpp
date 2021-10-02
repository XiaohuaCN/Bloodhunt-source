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
//		Name   -> Function TBP_Modifier_SpreadDecreaseMultiplier_2.TBP_Modifier_SpreadDecreaseMultiplier_1_C.OnModEquipped
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerEquippedModModifierValues*             Modifiers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Modifier_SpreadDecreaseMultiplier_1_C::OnModEquipped(class UTigerEquippedModModifierValues* Modifiers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Modifier_SpreadDecreaseMultiplier_2.TBP_Modifier_SpreadDecreaseMultiplier_1_C.OnModEquipped");

	UTBP_Modifier_SpreadDecreaseMultiplier_1_C_OnModEquipped_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Modifier_SpreadDecreaseMultiplier_2.TBP_Modifier_SpreadDecreaseMultiplier_1_C.OnModUnequipped
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerEquippedModModifierValues*             Modifiers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Modifier_SpreadDecreaseMultiplier_1_C::OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Modifier_SpreadDecreaseMultiplier_2.TBP_Modifier_SpreadDecreaseMultiplier_1_C.OnModUnequipped");

	UTBP_Modifier_SpreadDecreaseMultiplier_1_C_OnModUnequipped_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Modifier_SpreadDecreaseMultiplier_2.TBP_Modifier_SpreadDecreaseMultiplier_1_C.ExecuteUbergraph_TBP_Modifier_SpreadDecreaseMultiplier_2
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Modifier_SpreadDecreaseMultiplier_1_C::ExecuteUbergraph_TBP_Modifier_SpreadDecreaseMultiplier_2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Modifier_SpreadDecreaseMultiplier_2.TBP_Modifier_SpreadDecreaseMultiplier_1_C.ExecuteUbergraph_TBP_Modifier_SpreadDecreaseMultiplier_2");

	UTBP_Modifier_SpreadDecreaseMultiplier_1_C_ExecuteUbergraph_TBP_Modifier_SpreadDecreaseMultiplier_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
