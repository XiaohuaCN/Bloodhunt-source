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
//		Name   -> Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.SetTigerCharacter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             TigerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBarDamageOnly_C::SetTigerCharacter(class ATigerCharacter* TigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.SetTigerCharacter");

	UTBP_UI_EnemyHealthBarDamageOnly_C_SetTigerCharacter_Params params;
	params.TigerCharacter = TigerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Set Damage Amount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InHitLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InDamageColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InTotalDamageAmount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InHealthDamageAmount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InHasExtraHealth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               InHasShield                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              InRangedDamageFalloffPercent                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InBelowLowHealthThreshold                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_EnemyHealthBarDamageOnly_C::Set_Damage_Amount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Set Damage Amount");

	UTBP_UI_EnemyHealthBarDamageOnly_C_Set_Damage_Amount_Params params;
	params.InHitLocation = InHitLocation;
	params.InDamageColor = InDamageColor;
	params.InTotalDamageAmount = InTotalDamageAmount;
	params.InHealthDamageAmount = InHealthDamageAmount;
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
//		Name   -> Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.UpdateCurrentDamageNumber
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_EnemyHealthBarDamageOnly_C::UpdateCurrentDamageNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.UpdateCurrentDamageNumber");

	UTBP_UI_EnemyHealthBarDamageOnly_C_UpdateCurrentDamageNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_EnemyHealthBarDamageOnly_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Construct");

	UTBP_UI_EnemyHealthBarDamageOnly_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBarDamageOnly_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Tick");

	UTBP_UI_EnemyHealthBarDamageOnly_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBarDamageOnly_C::ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly");

	UTBP_UI_EnemyHealthBarDamageOnly_C_ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
