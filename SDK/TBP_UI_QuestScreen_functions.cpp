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
//		Name   -> Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.SelectFirstElementOfCurrentGrid
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_QuestScreen_C::SelectFirstElementOfCurrentGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.SelectFirstElementOfCurrentGrid");

	UTBP_UI_QuestScreen_C_SelectFirstElementOfCurrentGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnQuestSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerQuest*                                 InSelectedQuest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestScreen_C::OnQuestSelected(class UTigerQuest* InSelectedQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.OnQuestSelected");

	UTBP_UI_QuestScreen_C_OnQuestSelected_Params params;
	params.InSelectedQuest = InSelectedQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RefreshHeaderAndButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_QuestScreen_C::RefreshHeaderAndButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RefreshHeaderAndButtons");

	UTBP_UI_QuestScreen_C_RefreshHeaderAndButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RebuildWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_QuestScreen_C::RebuildWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.RebuildWidget");

	UTBP_UI_QuestScreen_C_RebuildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_QuestScreen_C::BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UTBP_UI_QuestScreen_C_BndEvt__QuestsLeftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_QuestScreen_C::BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UTBP_UI_QuestScreen_C_BndEvt__QuestsRightButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.ExecuteUbergraph_TBP_UI_QuestScreen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestScreen_C::ExecuteUbergraph_TBP_UI_QuestScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestScreen.TBP_UI_QuestScreen_C.ExecuteUbergraph_TBP_UI_QuestScreen");

	UTBP_UI_QuestScreen_C_ExecuteUbergraph_TBP_UI_QuestScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
