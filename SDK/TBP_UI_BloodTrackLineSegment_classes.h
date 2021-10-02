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

// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackLineSegment.TBP_UI_BloodTrackLineSegment_C
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UTBP_UI_BloodTrackLineSegment_C : public UUserWidget
{
public:
	class UImage*                                      IconImage;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   InnerScaleBox;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodTrackSlot_C*                    TBP_UI_BloodTrackSlot;                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodTrackLineSegment.TBP_UI_BloodTrackLineSegment_C");
		return ptr;
	}



	void SetOpacity(float InOpacity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
