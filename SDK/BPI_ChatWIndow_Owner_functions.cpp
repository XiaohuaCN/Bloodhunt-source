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
//		Name   -> Function BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C.OnMessageInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               OnlyGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ChatWIndow_Owner_C::OnMessageInput(const struct FText& MessageText, bool OnlyGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C.OnMessageInput");

	UBPI_ChatWIndow_Owner_C_OnMessageInput_Params params;
	params.MessageText = MessageText;
	params.OnlyGroup = OnlyGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
