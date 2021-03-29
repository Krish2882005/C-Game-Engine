#pragma once
#include <SDL.h>

class InputHandling
{
	public:
		const char* Update(SDL_Event f_event);
		bool Up = false;
		bool Down = false;
		bool Right = false;
		bool Left = false;
	private:
		const Uint8* PressedKey = SDL_GetKeyboardState(0);
};
