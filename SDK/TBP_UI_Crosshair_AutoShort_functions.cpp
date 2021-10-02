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
//		Name   -> Function TBP_UI_Crosshair_AutoShort.TBP_UI_Crosshair_AutoShort_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Crosshair_AutoShort_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair_AutoShort.TBP_UI_Crosshair_AutoShort_C.Tick");

	UTBP_UI_Crosshair_AutoShort_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair_AutoShort.TBP_UI_Crosshair_AutoShort_C.ExecuteUbergraph_TBP_UI_Crosshair_AutoShort
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Crosshair_AutoShort_C::ExecuteUbergraph_TBP_UI_Crosshair_AutoShort(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair_AutoShort.TBP_UI_Crosshair_AutoShort_C.ExecuteUbergraph_TBP_UI_Crosshair_AutoShort");

	UTBP_UI_Crosshair_AutoShort_C_ExecuteUbergraph_TBP_UI_Crosshair_AutoShort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
