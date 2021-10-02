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

// WidgetBlueprintGeneratedClass TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C
// 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
class UTBP_UI_InventoryMeleeSlot_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      MeleeBackgroundPane;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Rarity_VFX_C*                        TBP_UI_Rarity_VFX;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      WeaponImage;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	Tiger_ETigerWeaponSlot                             Weapon_Slot;                                               // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HP7B[0x3];                                     // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SelectInputAction;                                         // 0x02AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Current_Opacity;                                           // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerPingNotificationNetData               PingNetData;                                               // 0x02B8(0x0018) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor)
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C");
		return ptr;
	}



	void UpdateRarityMarker();
	void PingEmpty();
	void PingWeapon();
	void CreateTooltipActions();
	class UTigerTooltipWidget* ConstructTooltipWidget();
	void EquipWeapon();
	void DropWeapon();
	void GetSelectedSlotColor(Tiger_ETigerWeaponSlot SelectedSlot, struct FSlateColor* Color);
	void UpdateNoWeapon();
	void UpdateVisibleWeapon(class UTigerMeleeWeapon* MeleeWeapon, class UTigerItemAsset* WeaponItem, class UTigerDisciplineComponent* Discipline, Tiger_ETigerWeaponSlot EquippedSlot);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_InventoryMeleeSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
