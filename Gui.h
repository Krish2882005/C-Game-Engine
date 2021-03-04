// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#pragma once
#include <array>
#include <vector>
#include <string>
#include <SDL.h>
#include <SDL_ttf.h>

class Gui
{
public:
	void InitGui();
	std::array<int, 2> InputHandling();
	void SelectionController(int Width, int Height, int xPos, int yPos);
	int CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string GuiTitle);
	void CreateGuiOptions(int GuiTokenNumber, std::string WhatToCreate, std::string TitleOfOption);
	void DelGui(int GuiTokenNumber);
	void Update();
	void Draw();
private:
	int MouseX = 0;
	int MouseY = 0;
	int m_GuiTokenNumber = 0;

	std::vector<SDL_Rect> Rects;
	std::vector<std::string> GuiTitle;
	std::vector<bool> GuiCreated;
	std::vector<SDL_Rect> SliderSrcRect;
	std::vector<bool> SliderCreated;

	std::string Gui0Title = "";
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

	SDL_Rect SliderSrcRect0;
	SDL_Rect SliderSrcRect1;
	SDL_Rect SliderSrcRect2;
	SDL_Rect SliderSrcRect3;
	SDL_Rect SliderSrcRect4;
	SDL_Rect SliderSrcRect5;
	SDL_Rect SliderSrcRect6;
	SDL_Rect SliderSrcRect7;
	SDL_Rect SliderSrcRect8;
	SDL_Rect SliderSrcRect9;
	SDL_Rect SliderSrcRect10;

	bool Slider0Created = false;
	bool Slider1Created = false;
	bool Slider2Created = false;
	bool Slider3Created = false;
	bool Slider4Created = false;
	bool Slider5Created = false;
	bool Slider6Created = false;
	bool Slider7Created = false;
	bool Slider8Created = false;
	bool Slider9Created = false;
	bool Slider10Created = false;

	int StoredGuiNumber = 0;
};
