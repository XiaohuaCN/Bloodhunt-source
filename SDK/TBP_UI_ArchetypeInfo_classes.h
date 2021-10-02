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

// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C
// 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
class UTBP_UI_ArchetypeInfo_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ChangedClan;                                               // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      FadeOutOverlay;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             LoadingSwitcher;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_ArchetypeSelect_PowersWithVideoPreviews_C* PowersWithVideoPreviews;                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                                Media_Player;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerPlayerClanData*                        ClanData;                                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerPowerKit*                              ArchetypeData;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnVideoStarted;                                            // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnVideoEnded;                                              // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C");
		return ptr;
	}



	void SetCharacterArchetype(class UTigerPowerKit* DesiredArchetype);
	void UpdateClanInfo(class UTigerPowerKit* InArchetypeData);
	void ChangeClan(class UTigerPlayerClanData* ClanData, bool bAnimateChange, class UTigerPowerKit* ArchetypeData);
	void PreConstruct(bool IsDesignTime);
	void Toggle_UI_Visibility();
	void WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1();
	void BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature();
	void BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature();
	void StopVideo();
	void ExecuteUbergraph_TBP_UI_ArchetypeInfo(int EntryPoint);
	void OnVideoEnded__DelegateSignature();
	void OnVideoStarted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
