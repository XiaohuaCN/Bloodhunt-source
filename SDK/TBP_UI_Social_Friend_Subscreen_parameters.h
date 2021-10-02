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

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.UpdateAvailability
struct UTBP_UI_Social_Friend_Subscreen_C_UpdateAvailability_Params
{
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RemoveFriendFromList
struct UTBP_UI_Social_Friend_Subscreen_C_RemoveFriendFromList_Params
{
	class UTigerFriend*                                InLostFriend;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.AddFriendToList
struct UTBP_UI_Social_Friend_Subscreen_C_AddFriendToList_Params
{
	class UTigerFriend*                                InNewFriend;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RefreshFriendsList
struct UTBP_UI_Social_Friend_Subscreen_C_RefreshFriendsList_Params
{
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendAdded
struct UTBP_UI_Social_Friend_Subscreen_C_OnFriendAdded_Params
{
	class UTigerFriend*                                InNewFriend;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendRemoved
struct UTBP_UI_Social_Friend_Subscreen_C_OnFriendRemoved_Params
{
	class UTigerFriend*                                InLostFriend;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendsLoaded
struct UTBP_UI_Social_Friend_Subscreen_C_OnFriendsLoaded_Params
{
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnOpen
struct UTBP_UI_Social_Friend_Subscreen_C_OnOpen_Params
{
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Social_Friend_Subscreen_C_BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendServiceStatusChanged
struct UTBP_UI_Social_Friend_Subscreen_C_OnFriendServiceStatusChanged_Params
{
	Tiger_ETigerOnlineServiceStatus                    InServiceStatus;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen
struct UTBP_UI_Social_Friend_Subscreen_C_ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
