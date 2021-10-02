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

// Class ImgMedia.ImgMediaSource
// 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
class UImgMediaSource : public UBaseMediaSource
{
public:
	struct FFrameRate                                  FrameRateOverride;                                         // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProxyOverride;                                             // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              SequencePath;                                              // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return ptr;
	}



	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
