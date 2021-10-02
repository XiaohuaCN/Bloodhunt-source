#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBFL_UIColors.TBFL_UIColors_C.GetColorByItemType
struct UTBFL_UIColors_C_GetColorByItemType_Params
{
	class UTigerItemAsset*                             InItemAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OutColor;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetOutlineColor
struct UTBFL_UIColors_C_GetOutlineColor_Params
{
	Tiger_ETigerOutlineMode                            InOutlineMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      InPlayerIndex;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetBackgroundColorByPlayerStatus
struct UTBFL_UIColors_C_GetBackgroundColorByPlayerStatus_Params
{
	TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InPlayerStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 OutAccentColor;                                            // 0x0010(0x0028)  (Parm, OutParm)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetAccentColorByPlayerStatus
struct UTBFL_UIColors_C_GetAccentColorByPlayerStatus_Params
{
	TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InPlayerStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OutAccentColor;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetPlayerColorByIndex
struct UTBFL_UIColors_C_GetPlayerColorByIndex_Params
{
	unsigned char                                      InPlayerIndex;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerColourSpace                            InColorSpace;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorSlate
struct UTBFL_UIColors_C_GetUIColorSlate_Params
{
	Tiger_ETigerUIColor                                UIColor;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerColourSpace                            ColorSpace;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 SlateColor;                                                // 0x0010(0x0028)  (Parm, OutParm)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorAsText
struct UTBFL_UIColors_C_GetUIColorAsText_Params
{
	Tiger_ETigerUIColor                                UIColor;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerColourSpace                            ColourSpace;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ColorText;                                                 // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetUIColor
struct UTBFL_UIColors_C_GetUIColor_Params
{
	Tiger_ETigerUIColor                                UIColor;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerColourSpace                            ColourSpace;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LinearColor;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_UIColors.TBFL_UIColors_C.GetData
struct UTBFL_UIColors_C_GetData_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerUIColorSet*                            ColorSet;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
