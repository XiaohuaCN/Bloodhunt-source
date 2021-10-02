
#include <Windows.h>
#include <iostream>
#include <fstream>
#include "SDK.h"

namespace SDK
{
	uintptr_t BaseAddr;
	CG::UWorld** m_world;
	CG::ULevel* m_persistence_level;
	CG::ULocalPlayer* local_player;
	CG::ATigerCharacter* weapon_test;
	CG::ATigerBloodVeinTooltipLocation* visiblecheck;

	uintptr_t offset_bones;
	uintptr_t local_player_array;
	uintptr_t OwningGameInstance;
	uintptr_t local_playerr;
	uintptr_t local_player_controller;
	uintptr_t local_player_pawn;
	uintptr_t local_player_root;
	uintptr_t local_player_state;
	uintptr_t persistent_level;
	uintptr_t actor_count;
	uintptr_t actors;

	
}