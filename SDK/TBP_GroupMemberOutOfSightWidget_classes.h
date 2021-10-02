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

// WidgetBlueprintGeneratedClass TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C
// 0x0040 (FullSize[0x0308] - InheritedSize[0x02C8])
class UTBP_GroupMemberOutOfSightWidget_C : public UTigerInWorldWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                     BorderWidget;                                              // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              GroupMemberNameWidget;                                     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ATigerPlayerState*                           GroupMemberState;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                TigerPlayer;                                               // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLifeStatusChanged;                                       // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C");
		return ptr;
	}



	void HandleLifeStatusChanged(Tiger_ETigerPlayerLifeStatus NewLifeStatus);
	void HandlePlayerChanged(class ATigerPlayer* InTigerPlayer);
	struct FLinearColor GetColorAndOpacity();
	void Initialize(class ATigerPlayerState* Player_State);
	void OnPawnChanged(class APawn* NewPawn);
	void OnScreenStateChanged(bool bInIsOnScreen);
	void Destruct();
	void OnNameChanged();
	void ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget(int EntryPoint);
	void OnLifeStatusChanged__DelegateSignature(Tiger_ETigerPlayerLifeStatus InLifeStatus);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
