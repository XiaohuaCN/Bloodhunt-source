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

// WidgetBlueprintGeneratedClass TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C
// 0x0048 (FullSize[0x02C8] - InheritedSize[0x0280])
class UTBP_UI_OutfitItemContainer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                                  ItemContainer;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollContainer;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   UpdateThrobber;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      ItemListener[0x10];                                        // 0x02A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	TArray<class UTBP_UI_OutfitItem_C*>                OutfitWidgets;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector2D                                   NewVar_1;                                                  // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C");
		return ptr;
	}



	void CreateStoreItems(TArray<struct FTigerVendorStoreCategoryItem>* Items);
	void UpdateOwnerStatus(int NewInventoryCount, bool bIsEquipped);
	bool DoesPlayerOwnItem();
	void SetItemListener();
	void CreateStoreItem(struct FTigerVendorStoreCategoryItem* StoreItem, class UTBP_UI_OutfitItem_C** ItemWidget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Reset();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_OutfitItemContainer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
