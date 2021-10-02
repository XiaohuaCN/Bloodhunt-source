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

// WidgetBlueprintGeneratedClass TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C
// 0x0029 (FullSize[0x02A9] - InheritedSize[0x0280])
class UTBP_UI_GroupInvitation_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_ConfirmMenu_C*                       TBP_UI_ConfirmMenu;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTigerGroupInvitation                       Invite;                                                    // 0x0290(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	class ATigerPlayerState*                           Inviter;                                                   // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               HasHandledInvite;                                          // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C");
		return ptr;
	}



	void Construct();
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature();
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_4_Decline__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_TBP_UI_GroupInvitation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
