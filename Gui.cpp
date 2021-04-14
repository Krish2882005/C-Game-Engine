// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Gui.h"
#include <iostream>
#include "Init.h"
#include "RenderText.h"
#include "InputHandling.h"

InputHandling Guiinputhandling;

void Gui::InitGui()
{
	TTF_Init();

	FileAdressTextBoxTextLineRect.w = 2;
	FileAdressTextBoxTextLineRect.h = 10;

	FileAdressTextBoxTextLineColour.r = 255;
	FileAdressTextBoxTextLineColour.g = 255;
	FileAdressTextBoxTextLineColour.b = 255;
	FileAdressTextBoxTextLineColour.a = 255;
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

			SliderTextTexture = LoadText(" ", SliderCurrentValue, " ", false, true, false, TextRect);

			SliderCreated = true;
		}
	}
	else
	{
		std::cout << "Error, Can't Find The Specified Gui Menu" << std::endl;
	}
}

void Gui::CreateTextBox()
{
	if (TextBoxCounter < MaxTextBoxCounter)
	{
		TextBoxCounter++;
	}
	else
	{
		TextBoxCounter = 1;
	}
}

void Gui::FileAdressTextBox(SDL_Rect fileAdressTextBoxSrcRect, std::string TitleOfOption, SDL_Color fileAdressTextBoxColor, SDL_Color fileAdressTextBoxOutlineColor)
{
	FileAdressTextBoxCreated = true;
	FileAdressTextBoxTitle = TitleOfOption;
	FileAdressTextBoxSrcRect = fileAdressTextBoxSrcRect;
	FileAdressTextBoxColor = fileAdressTextBoxColor;
	FileAdressTextBoxOutlineColor = fileAdressTextBoxOutlineColor;

	FileAdressTextBoxTextLineRect.x = FileAdressTextBoxSrcRect.x + 5;
	FileAdressTextBoxTextLineRect.y = FileAdressTextBoxSrcRect.y + 5;

	FileAdressTextBoxTextLineRect.w = 2;
	FileAdressTextBoxTextLineRect.h = FileAdressTextBoxSrcRect.h - 10;
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

void Gui::TextBoxUpdateIputHandling()
{
	TextBoxInputHandlingKeys.clear();

	if (Init::Event.type == SDL_TEXTINPUT)
	{
		TextBoxInputHandlingKeys.push_back(Init::Event.text.text);
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
				}
				else if (MouseX < OldMouseXPos)
				{
					SliderCounting--;
				}

				SliderTextTexture = LoadText(" ", SliderCounting, " ", false, true, false, TextRect);
			}
		}
	}

	UpdateFileAdressTextBox();
}

void Gui::UpdateFileAdressTextBox()
{
	if (FileAdressTextBoxCreated)
	{
		TextBoxUpdateIputHandling();

		WaitForThatKey = false;

		if (TextBoxInputHandlingKeys.size() == 0)
		{
			RecentlyPressedKeys.clear();
		}

		if (TextBoxInputHandlingKeys.size() != 0)
		{
			for (int i = 0; i < TextBoxInputHandlingKeys.size(); i++)
			{
				for (int j = 0; j < RecentlyPressedKeys.size(); j++)
				{
					if (TextBoxInputHandlingKeys[i] == RecentlyPressedKeys[j])
					{
						WaitForThatKey = true;
						break;
					}
				}
				if (WaitForThatKey == false)
				{
					FileAdressTextBoxTextText_string += TextBoxInputHandlingKeys[i];

					IsKeyAlreadyInRecentKeys = false;

					for (int j = 0; j < RecentlyPressedKeys.size(); j++)
					{
						if (TextBoxInputHandlingKeys[i] == RecentlyPressedKeys[j])
						{
							IsKeyAlreadyInRecentKeys = true;
							break;
						}
					}

					if (IsKeyAlreadyInRecentKeys == false)
					{
						RecentlyPressedKeys.push_back(TextBoxInputHandlingKeys[i]);
					}

					UpdateTextBoxText();

				}
			}
		}

		if (FileAdressTextBoxCounter < MaxFileAdressTextBoxCounter)
		{
			FileAdressTextBoxCounter++;
		}
		else
		{
			if (FileAdressTextBoxTextLine)
			{
				FileAdressTextBoxTextLine = false;
			}
			else
			{
				FileAdressTextBoxTextLine = true;
			}

			FileAdressTextBoxCounter = 1;
		}
	}
}

