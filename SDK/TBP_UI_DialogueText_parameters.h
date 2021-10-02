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

// Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetQuestObjective
struct UTBP_UI_DialogueText_C_SetQuestObjective_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetDialogueText
struct UTBP_UI_DialogueText_C_SetDialogueText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetNameAndTitle
struct UTBP_UI_DialogueText_C_SetNameAndTitle_Params
{
	struct FText                                       InName;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InTitle;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  InIcon;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
