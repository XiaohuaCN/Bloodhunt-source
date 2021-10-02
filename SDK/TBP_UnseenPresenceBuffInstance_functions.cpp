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
//		Name   -> Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.UpdateInvisibilityMaterial
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstanceDynamic*                    MaterialInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UnseenPresenceBuffInstance_C::UpdateInvisibilityMaterial(float DeltaTime, class ATigerPlayer* Player, class UMaterialInstanceDynamic* MaterialInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.UpdateInvisibilityMaterial");

	UTBP_UnseenPresenceBuffInstance_C_UpdateInvisibilityMaterial_Params params;
	params.DeltaTime = DeltaTime;
	params.Player = Player;
	params.MaterialInstance = MaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.ExecuteUbergraph_TBP_UnseenPresenceBuffInstance
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UnseenPresenceBuffInstance_C::ExecuteUbergraph_TBP_UnseenPresenceBuffInstance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.ExecuteUbergraph_TBP_UnseenPresenceBuffInstance");

	UTBP_UnseenPresenceBuffInstance_C_ExecuteUbergraph_TBP_UnseenPresenceBuffInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
