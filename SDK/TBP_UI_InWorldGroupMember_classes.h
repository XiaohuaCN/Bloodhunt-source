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

// WidgetBlueprintGeneratedClass TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C
// 0x0019 (FullSize[0x0339] - InheritedSize[0x0320])
class UTBP_UI_InWorldGroupMember_C : public UTBP_UI_InWorldIconBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            FadeOut;                                                   // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           GroupPlayerState;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bIsOnScreen;                                               // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C");
		return ptr;
	}



	void Construct();
	void OnPlayerIndexChanged(unsigned char PlayerIndex);
	void OnLifeStatusChanged(Tiger_ETigerPlayerLifeStatus InLifeStatus);
	void HandleRemovedGroupMember();
	void ExecuteUbergraph_TBP_UI_InWorldGroupMember(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
