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

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C
// 0x0069 (FullSize[0x02E9] - InheritedSize[0x0280])
class UTBP_UI_ElysiumNamePlateWidget_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerStyledRichTextBlock*                   PlayerName;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                TBP_UI_HorizontalFadeSlot;                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ATBP_Player_C*                               Player;                                                    // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaTarget;                                               // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlphaLerpSpeed;                                            // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           Player_State;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONFIG_BarelyVisibleDistance;                              // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONFIG_FullyVisisibleDistance;                             // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 PlayerNameColor;                                           // 0x02C0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerNameColorChanged;                                    // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C");
		return ptr;
	}



	void OnMemberLeftParty(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId);
	void OnPlayerLeftPArty(const struct FTigerParty& InParty);
	void UpdatePlayerNameColor(struct FSlateColor* PlayerNameColor);
	void UpdateAlphaAndScaleTargets();
	void SetupPlayerIndexChanged(class ATigerPlayerState* self2, class ATigerPlayerState* self3);
	void UpdateAlpha();
	void UpdateAlphaValue(float Delta);
	void SetPlayer(class ATBP_Player_C* Player);
	void Construct();
	void OnGroupChanged();
	void OnPlayerNameChanged();
	void OnPlayerIndexChanged(unsigned char InIndex);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ClearPlayerNameColor();
	void ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
