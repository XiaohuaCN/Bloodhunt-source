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
//		Name   -> Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.UpdateStatusAndInfo
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       TextDesc                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_BloodResonance_InventoryItem_C::UpdateStatusAndInfo(const struct FText& TextDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.UpdateStatusAndInfo");

	UTBP_UI_BloodResonance_InventoryItem_C_UpdateStatusAndInfo_Params params;
	params.TextDesc = TextDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.InitializeInventoryResonance
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InResonanceName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                InResonanceColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerBloodType                              InBloodType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonance_InventoryItem_C::InitializeInventoryResonance(const struct FText& InResonanceName, const struct FLinearColor& InResonanceColor, Tiger_ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.InitializeInventoryResonance");

	UTBP_UI_BloodResonance_InventoryItem_C_InitializeInventoryResonance_Params params;
	params.InResonanceName = InResonanceName;
	params.InResonanceColor = InResonanceColor;
	params.InBloodType = InBloodType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonance_InventoryItem_C::ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem");

	UTBP_UI_BloodResonance_InventoryItem_C_ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
