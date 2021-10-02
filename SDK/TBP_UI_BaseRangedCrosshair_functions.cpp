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
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetBrushAspect
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 SlateBrush                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTBP_UI_BaseRangedCrosshair_C::GetBrushAspect(const struct FSlateBrush& SlateBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetBrushAspect");

	UTBP_UI_BaseRangedCrosshair_C_GetBrushAspect_Params params;
	params.SlateBrush = SlateBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetFov
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              OutFov                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BaseRangedCrosshair_C::GetFov(float* OutFov)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetFov");

	UTBP_UI_BaseRangedCrosshair_C_GetFov_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFov != nullptr)
		*OutFov = params.OutFov;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScalingCrosshairImage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerWeaponScalingCrosshairSlot            ScalingCrosshairSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_BaseRangedCrosshair_C::SetupScalingCrosshairImage(const struct FTigerWeaponScalingCrosshairSlot& ScalingCrosshairSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScalingCrosshairImage");

	UTBP_UI_BaseRangedCrosshair_C_SetupScalingCrosshairImage_Params params;
	params.ScalingCrosshairSlot = ScalingCrosshairSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupCrosshairImage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerWeaponCrosshairSlot                   TigerWeaponCrosshairSlot                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_BaseRangedCrosshair_C::SetupCrosshairImage(const struct FTigerWeaponCrosshairSlot& TigerWeaponCrosshairSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupCrosshairImage");

	UTBP_UI_BaseRangedCrosshair_C_SetupCrosshairImage_Params params;
	params.TigerWeaponCrosshairSlot = TigerWeaponCrosshairSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScopeVignette
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BaseRangedCrosshair_C::SetupScopeVignette()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScopeVignette");

	UTBP_UI_BaseRangedCrosshair_C_SetupScopeVignette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetAspectRatio
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTBP_UI_BaseRangedCrosshair_C::GetAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetAspectRatio");

	UTBP_UI_BaseRangedCrosshair_C_GetAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetCrosshairScale
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              InScreenSpaceSpread                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InAspectRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BaseRangedCrosshair_C::GetCrosshairScale(float InScreenSpaceSpread, float InAspectRatio, struct FVector2D* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetCrosshairScale");

	UTBP_UI_BaseRangedCrosshair_C_GetCrosshairScale_Params params;
	params.InScreenSpaceSpread = InScreenSpaceSpread;
	params.InAspectRatio = InAspectRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.UpdateCrosshairPositions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BaseRangedCrosshair_C::UpdateCrosshairPositions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.UpdateCrosshairPositions");

	UTBP_UI_BaseRangedCrosshair_C_UpdateCrosshairPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BaseRangedCrosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.Tick");

	UTBP_UI_BaseRangedCrosshair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BaseRangedCrosshair_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.PreConstruct");

	UTBP_UI_BaseRangedCrosshair_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BaseRangedCrosshair_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.OnInitialized");

	UTBP_UI_BaseRangedCrosshair_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.ExecuteUbergraph_TBP_UI_BaseRangedCrosshair
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BaseRangedCrosshair_C::ExecuteUbergraph_TBP_UI_BaseRangedCrosshair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.ExecuteUbergraph_TBP_UI_BaseRangedCrosshair");

	UTBP_UI_BaseRangedCrosshair_C_ExecuteUbergraph_TBP_UI_BaseRangedCrosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
