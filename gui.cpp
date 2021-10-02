#include "includes.h"
#include "vars.hpp"
#include "gui.h"
#include "Offsts.h"

#include "iconscpp.h"
#include "icons.h"

#include "kekw.h"

#include <d3d9.h>
#include <string>
#include <windows.h>
#include <psapi.h>
#include <tlhelp32.h>
#include <iostream>
#include <dwmapi.h>
#include <d3dx9.h>
#include <iomanip>
#include <sstream>

#define yes true
#define no false

#define M_PI 3.14159265358979323846264338327950288419716939937510

class Vector3
{
public:
	Vector3() : x(0.f), y(0.f), z(0.f)
	{

	}

	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
	{

	}
	~Vector3()
	{

	}

	float x;
	float y;
	float z;

	inline float Dot(Vector3 v)
	{
		return x * v.x + y * v.y + z * v.z;
	}

	inline float Distance(Vector3 v)
	{
		return float(sqrtf(powf(v.x - x, 2.0) + powf(v.y - y, 2.0) + powf(v.z - z, 2.0)));
	}

	Vector3 operator+(Vector3 v)
	{
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	Vector3 operator-(Vector3 v)
	{
		return Vector3(x - v.x, y - v.y, z - v.z);
	}

	Vector3 operator*(float number) const {
		return Vector3(x * number, y * number, z * number);
	}
};


template<typename type>
type Read(uintptr_t address)
{
	if (reinterpret_cast<type*>(address) != nullptr)
		return *reinterpret_cast<type*>(address);
	else
		return type{};
}

template<typename type>
bool Write(uintptr_t address, const type& value)
{
	if (reinterpret_cast<type*>(address) != nullptr)
	{
		*reinterpret_cast<type*>(address) = value;
		return true;
	}

	return false;
}
bool WithinAimFOV(int CircleX, int CircleY, int R, int X, int Y)
{
	int Dist = (X - CircleX) * (X - CircleX) + (Y - CircleY) * (Y - CircleY);
	if (Dist <= R * R) return true;
	else return false;
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = 0;
WNDPROC oWndProc;
ID3D11Device* pDevice = 0;
ID3D11DeviceContext* pContext = 0;
ID3D11RenderTargetView* mainRenderTargetView;
ImFont* espFont;
void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();

	io.IniFilename = nullptr;
	io.LogFilename = nullptr;


	static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
	ImFontConfig icons_config;

	icons_config.MergeMode = true;
	icons_config.PixelSnapH = true;
	icons_config.OversampleH = 2.5;
	icons_config.OversampleV = 2.5;
	io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial.ttf", 18.0f);
	io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 18.0f, &icons_config, icons_ranges);
	espFont = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial.ttf", 13.0f);
	io.Fonts->AddFontDefault();

	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

LRESULT WINAPI WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

void theme()
{
	ImGuiStyle& Style = ImGui::GetStyle();
	auto Color = Style.Colors;

	Style.WindowMinSize = ImVec2(700, 450);
	Style.WindowBorderSize = 0;

	Style.ChildRounding = 0;
	Style.FrameRounding = 0;
	Style.ScrollbarRounding = 0;
	Style.GrabRounding = 0;
	Style.PopupRounding = 0;
	Style.WindowRounding = 0;


	Color[ImGuiCol_WindowBg] = ImColor(18, 18, 18, 255);

	Color[ImGuiCol_FrameBg] = ImColor(31, 31, 31, 255);
	Color[ImGuiCol_FrameBgActive] = ImColor(41, 41, 41, 255);
	Color[ImGuiCol_FrameBgHovered] = ImColor(41, 41, 41, 255);

	Color[ImGuiCol_Button] = ImColor(29, 29, 29, 255);
	Color[ImGuiCol_ButtonActive] = ImColor(32, 32, 32, 255);
	Color[ImGuiCol_ButtonHovered] = ImColor(36, 36, 36, 255);

	Color[ImGuiCol_Border] = ImColor(0, 0, 0, 0);
	Color[ImGuiCol_Separator] = ImColor(36, 36, 36, 255);

	Color[ImGuiCol_ResizeGrip] = ImColor(30, 30, 30, 255);
	Color[ImGuiCol_ResizeGripActive] = ImColor(30, 30, 30, 255);
	Color[ImGuiCol_ResizeGripHovered] = ImColor(30, 30, 30, 255);

	Color[ImGuiCol_ChildBg] = ImColor(26, 26, 26, 255);

	Color[ImGuiCol_ScrollbarBg] = ImColor(24, 24, 24, 255);
	Color[ImGuiCol_ScrollbarGrab] = ImColor(24, 24, 24, 255);
	Color[ImGuiCol_ScrollbarGrabActive] = ImColor(24, 24, 24, 255);
	Color[ImGuiCol_ScrollbarGrabActive] = ImColor(24, 24, 24, 255);

	Color[ImGuiCol_Header] = ImColor(39, 39, 39, 255);
	Color[ImGuiCol_HeaderActive] = ImColor(39, 39, 39, 255);
	Color[ImGuiCol_HeaderHovered] = ImColor(39, 39, 39, 255);
	Color[ImGuiCol_CheckMark] = ImColor(255, 255, 255, 255);
}

bool init = false;
HRESULT WINAPI hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			CG::InitSdk();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	if (GetAsyncKeyState(VK_INSERT) & 1)
	{
		vars->open = !vars->open;
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	Features::ESP();
	if (vars->open)
	{
		ImGui::Begin("Bloodhunt", nullptr, ImGuiWindowFlags_NoDecoration);
		theme();

		if (ImGui::Button(ICON_FA_BULLSEYE" Aimbot", ImVec2(220, 45))) { vars->tab = 1; }
		ImGui::SameLine();
		if (ImGui::Button(ICON_FA_EYE" Visuals", ImVec2(220, 45))) { vars->tab = 2; }
		ImGui::SameLine();
		if (ImGui::Button(ICON_FA_PAINT_BRUSH " Colors", ImVec2(220, 45))) { vars->tab = 3; }

		switch (vars->tab)
		{
		case 1:
			ImGui::Checkbox("Aimbot (Right Button)", &vars->aimbot);
			ImGui::Checkbox("Aimbot Fov", &vars->fov_changer);
			ImGui::SameLine();
			ImGui::SliderFloat("##aimbotfov", &vars->fov_value, 0, 200);
			ImGui::Checkbox("Crosshair", &vars->crosshair);
			break;
		case 2:
			ImGui::Checkbox("Box Esp", &vars->box_esp);
			ImGui::Checkbox("Skeleton Esp", &vars->skeleton);
			ImGui::Checkbox("Name Esp", &vars->name_esp);
			ImGui::Checkbox("Distance Esp", &vars->distance_esp);
			ImGui::Checkbox("Glow Esp", &vars->Glow);
			ImGui::Checkbox("Bones", &vars->getBones);
			break;
		case 3:
			ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
			ImGui::ColorEdit4("##box color", &(float&)vars->BoxEspColor);
			ImGui::SameLine();
			ImGui::Text("Box Color");

			ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
			ImGui::ColorEdit4("##skeleton color", &(float&)vars->SkeletonColor);
			ImGui::SameLine();
			ImGui::Text("Skeleton Color");

			ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
			ImGui::ColorEdit4("##Name color", &(float&)vars->NameEspColor);
			ImGui::SameLine();
			ImGui::Text("Name Color");

			ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
			ImGui::ColorEdit4("##distance color", &(float&)vars->DistanceEspColor);
			ImGui::SameLine();
			ImGui::Text("Distance Esp");

			ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
			ImGui::ColorEdit4("##crosshair color", &(float&)vars->CrosshairColor);
			ImGui::SameLine();
			ImGui::Text("Crosshair Color");

			ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_PickerHueWheel);
			ImGui::ColorEdit4("##fov color", &(float&)vars->FovCircleColor);
			ImGui::SameLine();
			ImGui::Text("Fov Circle");
			break;
		}
		ImGui::End();
	}

