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

// WidgetBlueprintGeneratedClass TBP_UI_PingIcon.TBP_UI_PingIcon_C
// 0x0044 (FullSize[0x0318] - InheritedSize[0x02D4])
class UTBP_UI_PingIcon_C : public UTBP_UI_PingInstance_Inner_C
{
public:
	unsigned char                                      UnknownData_AAOX[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            OnPingAnim;                                                // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG_Dot_Border;                                             // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BG_Dot_Dark;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Icon_Overlay;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      IconWidget;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      IconWidget_Animated;                                       // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                                   ImageSizeMultiplier;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PingIcon.TBP_UI_PingIcon_C");
		return ptr;
	}



	void SetPingIcons(class UTexture2D* BG_Texture, class UTexture2D* Border_Texture, const struct FVector2D& Ping_Size, const struct FVector2D& Icon_Offset, const struct FVector2D& ImageSizeMultiplier);
	void GetHorizontalIconOffset(float* OutIconOffset);
	void GetVerticalIconOffset(float* OutIconOffset);
	void OnPingDataUpdated(class UTigerPingClientData* InPingData);
	void ExecuteUbergraph_TBP_UI_PingIcon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
