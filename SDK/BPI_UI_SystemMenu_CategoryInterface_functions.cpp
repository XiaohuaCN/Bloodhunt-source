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
//		Name   -> Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.CloseCategory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_UI_SystemMenu_CategoryInterface_C::CloseCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.CloseCategory");

	UBPI_UI_SystemMenu_CategoryInterface_C_CloseCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.OpenCategory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_UI_SystemMenu_CategoryInterface_C::OpenCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C.OpenCategory");

	UBPI_UI_SystemMenu_CategoryInterface_C_OpenCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
