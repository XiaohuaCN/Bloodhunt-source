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

// WidgetBlueprintGeneratedClass TBP_UI_QuestPreview.TBP_UI_QuestPreview_C
// 0x00F8 (FullSize[0x0378] - InheritedSize[0x0280])
class UTBP_UI_QuestPreview_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnHover;                                                   // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_AnimatedCompletionIcon_C*            AnimatedCompleteIcon;                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BackgroundGlow;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MaskedCardBorder_C*                  CardBorder;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_632;                                                 // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     InteractButton;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ObjectivesVerticleBox;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Rarity_left;                                               // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Rarity_right;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      RewardImage;                                               // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TitleTextBlock;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      XPGradient;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   XPText;                                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerQuest*                                 Quest;                                                     // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UTigerQuestObjective*>                IncompleteObjectives;                                      // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTigerQuestObjective*>                CompletedObjectives;                                       // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ButtonClicked;                                             // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                                HighlightBorderColor;                                      // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         HighlightTitleTextStyle;                                   // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                                DefaultBorderColor;                                        // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         DefaultTitleTextStyle;                                     // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                                     ObjectivePadding;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_QuestPreview.TBP_UI_QuestPreview_C");
		return ptr;
	}



	void HideHighlight();
	void ShowHighlight();
	void Setup_Reward_Preview();
	void Construct();
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_QuestPreview_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_QuestPreview(int EntryPoint);
	void ButtonClicked__DelegateSignature(class UTBP_UI_QuestPreview_C* InClickedWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
