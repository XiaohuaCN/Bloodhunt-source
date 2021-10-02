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
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.ShouldSetSize
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ShouldSetSize                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Box_C::ShouldSetSize(bool* ShouldSetSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.ShouldSetSize");

	UTBP_UI_Box_C_ShouldSetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSetSize != nullptr)
		*ShouldSetSize = params.ShouldSetSize;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.SetBorderOpacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Box_C::SetBorderOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.SetBorderOpacity");

	UTBP_UI_Box_C_SetBorderOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.SetBorderTexture
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UImage*                                      ImageToSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  TextureToUse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Box_C::SetBorderTexture(class UImage* ImageToSet, class UTexture2D* TextureToUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.SetBorderTexture");

	UTBP_UI_Box_C_SetBorderTexture_Params params;
	params.ImageToSet = ImageToSet;
	params.TextureToUse = TextureToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.CalculateMargin
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Box_C::CalculateMargin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.CalculateMargin");

	UTBP_UI_Box_C_CalculateMargin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.SetupBorder
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Box_C::SetupBorder()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.SetupBorder");

	UTBP_UI_Box_C_SetupBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Box_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.PreConstruct");

	UTBP_UI_Box_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Box_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.Construct");

	UTBP_UI_Box_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Box.TBP_UI_Box_C.ExecuteUbergraph_TBP_UI_Box
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Box_C::ExecuteUbergraph_TBP_UI_Box(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Box.TBP_UI_Box_C.ExecuteUbergraph_TBP_UI_Box");

	UTBP_UI_Box_C_ExecuteUbergraph_TBP_UI_Box_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
