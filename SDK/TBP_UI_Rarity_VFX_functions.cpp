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
//		Name   -> Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Rarity_VFX_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.Construct");

	UTBP_UI_Rarity_VFX_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetGradientTexture
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Rarity_VFX_C::SetGradientTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetGradientTexture");

	UTBP_UI_Rarity_VFX_C_SetGradientTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Rarity_VFX_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetColor");

	UTBP_UI_Rarity_VFX_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetIntensity
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Intentsity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Rarity_VFX_C::SetIntensity(float Intentsity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetIntensity");

	UTBP_UI_Rarity_VFX_C_SetIntensity_Params params;
	params.Intentsity = Intentsity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetAspectRatio
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   AspectRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Rarity_VFX_C::SetAspectRatio(const struct FVector2D& AspectRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetAspectRatio");

	UTBP_UI_Rarity_VFX_C_SetAspectRatio_Params params;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.ExecuteUbergraph_TBP_UI_Rarity_VFX
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Rarity_VFX_C::ExecuteUbergraph_TBP_UI_Rarity_VFX(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.ExecuteUbergraph_TBP_UI_Rarity_VFX");

	UTBP_UI_Rarity_VFX_C_ExecuteUbergraph_TBP_UI_Rarity_VFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
