#pragma once

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>

#define GUI_NAME "OMG BESTEST P2CS NO CAPS AT ALLS AYY YUHHH BRRRR "
#define CUSTOM_ICONS FALSE

struct Vars
{
	bool open = false;
	int tab = 0;

	//ESP
	bool Glow = false;
	bool vischeck = true;
	bool distance_esp = false;
	bool getBones = false;
	bool skeleton = false;
	bool box_esp = false;
	bool snaplines = false;
	bool name_esp = false;

	//Aimbot
	bool fov_changer = true;
	bool aimbot = false;
	bool crosshair = false;
	float fov_value = 45.f;

	ImColor SkeletonColor = ImColor(255, 0, 0, 255);
	ImColor CrosshairColor = ImColor(255, 255, 255, 255);
	ImColor FovCircleColor = ImColor(255, 0, 0, 255);
	ImColor DistanceEspColor = ImColor(255, 255, 255, 255);
	ImColor BoxEspColor = ImColor(255, 255, 255, 255);
	ImColor SnaplinesEspColor = ImColor(255, 255, 255, 255);
	ImColor NameEspColor = ImColor(255, 255, 255, 255);
	bool teleport = false;
};
extern Vars* vars;