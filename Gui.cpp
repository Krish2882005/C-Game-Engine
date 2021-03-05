// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Gui.h"
#include <iostream>
#include "Init.h"

void Gui::InitGui()
{
	GuiTitle.push_back(Gui0Title);
	GuiTitle.push_back(Gui1Title);
	GuiTitle.push_back(Gui2Title);
	GuiTitle.push_back(Gui3Title);
	GuiTitle.push_back(Gui4Title);
	GuiTitle.push_back(Gui5Title);
	GuiTitle.push_back(Gui6Title);
	GuiTitle.push_back(Gui7Title);
	GuiTitle.push_back(Gui8Title);
	GuiTitle.push_back(Gui9Title);
	GuiTitle.push_back(Gui10Title);

	GuiCreated.push_back(Gui0Created);
	GuiCreated.push_back(Gui1Created);
	GuiCreated.push_back(Gui2Created);
	GuiCreated.push_back(Gui3Created);
	GuiCreated.push_back(Gui4Created);
	GuiCreated.push_back(Gui5Created);
	GuiCreated.push_back(Gui6Created);
	GuiCreated.push_back(Gui7Created);
	GuiCreated.push_back(Gui8Created);
	GuiCreated.push_back(Gui9Created);
	GuiCreated.push_back(Gui10Created);

	Rects.push_back(SrcRect0);
	Rects.push_back(SrcRect1);
	Rects.push_back(SrcRect2);
	Rects.push_back(SrcRect3);
	Rects.push_back(SrcRect4);
	Rects.push_back(SrcRect5);
	Rects.push_back(SrcRect6);
	Rects.push_back(SrcRect7);
	Rects.push_back(SrcRect8);
	Rects.push_back(SrcRect9);
	Rects.push_back(SrcRect10);

	SliderSrcRect.push_back(SliderSrcRect0);
	SliderSrcRect.push_back(SliderSrcRect1);
	SliderSrcRect.push_back(SliderSrcRect2);
	SliderSrcRect.push_back(SliderSrcRect3);
	SliderSrcRect.push_back(SliderSrcRect4);
	SliderSrcRect.push_back(SliderSrcRect5);
	SliderSrcRect.push_back(SliderSrcRect6);
	SliderSrcRect.push_back(SliderSrcRect7);
	SliderSrcRect.push_back(SliderSrcRect8);
	SliderSrcRect.push_back(SliderSrcRect9);
	SliderSrcRect.push_back(SliderSrcRect10);

	SliderCreated.push_back(Slider0Created);
	SliderCreated.push_back(Slider1Created);
	SliderCreated.push_back(Slider2Created);
	SliderCreated.push_back(Slider3Created);
	SliderCreated.push_back(Slider4Created);
	SliderCreated.push_back(Slider5Created);
	SliderCreated.push_back(Slider6Created);
	SliderCreated.push_back(Slider7Created);
	SliderCreated.push_back(Slider8Created);
	SliderCreated.push_back(Slider9Created);
	SliderCreated.push_back(Slider10Created);

	SliderAdjusterRect.push_back(SliderAdjusterRect0);
	SliderAdjusterRect.push_back(SliderAdjusterRect1);
	SliderAdjusterRect.push_back(SliderAdjusterRect2);
	SliderAdjusterRect.push_back(SliderAdjusterRect3);
	SliderAdjusterRect.push_back(SliderAdjusterRect4);
	SliderAdjusterRect.push_back(SliderAdjusterRect5);
	SliderAdjusterRect.push_back(SliderAdjusterRect6);
	SliderAdjusterRect.push_back(SliderAdjusterRect7);
	SliderAdjusterRect.push_back(SliderAdjusterRect8);
	SliderAdjusterRect.push_back(SliderAdjusterRect9);
	SliderAdjusterRect.push_back(SliderAdjusterRect10);

	SliderAdjusterCreated.push_back(SliderAdjusterCreated0);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated1);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated2);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated3);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated4);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated5);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated6);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated7);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated8);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated9);
	SliderAdjusterCreated.push_back(SliderAdjusterCreated10);

	SliderXPosition.push_back(SliderXPosition0);
	SliderXPosition.push_back(SliderXPosition1);
	SliderXPosition.push_back(SliderXPosition2);
	SliderXPosition.push_back(SliderXPosition3);
	SliderXPosition.push_back(SliderXPosition4);
	SliderXPosition.push_back(SliderXPosition5);
	SliderXPosition.push_back(SliderXPosition6);
	SliderXPosition.push_back(SliderXPosition7);
	SliderXPosition.push_back(SliderXPosition8);
	SliderXPosition.push_back(SliderXPosition9);
	SliderXPosition.push_back(SliderXPosition10);

	SliderYPosition.push_back(SliderYPosition0);
	SliderYPosition.push_back(SliderYPosition1);
	SliderYPosition.push_back(SliderYPosition2);
	SliderYPosition.push_back(SliderYPosition3);
	SliderYPosition.push_back(SliderYPosition4);
	SliderYPosition.push_back(SliderYPosition5);
	SliderYPosition.push_back(SliderYPosition6);
	SliderYPosition.push_back(SliderYPosition7);
	SliderYPosition.push_back(SliderYPosition8);
	SliderYPosition.push_back(SliderYPosition9);
	SliderYPosition.push_back(SliderYPosition10);

	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram0);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram1);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram2);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram3);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram4);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram5);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram6);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram7);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram8);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram9);
	SliderMaxXPositionInProgram.push_back(SliderMaxXPositionInProgram10);

	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram0);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram1);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram2);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram3);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram4);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram5);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram6);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram7);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram8);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram9);
	SliderMaxYPositionInProgram.push_back(SliderMaxYPositionInProgram10);
}

