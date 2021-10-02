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
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOpacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InWeatheringOpacity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetWeatheringOpacity(float InWeatheringOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOpacity");

	UTBP_UI_MaskedCardBorder_C_SetWeatheringOpacity_Params params;
	params.InWeatheringOpacity = InWeatheringOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.RandomizeWeatheringOffset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MaskedCardBorder_C::RandomizeWeatheringOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.RandomizeWeatheringOffset");

	UTBP_UI_MaskedCardBorder_C_RandomizeWeatheringOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOffset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   InWeatheringOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetWeatheringOffset(const struct FVector2D& InWeatheringOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOffset");

	UTBP_UI_MaskedCardBorder_C_SetWeatheringOffset_Params params;
	params.InWeatheringOffset = InWeatheringOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringScale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InWeatheringScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetWeatheringScale(float InWeatheringScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringScale");

	UTBP_UI_MaskedCardBorder_C_SetWeatheringScale_Params params;
	params.InWeatheringScale = InWeatheringScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringFadeWidth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InWeatheringFadeWidth                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetWeatheringFadeWidth(float InWeatheringFadeWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringFadeWidth");

	UTBP_UI_MaskedCardBorder_C_SetWeatheringFadeWidth_Params params;
	params.InWeatheringFadeWidth = InWeatheringFadeWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringWidth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InWeatheringWidth                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetWeatheringWidth(float InWeatheringWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringWidth");

	UTBP_UI_MaskedCardBorder_C_SetWeatheringWidth_Params params;
	params.InWeatheringWidth = InWeatheringWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringTexture
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  InWeatheringTexture                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetWeatheringTexture(class UTexture2D* InWeatheringTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringTexture");

	UTBP_UI_MaskedCardBorder_C_SetWeatheringTexture_Params params;
	params.InWeatheringTexture = InWeatheringTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InBorderColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetBorderColor(const struct FLinearColor& InBorderColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderColor");

	UTBP_UI_MaskedCardBorder_C_SetBorderColor_Params params;
	params.InBorderColor = InBorderColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderWidth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InBorderWidth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetBorderWidth(float InBorderWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderWidth");

	UTBP_UI_MaskedCardBorder_C_SetBorderWidth_Params params;
	params.InBorderWidth = InBorderWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetCornerRadius
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InCornerRadius                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::SetCornerRadius(float InCornerRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetCornerRadius");

	UTBP_UI_MaskedCardBorder_C_SetCornerRadius_Params params;
	params.InCornerRadius = InCornerRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.InitializeParameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MaskedCardBorder_C::InitializeParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.InitializeParameters");

	UTBP_UI_MaskedCardBorder_C_InitializeParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTBP_UI_MaskedCardBorder_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.Construct");

	UTBP_UI_MaskedCardBorder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.ExecuteUbergraph_TBP_UI_MaskedCardBorder
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MaskedCardBorder_C::ExecuteUbergraph_TBP_UI_MaskedCardBorder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.ExecuteUbergraph_TBP_UI_MaskedCardBorder");

	UTBP_UI_MaskedCardBorder_C_ExecuteUbergraph_TBP_UI_MaskedCardBorder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
