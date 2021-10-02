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
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnShieldBreakUI
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_DamageNumber_C::OnShieldBreakUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnShieldBreakUI");

	UTBP_UI_DamageNumber_C_OnShieldBreakUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnExtraHelathBreakUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_DamageNumber_C::OnExtraHelathBreakUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnExtraHelathBreakUI");

	UTBP_UI_DamageNumber_C_OnExtraHelathBreakUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateFontSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_DamageNumber_C::UpdateFontSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateFontSize");

	UTBP_UI_DamageNumber_C_UpdateFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.StartMoving
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_DamageNumber_C::StartMoving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.StartMoving");

	UTBP_UI_DamageNumber_C_StartMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdatePosition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InDeltaSeconds                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_DamageNumber_C::UpdatePosition(float InDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdatePosition");

	UTBP_UI_DamageNumber_C_UpdatePosition_Params params;
	params.InDeltaSeconds = InDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateNumber
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InWorldSpawnPosition                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InDamageAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InDamageColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InHealthLeft                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InHasExtraHealth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               InHasShield                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              InRangedDamageFalloffPercent                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InBelowLowHealthThreshold                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_DamageNumber_C::UpdateNumber(const struct FVector& InWorldSpawnPosition, int InDamageAmount, const struct FLinearColor& InDamageColor, float InHealthLeft, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateNumber");

	UTBP_UI_DamageNumber_C_UpdateNumber_Params params;
	params.InWorldSpawnPosition = InWorldSpawnPosition;
	params.InDamageAmount = InDamageAmount;
	params.InDamageColor = InDamageColor;
	params.InHealthLeft = InHealthLeft;
	params.InHasExtraHealth = InHasExtraHealth;
	params.InHasShield = InHasShield;
	params.InRangedDamageFalloffPercent = InRangedDamageFalloffPercent;
	params.InBelowLowHealthThreshold = InBelowLowHealthThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_DamageNumber_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Tick");

	UTBP_UI_DamageNumber_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_DamageNumber_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnAnimationFinished");

	UTBP_UI_DamageNumber_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_DamageNumber_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Construct");

	UTBP_UI_DamageNumber_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.ExecuteUbergraph_TBP_UI_DamageNumber
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_DamageNumber_C::ExecuteUbergraph_TBP_UI_DamageNumber(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.ExecuteUbergraph_TBP_UI_DamageNumber");

	UTBP_UI_DamageNumber_C_ExecuteUbergraph_TBP_UI_DamageNumber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
