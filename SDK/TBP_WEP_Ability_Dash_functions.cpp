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
//		Name   -> Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnCharacterHit
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             AHitTigerCharacter                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_WEP_Ability_Dash_C::OnCharacterHit(class ATigerCharacter* AHitTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnCharacterHit");

	UTBP_WEP_Ability_Dash_C_OnCharacterHit_Params params;
	params.AHitTigerCharacter = AHitTigerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnTerrainHitResult
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AActor*                                      InTerrainActor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InHitComponent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  InHitResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UTBP_WEP_Ability_Dash_C::OnTerrainHitResult(class AActor* InTerrainActor, class UPrimitiveComponent* InHitComponent, const struct FHitResult& InHitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnTerrainHitResult");

	UTBP_WEP_Ability_Dash_C_OnTerrainHitResult_Params params;
	params.InTerrainActor = InTerrainActor;
	params.InHitComponent = InHitComponent;
	params.InHitResult = InHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.ExecuteUbergraph_TBP_WEP_Ability_Dash
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_WEP_Ability_Dash_C::ExecuteUbergraph_TBP_WEP_Ability_Dash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.ExecuteUbergraph_TBP_WEP_Ability_Dash");

	UTBP_WEP_Ability_Dash_C_ExecuteUbergraph_TBP_WEP_Ability_Dash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
