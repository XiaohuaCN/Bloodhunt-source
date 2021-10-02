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

// WidgetBlueprintGeneratedClass TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C
// 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
class UTBP_GroupMemberMapMarkerWidget_C : public UTBP_UI_MapMarker_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      PlayerImage;                                               // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C");
		return ptr;
	}



	void GetPlayerIndex(unsigned char* PlayerIndex);
	void OnUpdated();
	void ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
