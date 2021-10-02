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

// BlueprintGeneratedClass TBP_Ping_InventoryWantsMeleeWeapon.TBP_Ping_InventoryWantsMeleeWeapon_C
// 0x0000 (FullSize[0x0121] - InheritedSize[0x0121])
class UTBP_Ping_InventoryWantsMeleeWeapon_C : public UTBP_PingBase_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Ping_InventoryWantsMeleeWeapon.TBP_Ping_InventoryWantsMeleeWeapon_C");
		return ptr;
	}



	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
