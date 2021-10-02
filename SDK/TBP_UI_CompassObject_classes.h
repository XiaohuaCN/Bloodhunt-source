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

// WidgetBlueprintGeneratedClass TBP_UI_CompassObject.TBP_UI_CompassObject_C
// 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
class UTBP_UI_CompassObject_C : public UTigerCompassMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                CompassMarker;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CompassMarkerImage;                                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    CompassMarkerMaterial;                                     // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_CompassObject.TBP_UI_CompassObject_C");
		return ptr;
	}



	void UpdatePosition();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetColorBasedOnPlayerIndex(unsigned char InIndex);
	void ExecuteUbergraph_TBP_UI_CompassObject(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
