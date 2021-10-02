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
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ShouldShowNameplate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumNpcNameplate_C::ShouldShowNameplate(bool* Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ShouldShowNameplate");

	UTBP_UI_ElysiumNpcNameplate_C_ShouldShowNameplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.HideIfMenuIsOpen
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UTBP_UI_ElysiumNpcNameplate_C::HideIfMenuIsOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.HideIfMenuIsOpen");

	UTBP_UI_ElysiumNpcNameplate_C_HideIfMenuIsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcIcon
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UTBP_UI_ElysiumNpcNameplate_C::GetNpcIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcIcon");

	UTBP_UI_ElysiumNpcNameplate_C_GetNpcIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UTBP_UI_ElysiumNpcNameplate_C::GetTalkIconVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconVisibility");

	UTBP_UI_ElysiumNpcNameplate_C_GetTalkIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UTBP_UI_ElysiumNpcNameplate_C::GetTalkIconColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconColor");

	UTBP_UI_ElysiumNpcNameplate_C_GetTalkIconColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcTitle
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTBP_UI_ElysiumNpcNameplate_C::GetNpcTitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcTitle");

	UTBP_UI_ElysiumNpcNameplate_C_GetNpcTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTBP_UI_ElysiumNpcNameplate_C::GetNpcName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcName");

	UTBP_UI_ElysiumNpcNameplate_C_GetNpcName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNpcNameplate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Tick");

	UTBP_UI_ElysiumNpcNameplate_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumNpcNameplate_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.PreConstruct");

	UTBP_UI_ElysiumNpcNameplate_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNpcNameplate_C::ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate");

	UTBP_UI_ElysiumNpcNameplate_C_ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
