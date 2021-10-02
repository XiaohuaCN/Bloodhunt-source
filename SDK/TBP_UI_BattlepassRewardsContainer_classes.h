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

// WidgetBlueprintGeneratedClass TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C
// 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
class UTBP_UI_BattlepassRewardsContainer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    BackgroundWidget;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           RewardsContainer;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemHovered;                                             // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                                BackgroundBrushColor;                                      // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemSelected;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                                  Premium_BG_Texture;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Free;                                                   // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9R2B[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_Battlepass_C*                        BattlepassRef;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C");
		return ptr;
	}



	void SetUnlockedState(bool bIsUnlocked);
	void PopulateRewards(TArray<struct FTigerItemId>* ItemIds, bool bIsUnlocked, bool IsFree, int InRank);
	void ItemHovered(const struct FTigerItemId& ItemId);
	void PreConstruct(bool IsDesignTime);
	void ItemSelected(const struct FTigerItemId& InItemId);
	void ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer(int EntryPoint);
	void OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId);
	void OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId, bool Item_Is_Free);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
