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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_UIColors.TBFL_UIColors_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBFL_UIColors_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBFL_UIColors.TBFL_UIColors_C");
		return ptr;
	}



	void STATIC_GetColorByItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FLinearColor* OutColor);
	void STATIC_GetOutlineColor(Tiger_ETigerOutlineMode InOutlineMode, unsigned char InPlayerIndex, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GetBackgroundColorByPlayerStatus(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FSlateColor* OutAccentColor);
	void STATIC_GetAccentColorByPlayerStatus(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FLinearColor* OutAccentColor);
	void STATIC_GetPlayerColorByIndex(unsigned char InPlayerIndex, Tiger_ETigerColourSpace InColorSpace, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GetUIColorSlate(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColorSpace, class UObject* __WorldContext, struct FSlateColor* SlateColor);
	void STATIC_GetUIColorAsText(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FText* ColorText);
	void STATIC_GetUIColor(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FLinearColor* LinearColor);
	void STATIC_GetData(class UObject* __WorldContext, class UTigerUIColorSet** ColorSet);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
