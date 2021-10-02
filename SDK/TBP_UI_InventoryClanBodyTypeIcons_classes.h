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

// WidgetBlueprintGeneratedClass TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C
// 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
class UTBP_UI_InventoryClanBodyTypeIcons_C : public UTigerWidget
{
public:
	class UImage*                                      BodyTypeIcon;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ClanIcon;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ClanStrikethrough;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C");
		return ptr;
	}



	void SetOwnerIndicators(class UTigerInventoryItemBase* InItem);
	void SetClanOrArchetypeIcon(TArray<Tiger_ETigerClan>* InClans, TArray<Tiger_ETigerPowerKitType>* InArchetypes);
	void CheckIfShouldDisplayDisallowedClan(TArray<Tiger_ETigerClan>* InClans, TArray<Tiger_ETigerPowerKitType>* InArchetypes, bool* bSuccessful);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
