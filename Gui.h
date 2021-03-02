#pragma once
#include <array>
#include <vector>
#include <string>
#include <SDL.h>
<<<<<<< HEAD
=======
#include <SDL_ttf.h>
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c

class Gui
{
	public:
<<<<<<< HEAD
		void Init();
=======
		void InitGui();
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
		std::array<int, 2> InputHandling();
		int CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string GuiTitle);
		void CreateGuiOptions(int GuiTokenNumber);
		void DelGui(int GuiTokenNumber);
		void Update();
<<<<<<< HEAD
=======
		void Draw();
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
	private:
		int MouseX = 0;
		int MouseY = 0;
		int m_GuiTokenNumber = 0;

		std::vector<SDL_Rect> Rects;
<<<<<<< HEAD

=======
		std::vector<std::string> GuiTitle;
		std::vector<bool> GuiCreated;

		std::string Gui0Title = "";
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
		std::string Gui1Title = "";
		std::string Gui2Title = "";
		std::string Gui3Title = "";
		std::string Gui4Title = "";
		std::string Gui5Title = "";
		std::string Gui6Title = "";
		std::string Gui7Title = "";
		std::string Gui8Title = "";
		std::string Gui9Title = "";
		std::string Gui10Title = "";

<<<<<<< HEAD
=======
		bool Gui0Created = false;
		bool Gui1Created = false;
		bool Gui2Created = false;
		bool Gui3Created = false;
		bool Gui4Created = false;
		bool Gui5Created = false;
		bool Gui6Created = false;
		bool Gui7Created = false;
		bool Gui8Created = false;
		bool Gui9Created = false;
		bool Gui10Created = false;

>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
		SDL_Rect SrcRect0;
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
