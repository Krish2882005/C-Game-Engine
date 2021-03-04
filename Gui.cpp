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
}

std::array<int, 2> Gui::InputHandling()
{
	switch (Init::Event.type)
	{
	case SDL_MOUSEMOTION:
	{
		MouseX = Init::Event.motion.x;
		MouseY = Init::Event.motion.y;
		return { 0, 0 };
		break;
	}
	case SDL_MOUSEBUTTONDOWN:
	{
		if (Init::Event.button.button == 1)
		{
			MouseX = Init::Event.motion.x;
			MouseY = Init::Event.motion.y;
			return { MouseX , MouseY };
		}
		break;
	}
	default:
	{
		return { 0, 0 };
		break;
	}
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
			SliderSrcRect[GuiTokenNumber].x = Rects[GuiTokenNumber].x + 20;
			SliderSrcRect[GuiTokenNumber].y = Rects[GuiTokenNumber].y + 20;
			SliderSrcRect[GuiTokenNumber].w = 50;
			SliderSrcRect[GuiTokenNumber].h = 50;

			SliderCreated[GuiTokenNumber] = true;

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
		if (GuiCreated[i])
		{

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

		if (SliderCreated[i])
		{
			//Options
			SDL_SetRenderDrawColor(Init::Renderer, 137, 140, 146, 255);

			SDL_RenderDrawRect(Init::Renderer, &SliderSrcRect[i]);
			SDL_RenderFillRect(Init::Renderer, &SliderSrcRect[i]);

			SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
		}
	}
}