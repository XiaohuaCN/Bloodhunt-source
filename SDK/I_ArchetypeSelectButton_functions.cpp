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
//		Name   -> Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsDeselected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UI_ArchetypeSelectButton_C::SetIsDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsDeselected");

	UI_ArchetypeSelectButton_C_SetIsDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UI_ArchetypeSelectButton_C::SetIsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsSelected");

	UI_ArchetypeSelectButton_C_SetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
