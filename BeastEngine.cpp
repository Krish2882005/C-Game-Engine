//God
#include "Init.h"

int main(int argc, char** argv)
{
	Init init;

	init.Init_SDL2();
	init.Load();

	while (init.IsRunning())
	{
		init.Events();
		init.Update();
		init.Draw();
	}

	init.Clean();

	return 0;
}
