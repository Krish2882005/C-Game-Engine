// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Gui.h"
#include <iostream>
#include "Init.h"
#include "RenderText.h"

void Gui::Init()
{
	
}

void Gui::Load()
{

}

void Gui::Events()
{

}

void Gui::SubGui(const char* GuiType, Vector2 SubTypePosition)
{
	if (GuiType != "")
	{
		NumberOfGuis++;

		FileImporterSrcRect.x = SubTypePosition.X;
		FileImporterSrcRect.y = SubTypePosition.Y;
		FileImporterSrcRect.w = 100;
		FileImporterSrcRect.h = 100;
		Guis.push_back(GuiProperties{ NumberOfGuis, GuiType, FileImporterSrcRect });
	}
}

void Gui::Map()
{
	
}

void Gui::Draw()
{
	for (int i = 0; i < Guis.size(); i++)
	{
		if (Guis[i].GuiType == "File Importer")
		{
			SDL_SetRenderDrawColor(Init::Renderer, 127, 127, 127, 255);
			SDL_RenderDrawRect(Init::Renderer, &Guis[i].GuiRect);
			SDL_RenderFillRect(Init::Renderer, &Guis[i].GuiRect);
			SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
		}
	}
}

void Gui::Update()
{

}

void Gui::Clean()
{
	
}

