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
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateRarityMarker
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InventoryMeleeSlot_C::UpdateRarityMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateRarityMarker");

	UTBP_UI_InventoryMeleeSlot_C_UpdateRarityMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingEmpty
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InventoryMeleeSlot_C::PingEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingEmpty");

	UTBP_UI_InventoryMeleeSlot_C_PingEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingWeapon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InventoryMeleeSlot_C::PingWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingWeapon");

	UTBP_UI_InventoryMeleeSlot_C_PingWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.CreateTooltipActions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InventoryMeleeSlot_C::CreateTooltipActions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.CreateTooltipActions");

	UTBP_UI_InventoryMeleeSlot_C_CreateTooltipActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ConstructTooltipWidget
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerTooltipWidget*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTigerTooltipWidget* UTBP_UI_InventoryMeleeSlot_C::ConstructTooltipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ConstructTooltipWidget");

	UTBP_UI_InventoryMeleeSlot_C_ConstructTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.EquipWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InventoryMeleeSlot_C::EquipWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.EquipWeapon");

	UTBP_UI_InventoryMeleeSlot_C_EquipWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.DropWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InventoryMeleeSlot_C::DropWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.DropWeapon");

	UTBP_UI_InventoryMeleeSlot_C_DropWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.GetSelectedSlotColor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerWeaponSlot                             SelectedSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 Color                                                      (Parm, OutParm)
void UTBP_UI_InventoryMeleeSlot_C::GetSelectedSlotColor(Tiger_ETigerWeaponSlot SelectedSlot, struct FSlateColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.GetSelectedSlotColor");

	UTBP_UI_InventoryMeleeSlot_C_GetSelectedSlotColor_Params params;
	params.SelectedSlot = SelectedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateNoWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_InventoryMeleeSlot_C::UpdateNoWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateNoWeapon");

	UTBP_UI_InventoryMeleeSlot_C_UpdateNoWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateVisibleWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerMeleeWeapon*                           MeleeWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerItemAsset*                             WeaponItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerDisciplineComponent*                   Discipline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerWeaponSlot                             EquippedSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryMeleeSlot_C::UpdateVisibleWeapon(class UTigerMeleeWeapon* MeleeWeapon, class UTigerItemAsset* WeaponItem, class UTigerDisciplineComponent* Discipline, Tiger_ETigerWeaponSlot EquippedSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateVisibleWeapon");

	UTBP_UI_InventoryMeleeSlot_C_UpdateVisibleWeapon_Params params;
	params.MeleeWeapon = MeleeWeapon;
	params.WeaponItem = WeaponItem;
	params.Discipline = Discipline;
	params.EquippedSlot = EquippedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InventoryMeleeSlot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Construct");

	UTBP_UI_InventoryMeleeSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryMeleeSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Tick");

	UTBP_UI_InventoryMeleeSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ExecuteUbergraph_TBP_UI_InventoryMeleeSlot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryMeleeSlot_C::ExecuteUbergraph_TBP_UI_InventoryMeleeSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ExecuteUbergraph_TBP_UI_InventoryMeleeSlot");

	UTBP_UI_InventoryMeleeSlot_C_ExecuteUbergraph_TBP_UI_InventoryMeleeSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
