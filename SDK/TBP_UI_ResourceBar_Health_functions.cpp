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
//		Name   -> Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetLockedColor
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UTBP_UI_ResourceBar_Health_C::GetLockedColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetLockedColor");

	UTBP_UI_ResourceBar_Health_C_GetLockedColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetEmptyColor
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UTBP_UI_ResourceBar_Health_C::GetEmptyColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetEmptyColor");

	UTBP_UI_ResourceBar_Health_C_GetEmptyColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.IsDowned
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		bool                                               Downed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ResourceBar_Health_C::IsDowned(bool* Downed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.IsDowned");

	UTBP_UI_ResourceBar_Health_C_IsDowned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Downed != nullptr)
		*Downed = params.Downed;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetFilledColor
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UTBP_UI_ResourceBar_Health_C::GetFilledColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetFilledColor");

	UTBP_UI_ResourceBar_Health_C_GetFilledColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetRecentResourcesLost
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTBP_UI_ResourceBar_Health_C::GetRecentResourcesLost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetRecentResourcesLost");

	UTBP_UI_ResourceBar_Health_C_GetRecentResourcesLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetMaxResources
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTBP_UI_ResourceBar_Health_C::GetMaxResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetMaxResources");

	UTBP_UI_ResourceBar_Health_C_GetMaxResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetCurrentResources
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTBP_UI_ResourceBar_Health_C::GetCurrentResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C.GetCurrentResources");

	UTBP_UI_ResourceBar_Health_C_GetCurrentResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
