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
//		Name   -> Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.GetPlayerIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		unsigned char                                      PlayerIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberMapMarkerWidget_C::GetPlayerIndex(unsigned char* PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.GetPlayerIndex");

	UTBP_GroupMemberMapMarkerWidget_C_GetPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.OnUpdated
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_GroupMemberMapMarkerWidget_C::OnUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.OnUpdated");

	UTBP_GroupMemberMapMarkerWidget_C_OnUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberMapMarkerWidget_C::ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget");

	UTBP_GroupMemberMapMarkerWidget_C_ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
