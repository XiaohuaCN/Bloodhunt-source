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

// Function TBFL_Npc.TBFL_Npc_C.GetAttachmentInfoFromIdentifier
struct UTBFL_Npc_C_GetAttachmentInfoFromIdentifier_Params
{
	struct FName                                       Identifier;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerPropAttachmentInfo                    ReturnValue;                                               // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
