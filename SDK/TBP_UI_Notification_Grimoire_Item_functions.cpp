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
//		Name   -> Function TBP_UI_Notification_Grimoire_Item.TBP_UI_Notification_Grimoire_Item_C.SetText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Line1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Notification_Grimoire_Item_C::SetText(const struct FText& Line1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notification_Grimoire_Item.TBP_UI_Notification_Grimoire_Item_C.SetText");

	UTBP_UI_Notification_Grimoire_Item_C_SetText_Params params;
	params.Line1 = Line1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
