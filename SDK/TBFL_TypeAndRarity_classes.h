#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_TypeAndRarity.TBFL_TypeAndRarity_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBFL_TypeAndRarity_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBFL_TypeAndRarity.TBFL_TypeAndRarity_C");
		return ptr;
	}



	void STATIC_GetTextFromLootCategory(Tiger_ETigerLootCategory LootCategory, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetShortTextFromWeaponType(Tiger_ETigerWeaponType WeaponType, class UObject* __WorldContext, struct FText* ShortType);
	void STATIC_GetTextFromAmmoType(Tiger_ETigerWeaponAmmoType In_Ammo_Type, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetColorTextFromItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FText* ColorText);
	void STATIC_GetColorTextFromItemRarity(Tiger_ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* ColorText);
	void STATIC_SetRarityMaterialFromWeaponClass(class UMeshComponent* InMeshComponent, class UTigerWeapon* InWeaponClass, class UObject* __WorldContext);
	void STATIC_GetTextFromItemType(Tiger_ETigerInventoryItemType In_Item_Type, bool InGetShortVersion, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetTextFromItemRarity(Tiger_ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetData(class UObject* __WorldContext, class UTigerTypeAndRarityData** Data);
	void STATIC_GetColorFromItemRarity(Tiger_ETigerItemRarity In_Rarity, class UObject* __WorldContext, struct FLinearColor* Color);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
