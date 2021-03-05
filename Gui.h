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
	int InputHandling();
	bool SelectionController(int Width, int Height, int xPos, int yPos);
	int CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string GuiTitle);
	void CreateGuiOptions(int GuiTokenNumber, std::string WhatToCreate, std::string TitleOfOption, int SliderMaxValue);
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
	std::vector<SDL_Rect> SliderAdjusterRect;
	std::vector<bool> SliderAdjusterCreated;
	std::vector<int> SliderXPosition;
	std::vector<int> SliderYPosition;
	std::vector<int> SliderMaxXPositionInProgram;
	std::vector<int> SliderMaxYPositionInProgram;
	std::vector<int> SliderCount;
	std::vector<int> SliderCountMaxValue;

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

	SDL_Rect SliderAdjusterRect0;
	SDL_Rect SliderAdjusterRect1;
	SDL_Rect SliderAdjusterRect2;
	SDL_Rect SliderAdjusterRect3;
	SDL_Rect SliderAdjusterRect4;
	SDL_Rect SliderAdjusterRect5;
	SDL_Rect SliderAdjusterRect6;
	SDL_Rect SliderAdjusterRect7;
	SDL_Rect SliderAdjusterRect8;
	SDL_Rect SliderAdjusterRect9;
	SDL_Rect SliderAdjusterRect10;

	bool SliderAdjusterCreated0 = false;
	bool SliderAdjusterCreated1 = false;
	bool SliderAdjusterCreated2 = false;
	bool SliderAdjusterCreated3 = false;
	bool SliderAdjusterCreated4 = false;
	bool SliderAdjusterCreated5 = false;
	bool SliderAdjusterCreated6 = false;
	bool SliderAdjusterCreated7 = false;
	bool SliderAdjusterCreated8 = false;
	bool SliderAdjusterCreated9 = false;
	bool SliderAdjusterCreated10 = false;

	int SliderXPosition0 = 0;
	int SliderXPosition1 = 0;
	int SliderXPosition2 = 0;
	int SliderXPosition3 = 0;
	int SliderXPosition4 = 0;
	int SliderXPosition5 = 0;
	int SliderXPosition6 = 0;
	int SliderXPosition7 = 0;
	int SliderXPosition8 = 0;
	int SliderXPosition9 = 0;
	int SliderXPosition10 = 0;

	int SliderYPosition0 = 0;
	int SliderYPosition1 = 0;
	int SliderYPosition2 = 0;
	int SliderYPosition3 = 0;
	int SliderYPosition4 = 0;
	int SliderYPosition5 = 0;
	int SliderYPosition6 = 0;
	int SliderYPosition7 = 0;
	int SliderYPosition8 = 0;
	int SliderYPosition9 = 0;
	int SliderYPosition10 = 0;

	int SliderMaxXPositionInProgram0 = 0;
	int SliderMaxXPositionInProgram1 = 0;
	int SliderMaxXPositionInProgram2 = 0;
	int SliderMaxXPositionInProgram3 = 0;
	int SliderMaxXPositionInProgram4 = 0;
	int SliderMaxXPositionInProgram5 = 0;
	int SliderMaxXPositionInProgram6 = 0;
	int SliderMaxXPositionInProgram7 = 0;
	int SliderMaxXPositionInProgram8 = 0;
	int SliderMaxXPositionInProgram9 = 0;
	int SliderMaxXPositionInProgram10 = 0;

	int SliderMaxYPositionInProgram0 = 0;
	int SliderMaxYPositionInProgram1 = 0;
	int SliderMaxYPositionInProgram2 = 0;
	int SliderMaxYPositionInProgram3 = 0;
	int SliderMaxYPositionInProgram4 = 0;
	int SliderMaxYPositionInProgram5 = 0;
	int SliderMaxYPositionInProgram6 = 0;
	int SliderMaxYPositionInProgram7 = 0;
	int SliderMaxYPositionInProgram8 = 0;
	int SliderMaxYPositionInProgram9 = 0;
	int SliderMaxYPositionInProgram10 = 0;

	int SliderCount0 = 0;
	int SliderCount1 = 0;
	int SliderCount2 = 0;
	int SliderCount3 = 0;
	int SliderCount4 = 0;
	int SliderCount5 = 0;
	int SliderCount6 = 0;
	int SliderCount7 = 0;
	int SliderCount8 = 0;
	int SliderCount9 = 0;
	int SliderCount10 = 0;

	int SliderCountMaxValue0 = 0;
	int SliderCountMaxValue1 = 0;
	int SliderCountMaxValue2 = 0;
	int SliderCountMaxValue3 = 0;
	int SliderCountMaxValue4 = 0;
	int SliderCountMaxValue5 = 0;
	int SliderCountMaxValue6 = 0;
	int SliderCountMaxValue7 = 0;
	int SliderCountMaxValue8 = 0;
	int SliderCountMaxValue9 = 0;
	int SliderCountMaxValue10 = 0;

	int StoredGuiNumber = 0;

	bool StoreSelection = false;

	bool IsMouseD = false;

	int WhichGuiMenuIsSelected = 0;

	int OldMouseXPos = 0;
	int OldMouseYPos = 0;

	int MousePosForSliderCouting = 0;
};
