#include "Gui.h"
#include <iostream>
#include "Init.h"

<<<<<<< HEAD
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
=======
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
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
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

<<<<<<< HEAD
int Gui::CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string GuiTitle)
{
	m_GuiTokenNumber++;

	//	The First m_GuiTokenNumber Is 1 And Not 0

=======
int Gui::CreateGuiMenu(std::string GuiType, bool AutoGui, int GuiWidth, int GuiHeight, int GuiXpos, int GuiYpos, std::string Gui_Title)
{
	GuiTitle[m_GuiTokenNumber] = Gui_Title;
	GuiCreated[m_GuiTokenNumber] = true;
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
	Rects[m_GuiTokenNumber].w = GuiWidth;
	Rects[m_GuiTokenNumber].h = GuiHeight;
	Rects[m_GuiTokenNumber].x = GuiXpos;
	Rects[m_GuiTokenNumber].y = GuiYpos;

<<<<<<< HEAD
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
=======
	m_GuiTokenNumber++;

>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
	return m_GuiTokenNumber;
}

void Gui::CreateGuiOptions(int GuiTokenNumber)
{
	
}

void Gui::DelGui(int GuiTokenNumber)
{
<<<<<<< HEAD

	m_GuiTokenNumber--;

	if (m_GuiTokenNumber == 1)
	{
		Gui1Title = "";
		SrcRect1.w = 0;
		SrcRect1.w = 0;
		SrcRect1.x = 0;
		SrcRect1.y = 0;
	}
	else if (m_GuiTokenNumber == 2)
	{
		Gui2Title = "";
		SrcRect2.w = 0;
		SrcRect2.w = 0;
		SrcRect2.x = 0;
		SrcRect2.y = 0;
	}
	else if (m_GuiTokenNumber == 3)
	{
		Gui3Title = "";
		SrcRect3.w = 0;
		SrcRect3.w = 0;
		SrcRect3.x = 0;
		SrcRect3.y = 0;
	}
	else if (m_GuiTokenNumber == 4)
	{
		Gui4Title = "";
		SrcRect4.w = 0;
		SrcRect4.w = 0;
		SrcRect4.x = 0;
		SrcRect4.y = 0;
	}
	else if (m_GuiTokenNumber == 5)
	{
		Gui5Title = "";
		SrcRect5.w = 0;
		SrcRect5.w = 0;
		SrcRect5.x = 0;
		SrcRect5.y = 0;
	}
	else if (m_GuiTokenNumber == 6)
	{
		Gui6Title = "";
		SrcRect6.w = 0;
		SrcRect6.w = 0;
		SrcRect6.x = 0;
		SrcRect6.y = 0;
	}
	else if (m_GuiTokenNumber == 7)
	{
		Gui7Title = "";
		SrcRect7.w = 0;
		SrcRect7.w = 0;
		SrcRect7.x = 0;
		SrcRect7.y = 0;
	}
	else if (m_GuiTokenNumber == 8)
	{
		Gui8Title = "";
		SrcRect8.w = 0;
		SrcRect8.w = 0;
		SrcRect8.x = 0;
		SrcRect8.y = 0;
	}
	else if (m_GuiTokenNumber == 9)
	{
		Gui9Title = "";
		SrcRect9.w = 0;
		SrcRect9.w = 0;
		SrcRect9.x = 0;
		SrcRect9.y = 0;
	}
	else if (m_GuiTokenNumber == 10)
	{
		Gui10Title = "";
		SrcRect10.w = 0;
		SrcRect10.w = 0;
		SrcRect10.x = 0;
		SrcRect10.y = 0;
	}
	else
	{
		std::cout << "Error: Gui Number Exceeded Or Another Error In The Program Please Check" << std::endl;

		//If Nothing Is Del Then Change The m_GuiTokenNumber With ++ Becuase It Was Decremented In The Beggining Of The Function();
		m_GuiTokenNumber++;
=======
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
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
	}
}

void Gui::Update()
{
<<<<<<< HEAD
	for (int i = 1; i <= m_GuiTokenNumber; i++)
	{

=======
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
			SDL_SetRenderDrawColor(Init::Renderer, 255, 255, 255, 255);

			SDL_RenderDrawRect(Init::Renderer, &Rects[i]);
			SDL_RenderFillRect(Init::Renderer, &Rects[i]);

			SDL_SetRenderDrawColor(Init::Renderer, 0, 0, 0, 255);
		}
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
	}
}
