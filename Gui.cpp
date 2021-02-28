#include "Gui.h"
#include <iostream>
#include "Init.h"

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

int Gui::CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string GuiTitle)
{
	m_GuiTokenNumber++;

	//	The First m_GuiTokenNumber Is 1 And Not 0

	if (m_GuiTokenNumber == 1)
	{

	}
	else if (m_GuiTokenNumber == 2)
	{

	}
	else if (m_GuiTokenNumber == 3)
	{

	}
	else if (m_GuiTokenNumber == 4)
	{

	}
	else if (m_GuiTokenNumber == 5)
	{

	}
	else if (m_GuiTokenNumber == 6)
	{

	}
	else if (m_GuiTokenNumber == 7)
	{

	}
	else if (m_GuiTokenNumber == 8)
	{

	}
	else if (m_GuiTokenNumber == 9)
	{

	}
	else if (m_GuiTokenNumber == 10)
	{

	}
	else
	{
		std::cout << "Error: Gui Number Exceeded" << std::endl;
	}
	return m_GuiTokenNumber;
}

void Gui::CreateGuiOptions(int GuiTokenNumber)
{

}

void Gui::DelGui(int GuiTokenNumber)
{

	m_GuiTokenNumber--;
}

void Gui::Update()
{

}
