// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Gui.h"
#include <iostream>
#include "Init.h"
#include "RenderText.h"
	
void Gui::InitGui()
{
	TTF_Init();
}

void Gui::LoadGui()
{
	CalibriFont = TTF_OpenFont("Fonts/Calibri.ttf", 30);
	TextColor = { 255, 255, 255 };
}

int Gui::InputHandling()
{
	switch (Init::Event.type)
	{
		case SDL_MOUSEMOTION:
		{
			MouseX = Init::Event.motion.x;
			MouseY = Init::Event.motion.y;
			break;
		}
		case SDL_MOUSEBUTTONDOWN:
		{
			if (Init::Event.button.button == 1)
			{
				return 2;
			}
			break;
		}
		case SDL_MOUSEBUTTONUP:
		{
			if (Init::Event.button.button == 1)
			{
				return 1;
			}
			break;
		}
		default:
		{
			return 0;
			break;
		}
	}
}

bool Gui::SelectionController(int Width, int Height, int xPos, int yPos)
{
	if (xPos < MouseX && xPos + Width > MouseX && yPos < MouseY && yPos + Height > MouseY)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Gui::CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string Gui_Title)
{
	GuiTitle = Gui_Title;
	GuiCreated = true;
	SrcRect.w = GuiWidth;
	SrcRect.h = GuiHeight;
	SrcRect.x = GuiXpos;
	SrcRect.y = GuiYpos;
}

void Gui::CreateGuiOptions(std::string WhatToCreate, std::string TitleOfOption, int SliderMaxValue, int SliderCurrentValue, SDL_Color sliderColour)
{
	if (GuiTitle != "" && SrcRect.w != 0 && SrcRect.h != 0)
	{
		if (WhatToCreate == "Transform Component")
		{
			SliderColour = sliderColour;

			SliderSrcRect.x = SrcRect.x + 50;
			SliderSrcRect.y = SrcRect.y + 50;
			SliderSrcRect.w = 50;
			SliderSrcRect.h = 50;

			TextRect.x = SliderSrcRect.x + ((SliderSrcRect.w / 2) / 2); 
			TextRect.y = SliderSrcRect.y + ((SliderSrcRect.h / 2) / 2);
			TextRect.w = 25;
			TextRect.h = 25;

			LoadText(" ", SliderCurrentValue, false, true);

			SliderCreated = true;
		}
	}
	else
	{
		std::cout << "Error, Can't Find The Specified Gui Menu" << std::endl;
	}
}

void Gui::DelGui(int GuiTokenNumber)
{
	if (GuiTitle != "" && SrcRect.w != 0 && SrcRect.h != 0)
	{
		GuiTitle = "";
		GuiCreated = false;
		SrcRect.w = 0;
		SrcRect.h = 0;
		SrcRect.x = 0;
		SrcRect.y = 0;
	}
	else
	{
		std::cout << "Error, Can't Find The Specified Gui Menu" << std::endl;
	}
}

void Gui::Update()
{
	OldMouseXPos = MouseX;
	OldMouseYPos = MouseY;

	InputHandling();
	
	if (SliderCreated)
	{
		StoreSelection = SelectionController(SliderSrcRect.w, SliderSrcRect.h, SliderSrcRect.x, SliderSrcRect.y);

		if (StoreSelection)
		{
			if (InputHandling() == 2)
			{
				IsMouseD = true;
			}
		}

		if (InputHandling() == 1)
		{
			IsMouseD = false;
		}

		if (IsMouseD)
		{
			if (MouseX != OldMouseXPos)
			{
				if (MouseX > OldMouseXPos)
				{
					SliderCounting++;
					LoadText(" ", SliderCounting, false, true);
				}
				else if (MouseX < OldMouseXPos)
				{
					SliderCounting--;
					LoadText(" ", SliderCounting, false, true);
				}
			}
		}
	}
}

int Gui::CountingFunction()
{
	return SliderCounting;
}

void Gui::Draw()
{
	if (GuiCreated)
	{
		//Menu
		SDL_SetRenderDrawColor(Init::Renderer, 255, 255, 255, 255);

		SDL_RenderDrawRect(Init::Renderer, &SrcRect);
		SDL_RenderFillRect(Init::Renderer, &SrcRect);

		SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
	}

	if (SliderCreated)
	{
		//Options
		SDL_SetRenderDrawColor(Init::Renderer, SliderColour.r, SliderColour.g, SliderColour.b, SliderColour.a);

		SDL_RenderDrawRect(Init::Renderer, &SliderSrcRect);
		SDL_RenderFillRect(Init::Renderer, &SliderSrcRect);

		SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
	}

	SDL_RenderCopy(Init::Renderer, TextTexture, 0, &TextRect);
}

void Gui::LoadText(const char* f_ConstCharText, int f_IntText, bool ConstCharTextBool, bool IntTextBool)
{
	if (ConstCharTextBool)
	{
		TextSurface = TTF_RenderText_Solid(CalibriFont, f_ConstCharText, TextColor);
		TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
		SDL_QueryTexture(TextTexture, 0, 0, &TextRect.w, &TextRect.h);
		SDL_FreeSurface(TextSurface);
	}
	else
	{
		ConvertedFromIntToString = std::to_string(f_IntText);

		TextSurface = TTF_RenderText_Solid(CalibriFont, ConvertedFromIntToString.c_str(), TextColor);
		TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
		SDL_QueryTexture(TextTexture, 0, 0, &TextRect.w, &TextRect.h);
		SDL_FreeSurface(TextSurface);
	}
}

void Gui::Clean()
{
	SDL_DestroyTexture(TextTexture);
}
