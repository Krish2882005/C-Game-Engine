// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#pragma once
#include <array>
#include <vector>
#include <string>
#include <SDL.h>
#include <SDL_ttf.h>
#include <sstream>

class Gui
{
public:
	void InitGui();
	void LoadGui();
	int InputHandling();
	bool SelectionController(int Width, int Height, int xPos, int yPos);
	void CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string GuiTitle);
	void CreateGuiOptions(std::string WhatToCreate, std::string TitleOfOption, int SliderMaxValue, int SliderCurrentValue);
	void DelGui(int GuiTokenNumber);
	void Update();
	void Draw();
	void LoadText(const char* f_ConstCharText, int f_IntText, bool ConstCharTextBool, bool IntTextBool);
	void Clean();
private:
	int MouseX = 0;
	int MouseY = 0;

	std::string GuiTitle = "";

	bool GuiCreated = false;

	SDL_Rect SrcRect;

	SDL_Rect SliderSrcRect;

	bool SliderCreated = false;

	SDL_Rect SliderAdjusterRect;

	bool SliderAdjusterCreated = false;

	int SliderXPosition = 0;

	int SliderYPosition = 0;

	int SliderMaxXPositionInProgram = 0;

	int SliderMaxYPositionInProgram = 0;

	int SliderCount = 0;

	int SliderCountMaxValue = 0;

	int SliderValue = 0;

	int StoredGuiNumber = 0;

	bool StoreSelection = false;

	bool IsMouseD = false;

	int WhichGuiMenuIsSelected = 0;

	int OldMouseXPos = 0;
	int OldMouseYPos = 0;

	int SliderDifference = 0;
	int SliderCounting = 0;

	SDL_Rect TextRect;

	TTF_Font* CalibriFont = nullptr;
	SDL_Color TextColor;
	SDL_Surface* TextSurface = nullptr;
	SDL_Texture* TextTexture = nullptr;
	std::string ConvertedFromIntToString = " ";
};
