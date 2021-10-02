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
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromLootCategory
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Tiger_ETigerLootCategory                           LootCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_TypeAndRarity_C::STATIC_GetTextFromLootCategory(Tiger_ETigerLootCategory LootCategory, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromLootCategory");

	UTBFL_TypeAndRarity_C_GetTextFromLootCategory_Params params;
	params.LootCategory = LootCategory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetShortTextFromWeaponType
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Tiger_ETigerWeaponType                             WeaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ShortType                                                  (Parm, OutParm)
void UTBFL_TypeAndRarity_C::STATIC_GetShortTextFromWeaponType(Tiger_ETigerWeaponType WeaponType, class UObject* __WorldContext, struct FText* ShortType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetShortTextFromWeaponType");

	UTBFL_TypeAndRarity_C_GetShortTextFromWeaponType_Params params;
	params.WeaponType = WeaponType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShortType != nullptr)
		*ShortType = params.ShortType;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromAmmoType
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerWeaponAmmoType                         In_Ammo_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_TypeAndRarity_C::STATIC_GetTextFromAmmoType(Tiger_ETigerWeaponAmmoType In_Ammo_Type, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromAmmoType");

	UTBFL_TypeAndRarity_C_GetTextFromAmmoType_Params params;
	params.In_Ammo_Type = In_Ammo_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemType
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerItemAsset*                             InItemAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ColorText                                                  (Parm, OutParm)
void UTBFL_TypeAndRarity_C::STATIC_GetColorTextFromItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FText* ColorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemType");

	UTBFL_TypeAndRarity_C_GetColorTextFromItemType_Params params;
	params.InItemAsset = InItemAsset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorText != nullptr)
		*ColorText = params.ColorText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemRarity
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerItemRarity                             In_Rarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ColorText                                                  (Parm, OutParm)
void UTBFL_TypeAndRarity_C::STATIC_GetColorTextFromItemRarity(Tiger_ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* ColorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemRarity");

	UTBFL_TypeAndRarity_C_GetColorTextFromItemRarity_Params params;
	params.In_Rarity = In_Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorText != nullptr)
		*ColorText = params.ColorText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.SetRarityMaterialFromWeaponClass
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMeshComponent*                              InMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerWeapon*                                InWeaponClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_TypeAndRarity_C::STATIC_SetRarityMaterialFromWeaponClass(class UMeshComponent* InMeshComponent, class UTigerWeapon* InWeaponClass, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.SetRarityMaterialFromWeaponClass");

	UTBFL_TypeAndRarity_C_SetRarityMaterialFromWeaponClass_Params params;
	params.InMeshComponent = InMeshComponent;
	params.InWeaponClass = InWeaponClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemType
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerInventoryItemType                      In_Item_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InGetShortVersion                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_TypeAndRarity_C::STATIC_GetTextFromItemType(Tiger_ETigerInventoryItemType In_Item_Type, bool InGetShortVersion, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemType");

	UTBFL_TypeAndRarity_C_GetTextFromItemType_Params params;
	params.In_Item_Type = In_Item_Type;
	params.InGetShortVersion = InGetShortVersion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemRarity
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerItemRarity                             In_Rarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_TypeAndRarity_C::STATIC_GetTextFromItemRarity(Tiger_ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemRarity");

	UTBFL_TypeAndRarity_C_GetTextFromItemRarity_Params params;
	params.In_Rarity = In_Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetData
//		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerTypeAndRarityData*                     Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_TypeAndRarity_C::STATIC_GetData(class UObject* __WorldContext, class UTigerTypeAndRarityData** Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetData");

	UTBFL_TypeAndRarity_C_GetData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorFromItemRarity
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerItemRarity                             In_Rarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_TypeAndRarity_C::STATIC_GetColorFromItemRarity(Tiger_ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorFromItemRarity");

	UTBFL_TypeAndRarity_C_GetColorFromItemRarity_Params params;
	params.In_Rarity = In_Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
