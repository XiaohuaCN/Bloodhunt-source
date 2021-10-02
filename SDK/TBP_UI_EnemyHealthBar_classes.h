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

// WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C
// 0x00CB (FullSize[0x037B] - InheritedSize[0x02B0])
class UTBP_UI_EnemyHealthBar_C : public UTBP_UI_EnemyHealthBarDamageOnly_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                                    BarContainer;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ClanIcon;                                                  // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                IconRootCanvas;                                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayerColorBox;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PlayerNameplate;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ReviveDiaberieOverlay;                                     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ReviveDiablerieLabel;                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RootPanel;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                TBP_UI_HorizontalFadeSlot;                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ResourceBar_Health_C*                TBP_UI_ResourceBar_Health;                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ResourceBar_Health_C*                TBP_UI_ResourceBar_Health_;                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ResourceBar_Health_C*                TBP_UI_ResourceBar_HealthEmpty;                            // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ResourceBar_Shield_C*                TBP_UI_ResourceBar_Shield;                                 // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ResourceBar_Shield_C*                TBP_UI_ResourceBar_Shield_;                                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ResourceBar_Shield_C*                TBP_UI_ResourceBar_ShieldBase;                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_StatusIcon_C*                        TBP_UI_StatusIcon;                                         // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsNameplateVisible;                                       // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XG1N[0x2];                                     // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentOpacity;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeLeftUntilFade;                                         // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONST_AlwaysVisibleDistance;                               // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONST_FadeOutSpeedOnDeath;                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONST_FadeOutDelayOnDeath;                                 // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONST_FadeOutDelay;                                        // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONST_FadeSpeedInOut;                                      // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONST_DisplayTimeAfterDamage;                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CZAQ[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerPlayer*                                TigerPlayer;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                GroupMember;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           GroupMemberState;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanSetIsGroupMember;                                      // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCanSetIsNotGroupMember;                                   // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NewVar_1;                                                  // 0x037A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C");
		return ptr;
	}



	void SetTigerCharacter(class ATigerCharacter* TigerCharacter);
	void UpdateHealthBar(float CurrentShield, float CurrentHealth, float MaxHealth);
	void OnPowerKitChanged();
	struct FSlateBrush GetClanIcon();
	void OnPlayerStatusChanged(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InNewState);
	void UpdateIsGroupMember();
	bool IsAlliedWithLocalPlayer(class ATigerCharacter* TigerCharacter);
	void ShieldBreak();
	void ExtraHealthBreak();
	void OldShouldBeVisible(bool* bVisible, bool* bIsAlive);
	void UpdateDownedTimer();
	void OnUpdatedPlayerState(class APlayerState* PlayerState);
	void RemoveMarkingAsGroupMember();
	void MarkAsGroupMember();
	void IsPlayerInElysim(bool* IsPlayerInElyusium);
	void UpdateVisibility(bool InIsVisible, bool bIsAlive, float DeltaSeconds);
	void ShouldBeVisible(bool* bVisible, bool* bIsAlive);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPlayerNameChanged();
	void AddHealAmount(int InHealAmount);
	void ExecuteUbergraph_TBP_UI_EnemyHealthBar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