	if (vars->fov_changer)
	{
		ImGui::Begin("##fovcheck", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground);
		auto draw = ImGui::GetBackgroundDrawList();


		auto fovcirclesize = ImGui::GetIO().DisplaySize;

		draw->AddCircle(ImVec2(fovcirclesize.x / 2, fovcirclesize.y / 2), vars->fov_value, vars->FovCircleColor, 100, 1.0f);
		ImGui::End();
	}

	if (vars->crosshair)
	{
		ImGui::Begin("##crosshair", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground);
		auto draw = ImGui::GetBackgroundDrawList();

		auto hehe = ImGui::GetIO().DisplaySize;
		ImVec2 top = ImVec2(hehe.x / 2, hehe.y / 2 + 10);
		ImVec2 right = ImVec2(hehe.x / 2 + 10, hehe.y / 2);
		ImVec2 bottom = ImVec2(hehe.x / 2, hehe.y / 2 - 10);
		ImVec2 left = ImVec2(hehe.x / 2 - 10, hehe.y / 2);

		draw->AddLine(ImVec2(hehe.x / 2, hehe.y / 2 - 10), ImVec2(hehe.x / 2, hehe.y / 2 + 10), vars->CrosshairColor, 1.5);
		draw->AddLine(ImVec2(hehe.x / 2 - 10, hehe.y / 2), ImVec2(hehe.x / 2 + 11, hehe.y / 2), vars->CrosshairColor, 1.5);

		draw->AddLine(top, ImVec2(top.x + 9, top.y), vars->CrosshairColor, 1.5);
		draw->AddLine(right, ImVec2(right.x, right.y - 9), vars->CrosshairColor, 1.5);
		draw->AddLine(bottom, ImVec2(bottom.x - 9, bottom.y), vars->CrosshairColor, 1.5);
		draw->AddLine(left, ImVec2(left.x, left.y + 9), vars->CrosshairColor, 1.5);
		ImGui::End();
	}

