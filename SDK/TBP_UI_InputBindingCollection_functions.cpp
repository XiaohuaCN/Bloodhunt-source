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
//		Name   -> Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.SetActiveChild
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_InputBinding_C*                      Input_Binding                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputBindingCollection_C::SetActiveChild(class UTBP_UI_InputBinding_C* Input_Binding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.SetActiveChild");

	UTBP_UI_InputBindingCollection_C_SetActiveChild_Params params;
	params.Input_Binding = Input_Binding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InputBindingCollection_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.Construct");

	UTBP_UI_InputBindingCollection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.ExecuteUbergraph_TBP_UI_InputBindingCollection
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputBindingCollection_C::ExecuteUbergraph_TBP_UI_InputBindingCollection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.ExecuteUbergraph_TBP_UI_InputBindingCollection");

	UTBP_UI_InputBindingCollection_C_ExecuteUbergraph_TBP_UI_InputBindingCollection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
