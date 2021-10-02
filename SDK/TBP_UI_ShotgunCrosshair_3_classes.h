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

// WidgetBlueprintGeneratedClass TBP_UI_ShotgunCrosshair_3.TBP_UI_ShotgunCrosshair_2_C
// 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
class UTBP_UI_ShotgunCrosshair_2_C : public UTBP_UI_BaseRangedCrosshair_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ShotgunCrosshair_3.TBP_UI_ShotgunCrosshair_2_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_ShotgunCrosshair_3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
