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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C
// 0x005C (FullSize[0x02DC] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_ArticleBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              ArticlesList;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ArticlesScrollBox;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_Landing_C*                  GrimoireLandingUI;                                         // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             TestFeaturedEntryIDs;                                      // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             TestSuggestedEntryIDs;                                     // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             TestNewEntryIDs;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ArticleScrollTime;                                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C");
		return ptr;
	}



	void ResetScroll();
	void AddArticleRandom(class UTigerGrimoireEntry* GrimoireEntry);
	void GetNewArticleEntryIDs(TArray<struct FString>* EntryIds);
	void AddArticleDouble(class UTigerGrimoireEntry* GrimoireEntry1, class UTigerGrimoireEntry* GrimoireEntry2, Tiger_ETigerGrimoireArticleType ArticleType);
	void AddArticle(class UTigerGrimoireEntry* GrimoireEntry, Tiger_ETigerGrimoireArticleType ArticleType);
	void CreateArticleLinks(class UTBP_UI_Grimoire_C* GrimoireUI, class UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI, int* TotalArticles);
	void GetTestEntries(TArray<struct FString>* EntryIds, TArray<class UTigerGrimoireEntry*>* Entries);
	void ClearArticleLinks();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ArticleSelected(const struct FString& EntryId, Tiger_ETigerGrimoireArticleType ArticleType);
	void ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
