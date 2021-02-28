#pragma once
#include <array>
#include <string>

class Gui
{
	public:
		std::array<int, 2> InputHandling();
		int CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string GuiTitle);
		void CreateGuiOptions(int GuiTokenNumber);
		void DelGui(int GuiTokenNumber);
		void Update();
	private:
		int MouseX = 0;
		int MouseY = 0;
		int m_GuiTokenNumber = 0;

		SDL_Rect SrcRect1;
		SDL_Rect SrcRect2;
		SDL_Rect SrcRect3;
		SDL_Rect SrcRect4;
		SDL_Rect SrcRect5;
		SDL_Rect SrcRect6;
		SDL_Rect SrcRect7;
		SDL_Rect SrcRect8;
		SDL_Rect SrcRect9;
		SDL_Rect SrcRect10;
};
