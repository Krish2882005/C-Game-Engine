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
	TypedKeys.clear();

	if (Init::Event.type == SDL_TEXTINPUT)
	{
		TypedKeys.push_back(Init::Event.text.text);
	}
}

void Gui::SubGui(const char* GuiType, const Vector2 &SubTypePosition)
{
	if (strcmp(GuiType, "") != 0)
	{
		SDL_Rect FileImporterSrcRect;
		SDL_Rect FileImporterOutlineSrcRect;
		SDL_Rect FileImporterOutlineFillSrcRect;

		NumberOfGuis++;

		//File Importer Background 1 Start

		FileImporterSrcRect.x = SubTypePosition.X;
		FileImporterSrcRect.y = SubTypePosition.Y;
		FileImporterSrcRect.w = 200;
		FileImporterSrcRect.h = 50;

		GuiColour.r = 127;
		GuiColour.g = 127;
		GuiColour.b = 127;
		GuiColour.a = 255;

		M_GuiSrcRect.push_back(FileImporterSrcRect);
		M_Fill.push_back(true);
		M_ColourCode.push_back(GuiColour);

		//File Importer Background 1 End

		//Outline For Text Importer 2 Start
		FileImporterOutlineSrcRect.x = FileImporterSrcRect.x + (FileImporterSrcRect.w / 4);
		FileImporterOutlineSrcRect.y = FileImporterSrcRect.y + (FileImporterSrcRect.h / 6);
		FileImporterOutlineSrcRect.w = FileImporterSrcRect.w / 1.5;
		FileImporterOutlineSrcRect.h = FileImporterSrcRect.h / 1.5;

		GuiColour.r = 255;
		GuiColour.g = 255;
		GuiColour.b = 255;
		GuiColour.a = 255;

		M_GuiSrcRect.push_back(FileImporterOutlineSrcRect);
		M_Fill.push_back(false);
		M_ColourCode.push_back(GuiColour);

		//Outline For Text Importer 2 End

		//Fill For Text Importer 3 Start
		FileImporterOutlineFillSrcRect.x = FileImporterOutlineSrcRect.x + 1;
		FileImporterOutlineFillSrcRect.y = FileImporterOutlineSrcRect.y + 1;
		FileImporterOutlineFillSrcRect.w = FileImporterOutlineSrcRect.w - 2;
		FileImporterOutlineFillSrcRect.h = FileImporterOutlineSrcRect.h - 2;

		GuiColour.r = 195;
		GuiColour.g = 195;
		GuiColour.b = 195;
		GuiColour.a = 255;

		M_GuiSrcRect.push_back(FileImporterOutlineFillSrcRect);
		M_Fill.push_back(true);
		M_ColourCode.push_back(GuiColour);

		//Outline For Text Importer 3 End

		Guis.push_back(GuiProperties{ NumberOfGuis, GuiType, M_Fill, M_GuiSrcRect, M_ColourCode });
	}
}

void Gui::Map()
{

}

void Gui::Draw()
{
	for (size_t i = 0; i < Guis.size(); i++)
	{
		for (size_t j = 0; j < Guis[i].GuiRect.size(); j++)
		{
			if (strcmp(Guis[i].GuiType, "File Importer") == 0)
			{
				GuiColourReference = Guis[i].ColourCode[j];

				SDL_SetRenderDrawColor(Init::Renderer, GuiColourReference.r, GuiColourReference.g, GuiColourReference.b, GuiColourReference.a);
				SDL_RenderDrawRect(Init::Renderer, &Guis[i].GuiRect[j]);

				if (Guis[i].Fill[j])
				{
					SDL_RenderFillRect(Init::Renderer, &Guis[i].GuiRect[j]);
				}

				SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
			}
		}
	}
}

void Gui::Update()
{

}

void Gui::Clean()
{

}

