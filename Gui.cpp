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
		SrcRect1.w = GuiWidth;
		SrcRect1.w = GuiHeight;
		SrcRect1.x = GuiXpos;
		SrcRect1.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 2)
	{
		SrcRect2.w = GuiWidth;
		SrcRect2.w = GuiHeight;
		SrcRect2.x = GuiXpos;
		SrcRect2.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 3)
	{
		SrcRect3.w = GuiWidth;
		SrcRect3.w = GuiHeight;
		SrcRect3.x = GuiXpos;
		SrcRect3.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 4)
	{
		SrcRect4.w = GuiWidth;
		SrcRect4.w = GuiHeight;
		SrcRect4.x = GuiXpos;
		SrcRect4.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 5)
	{
		SrcRect5.w = GuiWidth;
		SrcRect5.w = GuiHeight;
		SrcRect5.x = GuiXpos;
		SrcRect5.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 6)
	{
		SrcRect6.w = GuiWidth;
		SrcRect6.w = GuiHeight;
		SrcRect6.x = GuiXpos;
		SrcRect6.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 7)
	{
		SrcRect7.w = GuiWidth;
		SrcRect7.w = GuiHeight;
		SrcRect7.x = GuiXpos;
		SrcRect7.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 8)
	{
		SrcRect8.w = GuiWidth;
		SrcRect8.w = GuiHeight;
		SrcRect8.x = GuiXpos;
		SrcRect8.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 9)
	{
		SrcRect9.w = GuiWidth;
		SrcRect9.w = GuiHeight;
		SrcRect9.x = GuiXpos;
		SrcRect9.y = GuiYpos;
	}
	else if (m_GuiTokenNumber == 10)
	{
		SrcRect10.w = GuiWidth;
		SrcRect10.w = GuiHeight;
		SrcRect10.x = GuiXpos;
		SrcRect10.y = GuiYpos;
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

	if (m_GuiTokenNumber == 1)
	{
		SrcRect1.w = 0;
		SrcRect1.w = 0;
		SrcRect1.x = 0;
		SrcRect1.y = 0;
	}
	else if (m_GuiTokenNumber == 2)
	{
		SrcRect2.w = 0;
		SrcRect2.w = 0;
		SrcRect2.x = 0;
		SrcRect2.y = 0;
	}
	else if (m_GuiTokenNumber == 3)
	{
		SrcRect3.w = 0;
		SrcRect3.w = 0;
		SrcRect3.x = 0;
		SrcRect3.y = 0;
	}
	else if (m_GuiTokenNumber == 4)
	{
		SrcRect4.w = 0;
		SrcRect4.w = 0;
		SrcRect4.x = 0;
		SrcRect4.y = 0;
	}
	else if (m_GuiTokenNumber == 5)
	{
		SrcRect5.w = 0;
		SrcRect5.w = 0;
		SrcRect5.x = 0;
		SrcRect5.y = 0;
	}
	else if (m_GuiTokenNumber == 6)
	{
		SrcRect6.w = 0;
		SrcRect6.w = 0;
		SrcRect6.x = 0;
		SrcRect6.y = 0;
	}
	else if (m_GuiTokenNumber == 7)
	{
		SrcRect7.w = 0;
		SrcRect7.w = 0;
		SrcRect7.x = 0;
		SrcRect7.y = 0;
	}
	else if (m_GuiTokenNumber == 8)
	{
		SrcRect8.w = 0;
		SrcRect8.w = 0;
		SrcRect8.x = 0;
		SrcRect8.y = 0;
	}
	else if (m_GuiTokenNumber == 9)
	{
		SrcRect9.w = 0;
		SrcRect9.w = 0;
		SrcRect9.x = 0;
		SrcRect9.y = 0;
	}
	else if (m_GuiTokenNumber == 10)
	{
		SrcRect10.w = 0;
		SrcRect10.w = 0;
		SrcRect10.x = 0;
		SrcRect10.y = 0;
	}
	else
	{
		std::cout << "Error: Gui Number Exceeded Or Another Error In The Program Please Check" << std::endl;

		//If Nothing Is Deleted Then Change The m_GuiTokenNumber With ++ Becuase It Was Decremented In The Biggening Of The Function();
		m_GuiTokenNumber++;
	}
}

void Gui::Update()
{

}