	ImGui::Render();
	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}

namespace Features
{

	void InitSDK() {
		uintptr_t base_address = (reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)));
		SDK::m_world = reinterpret_cast<CG::UWorld**>(base_address + 0x55A4E90); /*Tiger-Win64-Shipping.exe+55A4E90*/
		CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(base_address + 0x546B368);
		CG::FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(base_address + 0x5452BC0);
		SDK::offset_bones = base_address + 0x2B2B430;
	}

	typedef CG::FMatrix* (__thiscall* _GetBoneMatrix)(CG::USkeletalMeshComponent* mesh, CG::FMatrix* result, int index);
	CG::FVector GetBoneLocationByIndex(CG::USkeletalMeshComponent* mesh, int index)
	{
		if (!mesh)
			return { 0.f, 0.f, 0.f };

		CG::FMatrix matrix{};

		_GetBoneMatrix fGetBoneMatrix = reinterpret_cast<_GetBoneMatrix>(SDK::offset_bones);
		fGetBoneMatrix(mesh, &matrix, index);

		return matrix.WPlane;
	}

	float DistTo(CG::FVector first, CG::FVector second)
	{
		CG::FVector delta;
		delta.X = first.X - second.X;
		delta.Y = first.Y - second.Y;
		delta.Z = first.Z - second.Z;

		return sqrt(delta.X * delta.X + delta.Y * delta.Y + delta.Z * delta.Z);
	}

	float Normalize(float angle)
	{
		float out = fmodf(fmodf(angle, 360.f) + 360.f, 360.f);
		if (out > 180.f)
			out -= 360.f;
		return out;
	}

	CG::FRotator CalcAngle(CG::FVector& src, CG::FVector& dst, CG::FRotator& oldRotation, float& smoothing)
	{
		CG::FVector delta(dst - src);

		float distance = sqrtf(delta.X * delta.X + delta.Y * delta.Y + delta.Z * delta.Z);
		float pitch = (-((acosf((delta.Z / distance)) * 180.f / M_PI) - 90.f));
		float yaw = atan2f(delta.Y, delta.X) * (180.f / M_PI);

		pitch = (pitch - oldRotation.Pitch) / smoothing + oldRotation.Pitch;
		yaw = (yaw - oldRotation.Yaw) / smoothing + oldRotation.Yaw;

		return CG::FRotator(Normalize(pitch), Normalize(yaw), 0.f);
	}

	void ESP() {
		InitSDK();
		if ((*SDK::m_world) == nullptr) return;
		SDK::m_persistence_level = (*SDK::m_world)->PersistentLevel;
		SDK::local_player = (*SDK::m_world)->OwningGameInstance->LocalPlayers[0]; if ((SDK::local_player) == nullptr) return;
		auto* player_controller = SDK::local_player->PlayerController; if ((player_controller) == nullptr) return;
		auto* player_camera_manager = player_controller->PlayerCameraManager;
		auto acknowledged_pawn = player_controller->AcknowledgedPawn; if ((acknowledged_pawn) == nullptr) return;
		auto* root_component = acknowledged_pawn->RootComponent; if ((root_component) == nullptr) return;
		auto game_state = (*SDK::m_world)->GameState; if ((game_state) == nullptr) return;
		auto test = SDK::weapon_test->CurrentHealth;
		auto player_array = game_state->PlayerArray;
		CG::FVector2D screen;
		CG::FVector2D screen2;

		CG::FVector2D headScreen;
		CG::FVector2D neckScreen;
		CG::FVector2D pelvisScreen;

		CG::FVector2D rShoulderScreen;
		CG::FVector2D rElbowScreen;
		CG::FVector2D rHandScreen;

		CG::FVector2D lShoulderScreen;
		CG::FVector2D lElbowScreen;
		CG::FVector2D lHandScreen;

		CG::FVector2D rThighScreen;
		CG::FVector2D rKneeScreen;
		CG::FVector2D rFootScreen;

		CG::FVector2D lThighScreen;
		CG::FVector2D lKneeScreen;
		CG::FVector2D lFootScreen;


		for (int i = 0; i < player_array.Num(); i++) {
			auto pawn = player_array[i]->PawnPrivate; if ((pawn) == nullptr) continue;
			//	if (is_local_player(pawn)) continue;
			auto actor_root_component = pawn->RootComponent; if ((actor_root_component) == nullptr) continue;
			CG::ATigerCharacter* character = static_cast<CG::ATigerCharacter*>(pawn);
			auto metabolism_prarm = character->IsDead(); if (metabolism_prarm == 1) continue;
			CG::FVector root_bone;
			//CG::GetBoneRotationByName(character->Mesh, &root_bone, 28);
			auto const Player = (CG::ATigerPlayer*)pawn; if ((Player) == nullptr) continue;
			CG::FVector llFoot = GetBoneLocationByIndex(character->Mesh, 12);

			if (vars->distance_esp)
			{
				CG::FVector llFoot = GetBoneLocationByIndex(character->Mesh, 12);
				if (player_controller->ProjectWorldLocationToScreen(llFoot, &screen, false))
				{
					float distance = DistTo(root_component->RelativeLocation, actor_root_component->RelativeLocation);
					float calc_distance = distance / 100;
					if (distance <= 0) continue;
					char final_dist[64];
					sprintf_s(final_dist, "%.fm", calc_distance);

					//std::string new_string = std::to_string(calc_distance);

					ImGui::PushFont(espFont);
					ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen.X, screen.Y), vars->DistanceEspColor, final_dist);
					ImGui::PopFont();
				}
			}

			if (vars->getBones)
			{
				for (int i = 0; i <= 100; i++)
				{
					CG::FVector curbone = GetBoneLocationByIndex(character->Mesh, i);
					CG::FVector2D ok;

					if (!player_controller->ProjectWorldLocationToScreen(curbone, &ok, false));
					ImGui::GetBackgroundDrawList()->AddText(ImVec2(ok.X, ok.Y), ImColor(255, 255, 255, 255), (std::to_string(i).c_str()));
				}
			}

			if (vars->skeleton)
			{
				ImDrawList* drawList = ImGui::GetBackgroundDrawList();

				CG::FVector head = GetBoneLocationByIndex(character->Mesh, 29);
				CG::FVector neck = GetBoneLocationByIndex(character->Mesh, 27); //
				CG::FVector pelvis = GetBoneLocationByIndex(character->Mesh, 9); //

				CG::FVector rShoulder = GetBoneLocationByIndex(character->Mesh, 109); //
				CG::FVector rElbow = GetBoneLocationByIndex(character->Mesh, 110); // 
				CG::FVector rHand = GetBoneLocationByIndex(character->Mesh, 111); // 

				CG::FVector lShoulder = GetBoneLocationByIndex(character->Mesh, 64); //
				CG::FVector lElbow = GetBoneLocationByIndex(character->Mesh, 65); // 
				CG::FVector lHand = GetBoneLocationByIndex(character->Mesh, 66); //

				CG::FVector rThigh = GetBoneLocationByIndex(character->Mesh, 17); //
				CG::FVector rKnee = GetBoneLocationByIndex(character->Mesh, 18); // 
				CG::FVector rFoot = GetBoneLocationByIndex(character->Mesh, 19); // 

				CG::FVector lThigh = GetBoneLocationByIndex(character->Mesh, 10); // 
				CG::FVector lKnee = GetBoneLocationByIndex(character->Mesh, 11); // 
				CG::FVector lFoot = GetBoneLocationByIndex(character->Mesh, 12); //

				if (!player_controller->ProjectWorldLocationToScreen(head, &headScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(neck, &neckScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(pelvis, &pelvisScreen, false))
					continue;

				if (!player_controller->ProjectWorldLocationToScreen(rShoulder, &rShoulderScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(rElbow, &rElbowScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(rHand, &rHandScreen, false))
					continue;

				if (!player_controller->ProjectWorldLocationToScreen(lShoulder, &lShoulderScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(lElbow, &lElbowScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(lHand, &lHandScreen, false))
					continue;

				if (!player_controller->ProjectWorldLocationToScreen(rThigh, &rThighScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(rKnee, &rKneeScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(rFoot, &rFootScreen, false))
					continue;

				if (!player_controller->ProjectWorldLocationToScreen(lThigh, &lThighScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(lKnee, &lKneeScreen, false))
					continue;
				if (!player_controller->ProjectWorldLocationToScreen(lFoot, &lFootScreen, false))
					continue;

				drawList->AddLine(ImVec2(headScreen.X, headScreen.Y), ImVec2(headScreen.X, headScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(headScreen.X, headScreen.Y), ImVec2(neckScreen.X, neckScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(neckScreen.X, neckScreen.Y), ImVec2(pelvisScreen.X, pelvisScreen.Y), vars->SkeletonColor, 1);

				drawList->AddLine(ImVec2(neckScreen.X, neckScreen.Y), ImVec2(rShoulderScreen.X, rShoulderScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(rShoulderScreen.X, rShoulderScreen.Y), ImVec2(rElbowScreen.X, rElbowScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(rElbowScreen.X, rElbowScreen.Y), ImVec2(rHandScreen.X, rHandScreen.Y), vars->SkeletonColor, 1);

				drawList->AddLine(ImVec2(neckScreen.X, neckScreen.Y), ImVec2(lShoulderScreen.X, lShoulderScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(lShoulderScreen.X, lShoulderScreen.Y), ImVec2(lElbowScreen.X, lElbowScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(lElbowScreen.X, lElbowScreen.Y), ImVec2(lHandScreen.X, lHandScreen.Y), vars->SkeletonColor, 1);

				drawList->AddLine(ImVec2(pelvisScreen.X, pelvisScreen.Y), ImVec2(rThighScreen.X, rThighScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(rThighScreen.X, rThighScreen.Y), ImVec2(rKneeScreen.X, rKneeScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(rKneeScreen.X, rKneeScreen.Y), ImVec2(rFootScreen.X, rFootScreen.Y), vars->SkeletonColor, 1);

				drawList->AddLine(ImVec2(pelvisScreen.X, pelvisScreen.Y), ImVec2(lThighScreen.X, lThighScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(lThighScreen.X, lThighScreen.Y), ImVec2(lKneeScreen.X, lKneeScreen.Y), vars->SkeletonColor, 1);
				drawList->AddLine(ImVec2(lKneeScreen.X, lKneeScreen.Y), ImVec2(lFootScreen.X, lFootScreen.Y), vars->SkeletonColor, 1);
			}

			if (vars->box_esp)
			{
				ImDrawList* drawList2 = ImGui::GetBackgroundDrawList();
				CG::FVector rootBone = GetBoneLocationByIndex(character->Mesh, 0);
				CG::FVector head = GetBoneLocationByIndex(character->Mesh, 29);
				CG::FVector2D rootScreen;
				CG::FVector2D headScreen;

				if (!player_controller->ProjectWorldLocationToScreen(rootBone, &rootScreen, false))
					continue;

				if (!player_controller->ProjectWorldLocationToScreen(head, &headScreen, false))
					continue;

				float top = headScreen.Y;
				float bottom = rootScreen.Y;
				float width = abs(top - bottom) / 2.f;
				float left = rootScreen.X - width / 2.f;
				float right = rootScreen.X + width / 2.f;

				drawList2->AddLine(ImVec2(left, top), ImVec2(right, top), vars->BoxEspColor);
				drawList2->AddLine(ImVec2(left, bottom), ImVec2(right, bottom), vars->BoxEspColor);
				drawList2->AddLine(ImVec2(left, top), ImVec2(left, bottom), vars->BoxEspColor);
				drawList2->AddLine(ImVec2(right, top), ImVec2(right, bottom), vars->BoxEspColor);

			}

			if (vars->name_esp)
			{
				CG::FVector2D screen2;

				CG::FVector rootBone = GetBoneLocationByIndex(character->Mesh, 0);
				CG::FVector head = GetBoneLocationByIndex(character->Mesh, 28);
				CG::FVector2D rootScreen;
				CG::FVector2D headScreen;

				float top = headScreen.Y;
				float bottom = rootScreen.Y;
				float width = abs(top - bottom) / 2.f;
				float left = rootScreen.X - width / 2.f;
				float right = rootScreen.X + width / 2.f;

				ImDrawList* drawList2 = ImGui::GetBackgroundDrawList();

				CG::FString ueName = Player->PlayerState->GetPlayerName();
				if (player_controller->ProjectWorldLocationToScreen(head, &screen2, false))
				{
					if (ueName.IsValid() && ueName.c_str() != nullptr)
					{
						std::string name = std::string(ueName.ToString());
						ImGui::PushFont(espFont);
						ImGui::GetBackgroundDrawList()->AddText(ImVec2(screen2.X, screen2.Y - 14), vars->NameEspColor, name.c_str());
						ImGui::PopFont();
					}
				}
			}

			if (vars->Glow)
			{
				character->OutlineComponent->ActivateOutline(CG::Tiger_ETigerOutlineMode::ETigerOutlineMode__HeightenedSenses);
				character->OutlineComponent->ActivateOutline(CG::Tiger_ETigerOutlineMode::ETigerOutlineMode__BloodHunted);
			}

			if (!vars->Glow)
			{
				character->OutlineComponent->DeactivateOutline(CG::Tiger_ETigerOutlineMode::ETigerOutlineMode__BloodHunted);
				character->OutlineComponent->DeactivateOutline(CG::Tiger_ETigerOutlineMode::ETigerOutlineMode__HeightenedSenses);
			}

			if (vars->aimbot)
			{
				if (GetAsyncKeyState(VK_RBUTTON) & 0x80000)
				{
					auto withinaimfovsize = ImGui::GetIO().DisplaySize;

					float sm = 1.f;

					CG::FRotator aimRotation{};
					CG::FRotator oldRotation = player_controller->GetControlRotation();
					CG::FVector localLocation = player_camera_manager->GetCameraLocation();
					CG::FVector aimLocation = GetBoneLocationByIndex(character->Mesh, 29);
					aimRotation = CalcAngle(localLocation, aimLocation, oldRotation, sm);
					if (WithinAimFOV(withinaimfovsize.x / 2, withinaimfovsize.y / 2, vars->fov_value, screen.X, screen.Y) && character->IsCharacterVisible())
					{
						aimRotation.Roll = 0;
						aimRotation.Clamp();
						player_controller->Client_SetCameraRotation(aimRotation.Yaw, aimRotation.Pitch);
					}
				}
			}
		}
	}

}

DWORD D3DThread()
{
	bool init_hook = false;
	while (!init_hook)
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}
	return TRUE;
}