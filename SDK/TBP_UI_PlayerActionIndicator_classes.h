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

// WidgetBlueprintGeneratedClass TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C
// 0x0080 (FullSize[0x0300] - InheritedSize[0x0280])
class UTBP_UI_PlayerActionIndicator_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ChanneledHeal;                                             // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Healed;                                                    // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Feeding;                                                   // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Attacking;                                                 // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      ActionIndicatorImage;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ATigerPlayer*                                Group_Member;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                       CurrentStatuses;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<TBE_StatusBackground_ETBE_StatusBackground> ActiveStatus;                                              // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PMWA[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<TBE_StatusBackground_ETBE_StatusBackground>> StatusPriority;                                            // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  Attacking_Tex;                                             // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Healed_Tex;                                                // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  ChanneledHeal_Tex;                                         // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Feeding_Tex;                                               // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C");
		return ptr;
	}



	void SwitchPersistentState(TEnumAsByte<TBE_StatusBackground_ETBE_StatusBackground> InState);
	void TriggerOneShotState(class UTexture2D* InTexture, class UWidgetAnimation* InAnimation);
	void UpdateActiveStatus();
	void OnBuffChanged(class UTigerBuff* InBuff, int InId, float InDuration);
	void OnStoppedFeeding(bool InWasAttacked, class ATigerCharacter* InNPCFedOn);
	void OnStartedFeeding(float InTravelTime);
	void OnPlayerAction(Tiger_ETigerCharacterAction InPlayerAction);
	void OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth);
	void SetPawn(class APawn* InPawn);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_PlayerActionIndicator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
