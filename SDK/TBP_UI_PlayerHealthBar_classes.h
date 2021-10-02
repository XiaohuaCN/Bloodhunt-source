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

// WidgetBlueprintGeneratedClass TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C
// 0x0048 (FullSize[0x02C8] - InheritedSize[0x0280])
class UTBP_UI_PlayerHealthBar_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_694;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ActiveBuffsPanel_C*                  TBP_UI_ActiveBuffsPanel;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SharedPlayerStatus_C*                TBP_UI_SharedStatusPanel;                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E6N6[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PingClass;                                                 // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerElysiumPlayerState*                    ElysiumPlayerState;                                        // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           OwningPlayerState;                                         // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C");
		return ptr;
	}



	void OnReadyStateChanged(bool InReady);
	void DisableHover();
	void EnableHover();
	void SetPlayerState(class ATigerPlayerState* PlayerState);
	void OverridePlayerState(class ATigerPlayerState* OverridePlayerState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPlayerStateReceived(class ATigerPlayerState* InPlayerState);
	void ExecuteUbergraph_TBP_UI_PlayerHealthBar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
