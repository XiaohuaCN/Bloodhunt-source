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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire.TBP_UI_Grimoire_C
// 0x0138 (FullSize[0x0540] - InheritedSize[0x0408])
class UTBP_UI_Grimoire_C : public UTigerGrimoireUi
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowScrollPrompt;                                          // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            InteractAnim;                                              // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_Background_C*               BackgroundImage;                                           // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BlackBackground;                                           // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryBox_C*              CategoryBox;                                               // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   CloseButton;                                               // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         Footer;                                                    // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   HideMenuButton;                                            // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_ImageBox_C*                 ImageBox;                                                  // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_InfoBox_C*                  InfoBox;                                                   // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter;                                          // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_Landing_C*                  LandingView;                                               // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_RootCategoryMenu_C*         RootCategoryMenu;                                          // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   RotateButton;                                              // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   ShowMenuButton;                                            // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                     // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_VideoPlayer_C*                       VideoBox;                                                  // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerGrimoireCategory*                      SelectedCategory;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnlockedRootCategoryPercentage;                            // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bMenusHidden;                                              // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TYJH[0x3];                                     // 0x04AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireTree*                          GrimoireTree;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryButton_C*           SelectedButton;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireCategory*                      DefaultOpenedCategory;                                     // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Scrollable;                                                // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsDisplayItemRotatable;                                   // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UHJR[0x2];                                     // 0x04CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ItemRotationSpeed;                                         // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ViewName;                                                  // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATBP_Grimoire_Card_C*                        GrimCard;                                                  // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATBP_Grimoire_ModelViewerItem_C*             GrimModel;                                                 // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bGrimCardShown;                                            // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bGrimModelShown;                                           // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	Tiger_ETigerGrimoireEntryMediaDisplayMode          LastEntryMediaShown;                                       // 0x04EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFailedToShowEntryMedia;                                   // 0x04EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bGrimoirePropExamined;                                     // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DANT[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     JumpEntryId;                                               // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bIsMenuTransitioning;                                      // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bHasTransitionedToShow;                                    // 0x0501(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M62E[0x2];                                     // 0x0502(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentDeltaTime;                                          // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRightMouseDown;                                          // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HRVB[0x3];                                     // 0x0509(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   CurrentMouseDelta;                                         // 0x050C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentZoomLevel;                                          // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                            CloseViewerCameraActor;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                            ViewerCameraActor;                                         // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnFocusedScreenSize;                                       // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FocusedScreenSize;                                         // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldTemporalAASampleCount;                                  // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRootMenuChanged;                                          // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HY0S[0x3];                                     // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinMouseMove;                                              // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Mouse_Move;                                            // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire.TBP_UI_Grimoire_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void NormaliseMouseAxis(float InAxis, float* OutAxis);
	void NormaliseMouseDelta(const struct FVector2D& InDelta, struct FVector2D* OutDelta);
	void RefreshScrollPrompt();
	void ApplyMeshScaling(bool IsFocused);
	void ResetGrimoireDisplayItems(float InDeltaTime);
	void ForwardInputToCategoryMenu(int InDirection);
	void GrimoirePropJumpToEntry(const struct FString& InEntryId);
	void HideGrimoireDisplayItems();
	void RotateGrimoireDisplayItem(float InDeltaTime);
	void SetInteractionButtonVisiblity(bool bVisible);
	void ClearContent();
	void InteractedFooterAnimationEnd(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void InteractedFooterAnimationStart(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void OnOpen();
	void SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory);
	void SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton);
	void SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* EntryButton);
	void MenuAnimHide();
	void MenuAnimShow();
	void ToggleMenusHidden();
	void OnClose();
	void OnInitialized();
	void JumpToCategory(class UTigerGrimoireCategory* InCategory);
	void JumpToSubCategory(class UTigerGrimoireCategory* InSubCategory);
	void JumpToEntry(const struct FString& InEntryId);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature();
	void BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature();
	void BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnBackgroundSceneShown();
	void MenuUpPressed();
	void MenuDownPressed();
	void OnRotateButtonPressed();
	void OnRotateButtonUp();
	void On_Language_Settings_Changed();
	void RegisterSharedInputs();
	void UnregisterSharedInputs();
	void ExecuteUbergraph_TBP_UI_Grimoire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
