// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#pragma once
#include <vector>
#include <string>
#include <SDL.h>
#include "Vector2.h"

struct GuiProperties
{
	int GuiNumber;
	const char* GuiType;
	std::vector<bool> Fill;
	std::vector<SDL_Rect> GuiRect;
	std::vector<SDL_Colour> ColourCode;
};

class Gui
{
public:
	void Init();
	void Load();
	void Events();

	void SubGui(const char* GuiType, Vector2 SubTypePosition);

	void Map();

	void Draw();
	void Update();
	void Clean();
private:
	//To Be Used By Gui Tools
	std::vector<bool> M_Fill;
	std::vector<SDL_Rect> M_GuiSrcRect;
	std::vector<SDL_Colour> M_ColourCode;
	SDL_Colour GuiColour;
	const int FileImporterWidth = 200;
	const int FileImporterHeight = 50;
	std::vector<const char*> TypedKeys;
	//

	Vector2 MousePos;
	std::vector<GuiProperties> Guis;
	int NumberOfGuis = 0;
};

