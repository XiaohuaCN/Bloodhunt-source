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

// WidgetBlueprintGeneratedClass TBP_Melee_Crosshair.TBP_Melee_Crosshair_C
// 0x0010 (FullSize[0x02D8] - InheritedSize[0x02C8])
class UTBP_Melee_Crosshair_C : public UTigerMeleeCrosshairWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Crosshair;                                                 // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_Melee_Crosshair.TBP_Melee_Crosshair_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_Melee_Crosshair(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
