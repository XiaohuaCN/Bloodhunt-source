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

// BlueprintGeneratedClass TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C
// 0x0041 (FullSize[0x0191] - InheritedSize[0x0150])
class UTBP_UI_MaskedCardBorder_C : public UTigerDeferredGroupRetainerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0150(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              InitialCornerRadius;                                       // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialBorderWidth;                                        // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                                InitialBorderColor;                                        // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                                  InitialWeatheringTexture;                                  // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialWeatheringOpacity;                                  // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialWeatheringWidth;                                    // 0x017C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialWeatheringFadeWidth;                                // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              InitialWeatheringScale;                                    // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                                   InitialWeatheringOffset;                                   // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bRandomizeInitialWeatheringOffset;                         // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C");
		return ptr;
	}



	void SetWeatheringOpacity(float InWeatheringOpacity);
	void RandomizeWeatheringOffset();
	void SetWeatheringOffset(const struct FVector2D& InWeatheringOffset);
	void SetWeatheringScale(float InWeatheringScale);
	void SetWeatheringFadeWidth(float InWeatheringFadeWidth);
	void SetWeatheringWidth(float InWeatheringWidth);
	void SetWeatheringTexture(class UTexture2D* InWeatheringTexture);
	void SetBorderColor(const struct FLinearColor& InBorderColor);
	void SetBorderWidth(float InBorderWidth);
	void SetCornerRadius(float InCornerRadius);
	void InitializeParameters();
	void Construct();
	void ExecuteUbergraph_TBP_UI_MaskedCardBorder(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
