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

// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.SetQuest
struct UTBP_UI_QuestInfo_C_SetQuest_Params
{
	class UTigerQuest*                                 InNewQuest;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
struct UTBP_UI_QuestInfo_C_BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.Tick
struct UTBP_UI_QuestInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.ExecuteUbergraph_TBP_UI_QuestInfo
struct UTBP_UI_QuestInfo_C_ExecuteUbergraph_TBP_UI_QuestInfo_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
