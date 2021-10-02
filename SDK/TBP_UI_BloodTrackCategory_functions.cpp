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
//		Name   -> Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Fill
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UTigerBloodTrackPassiveConfig*>       Passives                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<class UTigerBloodTrackPassiveConfig*>       Passives_To_Exclude                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UTBP_UI_BloodTrack_C*                        In_Blood_Track                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackCategory_C::Fill(TArray<class UTigerBloodTrackPassiveConfig*>* Passives, TArray<class UTigerBloodTrackPassiveConfig*>* Passives_To_Exclude, class UTBP_UI_BloodTrack_C* In_Blood_Track)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Fill");

	UTBP_UI_BloodTrackCategory_C_Fill_Params params;
	params.In_Blood_Track = In_Blood_Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Passives != nullptr)
		*Passives = params.Passives;
	if (Passives_To_Exclude != nullptr)
		*Passives_To_Exclude = params.Passives_To_Exclude;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BloodTrackCategory_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Construct");

	UTBP_UI_BloodTrackCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.ExecuteUbergraph_TBP_UI_BloodTrackCategory
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackCategory_C::ExecuteUbergraph_TBP_UI_BloodTrackCategory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.ExecuteUbergraph_TBP_UI_BloodTrackCategory");

	UTBP_UI_BloodTrackCategory_C_ExecuteUbergraph_TBP_UI_BloodTrackCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
