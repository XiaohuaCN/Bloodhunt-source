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
//		Name   -> Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_PaperDoll_Legacy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.UserConstructionScript");

	ATBP_PaperDoll_Legacy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.OnLoaded_066C9A124476C48220EE15B4551280B2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ATBP_PaperDoll_Legacy_C::OnLoaded_066C9A124476C48220EE15B4551280B2(class UClass* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.OnLoaded_066C9A124476C48220EE15B4551280B2");

	ATBP_PaperDoll_Legacy_C_OnLoaded_066C9A124476C48220EE15B4551280B2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.PostNewCharacterSelected
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_PaperDoll_Legacy_C::PostNewCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.PostNewCharacterSelected");

	ATBP_PaperDoll_Legacy_C_PostNewCharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_PaperDoll_Legacy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ReceiveBeginPlay");

	ATBP_PaperDoll_Legacy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_PaperDoll_Legacy_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ReceiveDestroyed");

	ATBP_PaperDoll_Legacy_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ExecuteUbergraph_TBP_PaperDoll_Legacy
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_PaperDoll_Legacy_C::ExecuteUbergraph_TBP_PaperDoll_Legacy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ExecuteUbergraph_TBP_PaperDoll_Legacy");

	ATBP_PaperDoll_Legacy_C_ExecuteUbergraph_TBP_PaperDoll_Legacy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
