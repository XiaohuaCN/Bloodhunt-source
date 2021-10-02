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
//		Name   -> Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.SelectFirstQuest
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_QuestGrid_C::SelectFirstQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.SelectFirstQuest");

	UTBP_UI_QuestGrid_C_SelectFirstQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.OnButtonClicked
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_QuestPreview_C*                      InClickedWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestGrid_C::OnButtonClicked(class UTBP_UI_QuestPreview_C* InClickedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.OnButtonClicked");

	UTBP_UI_QuestGrid_C_OnButtonClicked_Params params;
	params.InClickedWidget = InClickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.PopulateGrid
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InStartIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UTigerQuest*>                         InQuests                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_QuestGrid_C::PopulateGrid(int InStartIndex, TArray<class UTigerQuest*>* InQuests)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.PopulateGrid");

	UTBP_UI_QuestGrid_C_PopulateGrid_Params params;
	params.InStartIndex = InStartIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InQuests != nullptr)
		*InQuests = params.InQuests;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.QuestSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerQuest*                                 InSelectedQuest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestGrid_C::QuestSelected__DelegateSignature(class UTigerQuest* InSelectedQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.QuestSelected__DelegateSignature");

	UTBP_UI_QuestGrid_C_QuestSelected__DelegateSignature_Params params;
	params.InSelectedQuest = InSelectedQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
