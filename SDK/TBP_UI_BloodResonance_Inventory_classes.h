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

// WidgetBlueprintGeneratedClass TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C
// 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
class UTBP_UI_BloodResonance_Inventory_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerStyledRichTextBlock*                   CountText;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_140;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   MaxText;                                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodResonance_InventoryItem_C*      TBP_UI_BloodResonance_InventoryItem_Choleric;              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodResonance_InventoryItem_C*      TBP_UI_BloodResonance_InventoryItem_Melancholic;           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodResonance_InventoryItem_C*      TBP_UI_BloodResonance_InventoryItem_Phlegmatic;            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodResonance_InventoryItem_C*      TBP_UI_BloodResonance_InventoryItem_Sanguine;              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   DataAsset_Choleric;                                        // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   DataAsset_Melancholic;                                     // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   DataAsset_Sanguine;                                        // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   DataAsset_Phlegmantic;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C");
		return ptr;
	}



	void UpdateInventoryResonance(class UTBP_UI_BloodResonance_InventoryItem_C* InTarget, class UTigerBloodResonanceAsset* InDataAsset, Tiger_ETigerBloodType InBloodType);
	void InitializeInventoryResonance(class UTBP_UI_BloodResonance_InventoryItem_C* InTarget, class UTigerBloodResonanceAsset* InDataAsset, Tiger_ETigerBloodType InBloodType);
	void UpdateInfo();
	void ExecuteUbergraph_TBP_UI_BloodResonance_Inventory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
