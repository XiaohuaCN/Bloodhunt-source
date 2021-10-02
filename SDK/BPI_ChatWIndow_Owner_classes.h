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

// BlueprintGeneratedClass BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_ChatWIndow_Owner_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C");
		return ptr;
	}



	void OnMessageInput(const struct FText& MessageText, bool OnlyGroup);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
