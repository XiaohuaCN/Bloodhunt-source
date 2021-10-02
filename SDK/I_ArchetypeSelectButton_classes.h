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

// BlueprintGeneratedClass I_ArchetypeSelectButton.I_ArchetypeSelectButton_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_ArchetypeSelectButton_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass I_ArchetypeSelectButton.I_ArchetypeSelectButton_C");
		return ptr;
	}



	void SetIsDeselected();
	void SetIsSelected();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
