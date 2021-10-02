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

// WidgetBlueprintGeneratedClass TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C
// 0x00D0 (FullSize[0x0350] - InheritedSize[0x0280])
class UTBP_UI_BattlepassTierContainer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_BattlepassRewardsContainer_C*        FreeRewards;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LevelBackground;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LevelBorder;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LevelGlow;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   LevelHeader;                                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockedBG;                                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockedOutline;                                             // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    LockedOverlay;                                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BattlepassRewardsContainer_C*        PremiumRewards;                                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ProgressbarGlow;                                           // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ProgressGradient;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     ProgressSpacer;                                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    RotatedSquare;                                             // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                SeasonXPBar;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                SeasonXPBarBorderBot;                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                SeasonXPBarBorderTop;                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          TBP_UI_Gradient;                                           // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      UnlockedOutline;                                           // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   XP;                                                        // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                SeasonTier;                                                // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2QCM[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnItemHovered;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                            // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTBP_UI_Battlepass_C*                        BattlepassRef;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C");
		return ptr;
	}



	void CollapseRewardIfEmtpy(class UTBP_UI_BattlepassRewardsContainer_C* InReward);
	void GetRewardAtIndex(int InRewardIndex, bool bIsFree, class UTBP_UI_BattlepassReward_C** OutReward);
	void GetFirstPremiumReward(class UTBP_UI_BattlepassReward_C** OutFirstFreeReward);
	void GetFirstFreeReward(class UTBP_UI_BattlepassReward_C** OutFirstFreeReward);
	void GetLastReward(class UTBP_UI_BattlepassReward_C** OutLastChild);
	void GetFirstReward(class UTBP_UI_BattlepassReward_C** OutFirstChild);
	void UpdateHeader(bool bIsUnlocked);
	void PopulateRewards(class UTBP_UI_BattlepassRewardsContainer_C* InRewardsContainer, TArray<struct FTigerItemId>* ItemIds, bool bIsUnlocked, bool IsFree);
	void UpdateTierCollections(bool bIsUnlocked, TArray<class UTigerClientSeasonalRewardTier*>* InTiers, bool* bWantsDoubleSize);
	void PreConstruct(bool IsDesignTime);
	void ItemSelected(const struct FTigerItemId& InItemId);
	void CustomEvent_1(const struct FTigerItemId& ItemId, bool Item_Is_Free);
	void Update_XP_Bar();
	void ExecuteUbergraph_TBP_UI_BattlepassTierContainer(int EntryPoint);
	void OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId, int Item_Rank);
	void OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId, int Item_Rank, bool Item_Is_Free);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
