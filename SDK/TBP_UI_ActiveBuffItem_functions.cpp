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
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetRemainingTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Remaining_Time                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::GetRemainingTime(float* Remaining_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetRemainingTime");

	UTBP_UI_ActiveBuffItem_C_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Remaining_Time != nullptr)
		*Remaining_Time = params.Remaining_Time;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetCurrentProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::GetCurrentProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetCurrentProgress");

	UTBP_UI_ActiveBuffItem_C_GetCurrentProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetElapsedTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Elapsed_Time                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::GetElapsedTime(float* Elapsed_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetElapsedTime");

	UTBP_UI_ActiveBuffItem_C_GetElapsedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Elapsed_Time != nullptr)
		*Elapsed_Time = params.Elapsed_Time;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ApplyItemData
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  StatusImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                StatusColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CurrentDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerBuffProgressType                       ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::ApplyItemData(class UTexture2D* StatusImage, const struct FLinearColor& StatusColor, float CurrentDuration, float TotalDuration, Tiger_ETigerBuffProgressType ProgressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ApplyItemData");

	UTBP_UI_ActiveBuffItem_C_ApplyItemData_Params params;
	params.StatusImage = StatusImage;
	params.StatusColor = StatusColor;
	params.CurrentDuration = CurrentDuration;
	params.TotalDuration = TotalDuration;
	params.ProgressType = ProgressType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.CreateItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  StatusImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                StatusColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerBuffProgressType                       ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::CreateItem(class UTexture2D* StatusImage, const struct FLinearColor& StatusColor, float TotalDuration, Tiger_ETigerBuffProgressType ProgressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.CreateItem");

	UTBP_UI_ActiveBuffItem_C_CreateItem_Params params;
	params.StatusImage = StatusImage;
	params.StatusColor = StatusColor;
	params.TotalDuration = TotalDuration;
	params.ProgressType = ProgressType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.RefreshItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  StatusImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                StatusColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CurrentDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerBuffProgressType                       ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::RefreshItem(class UTexture2D* StatusImage, const struct FLinearColor& StatusColor, float CurrentDuration, float TotalDuration, Tiger_ETigerBuffProgressType ProgressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.RefreshItem");

	UTBP_UI_ActiveBuffItem_C_RefreshItem_Params params;
	params.StatusImage = StatusImage;
	params.StatusColor = StatusColor;
	params.CurrentDuration = CurrentDuration;
	params.TotalDuration = TotalDuration;
	params.ProgressType = ProgressType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.Tick");

	UTBP_UI_ActiveBuffItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ExecuteUbergraph_TBP_UI_ActiveBuffItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ActiveBuffItem_C::ExecuteUbergraph_TBP_UI_ActiveBuffItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ExecuteUbergraph_TBP_UI_ActiveBuffItem");

	UTBP_UI_ActiveBuffItem_C_ExecuteUbergraph_TBP_UI_ActiveBuffItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
