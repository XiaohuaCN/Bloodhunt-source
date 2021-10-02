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

// BlueprintGeneratedClass TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C
// 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
class UTBP_LoadingScreen_Simple_C : public UTigerLoadingScreenAsset
{
public:
	unsigned char                                      Tooltips[0x28];                                            // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      BackgroundMaterial[0x28];                                  // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C");
		return ptr;
	}



	void PrepareAssets(TArray<struct FSoftObjectPath>* OutAssetsToLoad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
