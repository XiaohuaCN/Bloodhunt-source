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

// WidgetBlueprintGeneratedClass TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C
// 0x003C (FullSize[0x029C] - InheritedSize[0x0260])
class UTBP_UI_Rarity_VFX_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Rarity_Image;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                                Rarity_Color;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Rarity_Texture;                                            // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Rarity_Intensity;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                                   AspectRatio;                                               // 0x0294(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C");
		return ptr;
	}



	void Construct();
	void SetGradientTexture(class UTexture2D* Texture);
	void SetColor(const struct FLinearColor& Color);
	void SetIntensity(float Intentsity);
	void SetAspectRatio(const struct FVector2D& AspectRatio);
	void ExecuteUbergraph_TBP_UI_Rarity_VFX(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
