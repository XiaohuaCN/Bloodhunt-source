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

// WidgetBlueprintGeneratedClass TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C
// 0x00C8 (FullSize[0x0380] - InheritedSize[0x02B8])
class UTBP_UI_BaseRangedCrosshair_C : public UTigerWeaponCrosshairWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasParent;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ScopeVignetteImage;                                        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTBP_UI_Image_C*>                     Crosshairs;                                                // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSlateBrush                                 ScopeVignette;                                             // 0x02E0(0x0088) (Edit, BlueprintVisible)
	bool                                               bShouldShowScopeVignette;                                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5W8J[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTBP_UI_Image_C*>                     ScalingCrosshairs;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C");
		return ptr;
	}



	float GetBrushAspect(const struct FSlateBrush& SlateBrush);
	void GetFov(float* OutFov);
	void SetupScalingCrosshairImage(const struct FTigerWeaponScalingCrosshairSlot& ScalingCrosshairSlot);
	void SetupCrosshairImage(const struct FTigerWeaponCrosshairSlot& TigerWeaponCrosshairSlot);
	void SetupScopeVignette();
	float GetAspectRatio();
	void GetCrosshairScale(float InScreenSpaceSpread, float InAspectRatio, struct FVector2D* Scale);
	void UpdateCrosshairPositions();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void ExecuteUbergraph_TBP_UI_BaseRangedCrosshair(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
