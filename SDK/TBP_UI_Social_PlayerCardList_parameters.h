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

// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.FixLayout
struct UTBP_UI_Social_PlayerCardList_C_FixLayout_Params
{
};

// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.ClearList
struct UTBP_UI_Social_PlayerCardList_C_ClearList_Params
{
};

// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.AddPlayerWidget
struct UTBP_UI_Social_PlayerCardList_C_AddPlayerWidget_Params
{
	class UUserWidget*                                 InPlayerWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InIndex;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.RowColumnFromIndex
struct UTBP_UI_Social_PlayerCardList_C_RowColumnFromIndex_Params
{
	int                                                InIndex;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Row;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Column;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
