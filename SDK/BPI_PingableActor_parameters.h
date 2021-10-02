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

// Function BPI_PingableActor.BPI_PingableActor_C.GetPingInfo
struct UBPI_PingableActor_C_GetPingInfo_Params
{
	struct FTS_PingableActorInfo                       OutInfo;                                                   // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PingableActor.BPI_PingableActor_C.GetPingCategory
struct UBPI_PingableActor_C_GetPingCategory_Params
{
	struct FName                                       OutCategory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
