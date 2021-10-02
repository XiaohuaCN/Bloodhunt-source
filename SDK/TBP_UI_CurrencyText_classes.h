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

// WidgetBlueprintGeneratedClass TBP_UI_CurrencyText.TBP_UI_CurrencyText_C
// 0x0094 (FullSize[0x0314] - InheritedSize[0x0280])
class UTBP_UI_CurrencyText_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      CurrencyImage;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CurrencyText;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RootCanvas;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      CurrencyItemPath[0x28];                                    // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FSlateColor                                 TintSlateColor;                                            // 0x02C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AutoUpdateCurrency;                                        // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_X7M7[0x3];                                     // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Currency_Text_Size;                                        // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Currency_Image_Size;                                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IXDX[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         RichTextFont;                                              // 0x0300(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                OldHardCurrency;                                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_CurrencyText.TBP_UI_CurrencyText_C");
		return ptr;
	}



	void SetCurrencyAmount(int CurrencyAmount);
	void UpdateToCurrentPlayerAmount();
	void OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E(class UObject* Loaded);
	void Construct();
	void SetCurrencyPath();
	void OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState);
	void OnPremiumCurrencyBalanceChanged(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData);
	void ExecuteUbergraph_TBP_UI_CurrencyText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
