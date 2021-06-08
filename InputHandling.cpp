#include "InputHandling.h"
#include "Init.h"

bool InputHandling::IsKeyDown(const char* Key)
{
	if (Init::Event.type == SDL_KEYDOWN)
	{
		if (Key == "a" || Key == "A")
		{
			if (PressedKey[SDL_SCANCODE_A])
			{
				return true;
			}
		}
		if (Key == "b" || Key == "B")
		{
			if (PressedKey[SDL_SCANCODE_B])
			{
				return true;
			}
		}
		if (Key == "c" || Key == "C")
		{
			if (PressedKey[SDL_SCANCODE_C])
			{
				return true;
			}
		}
		if (Key == "d" || Key == "D")
		{
			if (PressedKey[SDL_SCANCODE_D])
			{
				return true;
			}
		}
		if (Key == "e" || Key == "E")
		{
			if (PressedKey[SDL_SCANCODE_E])
			{
				true;
			}
		}
		if (Key == "f" || Key == "F")
		{
			if (PressedKey[SDL_SCANCODE_F])
			{
				return true;
			}
		}
		if (Key == "g" || Key == "G")
		{
			if (PressedKey[SDL_SCANCODE_G])
			{
				return true;
			}
		}
		if (Key == "h" || Key == "H")
		{
			if (PressedKey[SDL_SCANCODE_H])
			{
				return true;
			}
		}
		if (Key == "i" || Key == "I")
		{
			if (PressedKey[SDL_SCANCODE_I])
			{
				return true;
			}
		}
		if (Key == "j" || Key == "J")
		{
			if (PressedKey[SDL_SCANCODE_J])
			{
				return true;
			}
		}
		if (Key == "k" || Key == "K")
		{
			if (PressedKey[SDL_SCANCODE_K])
			{
				return true;
			}
		}
		if (Key == "l" || Key == "L")
		{
			if (PressedKey[SDL_SCANCODE_L])
			{
				return true;
			}
		}
		if (Key == "m" || Key == "M")
		{
			if (PressedKey[SDL_SCANCODE_M])
			{
				return true;
			}
		}
		if (Key == "n" || Key == "N")
		{
			if (PressedKey[SDL_SCANCODE_N])
			{
				return true;
			}
		}
		if (Key == "o" || Key == "O")
		{
			if (PressedKey[SDL_SCANCODE_O])
			{
				return true;
			}
		}
		if (Key == "p" || Key == "P")
		{
			if (PressedKey[SDL_SCANCODE_A])
			{
				return true;
			}
		}
		if (Key == "q" || Key == "Q")
		{
			if (PressedKey[SDL_SCANCODE_Q])
			{
				return true;
			}
		}
		if (Key == "r" || Key == "R")
		{
			if (PressedKey[SDL_SCANCODE_R])
			{
				return true;
			}
		}
		if (Key == "s" || Key == "S")
		{
			if (PressedKey[SDL_SCANCODE_S])
			{
				return true;
			}
		}
		if (Key == "t" || Key == "T")
		{
			if (PressedKey[SDL_SCANCODE_T])
			{
				return true;
			}
		}
		if (Key == "u" || Key == "U")
		{
			if (PressedKey[SDL_SCANCODE_U])
			{
				return true;
			}
		}
		if (Key == "v" || Key == "V")
		{
			if (PressedKey[SDL_SCANCODE_V])
			{
				return true;
			}
		}
		if (Key == "x" || Key == "X")
		{
			if (PressedKey[SDL_SCANCODE_X])
			{
				return true;
			}
		}
		if (Key == "y" || Key == "Y")
		{
			if (PressedKey[SDL_SCANCODE_Y])
			{
				return true;
			}
		}
		if (Key == "z" || Key == "Z")
		{
			if (PressedKey[SDL_SCANCODE_Z])
			{
				return true;
			}
		}
	}

	return false;
}

char* InputHandling::GetTextInput()
{
	if (Init::Event.type == SDL_TEXTINPUT)
	{
		return Init::Event.text.text;
	}

	return 0;
}
