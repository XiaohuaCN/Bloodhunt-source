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

// WidgetBlueprintGeneratedClass TBP_UI_WheelInterface.TBP_UI_WheelInterface_C
// 0x0080 (FullSize[0x0350] - InheritedSize[0x02D0])
class UTBP_UI_WheelInterface_C : public UTigerWheelInterfaceWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            OpenMenu;                                                  // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Background;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                DynamicElements;                                           // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                EmotePanel;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      InventoryBackground;                                       // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  NamedSlot_1;                                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SelectionBackground;                                       // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_WheelItem_C*                         Currently_Hovered;                                         // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visible;                                                   // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0CAJ[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeSinceHovered;                                          // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanUse;                                                    // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SNGT[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTBP_UI_WheelItem_C*>                 WheelItems;                                                // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                              WheelItemDistanceFromCenter;                               // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M7EU[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMenuPrimary;                                             // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_WheelInterface.TBP_UI_WheelInterface_C");
		return ptr;
	}



	void ConstructWheel(int In_Num_Items);
	struct FEventReply On_InventoryBackground_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayOpenAnimation();
	void PlayCloseAnimation();
	void ResetItems();
	void SetItem(int Index, class UTexture2D* Icon, const struct FText& Label, int Count);
	void UpdateHoverEffect(int Index);
	void SetWheelUsable(bool bNewUsable);
	void SetIsItemSelected(int Index, bool bIsSelected);
	void WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1();
	void OnNumberOfItemsChanged(int InNewNumberOfItems);
	void ExecuteUbergraph_TBP_UI_WheelInterface(int EntryPoint);
	void OnMenuPrimary__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
