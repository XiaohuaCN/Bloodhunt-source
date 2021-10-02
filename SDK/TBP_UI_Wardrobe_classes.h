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

// WidgetBlueprintGeneratedClass TBP_UI_Wardrobe.TBP_UI_Wardrobe_C
// 0x0494 (FullSize[0x0914] - InheritedSize[0x0480])
class UTBP_UI_Wardrobe_C : public UTigerWardrobeUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowItemContainer;                                         // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            HideFilterBox;                                             // 0x0498(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowFilterBox;                                             // 0x04A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    AccessoryCategoryButton;                                   // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              BarberTabWidget;                                           // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BlackBackground;                                           // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    BodyCategoryButton;                                        // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    BodyTypeCategoryButton;                                    // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    CardBackgroundCategoryButton;                              // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              CardTabWidget;                                             // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Box_C*                               CategoryBox;                                               // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              CharacterTabWidget;                                        // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             ContainerSwitcher;                                         // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Line_C*                              CurrencyTopLine;                                           // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EmoteCategoryButton;                                       // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_EquipWheel_C*                        EquipWheel;                                                // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyebrowCategoryButton;                                     // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyebrowColorCategoryButton;                                // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyebrowTypeCategoryButton;                                 // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    EyeColorCategoryButton;                                    // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    FacialHairCategoryButton;                                  // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    FacialHairColorCategoryButton;                             // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    FacialHairTypeCategoryButton;                              // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    GlassesCategoryButton;                                     // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HairCategoryButton;                                        // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HairColorCategoryButton;                                   // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HairTypeCategoryButton;                                    // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HatCategoryButton;                                         // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    HeadCategoryButton;                                        // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    IconCategoryButton;                                        // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_OutfitItemContainer_C*               ItemContainer;                                             // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_OutfitVendorTooltip_C*               ItemTooltip;                                               // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   LandingPage_CloseButton;                                   // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   LandingPage_CloseButton_2;                                 // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    MakeupCategoryButton;                                      // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    MaskCategoryButton;                                        // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              MiscTabWidget;                                             // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    OutfitCategoryButton;                                      // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    PiercingCategoryButton;                                    // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrentHardCurrencyText_C*           PlayerHardCurrencyText;                                    // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      PlayerSoftCurrencyText;                                    // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ShopCanvas;                                                // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    SkinColorCategoryButton;                                   // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CategoryButton_C*                    TattooCategoryButton;                                      // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Info_C*                TBP_UI_CharacterCard_Info;                                 // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          TBP_UI_CheckBox;                                           // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_Vertical_C*                  TBP_UI_Divider_Vertical;                                   // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         TBP_UI_Menu_Button_Prompt_Footer;                          // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                     // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              WeaponTabWidget;                                           // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bIsBuyingItem;                                             // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_04G2[0x7];                                     // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_BuyItemsOverlay_C*                   OverlayUI;                                                 // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerVendorStoreCategoryItem               CurrentItemToBuy;                                          // 0x0630(0x0098) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FTigerPersistentOutfitSetup                 CurrentOutfitSetup;                                        // 0x06C8(0x0030) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                               bEquipBoughtItem;                                          // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_450O[0x7];                                     // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FakePartOfHeadClass;                                       // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DefaultOverrideItem[0x28];                                 // 0x0708(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FTigerVendorStoreCategoryItem               SelectedItem;                                              // 0x0730(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SelectedSlot;                                              // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C8RK[0x4];                                     // 0x07CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATBP_RewardPreview_Outfit_C*                 Item_Preview;                                              // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                            User_Camera;                                               // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     User_Camera_Original_Position;                             // 0x07E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     User_Camera_New_Position;                                  // 0x07EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DefaultCamera_Target_Position;                             // 0x07F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TeleportCamera;                                            // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NOSF[0x3];                                     // 0x0805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACineCameraActor*                            Close_Camera;                                              // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CloseCamera_Position;                                      // 0x0810(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target_Camera_Position;                                    // 0x081C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                            Target_Default_Camera;                                     // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NullSoftPath[0x28];                                        // 0x0830(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FCameraFocusSettings                        FocusSettingsDefault;                                      // 0x0858(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCameraFocusSettings                        FocusSettingsClose;                                        // 0x08B0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CameraEmotePreviewZPoint;                                  // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraZTreshhold;                                          // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldTemporalAASampleCount;                                  // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Wardrobe.TBP_UI_Wardrobe_C");
		return ptr;
	}



	void SetEmotePreviewZPoint();
	void UpdatePlayerCardVisibility(Tiger_ETigerPersistentStoreCategory InCategory);
	void ShouldShowFacialHairCategory(bool* OutShow);
	void HideEyebrowsForNosferatu();
	void SetDefaultOverrideItem(TArray<struct FTigerVendorStoreCategoryItem> InItems);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ShowItemTooltip(const struct FTigerVendorStoreCategoryItem& InItem);
	void HideFilters();
	void PreviewOutfitMaterial();
	void GetPlayerOutfitSetup(struct FTigerPersistentOutfitSetup* OutfitSetup);
	void On_Item_Selected(struct FTigerVendorStoreCategoryItem* StoreItem);
	void OnCloseVendorWidget(bool* bShouldRemoveWidget);
	void OnCategorySelected(class UTigerVendorStoreCategory* SelectedCategory);
	void ResetPlayerApperance();
	void OnOverlayClosed();
	void SaveCharacterApperance(struct FTigerPersistentOutfitSetup* PersistentOutfitSetup);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateCloseButton();
	void SetNewAppearanceLocally(const struct FTigerCharacterAppearance& InAppearance);
	void OnOpen();
	void OnClose();
	void OnBackgroundSceneShown();
	void BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnBodyTypeChanged(Tiger_ETigerGender InBodyType);
	void BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature();
	void BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature();
	void BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature();
	void BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature();
	void BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature();
	void BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature();
	void BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature();
	void BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature();
	void BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature();
	void BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature();
	void BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature();
	void BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature();
	void BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature();
	void BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature();
	void BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature();
	void BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature();
	void BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature();
	void BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature();
	void BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature();
	void BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature();
	void BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature();
	void BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature();
	void OnSelectedSlot();
	void OnSlotSelectionCanceled();
	void BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature();
	void ShowCategoryItems(Tiger_ETigerPersistentStoreCategory Category);
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void OnCategoryItemsReceived(Tiger_ETigerPersistentStoreCategory CategoryType, TArray<struct FTigerVendorStoreCategoryItem> CategoryItems);
	void OnInventoryActivated();
	void BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature();
	void OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem);
	void Construct();
	void OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_C* OutfitItem);
	void OnItemUnhovered();
	void BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature();
	void SetNewCardLocally(const struct FTigerPersistentPlayerCardData& InCard);
	void BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature();
	void BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature();
	void OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item);
	void OnGotStoreCategories();
	void ExecuteUbergraph_TBP_UI_Wardrobe(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
