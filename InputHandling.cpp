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
				true;
			}
		}
		if (Key == "b" || Key == "B")
		{
			if (PressedKey[SDL_SCANCODE_B])
			{
				true;
			}
		}
		if (Key == "c" || Key == "C")
		{
			if (PressedKey[SDL_SCANCODE_C])
			{
				true;
			}
		}
		if (Key == "d" || Key == "D")
		{
			if (PressedKey[SDL_SCANCODE_D])
			{
				true;
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
				true;
			}
		}
		if (Key == "g" || Key == "G")
		{
			if (PressedKey[SDL_SCANCODE_G])
			{
				true;
			}
		}
		if (Key == "h" || Key == "H")
		{
			if (PressedKey[SDL_SCANCODE_H])
			{
				true;
			}
		}
		if (Key == "i" || Key == "I")
		{
			if (PressedKey[SDL_SCANCODE_I])
			{
				true;
			}
		}
		if (Key == "j" || Key == "J")
		{
			if (PressedKey[SDL_SCANCODE_J])
			{
				true;
			}
		}
		if (Key == "k" || Key == "K")
		{
			if (PressedKey[SDL_SCANCODE_K])
			{
				true;
			}
		}
		if (Key == "l" || Key == "L")
		{
			if (PressedKey[SDL_SCANCODE_L])
			{
				true;
			}
		}
		if (Key == "m" || Key == "M")
		{
			if (PressedKey[SDL_SCANCODE_M])
			{
				true;
			}
		}
		if (Key == "n" || Key == "N")
		{
			if (PressedKey[SDL_SCANCODE_N])
			{
				true;
			}
		}
		if (Key == "o" || Key == "O")
		{
			if (PressedKey[SDL_SCANCODE_O])
			{
				true;
			}
		}
		if (Key == "p" || Key == "P")
		{
			if (PressedKey[SDL_SCANCODE_A])
			{
				true;
			}
		}
		if (Key == "q" || Key == "Q")
		{
			if (PressedKey[SDL_SCANCODE_Q])
			{
				true;
			}
		}
		if (Key == "r" || Key == "R")
		{
			if (PressedKey[SDL_SCANCODE_R])
			{
				true;
			}
		}
		if (Key == "s" || Key == "S")
		{
			if (PressedKey[SDL_SCANCODE_S])
			{
				true;
			}
		}
		if (Key == "t" || Key == "T")
		{
			if (PressedKey[SDL_SCANCODE_T])
			{
				true;
			}
		}
		if (Key == "u" || Key == "U")
		{
			if (PressedKey[SDL_SCANCODE_U])
			{
				true;
			}
		}
		if (Key == "v" || Key == "V")
		{
			if (PressedKey[SDL_SCANCODE_V])
			{
				true;
			}
		}
		if (Key == "x" || Key == "X")
		{
			if (PressedKey[SDL_SCANCODE_X])
			{
				true;
			}
		}
		if (Key == "y" || Key == "Y")
		{
			if (PressedKey[SDL_SCANCODE_Y])
			{
				true;
			}
		}
		if (Key == "z" || Key == "Z")
		{
			if (PressedKey[SDL_SCANCODE_Z])
			{
				true;
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
