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

// WidgetBlueprintGeneratedClass TBP_UI_InventorySlot.TBP_UI_InventorySlot_C
// 0x0460 (FullSize[0x06E0] - InheritedSize[0x0280])
class UTBP_UI_InventorySlot_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                                AmmoFiller;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BackgroundImage;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                BigSlotContent;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BorderImage;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CountDivider;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      InnerBorder;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemImage;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ItemUnusableContainer;                                     // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemUnusableWidget;                                        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MaxCountText;                                              // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StackCountText;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TypeText;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Inventory_C*                         Inventory;                                                 // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StackCount;                                                // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4WV0[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0300(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 AmmoBackgroundBrush;                                       // 0x0388(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ModBorderBrush;                                            // 0x0410(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 AmmoBorderBrush;                                           // 0x0498(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 ConsumableBorderBrush;                                     // 0x0520(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 SlotMissingModBrush;                                       // 0x05A8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                DefaultBorderColor;                                        // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerWeaponSlot                             ModOnWeaponSlot;                                           // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsWeaponModSlot;                                          // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsModEquippedInWeaponSlot;                                // 0x0642(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M0DR[0x1];                                     // 0x0643(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Config_MenuPrimary;                                        // 0x0644(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Config_MenuSecondary;                                      // 0x064C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XA7S[0x4];                                     // 0x0654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 CollectibleBorderBrush;                                    // 0x0658(0x0088) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InventorySlot.TBP_UI_InventorySlot_C");
		return ptr;
	}



	void ResetImageColourForArtifacts();
	void UpdateArtifact(int InStackCount);
	void UpdateCollectible(int InStackCount);
	void UpdateMod();
	void UpdateConsumable();
	void UpdateAmmo(class UTigerAmmoAsset* InAmmoAsset);
	void AddDynamicPingTooltipAction();
	void SwapWeaponEquippedOn();
	void SendHasItemPing();
	void SendWantItemPing();
	void IsValidAmmoItemForWeaponSlot(class UTigerInventoryComponent* InInventoryComponent, Tiger_ETigerWeaponSlot InWeaponSlot, class UTigerAmmoAsset* InAmmoAsset, bool* bCanUseAmmo);
	void SetModUnavailableState();
	void SetAmmoUnavailableState();
	void CreateTooltipActions();
	void GetRangedModInfo(class UTigerRangedModItemAsset* ModItemAsset, bool bIgnoreEquippedMod, bool* bIsModSlotEmpty, bool* bSupportsSwap, bool* bHasHigherPriority);
	class UTigerTooltipWidget* ConstructTooltipWidget();
	void UnequipMod();
	void EquipMod();
	void SetModInWeapon(Tiger_ETigerWeaponSlot InWeaponSlot, class UTigerRangedModItemAsset* InModItemAsset, bool bInIsUnlocked, bool bInIsOnHud);
	void UseConsumable();
	void DropPack(bool bWholeStack);
	void UpdateInventorySlot(class UTigerItemAsset* NewItemAsset, int ItemStackSize);
	void SetStackCount(int InStackCount);
	void OnDropSinglePack();
	void OnDropStack();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_InventorySlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
