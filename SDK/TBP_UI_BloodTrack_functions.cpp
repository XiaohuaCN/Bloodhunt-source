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
//		Name   -> Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Update Passive Slot Opacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PlayerLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrack_C::Update_Passive_Slot_Opacity(int PlayerLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Update Passive Slot Opacity");

	UTBP_UI_BloodTrack_C_Update_Passive_Slot_Opacity_Params params;
	params.PlayerLevel = PlayerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PlayerLevelCap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PlayerLevelCurrent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsInInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BloodTrack_C::Init(int PlayerLevelCap, int PlayerLevelCurrent, bool bIsInInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Init");

	UTBP_UI_BloodTrack_C_Init_Params params;
	params.PlayerLevelCap = PlayerLevelCap;
	params.PlayerLevelCurrent = PlayerLevelCurrent;
	params.bIsInInventory = bIsInInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.GetSlotAtIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_BloodTrackPassiveSlot_C*             Blood_Track_Slot                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrack_C::GetSlotAtIndex(int Index, class UTBP_UI_BloodTrackPassiveSlot_C** Blood_Track_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.GetSlotAtIndex");

	UTBP_UI_BloodTrack_C_GetSlotAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Blood_Track_Slot != nullptr)
		*Blood_Track_Slot = params.Blood_Track_Slot;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Populate
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UTigerBloodTrackPassiveConfig*>       BloodTrack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_BloodTrack_C::Populate(TArray<class UTigerBloodTrackPassiveConfig*>* BloodTrack)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Populate");

	UTBP_UI_BloodTrack_C_Populate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BloodTrack != nullptr)
		*BloodTrack = params.BloodTrack;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
