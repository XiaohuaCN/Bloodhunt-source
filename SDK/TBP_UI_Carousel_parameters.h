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

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSwappableRange
struct UTBP_UI_Carousel_C_SetSwappableRange_Params
{
	int                                                InMinIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InMaxIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSelectedItemIndex
struct UTBP_UI_Carousel_C_SetSelectedItemIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.UpdateSelectedItemLabel
struct UTBP_UI_Carousel_C_UpdateSelectedItemLabel_Params
{
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetItemLabels
struct UTBP_UI_Carousel_C_SetItemLabels_Params
{
	TArray<struct FText>                               NewItemLabels;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                NewSelectedItemIndex;                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.PreConstruct
struct UTBP_UI_Carousel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Carousel_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Carousel_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.ExecuteUbergraph_TBP_UI_Carousel
struct UTBP_UI_Carousel_C_ExecuteUbergraph_TBP_UI_Carousel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_Carousel_C_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
