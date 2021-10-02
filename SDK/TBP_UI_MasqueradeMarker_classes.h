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

// WidgetBlueprintGeneratedClass TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C
// 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
class UTBP_UI_MasqueradeMarker_C : public UTigerMasqueradeMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ScaleUp;                                                   // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      RadiusImage;                                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerMasqueradeMarkerProxy*                 MasqueradeMarkerProxy;                                     // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C");
		return ptr;
	}



	void UpdateMasqueradePosition();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnUpdated();
	void ExecuteUbergraph_TBP_UI_MasqueradeMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
