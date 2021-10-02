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

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UAnimNotify_AkEvent_C : public UAnimNotify
{
public:
	struct FString                                     Attach_Name;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               Event;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Follow;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W4DB[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventName;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C");
		return ptr;
	}



	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
