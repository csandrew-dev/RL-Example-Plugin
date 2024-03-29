#include "pch.h"
#include "Example Plugin.h"

/* Plugin Settings Window code here
std::string Example Plugin::GetPluginName() {
	return "Example Plugin";
}

void Example Plugin::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> Example Plugin
void Example Plugin::RenderSettings() {
	ImGui::TextUnformatted("Example Plugin plugin settings");
}
*/

/*
// Do ImGui rendering here
void Example Plugin::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string Example Plugin::GetMenuName()
{
	return "example plugin";
}

// Title to give the menu
std::string Example Plugin::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void Example Plugin::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool Example Plugin::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool Example Plugin::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void Example Plugin::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void Example Plugin::OnClose()
{
	isWindowOpen_ = false;
}
*/
