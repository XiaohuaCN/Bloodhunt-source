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

// WidgetBlueprintGeneratedClass TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C
// 0x0138 (FullSize[0x03B8] - InheritedSize[0x0280])
class UTBP_UI_InventoryRangedModSlots_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                                  Slots;                                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HAlign;                                                    // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_41Y6[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 ModBorderBrush;                                            // 0x0298(0x0088) (Edit, BlueprintVisible)
	struct FLinearColor                                DefaultBorderColor;                                        // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 DefaultBackgroundBrush;                                    // 0x0330(0x0088) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C");
		return ptr;
	}



	void SetModBorderColor(int InSlotIndex, const struct FLinearColor& InColor);
	void PopulateMods(Tiger_ETigerWeaponSlot InWeaponSlot, TArray<struct FTigerModSlotInfo> InModSlots);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_InventoryRangedModSlots(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
