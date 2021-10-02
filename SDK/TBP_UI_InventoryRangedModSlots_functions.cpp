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
//		Name   -> Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.SetModBorderColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InSlotIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryRangedModSlots_C::SetModBorderColor(int InSlotIndex, const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.SetModBorderColor");

	UTBP_UI_InventoryRangedModSlots_C_SetModBorderColor_Params params;
	params.InSlotIndex = InSlotIndex;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PopulateMods
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerWeaponSlot                             InWeaponSlot                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerModSlotInfo>                   InModSlots                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InventoryRangedModSlots_C::PopulateMods(Tiger_ETigerWeaponSlot InWeaponSlot, TArray<struct FTigerModSlotInfo> InModSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PopulateMods");

	UTBP_UI_InventoryRangedModSlots_C_PopulateMods_Params params;
	params.InWeaponSlot = InWeaponSlot;
	params.InModSlots = InModSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InventoryRangedModSlots_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PreConstruct");

	UTBP_UI_InventoryRangedModSlots_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.ExecuteUbergraph_TBP_UI_InventoryRangedModSlots
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryRangedModSlots_C::ExecuteUbergraph_TBP_UI_InventoryRangedModSlots(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.ExecuteUbergraph_TBP_UI_InventoryRangedModSlots");

	UTBP_UI_InventoryRangedModSlots_C_ExecuteUbergraph_TBP_UI_InventoryRangedModSlots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
