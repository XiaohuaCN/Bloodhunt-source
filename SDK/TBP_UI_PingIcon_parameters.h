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

// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.SetPingIcons
struct UTBP_UI_PingIcon_C_SetPingIcons_Params
{
	class UTexture2D*                                  BG_Texture;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Border_Texture;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Ping_Size;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Icon_Offset;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImageSizeMultiplier;                                       // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetHorizontalIconOffset
struct UTBP_UI_PingIcon_C_GetHorizontalIconOffset_Params
{
	float                                              OutIconOffset;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetVerticalIconOffset
struct UTBP_UI_PingIcon_C_GetVerticalIconOffset_Params
{
	float                                              OutIconOffset;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.OnPingDataUpdated
struct UTBP_UI_PingIcon_C_OnPingDataUpdated_Params
{
	class UTigerPingClientData*                        InPingData;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.ExecuteUbergraph_TBP_UI_PingIcon
struct UTBP_UI_PingIcon_C_ExecuteUbergraph_TBP_UI_PingIcon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
