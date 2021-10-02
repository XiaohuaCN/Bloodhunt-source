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
//		Name   -> Function TBP_UI_BloodTrackLevelHeader.TBP_UI_BloodTrackLevelHeader_C.SetTextAndColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackLevelHeader_C::SetTextAndColor(const struct FText& InText, const struct FLinearColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackLevelHeader.TBP_UI_BloodTrackLevelHeader_C.SetTextAndColor");

	UTBP_UI_BloodTrackLevelHeader_C_SetTextAndColor_Params params;
	params.InText = InText;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
