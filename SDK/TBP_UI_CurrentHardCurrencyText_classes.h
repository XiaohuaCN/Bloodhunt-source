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

// WidgetBlueprintGeneratedClass TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C
// 0x0074 (FullSize[0x02F4] - InheritedSize[0x0280])
class UTBP_UI_CurrentHardCurrencyText_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      CurrencyImage;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CurrencyText;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RootCanvas;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                                 TintSlateColor;                                            // 0x02A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Currency_Image_Size;                                       // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0G1P[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         RichTextFont;                                              // 0x02D0(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                OldPremiumCurrencyBalance;                                 // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                CurrentPremiumCurrencyBalance;                             // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UCurveFloat*                                 HardCurrencyCurveAnim;                                     // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PremiumCurrencyBalanceChangedTimeStamp;                    // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C");
		return ptr;
	}



	int GetInterpolatedPremiumCurrencyBalance();
	void SetCurrencyAmount(int CurrencyAmount);
	void UpdateToCurrentPlayerAmount();
	void SetCurrencyAppearance();
	void Construct();
	void OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState);
	void OnClientTransactionalPlayerDataChangedEvent(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData);
	void ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
