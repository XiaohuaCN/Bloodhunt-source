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
//		Name   -> Function BPI_MenuChangeInterface.BPI_MenuChangeInterface_C.On Menu Changed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
void UBPI_MenuChangeInterface_C::On_Menu_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_MenuChangeInterface.BPI_MenuChangeInterface_C.On Menu Changed");

	UBPI_MenuChangeInterface_C_On_Menu_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
