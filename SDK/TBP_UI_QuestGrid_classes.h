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

// WidgetBlueprintGeneratedClass TBP_UI_QuestGrid.TBP_UI_QuestGrid_C
// 0x0048 (FullSize[0x02C8] - InheritedSize[0x0280])
class UTBP_UI_QuestGrid_C : public UTigerWidget
{
public:
	class UVerticalBox*                                PreviewContainer;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Title;                                                     // 0x0288(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    QuestSelected;                                             // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMargin                                     ElementPadding;                                            // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTBP_UI_QuestPreview_C*                      SelectedWidget;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_QuestGrid.TBP_UI_QuestGrid_C");
		return ptr;
	}



	void SelectFirstQuest();
	void OnButtonClicked(class UTBP_UI_QuestPreview_C* InClickedWidget);
	void PopulateGrid(int InStartIndex, TArray<class UTigerQuest*>* InQuests);
	void QuestSelected__DelegateSignature(class UTigerQuest* InSelectedQuest);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
