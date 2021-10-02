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

// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.SelectFirstQuest
struct UTBP_UI_QuestGrid_C_SelectFirstQuest_Params
{
};

// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.OnButtonClicked
struct UTBP_UI_QuestGrid_C_OnButtonClicked_Params
{
	class UTBP_UI_QuestPreview_C*                      InClickedWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.PopulateGrid
struct UTBP_UI_QuestGrid_C_PopulateGrid_Params
{
	int                                                InStartIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTigerQuest*>                         InQuests;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.QuestSelected__DelegateSignature
struct UTBP_UI_QuestGrid_C_QuestSelected__DelegateSignature_Params
{
	class UTigerQuest*                                 InSelectedQuest;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