void Gui::UpdateTextBoxText()
{
	FileAdressTextBoxTextTexture = LoadText(" ", 0, FileAdressTextBoxTextText_string, false, false, true, FileAdressTextBoxSrcRect);
	FileAdressTextBoxTextLineRect.w = 2;
	FileAdressTextBoxTextLineRect.h = FileAdressTextBoxSrcRect.h - 10;
	FileAdressTextBoxTextLineRect.x = (FileAdressTextBoxSrcRect.x + FileAdressTextBoxSrcRect.w) - 1;
	WaitForThatKey = false;
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

		SDL_RenderCopy(Init::Renderer, SliderTextTexture, 0, &TextRect);
	}

	if (FileAdressTextBoxCreated)
	{
		//File Location
		SDL_SetRenderDrawColor(Init::Renderer, FileAdressTextBoxColor.r, FileAdressTextBoxColor.g, FileAdressTextBoxColor.b, FileAdressTextBoxColor.a);

		SDL_RenderDrawRect(Init::Renderer, &FileAdressTextBoxSrcRect);
		SDL_RenderFillRect(Init::Renderer, &FileAdressTextBoxSrcRect);

		SDL_SetRenderDrawColor(Init::Renderer, FileAdressTextBoxOutlineColor.r, FileAdressTextBoxOutlineColor.g, FileAdressTextBoxOutlineColor.b, FileAdressTextBoxOutlineColor.a);

		SDL_RenderDrawRect(Init::Renderer, &FileAdressTextBoxSrcRect);

		if (FileAdressTextBoxTextLine)
		{
			SDL_SetRenderDrawColor(Init::Renderer, FileAdressTextBoxTextLineColour.r, FileAdressTextBoxTextLineColour.g, FileAdressTextBoxTextLineColour.b, FileAdressTextBoxTextLineColour.a);

			SDL_RenderDrawRect(Init::Renderer, &FileAdressTextBoxTextLineRect);
		}

		SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);

		SDL_RenderCopy(Init::Renderer, FileAdressTextBoxTextTexture, 0, &FileAdressTextBoxSrcRect);
	}
}

SDL_Texture* Gui::LoadText(const char* f_ConstCharText, int f_IntText, std::string f_StringText, bool ConstCharTextBool, bool IntTextBool, bool StringText, SDL_Rect& SrcRect)
{
	//Return Type Is A Texture Check

	if (ConstCharTextBool)
	{
		TextSurface = TTF_RenderText_Solid(CalibriFont, f_ConstCharText, TextColor);
		TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
		SDL_QueryTexture(TextTexture, 0, 0, &SrcRect.w, &SrcRect.h);
		SDL_FreeSurface(TextSurface);
		return TextTexture;
	}
	else if (StringText)
	{
		TextSurface = TTF_RenderText_Solid(CalibriFont, f_StringText.c_str(), TextColor);
		TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
		SDL_QueryTexture(TextTexture, 0, 0, &SrcRect.w, &SrcRect.h);
		SDL_FreeSurface(TextSurface);
		return TextTexture;
	}
	else
	{
		ConvertedFromIntToString = std::to_string(f_IntText);

		TextSurface = TTF_RenderText_Solid(CalibriFont, ConvertedFromIntToString.c_str(), TextColor);
		TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
		SDL_QueryTexture(TextTexture, 0, 0, &SrcRect.w, &SrcRect.h);
		SDL_FreeSurface(TextSurface);
		return TextTexture;
	}
}

void Gui::Clean()
{
	SDL_DestroyTexture(SliderTextTexture);
	SDL_DestroyTexture(FileAdressTextBoxTextTexture);
	SDL_DestroyTexture(TextTexture);
}