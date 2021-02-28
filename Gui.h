#pragma once
#include <array>
#include <string>

class Gui
{
	public:
		std::array<int, 2> InputHandling();
		int CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, std::string GuiTitle);
		void CreateGuiOptions(int GuiTokenNumber);
		void DelGui(int GuiTokenNumber);
		void Update();
	private:
		int MouseX = 0;
		int MouseY = 0;
		int GuiTokenNumber = 0;
};
