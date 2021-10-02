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

// Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnCreated
struct UTBP_AnAcquiredTaste_C_OnCreated_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InHasAuthority;                                            // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnPlayerEvent
struct UTBP_AnAcquiredTaste_C_OnPlayerEvent_Params
{
	Tiger_ETigerPlayerEvent                            Event;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerCharacter*                             EventTiedCharacter;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.ExecuteUbergraph_TBP_AnAcquiredTaste
struct UTBP_AnAcquiredTaste_C_ExecuteUbergraph_TBP_AnAcquiredTaste_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
