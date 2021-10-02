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
//		Name   -> Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInventoryResonance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BloodResonance_InventoryItem_C*      InTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerBloodResonanceAsset*                   InDataAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerBloodType                              InBloodType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonance_Inventory_C::UpdateInventoryResonance(class UTBP_UI_BloodResonance_InventoryItem_C* InTarget, class UTigerBloodResonanceAsset* InDataAsset, Tiger_ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInventoryResonance");

	UTBP_UI_BloodResonance_Inventory_C_UpdateInventoryResonance_Params params;
	params.InTarget = InTarget;
	params.InDataAsset = InDataAsset;
	params.InBloodType = InBloodType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.InitializeInventoryResonance
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BloodResonance_InventoryItem_C*      InTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerBloodResonanceAsset*                   InDataAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerBloodType                              InBloodType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonance_Inventory_C::InitializeInventoryResonance(class UTBP_UI_BloodResonance_InventoryItem_C* InTarget, class UTigerBloodResonanceAsset* InDataAsset, Tiger_ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.InitializeInventoryResonance");

	UTBP_UI_BloodResonance_Inventory_C_InitializeInventoryResonance_Params params;
	params.InTarget = InTarget;
	params.InDataAsset = InDataAsset;
	params.InBloodType = InBloodType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BloodResonance_Inventory_C::UpdateInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInfo");

	UTBP_UI_BloodResonance_Inventory_C_UpdateInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.ExecuteUbergraph_TBP_UI_BloodResonance_Inventory
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonance_Inventory_C::ExecuteUbergraph_TBP_UI_BloodResonance_Inventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.ExecuteUbergraph_TBP_UI_BloodResonance_Inventory");

	UTBP_UI_BloodResonance_Inventory_C_ExecuteUbergraph_TBP_UI_BloodResonance_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
