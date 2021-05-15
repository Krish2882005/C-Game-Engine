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
	SDL_Rect GuiRect;
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
	Vector2 MousePos;
	SDL_Rect FileImporterSrcRect;
	std::vector<GuiProperties> Guis;
	int NumberOfGuis = 0;
};

