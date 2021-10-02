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
//		Name   -> Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.HasExtraHealth
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasExtraHealth                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_DamageBase_C::HasExtraHealth(class ATigerPlayer* Player, bool* HasExtraHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.HasExtraHealth");

	UTBP_UI_DamageBase_C_HasExtraHealth_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasExtraHealth != nullptr)
		*HasExtraHealth = params.HasExtraHealth;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.GetWidgetColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ATBP_Player_C*                               Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_DamageBase_C::GetWidgetColor(class ATBP_Player_C* Player, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.GetWidgetColor");

	UTBP_UI_DamageBase_C_GetWidgetColor_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.CanHandleDirection
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     DamageLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsHandled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_DamageBase_C::CanHandleDirection(const struct FVector& DamageLocation, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.CanHandleDirection");

	UTBP_UI_DamageBase_C_CanHandleDirection_Params params;
	params.DamageLocation = DamageLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHandled != nullptr)
		*IsHandled = params.IsHandled;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.OnDamage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     DamageLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewHealthAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsHandled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_DamageBase_C::OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.OnDamage");

	UTBP_UI_DamageBase_C_OnDamage_Params params;
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
//		Name   -> Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.IsAlive
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsAlive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_DamageBase_C::IsAlive(bool* IsAlive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.IsAlive");

	UTBP_UI_DamageBase_C_IsAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
