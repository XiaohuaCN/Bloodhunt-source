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
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.UpdateInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C::UpdateInfo(const struct FText& Name, const struct FText& Description, class UTexture2D* Icon, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.UpdateInfo");

	UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_UpdateInfo_Params params;
	params.Name = Name;
	params.Description = Description;
	params.Icon = Icon;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Construct");

	UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Tick");

	UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C::ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot");

	UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
