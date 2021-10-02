#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnCharacterHit
struct UTBP_WEP_Ability_Dash_C_OnCharacterHit_Params
{
	class ATigerCharacter*                             AHitTigerCharacter;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnTerrainHitResult
struct UTBP_WEP_Ability_Dash_C_OnTerrainHitResult_Params
{
	class AActor*                                      InTerrainActor;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         InHitComponent;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  InHitResult;                                               // 0x0010(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.ExecuteUbergraph_TBP_WEP_Ability_Dash
struct UTBP_WEP_Ability_Dash_C_ExecuteUbergraph_TBP_WEP_Ability_Dash_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
