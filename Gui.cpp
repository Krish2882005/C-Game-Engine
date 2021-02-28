#include "Gui.h"
#include "Init.h"

std::array<int, 2> Gui::Update()
{
	Init init_inputhandling;

	switch (init_inputhandling.Event.type)
	{
		case SDL_MOUSEMOTION:
		{
			MouseX = init_inputhandling.Event.motion.x;
			MouseY = init_inputhandling.Event.motion.y;
			return { 0, 0 };
			break;
		}
		case SDL_MOUSEBUTTONDOWN:
		{
			if (init_inputhandling.Event.button.button == 1)
			{
				MouseX = init_inputhandling.Event.motion.x;
				MouseY = init_inputhandling.Event.motion.y;
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
