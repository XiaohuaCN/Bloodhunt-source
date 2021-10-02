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

// BlueprintGeneratedClass TBP_BloodTrack_DragDropSelectPassiveOperation.TBP_BloodTrack_DragDropSelectPassiveOperation_C
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTBP_BloodTrack_DragDropSelectPassiveOperation_C : public UDragDropOperation
{
public:
	class UTigerBloodTrackPassiveConfig*               Passive;                                                   // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BloodTrack_DragDropSelectPassiveOperation.TBP_BloodTrack_DragDropSelectPassiveOperation_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
