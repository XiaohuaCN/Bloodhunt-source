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

// WidgetBlueprintGeneratedClass TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C
// 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
class UTBP_UI_TransitionWidget_C : public UTigerTransitionWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                                  Content;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_TransitionRetainerBox_C*             TransitionRetainerBox;                                     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C");
		return ptr;
	}



	void ChangeAnimationSpeed(float InAnimationSpeed);
	void EnableRendering();
	void DisableRendering();
	void ExecuteUbergraph_TBP_UI_TransitionWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
