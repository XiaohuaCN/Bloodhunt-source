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

// BlueprintGeneratedClass TBFL_Npc.TBFL_Npc_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBFL_Npc_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBFL_Npc.TBFL_Npc_C");
		return ptr;
	}



	struct FTigerPropAttachmentInfo STATIC_GetAttachmentInfoFromIdentifier(const struct FName& Identifier, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
