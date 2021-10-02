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

// WidgetBlueprintGeneratedClass TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C
// 0x0034 (FullSize[0x02B4] - InheritedSize[0x0280])
class UTBP_UI_ActiveBuffsPanel_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_ActiveBuffItem_C*                    TBP_UI_ActiveBuffItem;                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ActiveBuffItem_C*                    TBP_UI_ActiveBuffItem_79;                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           UniformGridPanel_1;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FTS_ActiveBuffItemData>              BuffsToDisplay;                                            // 0x02A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxDisplayCount;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C");
		return ptr;
	}



	void GetItemFromColumnIndex(int ColumnIndex, class UTBP_UI_ActiveBuffItem_C** Item);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration);
	void OnPawnChanged_Event_1(class APawn* NewPawn);
	void OnPlayerStateReceived(class ATigerPlayerState* InPlayerState);
	void ExecuteUbergraph_TBP_UI_ActiveBuffsPanel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
