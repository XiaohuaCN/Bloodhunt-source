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
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.GetItemFromColumnIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ColumnIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_ActiveBuffItem_C*                    Item                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::GetItemFromColumnIndex(int ColumnIndex, class UTBP_UI_ActiveBuffItem_C** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.GetItemFromColumnIndex");

	UTBP_UI_ActiveBuffsPanel_C_GetItemFromColumnIndex_Params params;
	params.ColumnIndex = ColumnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.Tick");

	UTBP_UI_ActiveBuffsPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffAdded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBuff*                                  Buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffAdded");

	UTBP_UI_ActiveBuffsPanel_C_OnBuffAdded_Params params;
	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRemoved
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBuff*                                  Buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRemoved");

	UTBP_UI_ActiveBuffsPanel_C_OnBuffRemoved_Params params;
	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRefreshed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBuff*                                  Buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRefreshed");

	UTBP_UI_ActiveBuffsPanel_C_OnBuffRefreshed_Params params;
	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPawnChanged_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::OnPawnChanged_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPawnChanged_Event_1");

	UTBP_UI_ActiveBuffsPanel_C_OnPawnChanged_Event_1_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPlayerStateReceived
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::OnPlayerStateReceived(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPlayerStateReceived");

	UTBP_UI_ActiveBuffsPanel_C_OnPlayerStateReceived_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.ExecuteUbergraph_TBP_UI_ActiveBuffsPanel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffsPanel_C::ExecuteUbergraph_TBP_UI_ActiveBuffsPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.ExecuteUbergraph_TBP_UI_ActiveBuffsPanel");

	UTBP_UI_ActiveBuffsPanel_C_ExecuteUbergraph_TBP_UI_ActiveBuffsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
