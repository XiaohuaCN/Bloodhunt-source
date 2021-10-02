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
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetColorByItemType
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerItemAsset*                             InItemAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_UIColors_C::STATIC_GetColorByItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FLinearColor* OutColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetColorByItemType");

	UTBFL_UIColors_C_GetColorByItemType_Params params;
	params.InItemAsset = InItemAsset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetOutlineColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerOutlineMode                            InOutlineMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      InPlayerIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_UIColors_C::STATIC_GetOutlineColor(Tiger_ETigerOutlineMode InOutlineMode, unsigned char InPlayerIndex, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetOutlineColor");

	UTBFL_UIColors_C_GetOutlineColor_Params params;
	params.InOutlineMode = InOutlineMode;
	params.InPlayerIndex = InPlayerIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetBackgroundColorByPlayerStatus
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InPlayerStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 OutAccentColor                                             (Parm, OutParm)
void UTBFL_UIColors_C::STATIC_GetBackgroundColorByPlayerStatus(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FSlateColor* OutAccentColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetBackgroundColorByPlayerStatus");

	UTBFL_UIColors_C_GetBackgroundColorByPlayerStatus_Params params;
	params.InPlayerStatus = InPlayerStatus;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAccentColor != nullptr)
		*OutAccentColor = params.OutAccentColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetAccentColorByPlayerStatus
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InPlayerStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                OutAccentColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_UIColors_C::STATIC_GetAccentColorByPlayerStatus(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FLinearColor* OutAccentColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetAccentColorByPlayerStatus");

	UTBFL_UIColors_C_GetAccentColorByPlayerStatus_Params params;
	params.InPlayerStatus = InPlayerStatus;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAccentColor != nullptr)
		*OutAccentColor = params.OutAccentColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetPlayerColorByIndex
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		unsigned char                                      InPlayerIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerColourSpace                            InColorSpace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_UIColors_C::STATIC_GetPlayerColorByIndex(unsigned char InPlayerIndex, Tiger_ETigerColourSpace InColorSpace, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetPlayerColorByIndex");

	UTBFL_UIColors_C_GetPlayerColorByIndex_Params params;
	params.InPlayerIndex = InPlayerIndex;
	params.InColorSpace = InColorSpace;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorSlate
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerUIColor                                UIColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerColourSpace                            ColorSpace                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
void UTBFL_UIColors_C::STATIC_GetUIColorSlate(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColorSpace, class UObject* __WorldContext, struct FSlateColor* SlateColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorSlate");

	UTBFL_UIColors_C_GetUIColorSlate_Params params;
	params.UIColor = UIColor;
	params.ColorSpace = ColorSpace;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorAsText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerUIColor                                UIColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerColourSpace                            ColourSpace                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ColorText                                                  (Parm, OutParm)
void UTBFL_UIColors_C::STATIC_GetUIColorAsText(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FText* ColorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorAsText");

	UTBFL_UIColors_C_GetUIColorAsText_Params params;
	params.UIColor = UIColor;
	params.ColourSpace = ColourSpace;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorText != nullptr)
		*ColorText = params.ColorText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetUIColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerUIColor                                UIColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerColourSpace                            ColourSpace                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                LinearColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_UIColors_C::STATIC_GetUIColor(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FLinearColor* LinearColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetUIColor");

	UTBFL_UIColors_C_GetUIColor_Params params;
	params.UIColor = UIColor;
	params.ColourSpace = ColourSpace;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UIColors.TBFL_UIColors_C.GetData
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerUIColorSet*                            ColorSet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_UIColors_C::STATIC_GetData(class UObject* __WorldContext, class UTigerUIColorSet** ColorSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UIColors.TBFL_UIColors_C.GetData");

	UTBFL_UIColors_C_GetData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorSet != nullptr)
		*ColorSet = params.ColorSet;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
