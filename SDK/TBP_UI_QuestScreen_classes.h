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

// WidgetBlueprintGeneratedClass TBP_UI_QuestScreen.TBP_UI_QuestScreen_C
// 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
class UTBP_UI_QuestScreen_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             QuestListSwitcher;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   QuestsCategoryHeader;                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     QuestsLeftButton;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     QuestsRightButton;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_QuestInfo_C*                         TBP_UI_QuestInfo;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerQuest*                                 SelectedQuest;                                             // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_QuestScreen.TBP_UI_QuestScreen_C");
		return ptr;
	}



	void SelectFirstElementOfCurrentGrid();
	void OnQuestSelected(class UTigerQuest* InSelectedQuest);
	void RefreshHeaderAndButtons();
	void RebuildWidget();
	void BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_QuestScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
