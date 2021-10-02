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
//		Name   -> Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.SetQuest
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerQuest*                                 InNewQuest                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestInfo_C::SetQuest(class UTigerQuest* InNewQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.SetQuest");

	UTBP_UI_QuestInfo_C_SetQuest_Params params;
	params.InNewQuest = InNewQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestInfo_C::BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	UTBP_UI_QuestInfo_C_BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.Tick");

	UTBP_UI_QuestInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.ExecuteUbergraph_TBP_UI_QuestInfo
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestInfo_C::ExecuteUbergraph_TBP_UI_QuestInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.ExecuteUbergraph_TBP_UI_QuestInfo");

	UTBP_UI_QuestInfo_C_ExecuteUbergraph_TBP_UI_QuestInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
