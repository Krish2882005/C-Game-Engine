#pragma once
#include <array>

class Gui
{
	public:
		std::array<int, 2> Update();
	private:
		int MouseX = 0;
		int MouseY = 0;
};

