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
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.CreateWidgetForArchetype
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPowerKitType                           InArchetypeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UTBP_UI_HorizontalArchetypeSelector_Default_C::CreateWidgetForArchetype(Tiger_ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.CreateWidgetForArchetype");

	UTBP_UI_HorizontalArchetypeSelector_Default_C_CreateWidgetForArchetype_Params params;
	params.InArchetypeType = InArchetypeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
