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

// BlueprintGeneratedClass TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBP_UI_OutfitItem_Store_Listener_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C");
		return ptr;
	}



	void OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem);
	void OnItemUnhovered();
	void OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store);
	void OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
