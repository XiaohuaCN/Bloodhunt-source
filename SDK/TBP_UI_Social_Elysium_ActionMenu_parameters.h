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
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldAddAsFriend
struct UTBP_UI_Social_Elysium_ActionMenu_C_CouldAddAsFriend_Params
{
	bool                                               bCouldAdd;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.CouldInviteToParty
struct UTBP_UI_Social_Elysium_ActionMenu_C_CouldInviteToParty_Params
{
	bool                                               bCouldInvite;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.GetElysiumPlayerCard
struct UTBP_UI_Social_Elysium_ActionMenu_C_GetElysiumPlayerCard_Params
{
	class UTBP_UI_Social_Elysium_PlayerCard_C*         OutPlayerCard;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature
struct UTBP_UI_Social_Elysium_ActionMenu_C_BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature
struct UTBP_UI_Social_Elysium_ActionMenu_C_BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Construct
struct UTBP_UI_Social_Elysium_ActionMenu_C_Construct_Params
{
};

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.Tick
struct UTBP_UI_Social_Elysium_ActionMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu
struct UTBP_UI_Social_Elysium_ActionMenu_C_ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
