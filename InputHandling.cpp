#include "InputHandling.h"

const char* InputHandling::Update()
{
	if (PressedKey[SDL_SCANCODE_UP])
	{
		Up = true;
	}
	else
	{
		Up = false;
	}

	if (PressedKey[SDL_SCANCODE_DOWN])
	{
		Down = true;
	}
	else
	{
		Down = false;
	}

	if (PressedKey[SDL_SCANCODE_RIGHT])
	{
		Right = true;
	}
	else
	{
		Right = false;
	}

	if (PressedKey[SDL_SCANCODE_LEFT])
	{
		Left = true;
	}
	else
	{
		Left = false;
	}

	if (PressedKey[SDL_SCANCODE_A])
	{
		return "A";
	}
	if (PressedKey[SDL_SCANCODE_B])
	{
		return "B";
	}
	if (PressedKey[SDL_SCANCODE_C])
	{
		return "C";
	}
	if (PressedKey[SDL_SCANCODE_D])
	{
		return "D";
	}
	if (PressedKey[SDL_SCANCODE_E])
	{
		return "E";
	}
	if (PressedKey[SDL_SCANCODE_F])
	{
		return "F";
	}
	if (PressedKey[SDL_SCANCODE_G])
	{
		return "G";
	}
	if (PressedKey[SDL_SCANCODE_H])
	{
		return "H";
	}
	if (PressedKey[SDL_SCANCODE_I])
	{
		return "I";
	}
	if (PressedKey[SDL_SCANCODE_J])
	{
		return "J";
	}
	if (PressedKey[SDL_SCANCODE_K])
	{
		return "K";
	}
	if (PressedKey[SDL_SCANCODE_L])
	{
		return "L";
	}
	if (PressedKey[SDL_SCANCODE_M])
	{
		return "M";
	}
	if (PressedKey[SDL_SCANCODE_N])
	{
		return "N";
	}
	if (PressedKey[SDL_SCANCODE_O])
	{
		return "O";
	}
	if (PressedKey[SDL_SCANCODE_P])
	{
		return "P";
	}
	if (PressedKey[SDL_SCANCODE_Q])
	{
		return "Q";
	}
	if (PressedKey[SDL_SCANCODE_R])
	{
		return "R";
	}
	if (PressedKey[SDL_SCANCODE_S])
	{
		return "S";
	}
	if (PressedKey[SDL_SCANCODE_T])
	{
		return "T";
	}
	if (PressedKey[SDL_SCANCODE_U])
	{
		return "U";
	}
	if (PressedKey[SDL_SCANCODE_V])
	{
		return "V";
	}
	if (PressedKey[SDL_SCANCODE_W])
	{
		return "W";
	}
	if (PressedKey[SDL_SCANCODE_X])
	{
		return "X";
	}
	if (PressedKey[SDL_SCANCODE_Y])
	{
		return "Y";
	}
	if (PressedKey[SDL_SCANCODE_Z])
	{
		return "Z";
	}

	return "  ";
}
