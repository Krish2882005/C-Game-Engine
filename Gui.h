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
	void CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string Gui_Title);
	void CreateGuiOptions(std::string WhatToCreate, std::string TitleOfOption, int SliderMaxValue, int SliderCurrentValue, SDL_Color sliderColour = { 137, 140, 146, 255 });
	void CreateTextBox();
	void FileAdressTextBox(SDL_Rect fileAdressTextBoxSrcRect, std::string TitleOfOption, SDL_Color fileAdressTextBoxColor = { 137, 140, 146, 255 }, SDL_Color fileAdressTextBoxOutlineColor = { 169, 169, 169, 255 });
	void DelGui(int GuiTokenNumber);
	void TextBoxUpdateIputHandling();
	void Update();
	void UpdateFileAdressTextBox();
	int CountingFunction();
	void Draw();
	SDL_Texture* LoadText(const char* f_ConstCharText, int f_IntText, std::string f_StringText, bool ConstCharTextBool, bool IntTextBool, bool StringText, SDL_Rect& Src_Rect);
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

	SDL_Color SliderColour;

	int TextBoxCounter = 1;
	int MaxTextBoxCounter = 60;

	int FileAdressTextBoxCounter = 1;
	int MaxFileAdressTextBoxCounter = 60;
	bool FileAdressTextBoxTextLine = true;
	bool FileAdressTextBoxCreated = false;
	std::string FileAdressTextBoxTitle = "";
	SDL_Rect FileAdressTextBoxSrcRect;
	SDL_Color FileAdressTextBoxColor;
	SDL_Color FileAdressTextBoxOutlineColor;
	SDL_Rect FileAdressTextBoxTextLineRect;
	SDL_Color FileAdressTextBoxTextLineColour;
	//std::vector<const char*> FileAdressTextBoxTextText;
	std::string FileAdressTextBoxTextText_string;
	SDL_Rect FileAdressTextBoxTextSrcRect;

	SDL_Texture* SliderTextTexture = nullptr;
	SDL_Texture* FileAdressTextBoxTextTexture = nullptr;
	
	bool GuiWaitForTyping = false;

	std::vector<const char*> TextBoxInputHandlingKeys;
	const Uint8* GuiPressedKey = SDL_GetKeyboardState(0);
	std::vector<const char*> RecentlyPressedKeys;
	bool WaitForThatKey = false;
	bool IsKeyAlreadyInRecentKeys = false;




	// Yet To Be Integerated
	//Pre Made Components

	bool TransformComponentCreated = false;

	std::string TransformComponentTitle = "Transform";
	std::string TransformComponentPosition = "Position";
	std::string TransformComponentRotation = "Rotation";
	std::string TransformComponentScale = "Scale";

	int TransformComponentPositionxPos = 0;
	int TransformComponentPositionyPos = 0;
	int TransformComponentRotationxPos = 0;
	int TransformComponentRotationyPos = 0;
	float TransformComponentScalexPos = 0;
	float TransformComponentScaleyPos = 0;

	SDL_Rect TransformComponentTitleRect;
};