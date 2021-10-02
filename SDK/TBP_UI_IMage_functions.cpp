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
//		Name   -> Function TBP_UI_IMage.TBP_UI_Image_C.GetImage
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UImage*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UImage* UTBP_UI_Image_C::GetImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IMage.TBP_UI_Image_C.GetImage");

	UTBP_UI_Image_C_GetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
