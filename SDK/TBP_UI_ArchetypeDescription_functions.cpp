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
//		Name   -> Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ArchetypeDescription_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.PreConstruct");

	UTBP_UI_ArchetypeDescription_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ChangeArchetype
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPlayerClanData*                        InClanData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeDescription_C::ChangeArchetype(class UTigerPlayerClanData* InClanData, class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ChangeArchetype");

	UTBP_UI_ArchetypeDescription_C_ChangeArchetype_Params params;
	params.InClanData = InClanData;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ShowDetails
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ArchetypeDescription_C::ShowDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ShowDetails");

	UTBP_UI_ArchetypeDescription_C_ShowDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.HideDetails
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ArchetypeDescription_C::HideDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.HideDetails");

	UTBP_UI_ArchetypeDescription_C_HideDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ExecuteUbergraph_TBP_UI_ArchetypeDescription
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeDescription_C::ExecuteUbergraph_TBP_UI_ArchetypeDescription(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ExecuteUbergraph_TBP_UI_ArchetypeDescription");

	UTBP_UI_ArchetypeDescription_C_ExecuteUbergraph_TBP_UI_ArchetypeDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
