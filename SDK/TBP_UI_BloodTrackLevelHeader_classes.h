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

// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackLevelHeader.TBP_UI_BloodTrackLevelHeader_C
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTBP_UI_BloodTrackLevelHeader_C : public UUserWidget
{
public:
	class UImage*                                      Background;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TextLabel;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodTrackLevelHeader.TBP_UI_BloodTrackLevelHeader_C");
		return ptr;
	}



	void SetTextAndColor(const struct FText& InText, const struct FLinearColor& InColorAndOpacity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
