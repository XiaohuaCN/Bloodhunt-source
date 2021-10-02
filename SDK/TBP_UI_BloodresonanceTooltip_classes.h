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

// WidgetBlueprintGeneratedClass TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C
// 0x00A8 (FullSize[0x0330] - InheritedSize[0x0288])
class UTBP_UI_BloodResonanceTooltip_C : public UTigerTooltipWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            MissingSlot;                                               // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            PotentialResonance;                                        // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_133;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemDescText;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemText;                                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemTypeText;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodResonanceSingular_C*            TBP_UI_BloodResonanceSingular;                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MaskedCardBorder_C*                  TBP_UI_MaskedCardBorder_C_1;                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Rarity_VFX_C*                        TBP_UI_Rarity_VFX;                                         // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FTigerTooltipAction>                 InputActions;                                              // 0x02E0(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	bool                                               bColorItemBackground;                                      // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               bShowAdditionalInfo;                                       // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               bShouldTick;                                               // 0x02F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZDH[0x5];                                     // 0x02F3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UImage*>                              TransferArrows;                                            // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bShowUnavailableIcon;                                      // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_2FNL[0x7];                                     // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerBloodResonanceAsset*                   BloodAsset_Choleric;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   BloodAsset_Melancholic;                                    // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   BloodAsset_Phlegmatic;                                     // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   BloodAsset_Sanguine;                                       // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C");
		return ptr;
	}



	void SetBloodType(Tiger_ETigerBloodType InBloodType);
	void OnBloodResonanceAdded(Tiger_ETigerBloodType InBloodType);
	void Construct();
	void OnBloodResonanceWasCappedAfterFeed(Tiger_ETigerBloodType InBloodType, Tiger_ETigerBloodResonanceBlockType InBlockType);
	void ExecuteUbergraph_TBP_UI_BloodResonanceTooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