int Gui::InputHandling()
{
	switch (Init::Event.type)
	{
	case SDL_MOUSEMOTION:
	{
		MouseX = Init::Event.motion.x;
		MouseY = Init::Event.motion.y;
		return 0;
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

int Gui::CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string Gui_Title)
{
	GuiTitle[m_GuiTokenNumber] = Gui_Title;
	GuiCreated[m_GuiTokenNumber] = true;
	Rects[m_GuiTokenNumber].w = GuiWidth;
	Rects[m_GuiTokenNumber].h = GuiHeight;
	Rects[m_GuiTokenNumber].x = GuiXpos;
	Rects[m_GuiTokenNumber].y = GuiYpos;

	StoredGuiNumber = m_GuiTokenNumber;

	m_GuiTokenNumber++;

	return StoredGuiNumber;
}

void Gui::CreateGuiOptions(int GuiTokenNumber, std::string WhatToCreate, std::string TitleOfOption)
{
	if (GuiTitle[GuiTokenNumber] != "" && Rects[GuiTokenNumber].w != 0 && Rects[GuiTokenNumber].h != 0)
	{
		if (WhatToCreate == "Slider")
		{
			//Overlay
			SliderSrcRect[GuiTokenNumber].x = Rects[GuiTokenNumber].x + 50;
			SliderSrcRect[GuiTokenNumber].y = Rects[GuiTokenNumber].y + 50;
			SliderSrcRect[GuiTokenNumber].w = Rects[GuiTokenNumber].w - 100;
			SliderSrcRect[GuiTokenNumber].h = 20;

			SliderCreated[GuiTokenNumber] = true;

			//Slider
			SliderAdjusterRect[GuiTokenNumber].w = 20;
			SliderAdjusterRect[GuiTokenNumber].h = 2 * SliderSrcRect[GuiTokenNumber].h;
			SliderAdjusterRect[GuiTokenNumber].x = SliderSrcRect[GuiTokenNumber].x;
			SliderAdjusterRect[GuiTokenNumber].y = SliderSrcRect[GuiTokenNumber].y - ((SliderAdjusterRect[GuiTokenNumber].h / 2) / 2);

			SliderXPosition[GuiTokenNumber] = SliderSrcRect[GuiTokenNumber].x;
			SliderMaxXPositionInProgram[GuiTokenNumber] = SliderAdjusterRect[GuiTokenNumber].x + SliderSrcRect[GuiTokenNumber].w;

			SliderAdjusterCreated[GuiTokenNumber] = true;

			//Overlay
			//RGB   137, 140, 146

			//Slider
			//RGB	0, 146, 167
		}
	}
	else
	{
		std::cout << "Error, Can't Find The Specified Gui Menu" << std::endl;
	}
}

void Gui::DelGui(int GuiTokenNumber)
{
	if (GuiTitle[GuiTokenNumber] != "" && Rects[GuiTokenNumber].w != 0 && Rects[GuiTokenNumber].h != 0)
	{
		GuiTitle[GuiTokenNumber] = "";
		GuiCreated[GuiTokenNumber] = false;
		Rects[GuiTokenNumber].w = 0;
		Rects[GuiTokenNumber].h = 0;
		Rects[GuiTokenNumber].x = 0;
		Rects[GuiTokenNumber].y = 0;
	}
	else
	{
		std::cout << "Error, Can't Find The Specified Gui Menu" << std::endl;
	}
}

void Gui::Update()
{
	for (int i = 0; i <= m_GuiTokenNumber; i++)
	{
		if (SliderAdjusterCreated[i])
		{
			StoreSelection = SelectionController(SliderAdjusterRect[i].w, SliderAdjusterRect[i].h, SliderAdjusterRect[i].x, SliderAdjusterRect[i].y);

			if (StoreSelection)
			{
				if (InputHandling() == 2)
				{
					WhichGuiMenuIsSelected = i;
					IsMouseD = true;
				}
			}

			if (InputHandling() == 1)
			{
				WhichGuiMenuIsSelected = i;
				IsMouseD = false;
			}

			if (IsMouseD)
			{
				OldMouseXPos = SliderAdjusterRect[WhichGuiMenuIsSelected].x;

				if (SliderXPosition[WhichGuiMenuIsSelected] <= SliderAdjusterRect[WhichGuiMenuIsSelected].x)
				{
					if (SliderMaxXPositionInProgram[WhichGuiMenuIsSelected] >= SliderAdjusterRect[WhichGuiMenuIsSelected].x)
					{
						SliderAdjusterRect[WhichGuiMenuIsSelected].x = MouseX - 5;
					}
				}
			}

			if (SliderXPosition[WhichGuiMenuIsSelected] >= SliderAdjusterRect[WhichGuiMenuIsSelected].x)
			{
				SliderAdjusterRect[WhichGuiMenuIsSelected].x = SliderXPosition[WhichGuiMenuIsSelected];
			}
			else if (SliderMaxXPositionInProgram[WhichGuiMenuIsSelected] <= SliderAdjusterRect[WhichGuiMenuIsSelected].x)
			{
				SliderAdjusterRect[WhichGuiMenuIsSelected].x = SliderMaxXPositionInProgram[WhichGuiMenuIsSelected];
			}
		}
	}
}

void Gui::Draw()
{
	for (int i = 0; i < m_GuiTokenNumber; i++)
	{
		if (GuiCreated[i])
		{
			//Menu
			SDL_SetRenderDrawColor(Init::Renderer, 255, 255, 255, 255);

			SDL_RenderDrawRect(Init::Renderer, &Rects[i]);
			SDL_RenderFillRect(Init::Renderer, &Rects[i]);

			SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
		}
	}

	for (int i = 0; i < m_GuiTokenNumber; i++)
	{
		if (SliderCreated[i])
		{
			//Options
			SDL_SetRenderDrawColor(Init::Renderer, 137, 140, 146, 255);

			SDL_RenderDrawRect(Init::Renderer, &SliderSrcRect[i]);
			SDL_RenderFillRect(Init::Renderer, &SliderSrcRect[i]);

			SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
		}
	}

	for (int i = 0; i < m_GuiTokenNumber; i++)
	{
		if (SliderAdjusterCreated[i])
		{
			SDL_SetRenderDrawColor(Init::Renderer, 0, 146, 167, 255);

			SDL_RenderDrawRect(Init::Renderer, &SliderAdjusterRect[i]);
			SDL_RenderFillRect(Init::Renderer, &SliderAdjusterRect[i]);

			SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
		}
	}
}
