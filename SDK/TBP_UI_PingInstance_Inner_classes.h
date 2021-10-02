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

// WidgetBlueprintGeneratedClass TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C
// 0x0004 (FullSize[0x02D4] - InheritedSize[0x02D0])
class UTBP_UI_PingInstance_Inner_C : public UTigerPingWorldInstanceUI
{
public:
	float                                              CONFIG_OffscreenIconOffset;                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C");
		return ptr;
	}



	void GetHorizontalIconOffset(float* OutIconOffset);
	void GetVerticalIconOffset(float* OutIconOffset);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
