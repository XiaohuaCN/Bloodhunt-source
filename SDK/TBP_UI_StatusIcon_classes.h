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

// WidgetBlueprintGeneratedClass TBP_UI_StatusIcon.TBP_UI_StatusIcon_C
// 0x0080 (FullSize[0x0300] - InheritedSize[0x0280])
class UTBP_UI_StatusIcon_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Animation_Flash;                                           // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Animation_BloodHunt;                                       // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BloodHunt;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          FlashImage;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                 // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          shadow;                                                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      StatusIconImage;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ATigerPlayer*                                Group_Member;                                              // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        ActiveStatus;                                              // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ID40[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       CurrentStatuses;                                           // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>> StatusPriority;                                            // 0x02E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnStatusIconChanged;                                       // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_StatusIcon.TBP_UI_StatusIcon_C");
		return ptr;
	}



	void OnMasqueradeStateUpdated(bool InMasqueradeBroken, Tiger_ETigerAIPlayerAction InPlayerAction);
	void SetStatusIcon(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InStatusIcon);
	void UpdateActiveStatus();
	void OnReviveStateChanged(bool InReviveActive, bool InIsTarget);
	void OnDiablerizeStateChanged(bool InDiablerizeActive, bool InIsTarget);
	void OnMasqueradeStateChanged(bool InMasqueradeBroken, Tiger_ETigerAIPlayerAction InPlayerAction);
	void SetPawn(class APawn* InPawn);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_StatusIcon(int EntryPoint);
	void OnStatusIconChanged__DelegateSignature(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InNewStatusIcon);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
