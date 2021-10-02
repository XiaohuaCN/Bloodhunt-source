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
//		Name   -> Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.GetInterfaceWidget
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerWheelInterfaceWidget*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTigerWheelInterfaceWidget* UTBP_UI_EquipWheel_C::GetInterfaceWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.GetInterfaceWidget");

	UTBP_UI_EquipWheel_C_GetInterfaceWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
