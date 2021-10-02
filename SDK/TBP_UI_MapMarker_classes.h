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

// WidgetBlueprintGeneratedClass TBP_UI_MapMarker.TBP_UI_MapMarker_C
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UTBP_UI_MapMarker_C : public UTigerMapMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_MapMarker.TBP_UI_MapMarker_C");
		return ptr;
	}



	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_MapMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
