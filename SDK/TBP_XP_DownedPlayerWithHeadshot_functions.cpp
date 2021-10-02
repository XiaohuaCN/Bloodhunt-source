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
//		Name   -> Function TBP_XP_DownedPlayerWithHeadshot.TBP_XP_DownedPlayerWithHeadshot_C.GetExperienceAmount
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             EventTiedCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_EMatchBalanceMode                            BalanceMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OutOwnPlayerExperienceGain                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OutExperienceToAddToEveryGroupMemberIncludingSelf          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_XP_DownedPlayerWithHeadshot_C::GetExperienceAmount(class ATigerPlayer* Player, class ATigerCharacter* EventTiedCharacter, Tiger_EMatchBalanceMode BalanceMode, int* OutOwnPlayerExperienceGain, int* OutExperienceToAddToEveryGroupMemberIncludingSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_XP_DownedPlayerWithHeadshot.TBP_XP_DownedPlayerWithHeadshot_C.GetExperienceAmount");

	UTBP_XP_DownedPlayerWithHeadshot_C_GetExperienceAmount_Params params;
	params.Player = Player;
	params.EventTiedCharacter = EventTiedCharacter;
	params.BalanceMode = BalanceMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOwnPlayerExperienceGain != nullptr)
		*OutOwnPlayerExperienceGain = params.OutOwnPlayerExperienceGain;
	if (OutExperienceToAddToEveryGroupMemberIncludingSelf != nullptr)
		*OutExperienceToAddToEveryGroupMemberIncludingSelf = params.OutExperienceToAddToEveryGroupMemberIncludingSelf;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
