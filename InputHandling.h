#pragma once
#include <SDL.h>

class InputHandling
{
	public:
		bool IsKeyDown(const char* Key);
		char* GetTextInput();
	private:
		const Uint8* PressedKey = SDL_GetKeyboardState(0);
};
