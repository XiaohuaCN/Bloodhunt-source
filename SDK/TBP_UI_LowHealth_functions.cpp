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
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateBloodSplatter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_LowHealth_C::UpdateBloodSplatter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateBloodSplatter");

	UTBP_UI_LowHealth_C_UpdateBloodSplatter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.IsLowHealth
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_LowHealth_C::IsLowHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.IsLowHealth");

	UTBP_UI_LowHealth_C_IsLowHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.StopLowHealthAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::StopLowHealthAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.StopLowHealthAudio");

	UTBP_UI_LowHealth_C_StopLowHealthAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.GetHitDirection
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATBP_Player_C*                               Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     DamageLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LowHealth_C::GetHitDirection(class ATBP_Player_C* Player, const struct FVector& DamageLocation, struct FVector* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.GetHitDirection");

	UTBP_UI_LowHealth_C_GetHitDirection_Params params;
	params.Player = Player;
	params.DamageLocation = DamageLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnDamage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     DamageLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewHealthAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsHandled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_LowHealth_C::OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnDamage");

	UTBP_UI_LowHealth_C_OnDamage_Params params;
	params.DamageLocation = DamageLocation;
	params.DamageAmount = DamageAmount;
	params.NewHealthAmount = NewHealthAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHandled != nullptr)
		*IsHandled = params.IsHandled;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdatePulse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta_Seconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LowHealth_C::UpdatePulse(float Delta_Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdatePulse");

	UTBP_UI_LowHealth_C_UpdatePulse_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateLowHealthOverlay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta_Seconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LowHealth_C::UpdateLowHealthOverlay(float Delta_Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateLowHealthOverlay");

	UTBP_UI_LowHealth_C_UpdateLowHealthOverlay_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_LowHealth_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Construct");

	UTBP_UI_LowHealth_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LowHealth_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Tick");

	UTBP_UI_LowHealth_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnExtraHealthDepleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::OnExtraHealthDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnExtraHealthDepleted");

	UTBP_UI_LowHealth_C_OnExtraHealthDepleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::ExtraHealthAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationFinished");

	UTBP_UI_LowHealth_C_ExtraHealthAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::ExtraHealthAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationStarted");

	UTBP_UI_LowHealth_C_ExtraHealthAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::TakeDamageAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationFinished");

	UTBP_UI_LowHealth_C_TakeDamageAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::TakeDamageAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationStarted");

	UTBP_UI_LowHealth_C_TakeDamageAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnShieldDepleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::OnShieldDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnShieldDepleted");

	UTBP_UI_LowHealth_C_OnShieldDepleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::ShieldDepletedAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationFinished");

	UTBP_UI_LowHealth_C_ShieldDepletedAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_LowHealth_C::ShieldDepletedAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationStarted");

	UTBP_UI_LowHealth_C_ShieldDepletedAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.PlayLowHealthOneShot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LowHealth_C::PlayLowHealthOneShot(float NewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.PlayLowHealthOneShot");

	UTBP_UI_LowHealth_C_PlayLowHealthOneShot_Params params;
	params.NewHealth = NewHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExecuteUbergraph_TBP_UI_LowHealth
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LowHealth_C::ExecuteUbergraph_TBP_UI_LowHealth(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExecuteUbergraph_TBP_UI_LowHealth");

	UTBP_UI_LowHealth_C_ExecuteUbergraph_TBP_UI_LowHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
