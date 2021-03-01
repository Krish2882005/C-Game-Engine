#include "Gui.h"
#include <iostream>
#include "Init.h"

void Gui::InitGui()
{
	GuiTitle[0] = Gui0Title;
	GuiTitle[1] = Gui1Title;
	GuiTitle[2] = Gui2Title;
	GuiTitle[3] = Gui3Title;
	GuiTitle[4] = Gui4Title;
	GuiTitle[5] = Gui5Title;
	GuiTitle[6] = Gui6Title;
	GuiTitle[7] = Gui7Title;
	GuiTitle[8] = Gui8Title;
	GuiTitle[9] = Gui9Title;
	GuiTitle[10] = Gui10Title;

	GuiCreated[0] = Gui0Created;
	GuiCreated[1] = Gui1Created;
	GuiCreated[2] = Gui2Created;
	GuiCreated[3] = Gui3Created;
	GuiCreated[4] = Gui4Created;
	GuiCreated[5] = Gui5Created;
	GuiCreated[6] = Gui6Created;
	GuiCreated[7] = Gui7Created;
	GuiCreated[8] = Gui8Created;
	GuiCreated[9] = Gui9Created;
	GuiCreated[10] = Gui10Created;

	Rects[0] = SrcRect0;
	Rects[1] = SrcRect1;
	Rects[2] = SrcRect2;
	Rects[3] = SrcRect3;
	Rects[4] = SrcRect4;
	Rects[5] = SrcRect5;
	Rects[6] = SrcRect6;
	Rects[7] = SrcRect7;
	Rects[8] = SrcRect8;
	Rects[9] = SrcRect9;
	Rects[10] = SrcRect10;
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
	m_GuiTokenNumber++;

	//	The First m_GuiTokenNumber Is 1 And Not 0

	GuiTitle[m_GuiTokenNumber] = Gui_Title;
	GuiCreated[m_GuiTokenNumber] = true;
	Rects[m_GuiTokenNumber].w = GuiWidth;
	Rects[m_GuiTokenNumber].h = GuiHeight;
	Rects[m_GuiTokenNumber].x = GuiXpos;
	Rects[m_GuiTokenNumber].y = GuiYpos;

	return m_GuiTokenNumber;
}

void Gui::CreateGuiOptions(int GuiTokenNumber)
{
	
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
	for (int i = 1; i <= m_GuiTokenNumber; i++)
	{
		if (GuiCreated[i])
		{
			
		}
	}
}

void Gui::Draw()
{
	for (int i = 1; i <= m_GuiTokenNumber; i++)
	{
		if (GuiCreated[i])
		{
			SDL_SetRenderDrawColor(Init::Renderer, 255, 255, 255, 255);

			SDL_RenderDrawRect(Init::Renderer, &Rects[i]);
			SDL_RenderFillRect(Init::Renderer, &Rects[i]);

			SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
		}
	}
}
