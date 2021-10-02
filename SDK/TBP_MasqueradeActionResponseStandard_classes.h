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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C
// 0x02D0 (FullSize[0x0310] - InheritedSize[0x0040])
class UTBP_MasqueradeActionResponseStandard_C : public UTigerMasqueradeActionResponse
{
public:
	TMap<Tiger_ETigerAIPlayerAction, float>            CivPlayerFearValues;                                       // 0x0040(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            CivPlayerDisciplineFearValues;                             // 0x0090(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            GuardPlayerFearValues;                                     // 0x00E0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            GuardPlayerDisciplineFearValues;                           // 0x0130(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            EntityPlayerFearValues;                                    // 0x0180(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            EntityPlayerDisciplineFearValues;                          // 0x01D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            MasqueradeValues;                                          // 0x0220(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            DisciplineMasqueradeValues;                                // 0x0270(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerAIPlayerAction, float>            MasqueradeValuesJudge;                                     // 0x02C0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C");
		return ptr;
	}



	bool KilledNonCivilian(Tiger_ETigerAIPlayerAction PlayerAction, class ATigerBaseNPC* NPC);
	float GetPlayerMasqueradePointsForAction(class ATigerNPC* InNpc, class ATigerPlayer* InTigerPlayer, const struct FTigerAIPlayerAction& InPlayerAction);
	void IsActionVampiricMobility(Tiger_ETigerAIPlayerAction Action, bool* IsMobility);
	void GetMasqueradeValueFromJudge(struct FTigerAIPlayerAction* Action, class ATigerJudge* Judge, class ATigerPlayer* Player, float* Value, bool* FoundValue);
	void CheckFearLimitsFunction(float CurrentFearValue, class ATigerAIController* AI, Tiger_ETigerAIMasqueradeState* NewMasqueradeState);
	void ScaleValueByDistance(float Unscaled_Value, class ATigerPlayer* Player, class ATigerBaseNPC* NPC, bool UseMasqueradeScaling, bool ShouldScale, const struct FVector& ActionLocation, float* ScaledValue);
	void GetMasqueradeValue(struct FTigerAIPlayerAction* Action, class ATigerBaseNPC* NPC, class ATigerPlayer* Player, float* Value, bool* FoundValue);
	TMap<Tiger_ETigerAIPlayerAction, float> GetFearValues(Tiger_ETigerAIPlayerAction Action, class ATigerAIController** AI);
	void GetMasqueradePointsForFeedingAction(Tiger_ETigerAIPlayerAction Player_Action, float* MasqueradePoints);
	void AddFearPoints(class ATigerAIController** AI, struct FTigerAIPlayerAction* PlayerAction, float* FearValue, class ATigerPlayer* Player, float* Added_Fear_Value);
	Tiger_ETigerAIMasqueradeState OnReactToPlayerAction(class ATigerAIController* TigerAIController, class ATigerPlayer* TigerPlayer, const struct FTigerAIPlayerAction& PlayerAction, Tiger_ETigerAIMasqueradeState CurrentState, float* FearValue);
	void GetFearValueThresholds(class ATigerAIController* AI, float* Threatened, float* Suspicious);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
