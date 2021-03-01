#include "Gui.h"
#include <iostream>
#include "Init.h"

void Gui::Init()
{
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
	Rects[m_GuiTokenNumber].w = GuiWidth;
	Rects[m_GuiTokenNumber].h = GuiHeight;
	Rects[m_GuiTokenNumber].x = GuiXpos;
	Rects[m_GuiTokenNumber].y = GuiYpos;

	/*if (m_GuiTokenNumber == 1)
	{
		Gui1Title = GuiTitle;
		SrcRect1.w = GuiWidth;
		SrcRect1.w = GuiHeight;
		SrcRect1.x = GuiXpos;
		SrcRect1.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 2)
	{
		Gui2Title = GuiTitle;
		SrcRect2.w = GuiWidth;
		SrcRect2.w = GuiHeight;
		SrcRect2.x = GuiXpos;
		SrcRect2.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 3)
	{
		Gui3Title = GuiTitle;
		SrcRect3.w = GuiWidth;
		SrcRect3.w = GuiHeight;
		SrcRect3.x = GuiXpos;
		SrcRect3.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 4)
	{
		Gui4Title = GuiTitle;
		SrcRect4.w = GuiWidth;
		SrcRect4.w = GuiHeight;
		SrcRect4.x = GuiXpos;
		SrcRect4.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 5)
	{
		Gui5Title = GuiTitle;
		SrcRect5.w = GuiWidth;
		SrcRect5.w = GuiHeight;
		SrcRect5.x = GuiXpos;
		SrcRect5.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 6)
	{
		Gui6Title = GuiTitle;
		SrcRect6.w = GuiWidth;
		SrcRect6.w = GuiHeight;
		SrcRect6.x = GuiXpos;
		SrcRect6.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 7)
	{
		Gui7Title = GuiTitle;
		SrcRect7.w = GuiWidth;
		SrcRect7.w = GuiHeight;
		SrcRect7.x = GuiXpos;
		SrcRect7.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 8)
	{
		Gui8Title = GuiTitle;
		SrcRect8.w = GuiWidth;
		SrcRect8.w = GuiHeight;
		SrcRect8.x = GuiXpos;
		SrcRect8.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 9)
	{
		Gui9Title = GuiTitle;
		SrcRect9.w = GuiWidth;
		SrcRect9.w = GuiHeight;
		SrcRect9.x = GuiXpos;
		SrcRect9.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 10)
	{
		Gui10Title = Gui10Title;
		SrcRect10.w = GuiWidth;
		SrcRect10.w = GuiHeight;
		SrcRect10.x = GuiXpos;
		SrcRect10.y = GuiYpos;
	}
	else
	{
		std::cout << "Error: Gui Number Exceeded" << std::endl;
	}*/
	return m_GuiTokenNumber;
}

void Gui::CreateGuiOptions(int GuiTokenNumber)
{
	
}

void Gui::DelGui(int GuiTokenNumber)
{

	m_GuiTokenNumber--;

	GuiTitle[m_GuiTokenNumber] = "";
}

void Gui::Update()
{
	for (int i = 1; i <= m_GuiTokenNumber; i++)
	{

	}
}
