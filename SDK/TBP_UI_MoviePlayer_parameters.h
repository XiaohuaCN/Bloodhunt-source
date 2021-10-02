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

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.UpdateCurrentDownKeys
struct UTBP_UI_MoviePlayer_C_UpdateCurrentDownKeys_Params
{
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.IsLastVideo
struct UTBP_UI_MoviePlayer_C_IsLastVideo_Params
{
	bool                                               bIsLastVideo;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.SetCinematicState
struct UTBP_UI_MoviePlayer_C_SetCinematicState_Params
{
	bool                                               InCinematic;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.CancelPlayback
struct UTBP_UI_MoviePlayer_C_CancelPlayback_Params
{
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnKeyUp
struct UTBP_UI_MoviePlayer_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.StartPlaying
struct UTBP_UI_MoviePlayer_C_StartPlaying_Params
{
	bool                                               PlaySucceeded;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedPlaying
struct UTBP_UI_MoviePlayer_C_FinishedPlaying_Params
{
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Construct
struct UTBP_UI_MoviePlayer_C_Construct_Params
{
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.EndReached
struct UTBP_UI_MoviePlayer_C_EndReached_Params
{
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedLoading
struct UTBP_UI_MoviePlayer_C_FinishedLoading_Params
{
	struct FString                                     OpenedUrl;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Tick
struct UTBP_UI_MoviePlayer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnMenuBack
struct UTBP_UI_MoviePlayer_C_OnMenuBack_Params
{
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.ExecuteUbergraph_TBP_UI_MoviePlayer
struct UTBP_UI_MoviePlayer_C_ExecuteUbergraph_TBP_UI_MoviePlayer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnClosed__DelegateSignature
struct UTBP_UI_MoviePlayer_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
