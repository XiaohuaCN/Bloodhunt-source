// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetEmotePreviewZPoint
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Wardrobe_C::SetEmotePreviewZPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetEmotePreviewZPoint");

	UTBP_UI_Wardrobe_C_SetEmotePreviewZPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdatePlayerCardVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPersistentStoreCategory                InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Wardrobe_C::UpdatePlayerCardVisibility(Tiger_ETigerPersistentStoreCategory InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdatePlayerCardVisibility");

	UTBP_UI_Wardrobe_C_UpdatePlayerCardVisibility_Params params;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShouldShowFacialHairCategory
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               OutShow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Wardrobe_C::ShouldShowFacialHairCategory(bool* OutShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShouldShowFacialHairCategory");

	UTBP_UI_Wardrobe_C_ShouldShowFacialHairCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutShow != nullptr)
		*OutShow = params.OutShow;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideEyebrowsForNosferatu
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Wardrobe_C::HideEyebrowsForNosferatu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideEyebrowsForNosferatu");

	UTBP_UI_Wardrobe_C_HideEyebrowsForNosferatu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetDefaultOverrideItem
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerVendorStoreCategoryItem>       InItems                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Wardrobe_C::SetDefaultOverrideItem(TArray<struct FTigerVendorStoreCategoryItem> InItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetDefaultOverrideItem");

	UTBP_UI_Wardrobe_C_SetDefaultOverrideItem_Params params;
	params.InItems = InItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_Wardrobe_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonDown");

	UTBP_UI_Wardrobe_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_Wardrobe_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseWheel");

	UTBP_UI_Wardrobe_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowItemTooltip
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               InItem                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Wardrobe_C::ShowItemTooltip(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowItemTooltip");

	UTBP_UI_Wardrobe_C_ShowItemTooltip_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideFilters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::HideFilters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideFilters");

	UTBP_UI_Wardrobe_C_HideFilters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.PreviewOutfitMaterial
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Wardrobe_C::PreviewOutfitMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.PreviewOutfitMaterial");

	UTBP_UI_Wardrobe_C_PreviewOutfitMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.GetPlayerOutfitSetup
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerPersistentOutfitSetup                 OutfitSetup                                                (Parm, OutParm)
void UTBP_UI_Wardrobe_C::GetPlayerOutfitSetup(struct FTigerPersistentOutfitSetup* OutfitSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.GetPlayerOutfitSetup");

	UTBP_UI_Wardrobe_C_GetPlayerOutfitSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutfitSetup != nullptr)
		*OutfitSetup = params.OutfitSetup;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Item Selected
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Wardrobe_C::On_Item_Selected(struct FTigerVendorStoreCategoryItem* StoreItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Item Selected");

	UTBP_UI_Wardrobe_C_On_Item_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreItem != nullptr)
		*StoreItem = params.StoreItem;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCloseVendorWidget
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldRemoveWidget                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Wardrobe_C::OnCloseVendorWidget(bool* bShouldRemoveWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCloseVendorWidget");

	UTBP_UI_Wardrobe_C_OnCloseVendorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShouldRemoveWidget != nullptr)
		*bShouldRemoveWidget = params.bShouldRemoveWidget;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategorySelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerVendorStoreCategory*                   SelectedCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Wardrobe_C::OnCategorySelected(class UTigerVendorStoreCategory* SelectedCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategorySelected");

	UTBP_UI_Wardrobe_C_OnCategorySelected_Params params;
	params.SelectedCategory = SelectedCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ResetPlayerApperance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::ResetPlayerApperance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ResetPlayerApperance");

	UTBP_UI_Wardrobe_C_ResetPlayerApperance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOverlayClosed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Wardrobe_C::OnOverlayClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOverlayClosed");

	UTBP_UI_Wardrobe_C_OnOverlayClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SaveCharacterApperance
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentOutfitSetup                 PersistentOutfitSetup                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Wardrobe_C::SaveCharacterApperance(struct FTigerPersistentOutfitSetup* PersistentOutfitSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SaveCharacterApperance");

	UTBP_UI_Wardrobe_C_SaveCharacterApperance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PersistentOutfitSetup != nullptr)
		*PersistentOutfitSetup = params.PersistentOutfitSetup;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Wardrobe_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Tick");

	UTBP_UI_Wardrobe_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdateCloseButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::UpdateCloseButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdateCloseButton");

	UTBP_UI_Wardrobe_C_UpdateCloseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewAppearanceLocally
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerCharacterAppearance                   InAppearance                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Wardrobe_C::SetNewAppearanceLocally(const struct FTigerCharacterAppearance& InAppearance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewAppearanceLocally");

	UTBP_UI_Wardrobe_C_SetNewAppearanceLocally_Params params;
	params.InAppearance = InAppearance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOpen");

	UTBP_UI_Wardrobe_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnClose");

	UTBP_UI_Wardrobe_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBackgroundSceneShown
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBackgroundSceneShown");

	UTBP_UI_Wardrobe_C_OnBackgroundSceneShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Wardrobe_C::BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBodyTypeChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Tiger_ETigerGender                                 InBodyType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Wardrobe_C::OnBodyTypeChanged(Tiger_ETigerGender InBodyType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBodyTypeChanged");

	UTBP_UI_Wardrobe_C_OnBodyTypeChanged_Params params;
	params.InBodyType = InBodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSelectedSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnSelectedSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSelectedSlot");

	UTBP_UI_Wardrobe_C_OnSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSlotSelectionCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnSlotSelectionCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSlotSelectionCanceled");

	UTBP_UI_Wardrobe_C_OnSlotSelectionCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowCategoryItems
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPersistentStoreCategory                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Wardrobe_C::ShowCategoryItems(Tiger_ETigerPersistentStoreCategory Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowCategoryItems");

	UTBP_UI_Wardrobe_C_ShowCategoryItems_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_Wardrobe_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategoryItemsReceived
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPersistentStoreCategory                CategoryType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerVendorStoreCategoryItem>       CategoryItems                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Wardrobe_C::OnCategoryItemsReceived(Tiger_ETigerPersistentStoreCategory CategoryType, TArray<struct FTigerVendorStoreCategoryItem> CategoryItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategoryItemsReceived");

	UTBP_UI_Wardrobe_C_OnCategoryItemsReceived_Params params;
	params.CategoryType = CategoryType;
	params.CategoryItems = CategoryItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnInventoryActivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnInventoryActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnInventoryActivated");

	UTBP_UI_Wardrobe_C_OnInventoryActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemPreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Wardrobe_C::OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemPreview");

	UTBP_UI_Wardrobe_C_OnItemPreview_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Wardrobe_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Construct");

	UTBP_UI_Wardrobe_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTBP_UI_OutfitItem_C*                        OutfitItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Wardrobe_C::OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_C* OutfitItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemSelected");

	UTBP_UI_Wardrobe_C_OnItemSelected_Params params;
	params.Item = Item;
	params.OutfitItem = OutfitItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnItemUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemUnhovered");

	UTBP_UI_Wardrobe_C_OnItemUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewCardLocally
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCardData              InCard                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UTBP_UI_Wardrobe_C::SetNewCardLocally(const struct FTigerPersistentPlayerCardData& InCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewCardLocally");

	UTBP_UI_Wardrobe_C_SetNewCardLocally_Params params;
	params.InCard = InCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Wardrobe_C::BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature");

	UTBP_UI_Wardrobe_C_BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Wardrobe_C::OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemHovered");

	UTBP_UI_Wardrobe_C_OnItemHovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnGotStoreCategories
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Wardrobe_C::OnGotStoreCategories()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnGotStoreCategories");

	UTBP_UI_Wardrobe_C_OnGotStoreCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ExecuteUbergraph_TBP_UI_Wardrobe
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Wardrobe_C::ExecuteUbergraph_TBP_UI_Wardrobe(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ExecuteUbergraph_TBP_UI_Wardrobe");

	UTBP_UI_Wardrobe_C_ExecuteUbergraph_TBP_UI_Wardrobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
