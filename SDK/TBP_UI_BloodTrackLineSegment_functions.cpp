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
//		Name   -> Function TBP_UI_BloodTrackLineSegment.TBP_UI_BloodTrackLineSegment_C.SetOpacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackLineSegment_C::SetOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackLineSegment.TBP_UI_BloodTrackLineSegment_C.SetOpacity");

	UTBP_UI_BloodTrackLineSegment_C_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
