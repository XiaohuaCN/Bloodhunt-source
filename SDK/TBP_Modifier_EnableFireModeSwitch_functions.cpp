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
//		Name   -> Function TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C.OnModEquipped
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerEquippedModModifierValues*             Modifiers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Modifier_EnableFireModeSwitch_C::OnModEquipped(class UTigerEquippedModModifierValues* Modifiers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C.OnModEquipped");

	UTBP_Modifier_EnableFireModeSwitch_C_OnModEquipped_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C.OnModUnequipped
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerEquippedModModifierValues*             Modifiers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Modifier_EnableFireModeSwitch_C::OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C.OnModUnequipped");

	UTBP_Modifier_EnableFireModeSwitch_C_OnModUnequipped_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C.ExecuteUbergraph_TBP_Modifier_EnableFireModeSwitch
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Modifier_EnableFireModeSwitch_C::ExecuteUbergraph_TBP_Modifier_EnableFireModeSwitch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C.ExecuteUbergraph_TBP_Modifier_EnableFireModeSwitch");

	UTBP_Modifier_EnableFireModeSwitch_C_ExecuteUbergraph_TBP_Modifier_EnableFireModeSwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
