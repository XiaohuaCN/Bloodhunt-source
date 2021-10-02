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
//		Name   -> Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.SetPingIcons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  BG_Texture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Border_Texture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Ping_Size                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Icon_Offset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   ImageSizeMultiplier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PingIcon_C::SetPingIcons(class UTexture2D* BG_Texture, class UTexture2D* Border_Texture, const struct FVector2D& Ping_Size, const struct FVector2D& Icon_Offset, const struct FVector2D& ImageSizeMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.SetPingIcons");

	UTBP_UI_PingIcon_C_SetPingIcons_Params params;
	params.BG_Texture = BG_Texture;
	params.Border_Texture = Border_Texture;
	params.Ping_Size = Ping_Size;
	params.Icon_Offset = Icon_Offset;
	params.ImageSizeMultiplier = ImageSizeMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetHorizontalIconOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              OutIconOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PingIcon_C::GetHorizontalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetHorizontalIconOffset");

	UTBP_UI_PingIcon_C_GetHorizontalIconOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetVerticalIconOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              OutIconOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PingIcon_C::GetVerticalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetVerticalIconOffset");

	UTBP_UI_PingIcon_C_GetVerticalIconOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.OnPingDataUpdated
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPingClientData*                        InPingData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PingIcon_C::OnPingDataUpdated(class UTigerPingClientData* InPingData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.OnPingDataUpdated");

	UTBP_UI_PingIcon_C_OnPingDataUpdated_Params params;
	params.InPingData = InPingData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.ExecuteUbergraph_TBP_UI_PingIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PingIcon_C::ExecuteUbergraph_TBP_UI_PingIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.ExecuteUbergraph_TBP_UI_PingIcon");

	UTBP_UI_PingIcon_C_ExecuteUbergraph_TBP_UI_PingIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
