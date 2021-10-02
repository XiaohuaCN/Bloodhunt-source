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
//		Name   -> Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ArchetypeSelect_Clan_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.PreConstruct");

	UTBP_UI_ArchetypeSelect_Clan_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ArchetypeSelect_Clan_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.Construct");

	UTBP_UI_ArchetypeSelect_Clan_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_Clan
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeSelect_Clan_C::ExecuteUbergraph_TBP_UI_ArchetypeSelect_Clan(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_Clan");

	UTBP_UI_ArchetypeSelect_Clan_C_ExecuteUbergraph_TBP_UI_ArchetypeSelect_Clan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
