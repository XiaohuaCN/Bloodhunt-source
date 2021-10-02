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
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetEmotePreviewZPoint
struct UTBP_UI_Wardrobe_C_SetEmotePreviewZPoint_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdatePlayerCardVisibility
struct UTBP_UI_Wardrobe_C_UpdatePlayerCardVisibility_Params
{
	Tiger_ETigerPersistentStoreCategory                InCategory;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShouldShowFacialHairCategory
struct UTBP_UI_Wardrobe_C_ShouldShowFacialHairCategory_Params
{
	bool                                               OutShow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideEyebrowsForNosferatu
struct UTBP_UI_Wardrobe_C_HideEyebrowsForNosferatu_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetDefaultOverrideItem
struct UTBP_UI_Wardrobe_C_SetDefaultOverrideItem_Params
{
	TArray<struct FTigerVendorStoreCategoryItem>       InItems;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonDown
struct UTBP_UI_Wardrobe_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseWheel
struct UTBP_UI_Wardrobe_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowItemTooltip
struct UTBP_UI_Wardrobe_C_ShowItemTooltip_Params
{
	struct FTigerVendorStoreCategoryItem               InItem;                                                    // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideFilters
struct UTBP_UI_Wardrobe_C_HideFilters_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.PreviewOutfitMaterial
struct UTBP_UI_Wardrobe_C_PreviewOutfitMaterial_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.GetPlayerOutfitSetup
struct UTBP_UI_Wardrobe_C_GetPlayerOutfitSetup_Params
{
	struct FTigerPersistentOutfitSetup                 OutfitSetup;                                               // 0x0000(0x0030)  (Parm, OutParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Item Selected
struct UTBP_UI_Wardrobe_C_On_Item_Selected_Params
{
	struct FTigerVendorStoreCategoryItem               StoreItem;                                                 // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCloseVendorWidget
struct UTBP_UI_Wardrobe_C_OnCloseVendorWidget_Params
{
	bool                                               bShouldRemoveWidget;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategorySelected
struct UTBP_UI_Wardrobe_C_OnCategorySelected_Params
{
	class UTigerVendorStoreCategory*                   SelectedCategory;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ResetPlayerApperance
struct UTBP_UI_Wardrobe_C_ResetPlayerApperance_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOverlayClosed
struct UTBP_UI_Wardrobe_C_OnOverlayClosed_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SaveCharacterApperance
struct UTBP_UI_Wardrobe_C_SaveCharacterApperance_Params
{
	struct FTigerPersistentOutfitSetup                 PersistentOutfitSetup;                                     // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Tick
struct UTBP_UI_Wardrobe_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdateCloseButton
struct UTBP_UI_Wardrobe_C_UpdateCloseButton_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewAppearanceLocally
struct UTBP_UI_Wardrobe_C_SetNewAppearanceLocally_Params
{
	struct FTigerCharacterAppearance                   InAppearance;                                              // 0x0000(0x0080)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOpen
struct UTBP_UI_Wardrobe_C_OnOpen_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnClose
struct UTBP_UI_Wardrobe_C_OnClose_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBackgroundSceneShown
struct UTBP_UI_Wardrobe_C_OnBackgroundSceneShown_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBodyTypeChanged
struct UTBP_UI_Wardrobe_C_OnBodyTypeChanged_Params
{
	Tiger_ETigerGender                                 InBodyType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSelectedSlot
struct UTBP_UI_Wardrobe_C_OnSelectedSlot_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSlotSelectionCanceled
struct UTBP_UI_Wardrobe_C_OnSlotSelectionCanceled_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowCategoryItems
struct UTBP_UI_Wardrobe_C_ShowCategoryItems_Params
{
	Tiger_ETigerPersistentStoreCategory                Category;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
struct UTBP_UI_Wardrobe_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategoryItemsReceived
struct UTBP_UI_Wardrobe_C_OnCategoryItemsReceived_Params
{
	Tiger_ETigerPersistentStoreCategory                CategoryType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerVendorStoreCategoryItem>       CategoryItems;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnInventoryActivated
struct UTBP_UI_Wardrobe_C_OnInventoryActivated_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemPreview
struct UTBP_UI_Wardrobe_C_OnItemPreview_Params
{
	struct FTigerVendorStoreCategoryItem               InItem;                                                    // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Construct
struct UTBP_UI_Wardrobe_C_Construct_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemSelected
struct UTBP_UI_Wardrobe_C_OnItemSelected_Params
{
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UTBP_UI_OutfitItem_C*                        OutfitItem;                                                // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemUnhovered
struct UTBP_UI_Wardrobe_C_OnItemUnhovered_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewCardLocally
struct UTBP_UI_Wardrobe_C_SetNewCardLocally_Params
{
	struct FTigerPersistentPlayerCardData              InCard;                                                    // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature
struct UTBP_UI_Wardrobe_C_BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemHovered
struct UTBP_UI_Wardrobe_C_OnItemHovered_Params
{
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnGotStoreCategories
struct UTBP_UI_Wardrobe_C_OnGotStoreCategories_Params
{
};

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ExecuteUbergraph_TBP_UI_Wardrobe
struct UTBP_UI_Wardrobe_C_ExecuteUbergraph_TBP_UI_Wardrobe_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
